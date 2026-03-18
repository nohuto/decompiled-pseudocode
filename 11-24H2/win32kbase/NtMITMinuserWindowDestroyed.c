/*
 * XREFs of NtMITMinuserWindowDestroyed @ 0x1401B8530
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140023070 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     HMUnlockObject @ 0x14005F160 (HMUnlockObject.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400A42D0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401A8FE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     UserDeleteBaseWindowHandle @ 0x1401BE850 (UserDeleteBaseWindowHandle.c)
 */

__int64 __fastcall NtMITMinuserWindowDestroyed(__int64 a1)
{
  _QWORD *UserSessionState; // rdi
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 CurrentProcessWin32Process; // rax
  int *v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rbx

  UserSessionState = (_QWORD *)W32GetUserSessionState(a1);
  v3 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
         UserSessionState,
         1,
         0,
         (void (__fastcall *)(_QWORD, __int64))_lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  UserSessionState[3] = v3;
  v5 = v3;
  if ( v3 )
  {
    if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v3 + 528), 0, 0) & 0x1000000) != 0
      && *(char *)(v3 + 1360) >= 0 )
    {
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v4);
      if ( CurrentProcessWin32Process )
      {
        if ( *(_QWORD *)CurrentProcessWin32Process && *(_BYTE *)(CurrentProcessWin32Process + 1208) == 1 )
        {
          while ( 1 )
          {
            v8 = UserSessionState[2471];
            if ( !v8 )
              break;
            UserSessionState[2471] = *(_QWORD *)(v8 + 16);
            v7 = *(int **)v8;
            *(_QWORD *)(v8 + 16) = 0LL;
            if ( !v7[2] )
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4686);
            HMUnlockObject(*(int **)v8);
          }
          DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2475);
          DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2473);
        }
      }
    }
  }
  v9 = UserDeleteBaseWindowHandle(a1, v5);
  UserSessionSwitchLeaveCritWithNonPaged();
  return v9;
}
