/*
 * XREFs of NtUserUnhookWinEvent @ 0x1C003C9C0
 * Callers:
 *     <none>
 * Callees:
 *     _UnhookWinEvent @ 0x1C003C8C0 (_UnhookWinEvent.c)
 *     ??0EnterLeaveCritByVelocity@@QEAA@W4CritOptType@@W4HandleToObjILCheck@@@Z @ 0x1C003F2AC (--0EnterLeaveCritByVelocity@@QEAA@W4CritOptType@@W4HandleToObjILCheck@@@Z.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C0042ABC (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     HMValidateHandle @ 0x1C0049CA8 (HMValidateHandle.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C00A6788 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserUnhookWinEvent(__int64 a1)
{
  int v2; // esi
  unsigned int DLT; // eax
  tagDomLock *DomainLockRef; // rax
  __int64 v5; // rdx
  char *v6; // rbx
  int v7; // edi
  tagDomLock *v8; // rcx
  void *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  _BYTE v15[8]; // [rsp+20h] [rbp-40h] BYREF
  tagDomLock *v16; // [rsp+28h] [rbp-38h]
  char v17; // [rsp+30h] [rbp-30h] BYREF
  __int64 v18; // [rsp+38h] [rbp-28h]
  char v19; // [rsp+40h] [rbp-20h]
  __int64 v20; // [rsp+48h] [rbp-18h]
  char v21; // [rsp+50h] [rbp-10h]

  EnterLeaveCritByVelocity::EnterLeaveCritByVelocity(v15, 6LL, 0LL);
  v2 = 0;
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v15);
  DLT = DLT_WINEVENT::getDLT();
  DomainLockRef = (tagDomLock *)GetDomainLockRef(DLT);
  v17 = 1;
  v6 = &v17;
  v16 = DomainLockRef;
  v18 = gDomainDummyLock;
  v20 = 0LL;
  v7 = 0;
  v21 = 0;
  v19 = 0;
  do
  {
    v8 = (tagDomLock *)*((_QWORD *)v6 - 1);
    if ( v8 )
    {
      if ( *v6 )
        tagDomLock::LockExclusive(v8);
      else
        tagDomLock::LockShared(v8);
    }
    ++v7;
    v6 += 16;
  }
  while ( !v7 );
  LOBYTE(v5) = 15;
  v21 = 1;
  v9 = (void *)HMValidateHandle(a1, v5);
  if ( v9 )
    v2 = UnhookWinEvent(v9);
  if ( v21 && v16 )
  {
    if ( v17 )
      tagDomLock::UnLockExclusive(v16);
    else
      tagDomLock::UnLockShared(v16);
  }
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v15);
  UserSessionSwitchLeaveCrit(v11, v10, v12, v13);
  return v2;
}
