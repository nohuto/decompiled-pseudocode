/*
 * XREFs of ??$DeferrableUnlockObjectAssignment@UtagDESKTOP@@@@YAXPEAPEAUtagDESKTOP@@@Z @ 0x140045BD8
 * Callers:
 *     UserDeleteW32Thread @ 0x1400590C0 (UserDeleteW32Thread.c)
 *     HMFreeObject @ 0x1400632F0 (HMFreeObject.c)
 *     DestroyProcessInfo @ 0x14015D490 (DestroyProcessInfo.c)
 *     xxxDestroyThreadInfo @ 0x14015F444 (xxxDestroyThreadInfo.c)
 * Callees:
 *     ?IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ @ 0x140045260 (-IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ.c)
 *     ??0?$ObjectLock@$$V@?$DomainExclusive@VDLT_THREADLOCK@@@?$DomainShared@$$V@@QEAA@XZ @ 0x1400477C0 (--0-$ObjectLock@$$V@-$DomainExclusive@VDLT_THREADLOCK@@@-$DomainShared@$$V@@QEAA@XZ.c)
 *     LockIntoDeferredUnlockObjectAssignmentList @ 0x1401A7950 (LockIntoDeferredUnlockObjectAssignmentList.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

void __fastcall DeferrableUnlockObjectAssignment<tagDESKTOP>(_QWORD **a1)
{
  _QWORD *v1; // rbx
  __int64 v2; // rcx
  __int64 UserSessionState; // rax
  PERESOURCE *v4; // [rsp+20h] [rbp-48h] BYREF
  char v5; // [rsp+48h] [rbp-20h]

  v1 = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    if ( IS_USERCRIT_OWNED_SHAREDONLY() )
    {
      DomainShared<>::DomainExclusive<DLT_THREADLOCK>::ObjectLock<>::ObjectLock<>(&v4);
      if ( !v1[45] )
        v1[45] = v1;
      UserSessionState = W32GetUserSessionState(v2);
      LockIntoDeferredUnlockObjectAssignmentList(UserSessionState + 19800, v1 + 45);
      if ( v5 )
      {
        if ( v4 )
          ExReleaseResourceAndLeaveCriticalRegion(*v4);
      }
    }
    else
    {
      ObfDereferenceObject(v1);
    }
  }
}
