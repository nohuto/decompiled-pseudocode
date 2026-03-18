/*
 * XREFs of NtMITPostWindowEventMessage @ 0x1401B8950
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140023070 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     UserSetLastError @ 0x140042EA4 (UserSetLastError.c)
 *     HMValidateHandleNoSecure @ 0x140048B90 (HMValidateHandleNoSecure.c)
 *     HMUnlockObject @ 0x14005F160 (HMUnlockObject.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140099660 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400A42D0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     IsInputThread @ 0x1400BB380 (IsInputThread.c)
 *     SetLastNtError @ 0x1400BBEB4 (SetLastNtError.c)
 *     _HMPkheFromObjectWorker @ 0x1400E1208 (_HMPkheFromObjectWorker.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RtlCopyFromUser @ 0x1401A22E8 (RtlCopyFromUser.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401A8FE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     PostEvent @ 0x1402130E8 (PostEvent.c)
 */

__int64 __fastcall NtMITPostWindowEventMessage(__int64 a1, void *a2, int a3, int a4, unsigned int a5)
{
  int v9; // edi
  _QWORD *UserSessionState; // rsi
  __int64 v11; // rax
  __int64 v12; // rcx
  int **v13; // rbx
  int v14; // esi
  int *v15; // rax
  struct tagTHREADINFO *v16; // rbx
  __int64 v17; // rcx
  _QWORD v19[3]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v20; // [rsp+48h] [rbp-30h]

  v9 = 0;
  UserSessionState = (_QWORD *)W32GetUserSessionState(a1);
  v11 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
          UserSessionState,
          0,
          0,
          (void (__fastcall *)(_QWORD, __int64))_lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  UserSessionState[3] = v11;
  if ( v11 )
  {
    while ( 1 )
    {
      v13 = (int **)UserSessionState[2471];
      if ( !v13 )
        break;
      UserSessionState[2471] = v13[2];
      v13[2] = 0LL;
      if ( !(*v13)[2] )
      {
        LODWORD(v19[0]) = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4686);
      }
      HMUnlockObject(*v13);
    }
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2475);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2473);
  }
  if ( IsInputThread(v12) )
  {
    v14 = 0;
    v20 = 0LL;
    if ( a2 )
    {
      v19[0] = 0LL;
      RtlCopyFromUser(v19, a2, 8uLL);
      v14 = v19[0];
      v20 = v19[0];
    }
    v15 = (int *)HMValidateHandleNoSecure(a1, 255);
    if ( v15 )
    {
      v16 = *(struct tagTHREADINFO **)(HMPkheFromObjectWorker(v15) + 8);
      if ( v16 == PtiCurrent(v17) )
        v9 = (unsigned __int8)PostEvent(a1, v14, a3, a4, a5);
    }
  }
  else
  {
    UserSetLastError(5);
  }
  UserSessionSwitchLeaveCritWithNonPaged();
  return v9;
}
