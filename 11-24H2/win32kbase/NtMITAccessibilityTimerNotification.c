/*
 * XREFs of NtMITAccessibilityTimerNotification @ 0x1401B7CE0
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140023070 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     UserSetLastError @ 0x140042EA4 (UserSetLastError.c)
 *     HMUnlockObject @ 0x14005F160 (HMUnlockObject.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400A42D0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     IsInputThread @ 0x1400BB380 (IsInputThread.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401A8FE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     ?ExecuteTimer@CAccessibilityTimer@@SAXW4_ACCESSIBILITY_TIMERS@@@Z @ 0x14020E4E0 (-ExecuteTimer@CAccessibilityTimer@@SAXW4_ACCESSIBILITY_TIMERS@@@Z.c)
 */

__int64 __fastcall NtMITAccessibilityTimerNotification(__int64 a1)
{
  unsigned int v1; // esi
  _QWORD *UserSessionState; // rdi
  __int64 v3; // rax
  __int64 v4; // rcx
  int *v5; // rax
  __int64 v6; // rbx

  v1 = a1;
  UserSessionState = (_QWORD *)W32GetUserSessionState(a1);
  v3 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
         UserSessionState,
         0,
         0,
         (void (__fastcall *)(_QWORD, __int64))_lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  UserSessionState[3] = v3;
  if ( v3 )
  {
    while ( 1 )
    {
      v6 = UserSessionState[2471];
      if ( !v6 )
        break;
      UserSessionState[2471] = *(_QWORD *)(v6 + 16);
      v5 = *(int **)v6;
      *(_QWORD *)(v6 + 16) = 0LL;
      if ( !v5[2] )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4686);
      HMUnlockObject(*(int **)v6);
    }
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2475);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2473);
  }
  if ( IsInputThread(v4) )
    CAccessibilityTimer::ExecuteTimer(v1);
  else
    UserSetLastError(5);
  UserSessionSwitchLeaveCritWithNonPaged();
  return 0LL;
}
