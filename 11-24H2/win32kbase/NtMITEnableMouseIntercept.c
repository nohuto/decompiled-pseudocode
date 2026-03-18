/*
 * XREFs of NtMITEnableMouseIntercept @ 0x1401B81D0
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140023070 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     UserSetLastError @ 0x140042EA4 (UserSetLastError.c)
 *     HMUnlockObject @ 0x14005F160 (HMUnlockObject.c)
 *     _anonymous_namespace_::GetMouseProcessor @ 0x140060F70 (_anonymous_namespace_--GetMouseProcessor.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400A42D0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     IsInputThread @ 0x1400BB380 (IsInputThread.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401A8FE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     ?Enable@MouseInterceptState@CMouseProcessor@@QEAA_NW4_MOUSE_PREINTERCEPT_BEHAVIOR@@@Z @ 0x14021C968 (-Enable@MouseInterceptState@CMouseProcessor@@QEAA_NW4_MOUSE_PREINTERCEPT_BEHAVIOR@@@Z.c)
 */

__int64 __fastcall NtMITEnableMouseIntercept(__int64 a1)
{
  unsigned int v1; // ebp
  _QWORD *UserSessionState; // rsi
  __int64 v3; // rax
  __int64 v4; // rcx
  unsigned int v5; // ebx
  int *v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rcx
  int v9; // ecx
  __int64 MouseProcessor; // rax

  v1 = a1;
  UserSessionState = (_QWORD *)W32GetUserSessionState(a1);
  v3 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
         UserSessionState,
         0,
         0,
         (void (__fastcall *)(_QWORD, __int64))_lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  v5 = 0;
  UserSessionState[3] = v3;
  if ( v3 )
  {
    while ( 1 )
    {
      v7 = UserSessionState[2471];
      if ( !v7 )
        break;
      UserSessionState[2471] = *(_QWORD *)(v7 + 16);
      v6 = *(int **)v7;
      *(_QWORD *)(v7 + 16) = 0LL;
      if ( !v6[2] )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4686);
      HMUnlockObject(*(int **)v7);
    }
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2475);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2473);
  }
  if ( !IsInputThread(v4) )
  {
    v9 = 5;
LABEL_16:
    UserSetLastError(v9);
    goto LABEL_17;
  }
  if ( (v1 & 0xFFFFFFFE) != 0 )
  {
    v9 = 87;
    goto LABEL_16;
  }
  MouseProcessor = anonymous_namespace_::GetMouseProcessor(v8);
  if ( !MouseProcessor || !(unsigned __int8)CMouseProcessor::MouseInterceptState::Enable(MouseProcessor + 3912, v1) )
  {
    v9 = 5023;
    goto LABEL_16;
  }
  v5 = 1;
LABEL_17:
  UserSessionSwitchLeaveCritWithNonPaged();
  return v5;
}
