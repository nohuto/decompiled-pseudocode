/*
 * XREFs of ?PowerPolicyProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z @ 0x140024110
 * Callers:
 *     ?_PowerPolicyProcessEventInner@FxPkgPnp@@KAXPEAV1@PEAUFxPostProcessInfo@@PEAX@Z @ 0x140023040 (-_PowerPolicyProcessEventInner@FxPkgPnp@@KAXPEAV1@PEAUFxPostProcessInfo@@PEAX@Z.c)
 *     ?PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z @ 0x140035F58 (-PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z.c)
 * Callees:
 *     ?PowerPolicyCompleteSystemPowerIrp@FxPkgPnp@@IEAAXXZ @ 0x1400038B8 (-PowerPolicyCompleteSystemPowerIrp@FxPkgPnp@@IEAAXXZ.c)
 *     ?GetNotPowerPolicyOwnerTableEntry@FxPkgPnp@@KAPEBUNOT_POWER_POLICY_OWNER_STATE_TABLE@@W4_WDF_DEVICE_POWER_POLICY_STATE@@@Z @ 0x140023004 (-GetNotPowerPolicyOwnerTableEntry@FxPkgPnp@@KAPEBUNOT_POWER_POLICY_OWNER_STATE_TABLE@@W4_WDF_DEV.c)
 *     ??1MxTimer@@QEAA@XZ @ 0x1400232B8 (--1MxTimer@@QEAA@XZ.c)
 *     WPP_IFR_SF_qqLL @ 0x1400251E0 (WPP_IFR_SF_qqLL.c)
 *     ?Stop@MxTimer@@QEAAEXZ @ 0x140037354 (-Stop@MxTimer@@QEAAEXZ.c)
 *     ?Start@MxTimer@@QEAAXT_LARGE_INTEGER@@K@Z @ 0x14005DC6C (-Start@MxTimer@@QEAAXT_LARGE_INTEGER@@K@Z.c)
 *     ?NotPowerPolicyOwnerEnterNewState@FxPkgPnp@@IEAAXW4_WDF_DEVICE_POWER_POLICY_STATE@@@Z @ 0x1400684A4 (-NotPowerPolicyOwnerEnterNewState@FxPkgPnp@@IEAAXW4_WDF_DEVICE_POWER_POLICY_STATE@@@Z.c)
 *     ?AcknowledgeS0@FxPowerPolicyMachine@@QEAAXXZ @ 0x14007DD38 (-AcknowledgeS0@FxPowerPolicyMachine@@QEAAXXZ.c)
 *     WPP_IFR_SF_qqLLL @ 0x1400805E8 (WPP_IFR_SF_qqLLL.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x140083BB0 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?Invoke@FxPowerPolicyStateCallback@@QEAAXW4_WDF_DEVICE_POWER_POLICY_STATE@@W4_WDF_STATE_NOTIFICATION_TYPE@@PEAUWDFDEVICE__@@PEBU_WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA@@@Z @ 0x1400A4470 (-Invoke@FxPowerPolicyStateCallback@@QEAAXW4_WDF_DEVICE_POWER_POLICY_STATE@@W4_WDF_STATE_NOTIFICA.c)
 *     __security_check_cookie @ 0x1400AC710 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

void __fastcall FxPkgPnp::PowerPolicyProcessEventInner(FxPkgPnp *this, FxPostProcessInfo *Info)
{
  FxPowerPolicyMachine *p_m_PowerPolicyMachine; // r13
  unsigned __int64 *p_m_Lock; // r14
  _WDF_DEVICE_POWER_POLICY_STATE _a3; // esi
  FxDeviceBase *m_DeviceBase; // rax
  _WDF_DEVICE_POWER_POLICY_STATE _a4; // r14d
  FxDeviceBase *v8; // rdx
  const void *_a1; // rcx
  FxPowerPolicyStateCallback *m_PowerPolicyStateCallbacks; // rcx
  __int64 m_HistoryIndex; // r8
  __int64 v12; // rdx
  FxPowerPolicyStateCallback *v13; // rcx
  __int64 v14; // rbx
  FxStateMachineBreak *v15; // rax
  FxPowerPolicyStateCallback *v16; // rcx
  unsigned int v17; // r15d
  __int64 v18; // rbx
  KIRQL v19; // al
  __int64 v20; // rcx
  KIRQL v21; // si
  FxPowerPolicyEvent v22; // r14d
  FxStateMachineBreak *m_StateMachineBreak; // rcx
  unsigned int v24; // ecx
  const POWER_POLICY_EVENT_TARGET_STATE *OtherTargetStates; // rdx
  int j; // ecx
  const POWER_POLICY_EVENT_TARGET_STATE *v27; // rsi
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  unsigned int globals; // r8d
  bool v30; // zf
  unsigned __int8 m_QueueFlags; // al
  const NOT_POWER_POLICY_OWNER_STATE_TABLE *NotPowerPolicyOwnerTableEntry; // rbx
  KIRQL v33; // al
  __int64 m_QueueHead; // rdx
  FxPowerPolicyEvent v35; // esi
  unsigned int m_SingularEventsPresent; // ecx
  unsigned int TargetStatesCount; // eax
  unsigned int i; // edx
  __int64 v39; // r8
  _LARGE_INTEGER v40; // rdx
  FxDeviceBase *v41; // r9
  unsigned __int16 m_ObjectSize; // ax
  WDFDEVICE__ *v43; // r9
  FxDeviceBase *v44; // r9
  unsigned __int16 v45; // ax
  WDFDEVICE__ *v46; // r9
  FxDeviceBase *v47; // r9
  unsigned __int16 v48; // ax
  WDFDEVICE__ *v49; // r9
  FxDeviceBase *v50; // r8
  const void *v51; // rdx
  FxDeviceBase *v52; // rdx
  const void *v53; // rcx
  MxTimer v55; // [rsp+60h] [rbp-A0h] BYREF
  FxPkgPnp *v56; // [rsp+F8h] [rbp-8h]
  struct _KTHREAD *CurrentThread; // [rsp+100h] [rbp+0h]
  _WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA NotificationData; // [rsp+110h] [rbp+10h] BYREF

  p_m_PowerPolicyMachine = &this->m_PowerPolicyMachine;
  p_m_Lock = &this->m_PowerPolicyMachine.m_QueueLock.m_Lock;
  if ( !this->m_PowerPolicyMachine.m_Owner )
  {
    while ( 1 )
    {
      while ( 1 )
      {
LABEL_46:
        NotPowerPolicyOwnerTableEntry = FxPkgPnp::GetNotPowerPolicyOwnerTableEntry((_WDF_DEVICE_POWER_POLICY_STATE)*(_DWORD *)&this->m_DeviceBase[1].m_Type);
        v33 = KeAcquireSpinLockRaiseToDpc(p_m_Lock);
        m_QueueHead = p_m_PowerPolicyMachine->m_QueueHead;
        if ( (_BYTE)m_QueueHead == p_m_PowerPolicyMachine->m_QueueTail
          || (v35 = this->m_PowerPolicyMachine.m_Queue[m_QueueHead], (v35 & 0x60030) == 0)
          && !NotPowerPolicyOwnerTableEntry->QueueOpen )
        {
          KeReleaseSpinLock(p_m_Lock, v33);
          return;
        }
        m_SingularEventsPresent = this->m_PowerPolicyMachine.m_SingularEventsPresent;
        if ( (m_SingularEventsPresent & v35) != 0 )
          this->m_PowerPolicyMachine.m_SingularEventsPresent = m_SingularEventsPresent & ~v35;
        p_m_PowerPolicyMachine->m_QueueHead = ((int)m_QueueHead + 1)
                                            % (unsigned int)p_m_PowerPolicyMachine->m_QueueDepth;
        KeReleaseSpinLock(p_m_Lock, v33);
        if ( NotPowerPolicyOwnerTableEntry )
        {
          TargetStatesCount = NotPowerPolicyOwnerTableEntry->TargetStatesCount;
          if ( (_BYTE)TargetStatesCount )
            break;
        }
      }
      for ( i = 0; ; ++i )
      {
        if ( i >= TargetStatesCount )
          goto LABEL_46;
        v39 = (__int64)&NotPowerPolicyOwnerTableEntry->TargetStates[i];
        if ( v35 == *(_DWORD *)v39 )
          break;
      }
      FxPkgPnp::NotPowerPolicyOwnerEnterNewState(this, *(_WDF_DEVICE_POWER_POLICY_STATE *)(v39 + 4));
    }
  }
  while ( 1 )
  {
    v17 = *(_DWORD *)&this->m_DeviceBase[1].m_Type;
    v18 = (v17 & 0xFFFF7FFF) - 1280;
    v19 = KeAcquireSpinLockRaiseToDpc(p_m_Lock);
    v20 = p_m_PowerPolicyMachine->m_QueueHead;
    v21 = v19;
    if ( (_BYTE)v20 == p_m_PowerPolicyMachine->m_QueueTail )
      break;
    v22 = this->m_PowerPolicyMachine.m_Queue[v20];
    m_StateMachineBreak = this->m_StateMachineBreak;
    if ( m_StateMachineBreak && m_StateMachineBreak->BreakEnabled && (v22 & m_StateMachineBreak->PowerPolicyEvents) != 0 )
      DbgBreakPoint();
    if ( (v22 & 0x3A3F07F0) == 0 && (*(_DWORD *)&FxPkgPnp::m_WdfPowerPolicyStates[v18].StateInfo.Bits & 1) == 0 )
      goto LABEL_44;
    v24 = this->m_PowerPolicyMachine.m_SingularEventsPresent;
    if ( (v24 & v22) != 0 )
      this->m_PowerPolicyMachine.m_SingularEventsPresent = v24 & ~v22;
    p_m_PowerPolicyMachine->m_QueueHead = ((unsigned int)p_m_PowerPolicyMachine->m_QueueHead + 1)
                                        % p_m_PowerPolicyMachine->m_QueueDepth;
    KeReleaseSpinLock(&this->m_PowerPolicyMachine.m_QueueLock.m_Lock, v21);
    if ( FxPkgPnp::m_WdfPowerPolicyStates[v18].FirstTargetState.PowerPolicyEvent == v22 )
    {
      _a3 = FxPkgPnp::m_WdfPowerPolicyStates[v18].FirstTargetState.TargetState;
LABEL_4:
      if ( _a3 != WdfDevStatePwrPolNull )
      {
        v55.m_Timer.m_TimerContext = 0LL;
        *(_QWORD *)&NotificationData.Type = 0LL;
        NotificationData.Data.EnterState.NewState = WdfDevStatePwrPolInvalid;
        m_DeviceBase = this->m_DeviceBase;
        v55.m_Timer.m_TimerCallback = 0LL;
        v55.m_Timer.m_Period = 0;
        v55.m_Timer.m_KernelExTimer = 0LL;
        v56 = this;
        _a4 = *(_DWORD *)&m_DeviceBase[1].m_Type;
        do
        {
          v8 = this->m_DeviceBase;
          _a1 = (const void *)((unsigned __int64)v8 ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !v8->m_ObjectSize )
            _a1 = 0LL;
          WPP_IFR_SF_qqLL(
            this->m_Globals,
            4u,
            0x15u,
            0x15u,
            WPP_PowerPolicyStateMachine_cpp_Traceguids,
            _a1,
            v8->m_DeviceObject.m_DeviceObject,
            _a3,
            _a4);
          m_PowerPolicyStateCallbacks = this->m_PowerPolicyStateCallbacks;
          if ( m_PowerPolicyStateCallbacks )
          {
            v41 = this->m_DeviceBase;
            NotificationData.Type = StateNotificationLeaveState;
            NotificationData.Data = (_WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA::<unnamed_type_Data>)__PAIR64__(_a3, _a4);
            m_ObjectSize = v41->m_ObjectSize;
            v43 = (WDFDEVICE__ *)((unsigned __int64)v41 ^ 0xFFFFFFFFFFFFFFF8uLL);
            if ( !m_ObjectSize )
              v43 = 0LL;
            FxPowerPolicyStateCallback::Invoke(
              m_PowerPolicyStateCallbacks,
              _a4,
              StateNotificationLeaveState,
              v43,
              &NotificationData);
          }
          m_HistoryIndex = this->m_PowerPolicyMachine.m_HistoryIndex;
          v12 = ((int)m_HistoryIndex + 1) % (unsigned int)this->m_PowerPolicyMachine.m_QueueDepth;
          this->m_PowerPolicyMachine.m_HistoryIndex = v12;
          this->m_PowerPolicyMachine.m_States.History[m_HistoryIndex] = _a3;
          v13 = this->m_PowerPolicyStateCallbacks;
          if ( v13 )
          {
            v44 = this->m_DeviceBase;
            NotificationData.Type = StateNotificationEnterState;
            NotificationData.Data = (_WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA::<unnamed_type_Data>)__PAIR64__(_a3, _a4);
            v45 = v44->m_ObjectSize;
            v46 = (WDFDEVICE__ *)((unsigned __int64)v44 ^ 0xFFFFFFFFFFFFFFF8uLL);
            if ( !v45 )
              v46 = 0LL;
            FxPowerPolicyStateCallback::Invoke(v13, _a3, StateNotificationEnterState, v46, &NotificationData);
          }
          _a4 = _a3;
          v14 = (_a3 & 0xFFFF7FFF) - 1280;
          *(_DWORD *)&this->m_DeviceBase[1].m_Type = _a3;
          v15 = this->m_StateMachineBreak;
          if ( v15 && v15->BreakEnabled && v15->PowerPolicyState == _a3 )
            DbgBreakPoint();
          if ( FxPkgPnp::m_WdfPowerPolicyStates[v14].StateFunc )
          {
            if ( (_a3 & 0x8000) != 0 )
            {
              v55.m_Timer.m_Period = 0;
              v55.m_Timer.m_TimerContext = &v55;
              v55.m_Timer.m_TimerCallback = FxWatchdog::_WatchdogDpc;
              KeInitializeTimerEx(&v55.m_Timer.KernelTimer, NotificationTimer);
              KeInitializeDpc(&v55.m_Timer.TimerDpc, v55.m_Timer.m_TimerCallback, v55.m_Timer.m_TimerContext);
              v55.m_Timer.m_IsExtTimer = 0;
              v40.QuadPart = -864000000000LL;
              CurrentThread = KeGetCurrentThread();
              if ( !v56->m_SharedPower.m_ExtendWatchDogTimer )
                v40.QuadPart = -6000000000LL;
              MxTimer::Start(&v55, v40, 0);
              _a3 = FxPkgPnp::m_WdfPowerPolicyStates[v14].StateFunc(this);
              MxTimer::Stop(&v55);
            }
            else
            {
              _a3 = FxPkgPnp::m_WdfPowerPolicyStates[v14].StateFunc(this);
            }
          }
          else
          {
            _a3 = WdfDevStatePwrPolNull;
          }
          v16 = this->m_PowerPolicyStateCallbacks;
          if ( v16 )
          {
            v47 = this->m_DeviceBase;
            NotificationData.Type = StateNotificationPostProcessState;
            NotificationData.Data = (_WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA::<unnamed_type_Data>)(unsigned int)_a4;
            v48 = v47->m_ObjectSize;
            v49 = (WDFDEVICE__ *)((unsigned __int64)v47 ^ 0xFFFFFFFFFFFFFFF8uLL);
            if ( !v48 )
              v49 = 0LL;
            FxPowerPolicyStateCallback::Invoke(v16, _a4, StateNotificationPostProcessState, v49, &NotificationData);
          }
        }
        while ( _a3 != WdfDevStatePwrPolNull );
        p_m_PowerPolicyMachine = &this->m_PowerPolicyMachine;
        MxTimer::~MxTimer(&v55, v12);
        goto $LC304;
      }
    }
    else
    {
      OtherTargetStates = FxPkgPnp::m_WdfPowerPolicyStates[v18].OtherTargetStates;
      if ( OtherTargetStates )
      {
        for ( j = 0; ; ++j )
        {
          v27 = &OtherTargetStates[j];
          if ( v27->PowerPolicyEvent == PwrPolNull )
            break;
          if ( v27->PowerPolicyEvent == v22 )
          {
            _a3 = v27->TargetState;
            goto LABEL_4;
          }
        }
      }
    }
    m_Globals = this->m_Globals;
    if ( m_Globals->FxVerboseOn )
    {
      v50 = this->m_DeviceBase;
      v51 = (const void *)((unsigned __int64)v50 ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !v50->m_ObjectSize )
        v51 = 0LL;
      WPP_IFR_SF_qqLL(
        m_Globals,
        5u,
        0xCu,
        0x13u,
        WPP_PowerPolicyStateMachine_cpp_Traceguids,
        v51,
        v50->m_DeviceObject.m_DeviceObject,
        v17,
        v22);
    }
    globals = *(_DWORD *)&FxPkgPnp::m_WdfPowerPolicyStates[v18].StateInfo.Bits >> 1;
    if ( (globals & v22) == 0 )
    {
      v52 = this->m_DeviceBase;
      v53 = (const void *)((unsigned __int64)v52 ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !v52->m_ObjectSize )
        v53 = 0LL;
      WPP_IFR_SF_qqLLL(
        this->m_Globals,
        2u,
        globals,
        0x14u,
        WPP_PowerPolicyStateMachine_cpp_Traceguids,
        v53,
        v52->m_DeviceObject.m_DeviceObject,
        v17,
        v22,
        globals);
      if ( v22 >= PwrPolDeviceDirectedPowerDown || (v17 & 0xFFFF7FFF) >= 0x599 )
        MicrosoftTelemetryAssertTriggeredArgsKM("wdf01000.sys", v17, v22);
    }
    if ( v22 <= PwrPolWakeFailed )
    {
      switch ( v22 )
      {
        case PwrPolWakeFailed:
          goto LABEL_66;
        case PwrPolSx:
          FxPkgPnp::PowerPolicyCompleteSystemPowerIrp(this);
          break;
        case PwrPolS0:
          switch ( v17 )
          {
            case 0x500u:
            case 0x58Eu:
              goto $LC304;
            case 0x505u:
            case 0x508u:
            case 0x531u:
            case 0x53Eu:
            case 0x563u:
            case 0x565u:
            case 0x56Eu:
            case 0x584u:
            case 0x589u:
              FxPowerPolicyMachine::AcknowledgeS0(p_m_PowerPolicyMachine);
              break;
            default:
              MicrosoftTelemetryAssertTriggeredArgsKM("wdf01000.sys", v17, 8u);
              break;
          }
          break;
        case PwrPolWakeSuccess:
LABEL_66:
          this->m_PowerPolicyMachine.m_Owner->m_WakeCompletionEventDropped = 1;
          break;
        default:
          break;
      }
$LC304:
      p_m_Lock = &this->m_PowerPolicyMachine.m_QueueLock.m_Lock;
    }
    else
    {
      if ( v22 == PwrPolUsbSelectiveSuspendCallback )
      {
        KeSetEvent((PRKEVENT)this->m_PowerPolicyMachine.m_Owner->m_UsbIdle->m_IdleCallbackEvent, 0, 0);
        goto $LC304;
      }
      v30 = v22 == PwrPolUsbSelectiveSuspendCompleted;
      p_m_Lock = &this->m_PowerPolicyMachine.m_QueueLock.m_Lock;
      if ( v30 )
      {
        this->m_PowerPolicyMachine.m_Owner->m_UsbIdle->m_EventDropped = 1;
        goto $LC304;
      }
    }
  }
  m_QueueFlags = this->m_PowerPolicyMachine.m_QueueFlags;
  if ( (m_QueueFlags & 1) == 0 && !this->m_PowerPolicyMachine.m_WorkItemRunningCount )
  {
    if ( (m_QueueFlags & 4) != 0 )
    {
      this->m_PowerPolicyMachine.m_QueueFlags = m_QueueFlags & 0xFB;
      Info->m_DeleteObject = 1;
    }
    if ( (this->m_PowerPolicyMachine.m_QueueFlags & 2) != 0 )
    {
      Info->m_Event = this->m_PowerPolicyMachine.m_WorkItemFinished;
      this->m_PowerPolicyMachine.m_WorkItemFinished = 0LL;
    }
  }
LABEL_44:
  KeReleaseSpinLock(&this->m_PowerPolicyMachine.m_QueueLock.m_Lock, v21);
}
