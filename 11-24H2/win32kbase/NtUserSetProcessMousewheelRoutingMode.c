/*
 * XREFs of NtUserSetProcessMousewheelRoutingMode @ 0x1401BDA80
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140023070 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     UserSetLastError @ 0x140042EA4 (UserSetLastError.c)
 *     HMUnlockObject @ 0x14005F160 (HMUnlockObject.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400A42D0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401A8FE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 */

__int64 __fastcall NtUserSetProcessMousewheelRoutingMode(__int64 a1)
{
  int v1; // edi
  _QWORD *UserSessionState; // rbp
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rbx
  int *v6; // rax
  __int64 v7; // rsi
  _QWORD *CurrentProcessWin32Process; // rax
  _QWORD *v9; // rdx
  int v10; // edi
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rax

  v1 = a1;
  UserSessionState = (_QWORD *)W32GetUserSessionState(a1);
  v3 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
         UserSessionState,
         0,
         0,
         (void (__fastcall *)(_QWORD, __int64))_lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  v5 = 0LL;
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
  CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v4);
  v9 = CurrentProcessWin32Process;
  if ( !CurrentProcessWin32Process || !*CurrentProcessWin32Process )
    goto LABEL_18;
  if ( !v1 )
  {
    v11 = CurrentProcessWin32Process[102] & 0xFFFFFFFFFFFEFFFFuLL;
    goto LABEL_16;
  }
  v10 = v1 - 1;
  if ( v10 )
  {
    if ( v10 == 1 )
    {
      v11 = CurrentProcessWin32Process[102] | 0x10000LL;
LABEL_16:
      v9[102] = v11;
      v13 = v11 & 0xFFFFFFFFFFFF7FFFuLL;
      goto LABEL_17;
    }
LABEL_18:
    UserSetLastError(87);
    goto LABEL_19;
  }
  v12 = CurrentProcessWin32Process[102] & 0xFFFFFFFFFFFEFFFFuLL;
  v9[102] = v12;
  v13 = v12 | 0x8000;
LABEL_17:
  v9[102] = v13;
  v5 = 1LL;
LABEL_19:
  UserSessionSwitchLeaveCritWithNonPaged();
  return v5;
}
