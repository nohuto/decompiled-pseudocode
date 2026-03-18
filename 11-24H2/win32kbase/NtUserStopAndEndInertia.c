/*
 * XREFs of NtUserStopAndEndInertia @ 0x1401BDF90
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140023070 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     UserSetLastError @ 0x140042EA4 (UserSetLastError.c)
 *     HMUnlockObject @ 0x14005F160 (HMUnlockObject.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400A42D0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x1400CFC50 (-IsCurrentProcessDwm@@YAHXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401A8FE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     ?StopAndEndInertia@CTouchProcessor@@QEAAHIPEAX@Z @ 0x1402080A0 (-StopAndEndInertia@CTouchProcessor@@QEAAHIPEAX@Z.c)
 */

__int64 __fastcall NtUserStopAndEndInertia(__int64 a1, unsigned int a2)
{
  _QWORD *UserSessionState; // rsi
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // ebx
  int *v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // rax
  void *v14; // r8

  UserSessionState = (_QWORD *)W32GetUserSessionState(a1);
  v4 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
         UserSessionState,
         0,
         0,
         (void (__fastcall *)(_QWORD, __int64))_lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  v9 = 0;
  UserSessionState[3] = v4;
  if ( v4 )
  {
    while ( 1 )
    {
      v11 = UserSessionState[2471];
      if ( !v11 )
        break;
      UserSessionState[2471] = *(_QWORD *)(v11 + 16);
      v10 = *(int **)v11;
      *(_QWORD *)(v11 + 16) = 0LL;
      if ( !v10[2] )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4686);
      HMUnlockObject(*(int **)v11);
    }
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2475);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2473);
  }
  if ( (unsigned int)IsCurrentProcessDwm(v6, v5, v7, v8) )
  {
    v13 = W32GetUserSessionState(v12);
    v9 = CTouchProcessor::StopAndEndInertia(*(CTouchProcessor **)(v13 + 3264), a2, v14);
  }
  else
  {
    UserSetLastError(5);
  }
  UserSessionSwitchLeaveCritWithNonPaged();
  return v9;
}
