/*
 * XREFs of ?OnDispatcherObjectSignaled@CBaseInput@@AEAAJPEAX@Z @ 0x1400EB910
 * Callers:
 *     ?_OnDispatcherObjectSignaled@CBaseInput@@CAJPEAX0@Z @ 0x1400EB8F0 (-_OnDispatcherObjectSignaled@CBaseInput@@CAJPEAX0@Z.c)
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140023070 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x140060B94 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ?OnPnpNotification@CBaseInput@@AEAAJXZ @ 0x140061410 (-OnPnpNotification@CBaseInput@@AEAAJXZ.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x140062674 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400A42D0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     ?DispatcherObjectSignaled@Win32k@InputTraceLogging@@SAXW4DispatcherHandleName@CRIMBase@@@Z @ 0x1400E21C4 (-DispatcherObjectSignaled@Win32k@InputTraceLogging@@SAXW4DispatcherHandleName@CRIMBase@@@Z.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x14016ABF4 (DestroySharedUserCritDeferredUnlockList.c)
 *     ?GetHandleNameFromDispatcherObject@CRIMBase@@IEAA?AW4DispatcherHandleName@1@PEAX@Z @ 0x140187270 (-GetHandleNameFromDispatcherObject@CRIMBase@@IEAA-AW4DispatcherHandleName@1@PEAX@Z.c)
 *     ?SignalMarshalingCompleted@CRIMBase@@IEAAXW4DispatcherHandleName@1@@Z @ 0x140187784 (-SignalMarshalingCompleted@CRIMBase@@IEAAXW4DispatcherHandleName@1@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401A8FE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     UserCritInternal::_anonymous_namespace_::IsValidGuiContext @ 0x1401A9084 (UserCritInternal--_anonymous_namespace_--IsValidGuiContext.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CBaseInput::OnDispatcherObjectSignaled(CBaseInput *this, void *a2)
{
  unsigned int HandleNameFromDispatcherObject; // eax
  __int64 v5; // rsi
  int v6; // ebx
  __int64 v7; // rcx
  _QWORD *UserSessionState; // rbx
  __int64 v9; // rax
  __int64 *v11; // [rsp+60h] [rbp+18h] BYREF

  (*(void (__fastcall **)(CBaseInput *))(*(_QWORD *)this + 112LL))(this);
  HandleNameFromDispatcherObject = CRIMBase::GetHandleNameFromDispatcherObject(this, a2);
  v5 = HandleNameFromDispatcherObject;
  if ( HandleNameFromDispatcherObject == 19 )
  {
    v6 = -1073741823;
  }
  else
  {
    InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v11, "DispatcherObjectSignaled", 0LL);
    InputTraceLogging::Win32k::DispatcherObjectSignaled();
    if ( (_DWORD)v5 != *((_DWORD *)&unk_140254300 + 6 * v5) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2754LL);
    if ( *((_DWORD *)&unk_140254300 + 6 * v5 + 4) )
    {
      v6 = funcs_1400EBA0E[3 * v5](this);
    }
    else
    {
      UserSessionState = (_QWORD *)W32GetUserSessionState(v7);
      v9 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
             UserSessionState,
             1LL,
             0LL,
             _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
      UserSessionState[3] = v9;
      if ( v9 && (unsigned __int8)UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v9) )
      {
        DestroySharedUserCritDeferredUnlockList(UserSessionState + 2468);
        DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2475);
        DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2473);
      }
      v6 = funcs_1400EBA0E[3 * v5](this);
      UserSessionSwitchLeaveCritWithNonPaged();
    }
    if ( v6 < 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2765LL);
    CRIMBase::SignalMarshalingCompleted(this, (unsigned int)v5);
    InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v11);
  }
  (*(void (__fastcall **)(CBaseInput *))(*(_QWORD *)this + 120LL))(this);
  return (unsigned int)v6;
}
