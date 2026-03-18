/*
 * XREFs of NtUserCreatePalmRejectionDelayZone @ 0x1401B97B0
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140023070 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     UserSetLastError @ 0x140042EA4 (UserSetLastError.c)
 *     HMUnlockObject @ 0x14005F160 (HMUnlockObject.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400A42D0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     SetLastNtError @ 0x1400BBEB4 (SetLastNtError.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401A8FE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     AddPalmRejectionDelayZone @ 0x140211D50 (AddPalmRejectionDelayZone.c)
 */

__int64 __fastcall NtUserCreatePalmRejectionDelayZone(void *a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  _QWORD *UserSessionState; // rdi
  __int64 v7; // rax
  int **v8; // rbx
  unsigned int v9; // ebx

  UserSessionState = (_QWORD *)W32GetUserSessionState(a1);
  v7 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
         UserSessionState,
         0,
         0,
         (void (__fastcall *)(_QWORD, __int64))_lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  UserSessionState[3] = v7;
  if ( v7 )
  {
    while ( 1 )
    {
      v8 = (int **)UserSessionState[2471];
      if ( !v8 )
        break;
      UserSessionState[2471] = v8[2];
      v8[2] = 0LL;
      if ( !(*v8)[2] )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4686);
      HMUnlockObject(*v8);
    }
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2475);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2473);
  }
  v9 = AddPalmRejectionDelayZone(a1, a5);
  UserSessionSwitchLeaveCritWithNonPaged();
  return v9;
}
