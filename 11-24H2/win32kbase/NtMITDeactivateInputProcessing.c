/*
 * XREFs of NtMITDeactivateInputProcessing @ 0x1401B7FF0
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140023070 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     UserSetLastError @ 0x140042EA4 (UserSetLastError.c)
 *     HMUnlockObject @ 0x14005F160 (HMUnlockObject.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400A42D0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     IsInputThread @ 0x1400BB380 (IsInputThread.c)
 *     UserDeactivateMITInputProcessing @ 0x14014B168 (UserDeactivateMITInputProcessing.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401A8FE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 */

__int64 __fastcall NtMITDeactivateInputProcessing(__int64 a1)
{
  _QWORD *UserSessionState; // rsi
  __int64 v2; // rax
  __int64 v3; // rcx
  unsigned int v4; // ebx
  int *v5; // rax
  __int64 v6; // rdi

  UserSessionState = (_QWORD *)W32GetUserSessionState(a1);
  v2 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
         UserSessionState,
         0,
         0,
         (void (__fastcall *)(_QWORD, __int64))_lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  v4 = 0;
  UserSessionState[3] = v2;
  if ( v2 )
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
  if ( IsInputThread(v3) )
  {
    v4 = 1;
    UserDeactivateMITInputProcessing();
  }
  else
  {
    UserSetLastError(5);
  }
  UserSessionSwitchLeaveCritWithNonPaged();
  return v4;
}
