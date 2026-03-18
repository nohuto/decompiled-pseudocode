/*
 * XREFs of UserProcessTimerDelayCallout @ 0x1401A406C
 * Callers:
 *     W32CalloutDispatchWorker @ 0x1400DAD6C (W32CalloutDispatchWorker.c)
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140023070 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     HMUnlockObject @ 0x14005F160 (HMUnlockObject.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400A42D0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401A8FE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall UserProcessTimerDelayCallout(__int64 a1)
{
  _QWORD *UserSessionState; // rdi
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 CurrentProcessWin32Process; // rax
  int *v6; // rax
  __int64 v7; // rbx
  _QWORD *ProcessWin32Process; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  _QWORD *v11; // rbx
  unsigned int v12; // edi
  unsigned int v13; // esi
  __int64 (__fastcall *v14)(_QWORD *, _QWORD, _QWORD); // rax
  unsigned int v15; // ebx

  UserSessionState = (_QWORD *)W32GetUserSessionState(a1);
  v3 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
         UserSessionState,
         1LL,
         0LL,
         _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
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
      }
    }
  }
  ProcessWin32Process = (_QWORD *)PsGetProcessWin32Process(*(_QWORD *)(a1 + 16));
  v11 = ProcessWin32Process;
  if ( ProcessWin32Process && *ProcessWin32Process )
  {
    v12 = *(_DWORD *)(a1 + 28);
    v13 = *(_DWORD *)(a1 + 24);
    v14 = *(__int64 (__fastcall **)(_QWORD *, _QWORD, _QWORD))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v10, v9) + 48)
                                                             + 1248LL);
    if ( v14 )
      v15 = v14(v11, v13, v12);
    else
      v15 = -1073741637;
  }
  else
  {
    v15 = -1073741558;
  }
  UserSessionSwitchLeaveCritWithNonPaged();
  return v15;
}
