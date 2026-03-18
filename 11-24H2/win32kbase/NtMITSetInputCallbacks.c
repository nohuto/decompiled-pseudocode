/*
 * XREFs of NtMITSetInputCallbacks @ 0x1401B8AD0
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140023070 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     UserSetLastError @ 0x140042EA4 (UserSetLastError.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400A42D0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     IsInputThread @ 0x1400BB380 (IsInputThread.c)
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x1400CFC50 (-IsCurrentProcessDwm@@YAHXZ.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x14016ABF4 (DestroySharedUserCritDeferredUnlockList.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401A8FE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     UserSetMITInputCallbacks @ 0x1402152B8 (UserSetMITInputCallbacks.c)
 */

__int64 __fastcall NtMITSetInputCallbacks(__int64 a1)
{
  _QWORD *UserSessionState; // rbx
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rcx
  int v9; // ebx
  __int64 v10; // rcx

  UserSessionState = (_QWORD *)W32GetUserSessionState(a1);
  v3 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
         UserSessionState,
         0,
         0,
         (void (__fastcall *)(_QWORD, __int64))_lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  UserSessionState[3] = v3;
  if ( v3 )
  {
    DestroySharedUserCritDeferredUnlockList((__int64)(UserSessionState + 2468));
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2475);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2473);
  }
  if ( !(unsigned int)IsCurrentProcessDwm(v5, v4, v6, v7) || IsInputThread(v8) )
  {
    v9 = 0;
    UserSetLastError(5);
  }
  else
  {
    v9 = UserSetMITInputCallbacks(a1);
    if ( v9 && !IsInputThread(v10) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 5169);
  }
  UserSessionSwitchLeaveCritWithNonPaged();
  return v9;
}
