/*
 * XREFs of NtUserSetForegroundRedirectionForActivationObject @ 0x1401BD2E0
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140023070 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     UserSetLastError @ 0x140042EA4 (UserSetLastError.c)
 *     HMUnlockObject @ 0x14005F160 (HMUnlockObject.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400A42D0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     SetLastNtError @ 0x1400BBEB4 (SetLastNtError.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RtlCopyFromUser @ 0x1401A22E8 (RtlCopyFromUser.c)
 *     ?SetForegroundRedirectionLuid@CActivationObjectManager@@QEAAJAEBU_LUID@@0@Z @ 0x1401A7028 (-SetForegroundRedirectionLuid@CActivationObjectManager@@QEAAJAEBU_LUID@@0@Z.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401A8FE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 */

__int64 __fastcall NtUserSetForegroundRedirectionForActivationObject(void *Src, void *a2)
{
  _QWORD *UserSessionState; // rsi
  __int64 v5; // rax
  int v6; // ebx
  int **v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // rax
  NTSTATUS v10; // eax
  ULONG v11; // eax
  struct _LUID v13; // [rsp+30h] [rbp-48h] BYREF
  struct _LUID v14; // [rsp+38h] [rbp-40h] BYREF
  struct _LUID v15; // [rsp+90h] [rbp+18h] BYREF
  struct _LUID v16; // [rsp+98h] [rbp+20h] BYREF

  UserSessionState = (_QWORD *)W32GetUserSessionState(Src);
  v5 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
         UserSessionState,
         0,
         0,
         (void (__fastcall *)(_QWORD, __int64))_lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  UserSessionState[3] = v5;
  v6 = 1;
  if ( v5 )
  {
    while ( 1 )
    {
      v7 = (int **)UserSessionState[2471];
      if ( !v7 )
        break;
      UserSessionState[2471] = v7[2];
      v7[2] = 0LL;
      if ( !(*v7)[2] )
      {
        v15.LowPart = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4686);
      }
      HMUnlockObject(*v7);
    }
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2475);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2473);
  }
  v15 = 0LL;
  RtlCopyFromUser(&v15, Src, 8uLL);
  v14 = v15;
  v16 = 0LL;
  RtlCopyFromUser(&v16, a2, 8uLL);
  v13 = v16;
  v9 = W32GetUserSessionState(v8);
  v10 = CActivationObjectManager::SetForegroundRedirectionLuid(*(CActivationObjectManager **)(v9 + 18920), &v14, &v13);
  if ( v10 < 0 )
  {
    v6 = 0;
    v11 = RtlNtStatusToDosError(v10);
    UserSetLastError(v11);
  }
  UserSessionSwitchLeaveCritWithNonPaged();
  return v6;
}
