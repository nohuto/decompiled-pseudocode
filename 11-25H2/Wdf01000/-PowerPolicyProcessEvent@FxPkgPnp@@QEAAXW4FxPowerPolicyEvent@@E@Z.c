/*
 * XREFs of ?PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z @ 0x14001E738
 * Callers:
 *     ?PowerSendPowerDownEvents@FxPkgPnp@@IEAAXW4FxPowerDownType@@@Z @ 0x14001A9E4 (-PowerSendPowerDownEvents@FxPkgPnp@@IEAAXW4FxPowerDownType@@@Z.c)
 *     ?PowerSendPowerUpEvents@FxPkgPnp@@IEAAXXZ @ 0x14001B170 (-PowerSendPowerUpEvents@FxPkgPnp@@IEAAXXZ.c)
 *     ?PowerGotoDxIoStoppedCommon@FxPkgPnp@@IEAAEE@Z @ 0x14001B594 (-PowerGotoDxIoStoppedCommon@FxPkgPnp@@IEAAEE@Z.c)
 *     ?PowerGotoDx@FxPkgPnp@@IEAAXXZ @ 0x14001C82C (-PowerGotoDx@FxPkgPnp@@IEAAXXZ.c)
 *     ?PowerWakingPostHardwareEnabledCommon@FxPkgPnp@@IEAA?AW4_WDF_DEVICE_POWER_STATE@@E@Z @ 0x14001CA58 (-PowerWakingPostHardwareEnabledCommon@FxPkgPnp@@IEAA-AW4_WDF_DEVICE_POWER_STATE@@E@Z.c)
 *     ?TimingOut@FxPowerIdleMachine@@KA?AW4FxPowerIdleStates@@PEAV1@@Z @ 0x14001D8C0 (-TimingOut@FxPowerIdleMachine@@KA-AW4FxPowerIdleStates@@PEAV1@@Z.c)
 *     ?TimedOutIoIncrement@FxPowerIdleMachine@@KA?AW4FxPowerIdleStates@@PEAV1@@Z @ 0x14001E6C0 (-TimedOutIoIncrement@FxPowerIdleMachine@@KA-AW4FxPowerIdleStates@@PEAV1@@Z.c)
 *     ?_PowerPolicyUsbSelectiveSuspendCompletionRoutine@FxPkgPnp@@KAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x14003A3B0 (-_PowerPolicyUsbSelectiveSuspendCompletionRoutine@FxPkgPnp@@KAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEA.c)
 *     ?PowerPolicySetS0IdleState@FxPkgPnp@@QEAAXE@Z @ 0x14003B310 (-PowerPolicySetS0IdleState@FxPkgPnp@@QEAAXE@Z.c)
 *     ?DispatchSystemSetPower@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z @ 0x14003B42C (-DispatchSystemSetPower@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?DispatchWaitWake@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x14003C558 (-DispatchWaitWake@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z.c)
 *     ?PnpEventHardwareAvailable@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x140040BB0 (-PnpEventHardwareAvailable@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 *     ?InDxIoIncrement@FxPowerIdleMachine@@KA?AW4FxPowerIdleStates@@PEAV1@@Z @ 0x14006B590 (-InDxIoIncrement@FxPowerIdleMachine@@KA-AW4FxPowerIdleStates@@PEAV1@@Z.c)
 *     ?PowerGotoD3Stopped@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x14006C8D0 (-PowerGotoD3Stopped@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PnpEventFailed@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x14006E870 (-PnpEventFailed@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 *     ?_PowerPolDevicePowerDownComplete@FxPkgPnp@@KAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x14006F550 (-_PowerPolDevicePowerDownComplete@FxPkgPnp@@KAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_S.c)
 *     ?PowerNotRequiredD0@FxDevicePwrRequirementMachine@@CA?AW4FxDevicePwrRequirementStates@@PEAV1@@Z @ 0x14006F5B0 (-PowerNotRequiredD0@FxDevicePwrRequirementMachine@@CA-AW4FxDevicePwrRequirementStates@@PEAV1@@Z.c)
 *     ?_PowerPolDevicePowerUpComplete@FxPkgPnp@@KAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x14006F670 (-_PowerPolDevicePowerUpComplete@FxPkgPnp@@KAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STA.c)
 *     ?PowerRequiredDx@FxDevicePwrRequirementMachine@@CA?AW4FxDevicePwrRequirementStates@@PEAV1@@Z @ 0x14006F730 (-PowerRequiredDx@FxDevicePwrRequirementMachine@@CA-AW4FxDevicePwrRequirementStates@@PEAV1@@Z.c)
 *     ?_SystemPowerS0Completion@FxPkgFdo@@KAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x140070AC0 (-_SystemPowerS0Completion@FxPkgFdo@@KAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 *     ?_PowerPolDeviceWaitWakeComplete@FxPkgPnp@@KAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x1400722C0 (-_PowerPolDeviceWaitWakeComplete@FxPkgPnp@@KAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_ST.c)
 *     ?_UsbIdleCallback@FxUsbIdleInfo@@CAXPEAX@Z @ 0x1400730B0 (-_UsbIdleCallback@FxUsbIdleInfo@@CAXPEAX@Z.c)
 *     ?_SystemPowerSxCompletion@FxPkgFdo@@KAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1400770D0 (-_SystemPowerSxCompletion@FxPkgFdo@@KAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 *     ?Waking@FxWakeInterruptMachine@@CA?AW4FxWakeInterruptStates@@PEAV1@@Z @ 0x14007BF10 (-Waking@FxWakeInterruptMachine@@CA-AW4FxWakeInterruptStates@@PEAV1@@Z.c)
 *     ?PnpEventFailedIoStarting@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x14007D260 (-PnpEventFailedIoStarting@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 *     ?PowerGotoDxStopped@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x14007E2B0 (-PowerGotoDxStopped@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PnpEventFailedPowerDown@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1400A2FC0 (-PnpEventFailedPowerDown@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 *     ?PnpEventQueriedRemoving@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1400A3250 (-PnpEventQueriedRemoving@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 *     ?PnpEventRemovingDisableInterfaces@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1400A37E0 (-PnpEventRemovingDisableInterfaces@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 *     ?PnpEventRestartHardwareAvailable@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1400A3820 (-PnpEventRestartHardwareAvailable@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 *     ?PnpEventRestarting@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1400A38F0 (-PnpEventRestarting@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 *     ?PowerSendPowerDownFailureEvent@FxPkgPnp@@IEAAXW4FxPowerDownType@@@Z @ 0x1400A53C4 (-PowerSendPowerDownFailureEvent@FxPkgPnp@@IEAAXW4FxPowerDownType@@@Z.c)
 *     ?PowerSendPowerUpFailureEvent@FxPkgPnp@@IEAAXXZ @ 0x1400A5444 (-PowerSendPowerUpFailureEvent@FxPkgPnp@@IEAAXXZ.c)
 *     ?DisablingTimerExpired@FxPowerIdleMachine@@KA?AW4FxPowerIdleStates@@PEAV1@@Z @ 0x1400A6D90 (-DisablingTimerExpired@FxPowerIdleMachine@@KA-AW4FxPowerIdleStates@@PEAV1@@Z.c)
 *     ?DirectedPowerDownFailedUpArrived@FxDevicePwrRequirementMachine@@CA?AW4FxDevicePwrRequirementStates@@PEAV1@@Z @ 0x1400AA9F0 (-DirectedPowerDownFailedUpArrived@FxDevicePwrRequirementMachine@@CA-AW4FxDevicePwrRequirementSta.c)
 *     ?DirectedPowerDownInitiate@FxDevicePwrRequirementMachine@@CA?AW4FxDevicePwrRequirementStates@@PEAV1@@Z @ 0x1400AAA20 (-DirectedPowerDownInitiate@FxDevicePwrRequirementMachine@@CA-AW4FxDevicePwrRequirementStates@@PE.c)
 *     ?DirectedPowerUpInitiate@FxDevicePwrRequirementMachine@@CA?AW4FxDevicePwrRequirementStates@@PEAV1@@Z @ 0x1400AAA90 (-DirectedPowerUpInitiate@FxDevicePwrRequirementMachine@@CA-AW4FxDevicePwrRequirementStates@@PEAV.c)
 * Callees:
 *     ?PowerPolicyProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z @ 0x14000B9E0 (-PowerPolicyProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z.c)
 *     WPP_IFR_SF_qqLL @ 0x14000CAB0 (WPP_IFR_SF_qqLL.c)
 *     ?QueueToThread@FxThreadedEventQueue@@QEAAXXZ @ 0x14001EA68 (-QueueToThread@FxThreadedEventQueue@@QEAAXXZ.c)
 *     ?ProcessDelayedDeletion@FxPkgPnp@@QEAAXXZ @ 0x1400A6428 (-ProcessDelayedDeletion@FxPkgPnp@@QEAAXXZ.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

void __fastcall FxPkgPnp::PowerPolicyProcessEvent(FxPkgPnp *this, FxPowerPolicyEvent Event, unsigned __int8 a3)
{
  FxStateMachineBreak *m_StateMachineBreak; // rax
  KIRQL v6; // si
  __int64 m_QueueTail; // r8
  int v8; // r10d
  unsigned int m_SingularEventsPresent; // eax
  FxDeviceBase *m_DeviceBase; // r10
  const void *_a1; // r8
  NTSTATUS v12; // ecx
  char v13; // al
  FxCREvent *m_DeviceRemoveProcessed; // rcx
  FxDeviceBase *v15; // rdx
  const void *v16; // rcx
  FxPostProcessInfo info; // [rsp+50h] [rbp-20h] BYREF
  _LARGE_INTEGER Timeout; // [rsp+A0h] [rbp+30h] BYREF

  m_StateMachineBreak = this->m_StateMachineBreak;
  if ( m_StateMachineBreak && m_StateMachineBreak->BreakEnabled && (Event & m_StateMachineBreak->PowerPolicyEvents) != 0 )
    DbgBreakPoint();
  v6 = KeAcquireSpinLockRaiseToDpc(&this->m_PowerPolicyMachine.m_QueueLock.m_Lock);
  if ( (Event & 0x2002000) != 0 )
  {
    m_SingularEventsPresent = this->m_PowerPolicyMachine.m_SingularEventsPresent;
    if ( (m_SingularEventsPresent & Event) != 0 )
    {
      m_DeviceBase = this->m_DeviceBase;
      _a1 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !m_DeviceBase->m_ObjectSize )
        _a1 = 0LL;
      WPP_IFR_SF_qqLL(
        this->m_Globals,
        4u,
        0xCu,
        0x11u,
        WPP_PowerPolicyStateMachine_cpp_Traceguids,
        _a1,
        m_DeviceBase->m_DeviceObject.m_DeviceObject,
        *(_DWORD *)&m_DeviceBase[1].m_Type,
        Event);
      goto LABEL_15;
    }
    this->m_PowerPolicyMachine.m_SingularEventsPresent = Event | m_SingularEventsPresent;
  }
  m_QueueTail = this->m_PowerPolicyMachine.m_QueueTail;
  v8 = (this->m_PowerPolicyMachine.m_QueueDepth + this->m_PowerPolicyMachine.m_QueueHead - 1)
     % this->m_PowerPolicyMachine.m_QueueDepth;
  if ( v8 == this->m_PowerPolicyMachine.m_QueueTail % (unsigned int)this->m_PowerPolicyMachine.m_QueueDepth )
  {
LABEL_15:
    KeReleaseSpinLock(&this->m_PowerPolicyMachine.m_QueueLock.m_Lock, v6);
    return;
  }
  if ( (this->m_PowerPolicyMachine.m_QueueFlags & 2) != 0 )
  {
    v15 = this->m_DeviceBase;
    v16 = (const void *)((unsigned __int64)v15 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v15->m_ObjectSize )
      v16 = 0LL;
    WPP_IFR_SF_qqLL(
      this->m_Globals,
      4u,
      0xCu,
      0x12u,
      WPP_PowerPolicyStateMachine_cpp_Traceguids,
      v16,
      v15->m_DeviceObject.m_DeviceObject,
      *(_DWORD *)&v15[1].m_Type,
      Event);
    goto LABEL_15;
  }
  if ( ((this->m_PowerPolicyMachine.m_Owner != 0LL ? 977209328 : 393264) & Event) != 0 )
  {
    this->m_PowerPolicyMachine.m_QueueHead = v8;
    this->m_PowerPolicyMachine.m_Queue[(unsigned __int8)v8] = Event;
  }
  else
  {
    this->m_PowerPolicyMachine.m_QueueTail = ((int)m_QueueTail + 1)
                                           % (unsigned int)this->m_PowerPolicyMachine.m_QueueDepth;
    this->m_PowerPolicyMachine.m_Queue[m_QueueTail] = Event;
  }
  KeReleaseSpinLock(&this->m_PowerPolicyMachine.m_QueueLock.m_Lock, v6);
  if ( v6 )
    goto LABEL_8;
  Timeout.QuadPart = 0LL;
  KeEnterCriticalRegion();
  v12 = KeWaitForSingleObject(&this->m_PowerPolicyMachine.m_StateMachineLock, Executive, 0, 0, &Timeout);
  if ( v12 == 258 )
  {
    KeLeaveCriticalRegion();
  }
  else
  {
    this->m_PowerPolicyMachine.m_StateMachineLock.m_OwningThread = KeGetCurrentThread();
    v13 = 1;
    if ( v12 >= 0 )
      goto LABEL_19;
  }
  v13 = 0;
LABEL_19:
  if ( !v13 )
  {
LABEL_8:
    FxThreadedEventQueue::QueueToThread(&this->m_PowerPolicyMachine);
    return;
  }
  info.m_Event = 0LL;
  *(_WORD *)&info.m_DeleteObject = 0;
  info.m_FireAndForgetIrp = 0LL;
  FxPkgPnp::PowerPolicyProcessEventInner(this, &info);
  this->m_PowerPolicyMachine.m_StateMachineLock.m_OwningThread = 0LL;
  KeSetEvent(&this->m_PowerPolicyMachine.m_StateMachineLock.m_Event.m_Event, 0, 0);
  KeLeaveCriticalRegion();
  if ( info.m_SetRemovedEvent )
  {
    m_DeviceRemoveProcessed = (FxCREvent *)this->m_DeviceRemoveProcessed;
LABEL_26:
    KeSetEvent(&m_DeviceRemoveProcessed->m_Event.m_Event, 0, 0);
    return;
  }
  if ( info.m_FireAndForgetIrp )
  {
    Timeout = (_LARGE_INTEGER)info.m_FireAndForgetIrp;
    this->FireAndForgetIrp(this, (FxIrp *)&Timeout);
  }
  if ( info.m_DeleteObject )
    FxPkgPnp::ProcessDelayedDeletion(this);
  m_DeviceRemoveProcessed = info.m_Event;
  if ( info.m_Event )
    goto LABEL_26;
}
