/*
 * XREFs of ?PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z @ 0x140005FE4
 * Callers:
 *     ?DrainFreeListHead@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1400313F4 (-DrainFreeListHead@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?EndScan@FxChildList@@QEAAXPEAK@Z @ 0x1400356AC (-EndScan@FxChildList@@QEAAXPEAK@Z.c)
 *     ?CleanupDeviceFromFailedCreate@FxPkgPnp@@QEAAXPEAVMxEvent@@@Z @ 0x140041BC0 (-CleanupDeviceFromFailedCreate@FxPkgPnp@@QEAAXPEAVMxEvent@@@Z.c)
 *     ?SendD0Notification@FxPowerIdleMachine@@IEAAXXZ @ 0x14005DC18 (-SendD0Notification@FxPowerIdleMachine@@IEAAXXZ.c)
 *     ?_PowerPolDevicePowerDownComplete@FxPkgPnp@@KAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x14006E900 (-_PowerPolDevicePowerDownComplete@FxPkgPnp@@KAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_S.c)
 *     ?_PnpStartDeviceCompletionRoutine@FxPkgFdo@@KAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x140071090 (-_PnpStartDeviceCompletionRoutine@FxPkgFdo@@KAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 *     ?_PnpStartDevice@FxPkgPnp@@KAJPEAV1@PEAVFxIrp@@@Z @ 0x140071160 (-_PnpStartDevice@FxPkgPnp@@KAJPEAV1@PEAVFxIrp@@@Z.c)
 *     ?PnpSurpriseRemoval@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x1400711A8 (-PnpSurpriseRemoval@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z.c)
 *     ?NotifyDeviceRemove@FxChildList@@QEAAXPEAJ@Z @ 0x140071F08 (-NotifyDeviceRemove@FxChildList@@QEAAXPEAJ@Z.c)
 *     ?_PnpRemoveDevice@FxPkgPnp@@KAJPEAV1@PEAVFxIrp@@@Z @ 0x140073290 (-_PnpRemoveDevice@FxPkgPnp@@KAJPEAV1@PEAVFxIrp@@@Z.c)
 *     ?PnpSendStartDeviceDownTheStackOverload@FxPkgFdo@@EEAAEXZ @ 0x140074E50 (-PnpSendStartDeviceDownTheStackOverload@FxPkgFdo@@EEAAEXZ.c)
 *     ?PnpEventFinal@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x140079B50 (-PnpEventFinal@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 *     ?PowerPolRemoved@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x14007B260 (-PowerPolRemoved@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?FinishInitialize@FxPkgPnp@@UEAAXPEAUWDFDEVICE_INIT@@@Z @ 0x14007B2F0 (-FinishInitialize@FxPkgPnp@@UEAAXPEAUWDFDEVICE_INIT@@@Z.c)
 *     ?NotPowerPolOwnerStarted@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x14007BAA0 (-NotPowerPolOwnerStarted@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?NotPowerPolOwnerStoppingSendStatus@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x14007CE40 (-NotPowerPolOwnerStoppingSendStatus@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?NotPowerPolOwnerRemoved@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x14007D2A0 (-NotPowerPolOwnerRemoved@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolStartingSucceeded@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x14007D2C0 (-PowerPolStartingSucceeded@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolStoppingSendStatus@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x14007D910 (-PowerPolStoppingSendStatus@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?_PnpEject@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1400A2DB0 (-_PnpEject@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 *     ?PowerSendPowerDownFailureEvent@FxPkgPnp@@IEAAXW4FxPowerDownType@@@Z @ 0x1400A5494 (-PowerSendPowerDownFailureEvent@FxPkgPnp@@IEAAXW4FxPowerDownType@@@Z.c)
 *     ?PowerSendPowerUpFailureEvent@FxPkgPnp@@IEAAXXZ @ 0x1400A5514 (-PowerSendPowerUpFailureEvent@FxPkgPnp@@IEAAXXZ.c)
 *     ?_PnpCancelRemoveDevice@FxPkgPnp@@KAJPEAV1@PEAVFxIrp@@@Z @ 0x1400A6680 (-_PnpCancelRemoveDevice@FxPkgPnp@@KAJPEAV1@PEAVFxIrp@@@Z.c)
 *     ?_PnpCancelStopDevice@FxPkgPnp@@KAJPEAV1@PEAVFxIrp@@@Z @ 0x1400A66C0 (-_PnpCancelStopDevice@FxPkgPnp@@KAJPEAV1@PEAVFxIrp@@@Z.c)
 *     ?_PnpQueryRemoveDevice@FxPkgPnp@@KAJPEAV1@PEAVFxIrp@@@Z @ 0x1400A6700 (-_PnpQueryRemoveDevice@FxPkgPnp@@KAJPEAV1@PEAVFxIrp@@@Z.c)
 *     ?_PnpQueryStopDevice@FxPkgPnp@@KAJPEAV1@PEAVFxIrp@@@Z @ 0x1400A6740 (-_PnpQueryStopDevice@FxPkgPnp@@KAJPEAV1@PEAVFxIrp@@@Z.c)
 *     ?_PnpStopDevice@FxPkgPnp@@KAJPEAV1@PEAVFxIrp@@@Z @ 0x1400A6770 (-_PnpStopDevice@FxPkgPnp@@KAJPEAV1@PEAVFxIrp@@@Z.c)
 *     ?PowerPolDeviceD0PowerRequestFailed@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1400A7C00 (-PowerPolDeviceD0PowerRequestFailed@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolRestartingFailed@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1400A7E50 (-PowerPolRestartingFailed@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolSleepingNoWakeDxRequestFailed@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1400A7EB0 (-PowerPolSleepingNoWakeDxRequestFailed@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolStartingFailed@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1400A8250 (-PowerPolStartingFailed@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?NotPowerPolOwnerStartingFailed@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1400AA690 (-NotPowerPolOwnerStartingFailed@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?NotPowerPolOwnerStoppingFailed@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1400AA6B0 (-NotPowerPolOwnerStoppingFailed@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 * Callees:
 *     ?Evaluate@FxPostProcessInfo@@QEAAXPEAVFxPkgPnp@@@Z @ 0x14000545C (-Evaluate@FxPostProcessInfo@@QEAAXPEAVFxPkgPnp@@@Z.c)
 *     ?PnpProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z @ 0x140006220 (-PnpProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z.c)
 *     ?FxBreakOnPnpEvent@@YAXPEAVFxPkgPnp@@W4FxPnpEvent@@@Z @ 0x140006488 (-FxBreakOnPnpEvent@@YAXPEAVFxPkgPnp@@W4FxPnpEvent@@@Z.c)
 *     ?QueueToThread@FxWorkItemEventQueue@@QEAAXXZ @ 0x140006708 (-QueueToThread@FxWorkItemEventQueue@@QEAAXXZ.c)
 *     WPP_IFR_SF_qqLL @ 0x1400251E0 (WPP_IFR_SF_qqLL.c)
 *     ?ReleaseLock@FxWaitLockInternal@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140033950 (-ReleaseLock@FxWaitLockInternal@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall FxPkgPnp::PnpProcessEvent(FxPkgPnp *this, FxPnpEvent Event, unsigned __int8 a3)
{
  KIRQL v5; // bp
  __int64 m_QueueTail; // rcx
  int v7; // r9d
  NTSTATUS v8; // ecx
  char v9; // al
  _FX_DRIVER_GLOBALS *v10; // rdx
  FxDeviceBase *v11; // rdx
  const void *_a1; // rcx
  FxDeviceBase *m_DeviceBase; // r10
  const void *v14; // r8
  FxPostProcessInfo info; // [rsp+50h] [rbp-38h] BYREF
  _LARGE_INTEGER Timeout; // [rsp+90h] [rbp+8h] BYREF

  FxBreakOnPnpEvent(this, Event);
  v5 = KeAcquireSpinLockRaiseToDpc(&this->m_PnpMachine.m_QueueLock.m_Lock);
  m_QueueTail = this->m_PnpMachine.m_QueueTail;
  v7 = (this->m_PnpMachine.m_QueueDepth + this->m_PnpMachine.m_QueueHead - 1) % this->m_PnpMachine.m_QueueDepth;
  if ( v7 == this->m_PnpMachine.m_QueueTail % (unsigned int)this->m_PnpMachine.m_QueueDepth )
  {
    m_DeviceBase = this->m_DeviceBase;
    v14 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_DeviceBase->m_ObjectSize )
      v14 = 0LL;
    WPP_IFR_SF_qqLL(
      this->m_Globals,
      4u,
      0xCu,
      0xAu,
      WPP_PnpStateMachine_cpp_Traceguids,
      v14,
      m_DeviceBase->m_DeviceObject.m_DeviceObject,
      (unsigned int)m_DeviceBase[1].FxNonPagedObject::FxObject::__vftable,
      Event);
    goto LABEL_17;
  }
  if ( (this->m_PnpMachine.m_QueueFlags & 2) != 0 )
  {
    v11 = this->m_DeviceBase;
    _a1 = (const void *)((unsigned __int64)v11 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v11->m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_qqLL(
      this->m_Globals,
      4u,
      0xCu,
      0xBu,
      WPP_PnpStateMachine_cpp_Traceguids,
      _a1,
      v11->m_DeviceObject.m_DeviceObject,
      (unsigned int)v11[1].FxNonPagedObject::FxObject::__vftable,
      Event);
LABEL_17:
    KeReleaseSpinLock(&this->m_PnpMachine.m_QueueLock.m_Lock, v5);
    return;
  }
  if ( (Event & 0x3C3000) != 0 )
  {
    this->m_PnpMachine.m_QueueHead = v7;
    this->m_PnpMachine.m_Queue[(unsigned __int8)v7] = Event;
  }
  else
  {
    this->m_PnpMachine.m_QueueTail = ((int)m_QueueTail + 1) % (unsigned int)this->m_PnpMachine.m_QueueDepth;
    this->m_PnpMachine.m_Queue[m_QueueTail] = Event;
  }
  KeReleaseSpinLock(&this->m_PnpMachine.m_QueueLock.m_Lock, v5);
  if ( v5 )
    goto LABEL_9;
  Timeout.QuadPart = 0LL;
  KeEnterCriticalRegion();
  v8 = KeWaitForSingleObject(&this->m_PnpMachine.m_StateMachineLock, Executive, 0, 0, &Timeout);
  if ( v8 == 258 )
  {
    KeLeaveCriticalRegion();
    goto LABEL_13;
  }
  this->m_PnpMachine.m_StateMachineLock.m_OwningThread = KeGetCurrentThread();
  v9 = 1;
  if ( v8 < 0 )
LABEL_13:
    v9 = 0;
  if ( !v9 )
  {
LABEL_9:
    FxWorkItemEventQueue::QueueToThread(&this->m_PnpMachine);
    return;
  }
  info.m_Event = 0LL;
  *(_WORD *)&info.m_DeleteObject = 0;
  info.m_FireAndForgetIrp = 0LL;
  FxPkgPnp::PnpProcessEventInner(this, &info);
  FxWaitLockInternal::ReleaseLock(&this->m_PnpMachine.m_StateMachineLock, v10);
  FxPostProcessInfo::Evaluate(&info, this);
}
