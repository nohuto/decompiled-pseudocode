/*
 * XREFs of ??$DeferrableUnlockObjectAssignment@UtagWINDOWSTATION@@@@YAXPEAPEAUtagWINDOWSTATION@@@Z @ 0x140208FC0
 * Callers:
 *     DestroyWindowStation @ 0x1401E4650 (DestroyWindowStation.c)
 *     FreeDesktop @ 0x14023C2F0 (FreeDesktop.c)
 *     ?EndShutdown@@YAXJ@Z @ 0x1402DE1F4 (-EndShutdown@@YAXJ@Z.c)
 * Callees:
 *     ?IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ @ 0x140063B70 (-IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ.c)
 *     ??0?$ObjectLock@$$V@?$DomainExclusive@VDLT_THREADLOCK@@@?$DomainShared@$$V@@QEAA@XZ @ 0x1402729BC (--0-$ObjectLock@$$V@-$DomainExclusive@VDLT_THREADLOCK@@@-$DomainShared@$$V@@QEAA@XZ.c)
 *     ??1?$ObjectLock@$$V@?$DomainExclusive@VDLT_THREADLOCK@@@?$DomainShared@$$V@@QEAA@XZ @ 0x140272A68 (--1-$ObjectLock@$$V@-$DomainExclusive@VDLT_THREADLOCK@@@-$DomainShared@$$V@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

void __fastcall DeferrableUnlockObjectAssignment<tagWINDOWSTATION>(_QWORD *a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 UserSessionState; // rax
  _BYTE v7[48]; // [rsp+20h] [rbp-48h] BYREF

  v3 = (_QWORD *)*a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    if ( IS_USERCRIT_OWNED_SHAREDONLY((__int64)a1, a2, a3) )
    {
      DomainShared<>::DomainExclusive<DLT_THREADLOCK>::ObjectLock<>::ObjectLock<>(v7);
      if ( !v3[28] )
        v3[28] = v3;
      UserSessionState = W32GetUserSessionState(v5, v4);
      LockIntoDeferredUnlockObjectAssignmentList(UserSessionState + 19784, v3 + 28);
      DomainShared<>::DomainExclusive<DLT_THREADLOCK>::ObjectLock<>::~ObjectLock<>(v7);
    }
    else
    {
      ObfDereferenceObject(v3);
    }
  }
}
