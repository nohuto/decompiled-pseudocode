/*
 * XREFs of ?PowerEnterNewState@FxPkgPnp@@IEAAXW4_WDF_DEVICE_POWER_STATE@@@Z @ 0x14001D210
 * Callers:
 *     ?PowerProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z @ 0x14001CF50 (-PowerProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z.c)
 * Callees:
 *     ??1MxTimer@@QEAA@XZ @ 0x14000AB88 (--1MxTimer@@QEAA@XZ.c)
 *     WPP_IFR_SF_qqLL @ 0x14000CAB0 (WPP_IFR_SF_qqLL.c)
 *     ?Stop@MxTimer@@QEAAEXZ @ 0x14001FB34 (-Stop@MxTimer@@QEAAEXZ.c)
 *     ?Start@MxTimer@@QEAAXT_LARGE_INTEGER@@K@Z @ 0x140060E8C (-Start@MxTimer@@QEAAXT_LARGE_INTEGER@@K@Z.c)
 *     ?Invoke@FxPowerStateCallback@@QEAAXW4_WDF_DEVICE_POWER_STATE@@W4_WDF_STATE_NOTIFICATION_TYPE@@PEAUWDFDEVICE__@@PEBU_WDF_DEVICE_POWER_NOTIFICATION_DATA@@@Z @ 0x1400A43DC (-Invoke@FxPowerStateCallback@@QEAAXW4_WDF_DEVICE_POWER_STATE@@W4_WDF_STATE_NOTIFICATION_TYPE@@PE.c)
 *     __security_check_cookie @ 0x1400AC640 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

void __fastcall FxPkgPnp::PowerEnterNewState(FxPkgPnp *this, __int64 State)
{
  _WDF_DEVICE_POWER_STATE _a3; // ebx
  FxDeviceBase *m_DeviceBase; // rax
  _WDF_DEVICE_POWER_STATE _a4; // r14d
  FxDeviceBase *v6; // rdx
  const void *_a1; // rcx
  FxPowerStateCallback *m_PowerStateCallbacks; // rcx
  __int64 m_HistoryIndex; // r8
  FxPowerStateCallback *v10; // rcx
  const POWER_STATE_TABLE *v11; // rsi
  FxStateMachineBreak *m_StateMachineBreak; // rax
  int v13; // r15d
  FxPowerStateCallback *v14; // rcx
  FxDeviceBase *v15; // r9
  unsigned __int16 m_ObjectSize; // ax
  WDFDEVICE__ *v17; // r9
  FxDeviceBase *v18; // r9
  unsigned __int16 v19; // ax
  WDFDEVICE__ *v20; // r9
  FxDeviceBase *v21; // r9
  unsigned __int16 v22; // ax
  WDFDEVICE__ *v23; // r9
  FxWatchdog watchdog; // [rsp+50h] [rbp-B0h] BYREF
  _WDF_DEVICE_POWER_NOTIFICATION_DATA data; // [rsp+100h] [rbp+0h] BYREF

  watchdog.m_PkgPnp = this;
  watchdog.m_Timer.m_Timer.m_TimerContext = 0LL;
  *(_QWORD *)&data.Type = 0LL;
  _a3 = (int)State;
  data.Data.EnterState.NewState = WdfDevStatePowerInvalid;
  m_DeviceBase = this->m_DeviceBase;
  watchdog.m_Timer.m_Timer.m_TimerCallback = 0LL;
  watchdog.m_Timer.m_Timer.m_Period = 0;
  watchdog.m_Timer.m_Timer.m_KernelExTimer = 0LL;
  _a4 = HIDWORD(m_DeviceBase[1].FxNonPagedObject::FxObject::__vftable);
  while ( _a3 != WdfDevStatePowerNull )
  {
    v6 = this->m_DeviceBase;
    _a1 = (const void *)((unsigned __int64)v6 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v6->m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_qqLL(
      this->m_Globals,
      4u,
      0x15u,
      0xEu,
      WPP_PowerStateMachine_cpp_Traceguids,
      _a1,
      v6->m_DeviceObject.m_DeviceObject,
      _a3,
      _a4);
    m_PowerStateCallbacks = this->m_PowerStateCallbacks;
    if ( m_PowerStateCallbacks )
    {
      v15 = this->m_DeviceBase;
      data.Type = StateNotificationLeaveState;
      data.Data = (_WDF_DEVICE_POWER_NOTIFICATION_DATA::<unnamed_type_Data>)__PAIR64__(_a3, _a4);
      m_ObjectSize = v15->m_ObjectSize;
      v17 = (WDFDEVICE__ *)((unsigned __int64)v15 ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !m_ObjectSize )
        v17 = 0LL;
      FxPowerStateCallback::Invoke(m_PowerStateCallbacks, _a4, StateNotificationLeaveState, v17, &data);
    }
    m_HistoryIndex = this->m_PowerMachine.m_HistoryIndex;
    State = ((int)m_HistoryIndex + 1) % (unsigned int)this->m_PowerMachine.m_QueueDepth;
    this->m_PowerMachine.m_HistoryIndex = State;
    this->m_PowerMachine.m_States.History[m_HistoryIndex] = _a3;
    v10 = this->m_PowerStateCallbacks;
    if ( v10 )
    {
      v18 = this->m_DeviceBase;
      data.Type = StateNotificationEnterState;
      data.Data = (_WDF_DEVICE_POWER_NOTIFICATION_DATA::<unnamed_type_Data>)__PAIR64__(_a3, _a4);
      v19 = v18->m_ObjectSize;
      v20 = (WDFDEVICE__ *)((unsigned __int64)v18 ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !v19 )
        v20 = 0LL;
      FxPowerStateCallback::Invoke(v10, _a3, StateNotificationEnterState, v20, &data);
    }
    _a4 = _a3;
    HIDWORD(this->m_DeviceBase[1].FxNonPagedObject::FxObject::__vftable) = _a3;
    v11 = &FxPkgPnp::m_WdfPowerStates[(_a3 & 0xFFFF7FFF) - 768];
    m_StateMachineBreak = this->m_StateMachineBreak;
    if ( m_StateMachineBreak && m_StateMachineBreak->BreakEnabled && m_StateMachineBreak->PowerState == _a3 )
      DbgBreakPoint();
    if ( v11->StateFunc )
    {
      v13 = _a3 & 0x8000;
      if ( (_a3 & 0x8000) != 0 )
      {
        watchdog.m_Timer.m_Timer.m_Period = 0;
        watchdog.m_Timer.m_Timer.m_TimerContext = &watchdog;
        watchdog.m_Timer.m_Timer.m_TimerCallback = FxWatchdog::_WatchdogDpc;
        KeInitializeTimerEx(&watchdog.m_Timer.m_Timer.KernelTimer, NotificationTimer);
        KeInitializeDpc(
          &watchdog.m_Timer.m_Timer.TimerDpc,
          watchdog.m_Timer.m_Timer.m_TimerCallback,
          watchdog.m_Timer.m_Timer.m_TimerContext);
        watchdog.m_Timer.m_Timer.m_IsExtTimer = 0;
        watchdog.m_CallingThread = KeGetCurrentThread();
        MxTimer::Start(
          &watchdog.m_Timer,
          (_LARGE_INTEGER)((-(__int64)(watchdog.m_PkgPnp->m_SharedPower.m_ExtendWatchDogTimer != 0) & 0xFFFFFF383B36FC00uLL)
                         - 6000000000LL),
          0);
      }
      _a3 = v11->StateFunc(this);
      if ( v13 )
        MxTimer::Stop(&watchdog.m_Timer);
    }
    else
    {
      _a3 = WdfDevStatePowerNull;
    }
    v14 = this->m_PowerStateCallbacks;
    if ( v14 )
    {
      v21 = this->m_DeviceBase;
      data.Type = StateNotificationPostProcessState;
      data.Data = (_WDF_DEVICE_POWER_NOTIFICATION_DATA::<unnamed_type_Data>)(unsigned int)_a4;
      v22 = v21->m_ObjectSize;
      v23 = (WDFDEVICE__ *)((unsigned __int64)v21 ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !v22 )
        v23 = 0LL;
      FxPowerStateCallback::Invoke(v14, _a4, StateNotificationPostProcessState, v23, &data);
    }
  }
  MxTimer::~MxTimer(&watchdog.m_Timer, State);
}
