/*
 * XREFs of HandleMITWakeSignal @ 0x1400EFF98
 * Callers:
 *     _lambda_0f9e2a8fc479216b45af02f10e3c5bbd_::_lambda_invoker_cdecl_ @ 0x1400EFF80 (_lambda_0f9e2a8fc479216b45af02f10e3c5bbd_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140023070 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x140060B94 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x140062674 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400A42D0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     ?WakeMit@Win32k@InputTraceLogging@@SAXK@Z @ 0x1400EC09C (-WakeMit@Win32k@InputTraceLogging@@SAXK@Z.c)
 *     EditionxxxComputeInputSinkInfo @ 0x140135F20 (EditionxxxComputeInputSinkInfo.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x14016ABF4 (DestroySharedUserCritDeferredUnlockList.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401A8FE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     UserCritInternal::_anonymous_namespace_::IsValidGuiContext @ 0x1401A9084 (UserCritInternal--_anonymous_namespace_--IsValidGuiContext.c)
 *     ExecuteMarshaledInterceptRequest @ 0x140212620 (ExecuteMarshaledInterceptRequest.c)
 *     xxxProcessMouseEvent @ 0x1402138E0 (xxxProcessMouseEvent.c)
 */

void HandleMITWakeSignal()
{
  __int64 v0; // rcx
  __int32 i; // edi
  int v2; // ebx
  __int64 v3; // rcx
  _QWORD *v4; // rsi
  __int64 v5; // rax
  _QWORD *UserSessionState; // rsi
  __int64 v7; // rax
  __int64 *v8; // [rsp+48h] [rbp+10h] BYREF

  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v8, "HandleMITWakeSignal", 0LL);
  for ( i = _InterlockedExchange((volatile __int32 *)(W32GetUserSessionState(v0) + 18788), 0); i; i &= ~v2 )
  {
    v2 = i & -i;
    if ( ((unsigned __int8)i & (unsigned __int8)-(char)i & 7) == 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 220LL);
    InputTraceLogging::Win32k::WakeMit(v2);
    if ( v2 == 1 )
    {
      UserSessionState = (_QWORD *)W32GetUserSessionState(v3);
      v7 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
             UserSessionState,
             1LL,
             0LL,
             _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
      UserSessionState[3] = v7;
      if ( v7 && (unsigned __int8)UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v7) )
      {
        DestroySharedUserCritDeferredUnlockList(UserSessionState + 2468);
        DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2475);
        DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2473);
      }
      xxxProcessMouseEvent();
    }
    else
    {
      if ( v2 != 2 )
      {
        if ( v2 == 4 )
          ExecuteMarshaledInterceptRequest();
        continue;
      }
      v4 = (_QWORD *)W32GetUserSessionState(v3);
      v5 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
             v4,
             1LL,
             0LL,
             _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
      v4[3] = v5;
      if ( v5 && (unsigned __int8)UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v5) )
      {
        DestroySharedUserCritDeferredUnlockList(v4 + 2468);
        DestroyDeferredUnlockObjectAssignmentList(v4 + 2475);
        DestroyDeferredUnlockObjectAssignmentList(v4 + 2473);
      }
      EditionxxxComputeInputSinkInfo();
    }
    UserSessionSwitchLeaveCritWithNonPaged();
  }
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v8);
}
