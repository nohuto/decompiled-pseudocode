/*
 * XREFs of NtUserActivateKeyboardLayout @ 0x14016B3B0
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140023070 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     ApiSetEditionGetProcessWindowStation @ 0x140023A28 (ApiSetEditionGetProcessWindowStation.c)
 *     UserSetLastError @ 0x140042EA4 (UserSetLastError.c)
 *     xxxActivateKeyboardLayout @ 0x140096850 (xxxActivateKeyboardLayout.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140099660 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400A42D0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x14016ABF4 (DestroySharedUserCritDeferredUnlockList.c)
 *     ?HasUILimit@tagPROCESSINFO@@QEBA_NK@Z @ 0x1401A3340 (-HasUILimit@tagPROCESSINFO@@QEBA_NK@Z.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401A8FE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline @ 0x1401A9280 (Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline.c)
 */

struct tagKL *__fastcall NtUserActivateKeyboardLayout(__int64 a1, unsigned int a2)
{
  _QWORD *UserSessionState; // rdi
  __int64 v5; // rax
  struct tagKL *v6; // rbx
  __int64 v7; // rsi
  __int64 v8; // rcx
  bool v9; // zf
  struct tagTHREADINFO *v10; // rcx
  struct tagWINDOWSTATION *ProcessWindowStation; // rax

  UserSessionState = (_QWORD *)W32GetUserSessionState(a1);
  v5 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
         UserSessionState,
         0LL,
         0LL,
         _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  v6 = 0LL;
  UserSessionState[3] = v5;
  v7 = v5;
  if ( v5 )
  {
    DestroySharedUserCritDeferredUnlockList((__int64)(UserSessionState + 2468));
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2475);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2473);
  }
  if ( (unsigned int)Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline() )
  {
    v9 = !tagPROCESSINFO::HasUILimit(*(tagPROCESSINFO **)(v7 + 464), 1u);
  }
  else
  {
    v10 = PtiCurrent(v8);
    if ( (_InterlockedCompareExchange((volatile signed __int32 *)v10 + 132, 0, 0) & 0x20000000) == 0 )
      goto LABEL_9;
    v9 = (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)PtiCurrent((__int64)v10) + 58) + 760LL) + 32LL) & 1) == 0;
  }
  if ( v9 )
  {
LABEL_9:
    ProcessWindowStation = (struct tagWINDOWSTATION *)ApiSetEditionGetProcessWindowStation();
    v6 = xxxActivateKeyboardLayout(ProcessWindowStation, a1, a2, 0LL);
    goto LABEL_10;
  }
  UserSetLastError(5);
LABEL_10:
  UserSessionSwitchLeaveCritWithNonPaged();
  return v6;
}
