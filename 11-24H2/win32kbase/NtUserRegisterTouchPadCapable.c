/*
 * XREFs of NtUserRegisterTouchPadCapable @ 0x140158C70
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140023070 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     UserSetLastError @ 0x140042EA4 (UserSetLastError.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400A42D0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x14016ABF4 (DestroySharedUserCritDeferredUnlockList.c)
 *     ?Arm@AtomicExecutionCheck@@QEAAXXZ @ 0x1401A2C38 (-Arm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401A8FE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 */

__int64 __fastcall NtUserRegisterTouchPadCapable(__int64 a1)
{
  int v1; // esi
  _QWORD *UserSessionState; // rbx
  __int64 v3; // rax
  __int64 v4; // rdi
  __int16 v5; // ax
  __int64 v6; // rbx
  __int16 v7; // ax
  __int16 v8; // ax
  _BYTE v10[8]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v11; // [rsp+28h] [rbp-10h]

  v1 = a1;
  UserSessionState = (_QWORD *)W32GetUserSessionState(a1);
  v3 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
         UserSessionState,
         0LL,
         0LL,
         _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  UserSessionState[3] = v3;
  v4 = v3;
  if ( v3 )
  {
    DestroySharedUserCritDeferredUnlockList(UserSessionState + 2468);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2475);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2473);
  }
  v10[0] = 0;
  v11 = 0LL;
  AtomicExecutionCheck::Arm((AtomicExecutionCheck *)v10);
  if ( v1 )
  {
    v5 = *(_WORD *)(v4 + 1266);
    if ( v5 != -1 )
    {
      v6 = 1LL;
      v7 = v5 + 1;
LABEL_8:
      *(_WORD *)(v4 + 1266) = v7;
      goto LABEL_10;
    }
  }
  v8 = *(_WORD *)(v4 + 1266);
  if ( v8 )
  {
    v6 = 1LL;
    v7 = v8 - 1;
    goto LABEL_8;
  }
  UserSetLastError(87);
  v6 = 0LL;
LABEL_10:
  if ( v10[0] )
    --*(_DWORD *)(v11 + 28);
  UserSessionSwitchLeaveCritWithNonPaged();
  return v6;
}
