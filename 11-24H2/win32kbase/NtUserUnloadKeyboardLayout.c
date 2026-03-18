/*
 * XREFs of NtUserUnloadKeyboardLayout @ 0x1401BE090
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140023070 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     ApiSetEditionGetProcessWindowStation @ 0x140023A28 (ApiSetEditionGetProcessWindowStation.c)
 *     HMUnlockObject @ 0x14005F160 (HMUnlockObject.c)
 *     HKLtoPKL @ 0x140096C10 (HKLtoPKL.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140099660 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400A42D0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401A8FE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     ?xxxInternalUnloadKeyboardLayout@@YA_NPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z @ 0x14020F940 (-xxxInternalUnloadKeyboardLayout@@YA_NPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z.c)
 */

_BOOL8 __fastcall NtUserUnloadKeyboardLayout(__int64 a1)
{
  _QWORD *UserSessionState; // rsi
  __int64 v3; // rax
  bool v4; // bl
  int *v5; // rax
  __int64 v6; // rdi
  struct tagWINDOWSTATION *ProcessWindowStation; // rdi
  __int64 v8; // rcx
  struct tagTHREADINFO *v9; // rax
  struct tagKL *v10; // rax

  UserSessionState = (_QWORD *)W32GetUserSessionState(a1);
  v3 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
         UserSessionState,
         0,
         0,
         (void (__fastcall *)(_QWORD, __int64))_lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  v4 = 0;
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
  ProcessWindowStation = (struct tagWINDOWSTATION *)ApiSetEditionGetProcessWindowStation();
  v9 = PtiCurrent(v8);
  v10 = (struct tagKL *)HKLtoPKL((__int64)v9, a1);
  if ( v10 )
    v4 = xxxInternalUnloadKeyboardLayout(ProcessWindowStation, v10, 0);
  UserSessionSwitchLeaveCritWithNonPaged();
  return v4;
}
