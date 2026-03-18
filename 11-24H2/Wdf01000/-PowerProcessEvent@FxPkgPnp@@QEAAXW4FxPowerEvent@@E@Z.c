/*
 * XREFs of ?PowerProcessEvent@FxPkgPnp@@QEAAXW4FxPowerEvent@@E@Z @ 0x140034EA8
 * Callers:
 *     ?PowerPolSystemWakeDeviceToD0CompletePowerUp@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x140002BA0 (-PowerPolSystemWakeDeviceToD0CompletePowerUp@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEA.c)
 *     ?DispatchWaitWake@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x140003128 (-DispatchWaitWake@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z.c)
 *     ?PowerPolS0NoWakeCompletePowerUp@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x140004C50 (-PowerPolS0NoWakeCompletePowerUp@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolTimerExpiredWakeCapableWakeArrived@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x140004DC0 (-PowerPolTimerExpiredWakeCapableWakeArrived@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV.c)
 *     ?PostParentToD0@FxChildList@@QEAAXXZ @ 0x140031DCC (-PostParentToD0@FxChildList@@QEAAXXZ.c)
 *     ?RaiseDevicePowerCompletion@FxPkgFdo@@SAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x140032E00 (-RaiseDevicePowerCompletion@FxPkgFdo@@SAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 *     ?DispatchDeviceSetPower@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z @ 0x140033690 (-DispatchDeviceSetPower@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?DispatchDeviceSetPower@FxPkgFdo@@AEAAJPEAVFxIrp@@@Z @ 0x1400346A0 (-DispatchDeviceSetPower@FxPkgFdo@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?AckPendingWakeInterruptOperation@FxPkgPnp@@QEAAXE@Z @ 0x140067460 (-AckPendingWakeInterruptOperation@FxPkgPnp@@QEAAXE@Z.c)
 *     ?PowerIndicateWaitWakeStatus@FxPkgPnp@@QEAAEJ@Z @ 0x14006E4FC (-PowerIndicateWaitWakeStatus@FxPkgPnp@@QEAAEJ@Z.c)
 *     ?_PowerWaitWakeCancelRoutine@FxPkgPnp@@KAXPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x140070E90 (-_PowerWaitWakeCancelRoutine@FxPkgPnp@@KAXPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 *     ?PowerPolTimerExpiredNoWakeCompletePowerDown@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x140074090 (-PowerPolTimerExpiredNoWakeCompletePowerDown@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEA.c)
 *     ?PowerPolSleepingWakeWakeArrived@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x140074A60 (-PowerPolSleepingWakeWakeArrived@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolS0WakeCompletePowerUp@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x140076920 (-PowerPolS0WakeCompletePowerUp@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?CommitUsageNotification@FxPkgPnp@@IEAAXW4_DEVICE_USAGE_NOTIFICATION_TYPE@@K@Z @ 0x140078104 (-CommitUsageNotification@FxPkgPnp@@IEAAXW4_DEVICE_USAGE_NOTIFICATION_TYPE@@K@Z.c)
 *     ?NotPowerPolOwnerStarting@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x14007BC60 (-NotPowerPolOwnerStarting@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?NotPowerPolOwnerStopping@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x14007CE10 (-NotPowerPolOwnerStopping@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolStopping@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x14007D600 (-PowerPolStopping@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolDisarmingWakeForSystemSleepCompletePowerUp@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1400A7CE0 (-PowerPolDisarmingWakeForSystemSleepCompletePowerUp@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STA.c)
 *     ?PowerPolStarting@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1400A7E10 (-PowerPolStarting@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolSleepingWakeWakeArrivedNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1400A8050 (-PowerPolSleepingWakeWakeArrivedNP@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolStartingPoweredUpFailed@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1400A82B0 (-PowerPolStartingPoweredUpFailed@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolStoppingDisarmWake@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1400A8440 (-PowerPolStoppingDisarmWake@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolStoppingResetDeviceCompletePowerUp@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1400A8550 (-PowerPolStoppingResetDeviceCompletePowerUp@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV.c)
 * Callees:
 *     WPP_IFR_SF_qqLL @ 0x1400251E0 (WPP_IFR_SF_qqLL.c)
 *     ?PowerProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z @ 0x140034870 (-PowerProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z.c)
 *     ?QueueToThread@FxThreadedEventQueue@@QEAAXXZ @ 0x140036288 (-QueueToThread@FxThreadedEventQueue@@QEAAXXZ.c)
 *     ?ProcessDelayedDeletion@FxPkgPnp@@QEAAXXZ @ 0x1400A64F8 (-ProcessDelayedDeletion@FxPkgPnp@@QEAAXXZ.c)
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

void __fastcall FxPkgPnp::PowerProcessEvent(
        FxPkgPnp *this,
        unsigned int Event,
        unsigned __int8 ProcessOnDifferentThread)
{
  FxStateMachineBreak *m_StateMachineBreak; // rax
  KIRQL v7; // si
  __int64 m_QueueTail; // r8
  int v9; // r10d
  NTSTATUS v10; // ecx
  char v11; // al
  FxCREvent *m_DeviceRemoveProcessed; // rcx
  int m_SingularEventsPresent; // eax
  FxDeviceBase *v14; // rdx
  const void *_a1; // rcx
  FxDeviceBase *m_DeviceBase; // r8
  const void *v17; // rdx
  FxPostProcessInfo info; // [rsp+50h] [rbp-20h] BYREF
  _LARGE_INTEGER Timeout; // [rsp+A0h] [rbp+30h] BYREF

  m_StateMachineBreak = this->m_StateMachineBreak;
  if ( m_StateMachineBreak && m_StateMachineBreak->BreakEnabled && (Event & m_StateMachineBreak->PowerEvents) != 0 )
    DbgBreakPoint();
  v7 = KeAcquireSpinLockRaiseToDpc(&this->m_PowerMachine.m_QueueLock.m_Lock);
  if ( (Event & 0x100) != 0 )
  {
    m_SingularEventsPresent = this->m_PowerMachine.m_SingularEventsPresent;
    if ( (m_SingularEventsPresent & Event) != 0 )
    {
      m_DeviceBase = this->m_DeviceBase;
      v17 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !m_DeviceBase->m_ObjectSize )
        v17 = 0LL;
      WPP_IFR_SF_qqLL(
        this->m_Globals,
        4u,
        0xCu,
        0xAu,
        WPP_PowerStateMachine_cpp_Traceguids,
        v17,
        m_DeviceBase->m_DeviceObject.m_DeviceObject,
        HIDWORD(m_DeviceBase[1].FxNonPagedObject::FxObject::__vftable),
        Event);
      goto LABEL_30;
    }
    this->m_PowerMachine.m_SingularEventsPresent = m_SingularEventsPresent | Event;
  }
  m_QueueTail = this->m_PowerMachine.m_QueueTail;
  v9 = (this->m_PowerMachine.m_QueueDepth + this->m_PowerMachine.m_QueueHead - 1) % this->m_PowerMachine.m_QueueDepth;
  if ( v9 == this->m_PowerMachine.m_QueueTail % (unsigned int)this->m_PowerMachine.m_QueueDepth )
  {
LABEL_30:
    KeReleaseSpinLock(&this->m_PowerMachine.m_QueueLock.m_Lock, v7);
    return;
  }
  if ( (this->m_PowerMachine.m_QueueFlags & 2) != 0 )
  {
    v14 = this->m_DeviceBase;
    _a1 = (const void *)((unsigned __int64)v14 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v14->m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_qqLL(
      this->m_Globals,
      4u,
      0xCu,
      0xBu,
      WPP_PowerStateMachine_cpp_Traceguids,
      _a1,
      v14->m_DeviceObject.m_DeviceObject,
      HIDWORD(v14[1].FxNonPagedObject::FxObject::__vftable),
      Event);
    goto LABEL_30;
  }
  if ( (Event & 0x3900) != 0 )
  {
    this->m_PowerMachine.m_QueueHead = v9;
    this->m_PowerMachine.m_Queue.Events[(unsigned __int8)v9] = Event;
  }
  else
  {
    this->m_PowerMachine.m_QueueTail = ((int)m_QueueTail + 1) % (unsigned int)this->m_PowerMachine.m_QueueDepth;
    this->m_PowerMachine.m_Queue.Events[m_QueueTail] = Event;
  }
  KeReleaseSpinLock(&this->m_PowerMachine.m_QueueLock.m_Lock, v7);
  if ( v7 || ProcessOnDifferentThread )
    goto LABEL_19;
  Timeout.QuadPart = 0LL;
  KeEnterCriticalRegion();
  v10 = KeWaitForSingleObject(&this->m_PowerMachine.m_StateMachineLock, Executive, 0, 0, &Timeout);
  if ( v10 == 258 )
  {
    KeLeaveCriticalRegion();
  }
  else
  {
    this->m_PowerMachine.m_StateMachineLock.m_OwningThread = KeGetCurrentThread();
    v11 = 1;
    if ( v10 >= 0 )
      goto LABEL_11;
  }
  v11 = 0;
LABEL_11:
  if ( !v11 )
  {
LABEL_19:
    FxThreadedEventQueue::QueueToThread(&this->m_PowerMachine);
    return;
  }
  info.m_Event = 0LL;
  *(_WORD *)&info.m_DeleteObject = 0;
  info.m_FireAndForgetIrp = 0LL;
  FxPkgPnp::PowerProcessEventInner(this, &info);
  this->m_PowerMachine.m_StateMachineLock.m_OwningThread = 0LL;
  KeSetEvent(&this->m_PowerMachine.m_StateMachineLock.m_Event.m_Event, 0, 0);
  KeLeaveCriticalRegion();
  if ( info.m_SetRemovedEvent )
  {
    m_DeviceRemoveProcessed = (FxCREvent *)this->m_DeviceRemoveProcessed;
LABEL_18:
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
    goto LABEL_18;
}
