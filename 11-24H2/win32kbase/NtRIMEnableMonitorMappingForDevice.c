/*
 * XREFs of NtRIMEnableMonitorMappingForDevice @ 0x1401D4930
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140023070 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     HMUnlockObject @ 0x14005F160 (HMUnlockObject.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400A42D0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401A8FE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     RIMEnableMonitorMappingForDevice @ 0x1401D7170 (RIMEnableMonitorMappingForDevice.c)
 */

__int64 __fastcall NtRIMEnableMonitorMappingForDevice(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *UserSessionState; // rdi
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 CurrentProcessWin32Process; // rax
  int *v10; // rax
  __int64 v11; // rbx
  unsigned int v12; // ebx

  UserSessionState = (_QWORD *)W32GetUserSessionState(a1);
  v7 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
         UserSessionState,
         1,
         0,
         (void (__fastcall *)(_QWORD, __int64))_lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  UserSessionState[3] = v7;
  if ( v7 )
  {
    if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v7 + 528), 0, 0) & 0x1000000) != 0
      && *(char *)(v7 + 1360) >= 0 )
    {
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v8);
      if ( CurrentProcessWin32Process )
      {
        if ( *(_QWORD *)CurrentProcessWin32Process && *(_BYTE *)(CurrentProcessWin32Process + 1208) == 1 )
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
      }
    }
  }
  v12 = RIMEnableMonitorMappingForDevice(a1, a2, 1LL, a3);
  UserSessionSwitchLeaveCritWithNonPaged();
  return v12;
}
