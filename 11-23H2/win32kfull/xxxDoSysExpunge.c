/*
 * XREFs of xxxDoSysExpunge @ 0x1C003D730
 * Callers:
 *     xxxDoSysExpungeIfNeeded @ 0x1C013CFEC (xxxDoSysExpungeIfNeeded.c)
 * Callees:
 *     ClientFreeLibrary @ 0x1C003CAEC (ClientFreeLibrary.c)
 *     ?LockRefactorStagingAssertOwned@@YAXAEBUtagDomLock@@@Z @ 0x1C003D958 (-LockRefactorStagingAssertOwned@@YAXAEBUtagDomLock@@@Z.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     __report_rangecheckfailure @ 0x1C0138230 (__report_rangecheckfailure.c)
 */

void __fastcall xxxDoSysExpunge(__int64 a1)
{
  int v2; // r14d
  int v3; // eax
  unsigned __int64 v4; // rbx
  __int64 v5; // r15
  __int64 v6; // rbp
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // edi
  unsigned int DLT; // eax
  tagDomLock *DomainLockRef; // rax
  int v15; // esi
  char *v16; // rdi
  tagDomLock *v17; // rcx
  tagDomLock *v18; // [rsp+20h] [rbp-68h]
  char v19; // [rsp+28h] [rbp-60h] BYREF
  __int64 v20; // [rsp+30h] [rbp-58h]
  char v21; // [rsp+38h] [rbp-50h]
  __int64 v22; // [rsp+40h] [rbp-48h]
  char v23; // [rsp+48h] [rbp-40h]

  LockRefactorStagingAssertOwned(gDomainClientLibLock);
  v2 = 0;
  v3 = catomSysTableEntries;
  *(_DWORD *)(*(_QWORD *)(a1 + 424) + 400LL) = gcSysExpunge;
  if ( v3 > 0 )
  {
    v4 = 0LL;
    v5 = 408LL;
    v6 = 0LL;
    do
    {
      if ( !*(_DWORD *)((char *)&acatomSysDepends + v6) )
      {
        if ( *(_WORD *)((char *)&aatomSysLoaded + v4) )
        {
          LockRefactorStagingAssertOwned(gDomainClientLibLock);
          v7 = *(_QWORD *)(a1 + 424);
          if ( ((1 << v2) & *(_DWORD *)(v7 + 404)) != 0 )
          {
            v8 = *(_QWORD *)(v5 + v7);
            LockRefactorStagingAssertOwned(gDomainClientLibLock);
            v11 = ~(1 << v2);
            *(_QWORD *)(v5 + *(_QWORD *)(a1 + 424)) = 0LL;
            *(_DWORD *)(*(_QWORD *)(a1 + 424) + 404LL) &= v11;
            if ( (*(_DWORD *)((char *)&acatomSysUse + v6))-- == 1 )
            {
              UserDeleteAtomFromAtomTable(
                UserLibmgmtAtomTableHandle,
                *(unsigned __int16 *)((char *)&aatomSysLoaded + v4),
                v9,
                v10,
                (_DWORD)v18);
              if ( v4 >= 0x40 )
                _report_rangecheckfailure();
              gdwSysExpungeMask &= v11;
              *(_WORD *)((char *)&aatomSysLoaded + v4) = 0;
            }
            DLT = DLT_CLIENTLIB::getDLT();
            DomainLockRef = (tagDomLock *)GetDomainLockRef(DLT);
            v20 = gDomainDummyLock;
            v18 = DomainLockRef;
            v19 = 1;
            v21 = 0;
            v22 = 0LL;
            v23 = 0;
            if ( DomainLockRef )
              tagDomLock::UnLockExclusive(DomainLockRef);
            v23 = 1;
            ClientFreeLibrary(v8);
            if ( v23 )
            {
              v15 = 0;
              v16 = &v19;
              do
              {
                v17 = (tagDomLock *)*((_QWORD *)v16 - 1);
                if ( v17 )
                {
                  if ( *v16 )
                    tagDomLock::LockExclusive(v17);
                  else
                    tagDomLock::LockShared(v17);
                }
                ++v15;
                v16 += 16;
              }
              while ( !v15 );
            }
          }
        }
      }
      ++v2;
      v5 += 8LL;
      v6 += 4LL;
      v4 += 2LL;
    }
    while ( v2 < catomSysTableEntries );
  }
}
