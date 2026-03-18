/*
 * XREFs of UserProcessTimerStatisticsCallout @ 0x1401A41E0
 * Callers:
 *     W32CalloutDispatchWorker @ 0x1400DAD6C (W32CalloutDispatchWorker.c)
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140023070 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     HMUnlockObject @ 0x14005F160 (HMUnlockObject.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400A42D0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401A8FE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 */

__int64 __fastcall UserProcessTimerStatisticsCallout(__int64 a1)
{
  _QWORD *UserSessionState; // rsi
  __int64 v3; // rax
  __int64 v4; // rcx
  unsigned int v5; // ebx
  __int64 CurrentProcessWin32Process; // rax
  int *v7; // rax
  __int64 v8; // rdi
  __int64 ProcessWin32Process; // rax

  UserSessionState = (_QWORD *)W32GetUserSessionState(a1);
  v3 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
         UserSessionState,
         1LL,
         0LL,
         _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  v5 = 0;
  UserSessionState[3] = v3;
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
  ProcessWin32Process = PsGetProcessWin32Process(*(_QWORD *)(a1 + 16));
  if ( ProcessWin32Process && *(_QWORD *)ProcessWin32Process )
    *(_DWORD *)(a1 + 24) = *(_DWORD *)(ProcessWin32Process + 1040);
  else
    v5 = -1073741558;
  UserSessionSwitchLeaveCritWithNonPaged();
  return v5;
}
