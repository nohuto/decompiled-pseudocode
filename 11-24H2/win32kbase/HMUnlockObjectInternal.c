/*
 * XREFs of HMUnlockObjectInternal @ 0x140046060
 * Callers:
 *     <none>
 * Callees:
 *     ?IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ @ 0x140045260 (-IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ.c)
 *     ??0?$ObjectLock@$$V@?$DomainExclusive@VDLT_THREADLOCK@@@?$DomainShared@$$V@@QEAA@XZ @ 0x1400477C0 (--0-$ObjectLock@$$V@-$DomainExclusive@VDLT_THREADLOCK@@@-$DomainShared@$$V@@QEAA@XZ.c)
 *     ?HMDestroyUnlockedObjectWorker@@YAXPEAU_HANDLEENTRY@@@Z @ 0x140060CE0 (-HMDestroyUnlockedObjectWorker@@YAXPEAU_HANDLEENTRY@@@Z.c)
 *     LockIntoExclusiveUserCritDeferredUnlockList @ 0x14016AD70 (LockIntoExclusiveUserCritDeferredUnlockList.c)
 *     LockIntoSharedUserCritDeferredUnlockList @ 0x1401B6588 (LockIntoSharedUserCritDeferredUnlockList.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

int *__fastcall HMUnlockObjectInternal(int *a1)
{
  int v1; // edi
  __int64 UserSessionState; // rsi
  __int64 v4; // rcx
  __int64 v5; // rdi
  char v6; // al
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  PERESOURCE *v11; // [rsp+20h] [rbp-48h] BYREF
  char v12; // [rsp+48h] [rbp-20h]

  v1 = *a1;
  UserSessionState = W32GetUserSessionState(a1);
  v5 = *(_QWORD *)(UserSessionState + 19944)
     + *(_DWORD *)(W32GetUserSessionState(v4) + 19952) * (unsigned int)(unsigned __int16)v1;
  v6 = *(_BYTE *)(v5 + 25);
  if ( (v6 & 1) == 0 || (v6 & 2) != 0 )
    return a1;
  if ( IS_USERCRIT_OWNED_SHAREDONLY() )
  {
    DomainShared<>::DomainExclusive<DLT_THREADLOCK>::ObjectLock<>::ObjectLock<>(&v11);
    LockIntoSharedUserCritDeferredUnlockList(a1);
    if ( v12 && v11 )
    {
      ExReleaseResourceAndLeaveCriticalRegion(*v11);
      return 0LL;
    }
    return 0LL;
  }
  v9 = W32GetUserSessionState(v8);
  v10 = *(_QWORD *)(v9 + 19824);
  if ( !v10 || v5 == v10 || *(_DWORD *)(v9 + 19820) )
  {
    HMDestroyUnlockedObjectWorker((struct _HANDLEENTRY *)v5);
    return 0LL;
  }
  ++*(_DWORD *)(v9 + 19832);
  LockIntoExclusiveUserCritDeferredUnlockList(a1);
  return 0LL;
}
