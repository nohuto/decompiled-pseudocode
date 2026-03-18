/*
 * XREFs of DestroyEventHook @ 0x1C003F570
 * Callers:
 *     _UnhookWinEvent @ 0x1C003C8C0 (_UnhookWinEvent.c)
 *     FreeThreadsWinEvents @ 0x1C006FFE0 (FreeThreadsWinEvents.c)
 * Callees:
 *     RemoveHmodDependency @ 0x1C003D358 (RemoveHmodDependency.c)
 *     ??0?$ObjectLockBase@$$V@?$DomainExclusiveBase@VDLT_HANDLEMANAGER@@@?$DomainSharedBase@$$V@@IEAA@XZ @ 0x1C003F7A8 (--0-$ObjectLockBase@$$V@-$DomainExclusiveBase@VDLT_HANDLEMANAGER@@@-$DomainSharedBase@$$V@@IEAA@.c)
 *     ?IsLockedExclusive@tagDomLock@@QEBA_NXZ @ 0x1C003FD28 (-IsLockedExclusive@tagDomLock@@QEBA_NXZ.c)
 *     ??0IdentifyPrimaryDestroyTarget@@QEAA@PEAX@Z @ 0x1C0040A18 (--0IdentifyPrimaryDestroyTarget@@QEAA@PEAX@Z.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall DestroyEventHook(char *a1)
{
  int v2; // r14d
  int v3; // esi
  _BYTE *v4; // rdi
  tagDomLock *v5; // rcx
  void **i; // rcx
  char *v7; // rax
  __int64 v8; // rdx
  _DWORD *v9; // r8
  int v10; // r9d
  unsigned int v11; // r10d
  int v12; // ecx
  int v13; // esi
  _BYTE *v14; // rdi
  tagDomLock *v15; // rcx
  char v16[8]; // [rsp+20h] [rbp-40h] BYREF
  tagDomLock *v17; // [rsp+28h] [rbp-38h] BYREF
  _BYTE v18[32]; // [rsp+30h] [rbp-30h] BYREF
  char v19; // [rsp+50h] [rbp-10h]

  v2 = 0;
  if ( !tagDomLock::IsLockedExclusive(gDomainWinEventLock) )
    __int2c();
  IdentifyPrimaryDestroyTarget::IdentifyPrimaryDestroyTarget((IdentifyPrimaryDestroyTarget *)v16, a1);
  *((_DWORD *)a1 + 10) |= 1u;
  DomainSharedBase<>::DomainExclusiveBase<DLT_HANDLEMANAGER>::ObjectLockBase<>::ObjectLockBase<>(&v17);
  if ( !v19 )
  {
    v3 = 0;
    v4 = v18;
    do
    {
      v5 = (tagDomLock *)*((_QWORD *)v4 - 1);
      if ( v5 )
      {
        if ( *v4 )
          tagDomLock::LockExclusive(v5);
        else
          tagDomLock::LockShared(v5);
      }
      ++v3;
      v4 += 16;
    }
    while ( !v3 );
    v19 = 1;
  }
  if ( (unsigned int)HMMarkObjectDestroy(a1) )
  {
    if ( v19 )
    {
      if ( v17 )
      {
        if ( v18[0] )
          tagDomLock::UnLockExclusive(v17);
        else
          tagDomLock::UnLockShared(v17);
      }
      v19 = 0;
    }
    for ( i = (void **)gpWinEventHooks; ; i = (void **)(v7 + 24) )
    {
      v7 = (char *)*i;
      if ( !*i )
        break;
      if ( v7 == a1 )
      {
        *i = (void *)*((_QWORD *)a1 + 3);
        break;
      }
    }
    v8 = gpWinEventHooks;
    while ( v8 )
    {
      v9 = &unk_1C035A194;
      v10 = 0;
      v11 = 0;
      do
      {
        if ( *(v9 - 1) > *(_DWORD *)(v8 + 36) )
          break;
        if ( (unsigned int)(*((_DWORD *)&unk_1C035A190 + 2 * ++v11) - 1) >= *(_DWORD *)(v8 + 32) )
          v10 |= *v9;
        v9 += 2;
      }
      while ( v11 < 0xF );
      v8 = *(_QWORD *)(v8 + 24);
      v2 |= v10;
    }
    *(_DWORD *)(gpsi + 1892LL) = v2;
    v12 = *((_DWORD *)a1 + 18);
    if ( v12 >= 0 )
      RemoveHmodDependency(v12);
    DomainSharedBase<>::DomainExclusiveBase<DLT_HANDLEMANAGER>::ObjectLockBase<>::ObjectLockBase<>(&v17);
    if ( !v19 )
    {
      v13 = 0;
      v14 = v18;
      do
      {
        v15 = (tagDomLock *)*((_QWORD *)v14 - 1);
        if ( v15 )
        {
          if ( *v14 )
            tagDomLock::LockExclusive(v15);
          else
            tagDomLock::LockShared(v15);
        }
        ++v13;
        v14 += 16;
      }
      while ( !v13 );
      v19 = 1;
    }
    HMFreeObject(a1);
  }
  if ( v19 && v17 )
  {
    if ( v18[0] )
      tagDomLock::UnLockExclusive(v17);
    else
      tagDomLock::UnLockShared(v17);
  }
  if ( v16[0] )
    gphePrimaryDestroyTarget = 0LL;
}
