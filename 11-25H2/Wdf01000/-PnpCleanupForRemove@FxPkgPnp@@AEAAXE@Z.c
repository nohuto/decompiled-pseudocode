/*
 * XREFs of ?PnpCleanupForRemove@FxPkgPnp@@AEAAXE@Z @ 0x14006E8A0
 * Callers:
 *     ?PnpEventFailed@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x14006E870 (-PnpEventFailed@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 *     ?PnpEventRemovingDisableInterfaces@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1400A37E0 (-PnpEventRemovingDisableInterfaces@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 * Callees:
 *     ?SaveState@FxPkgPnp@@IEAAXE@Z @ 0x140019FA4 (-SaveState@FxPkgPnp@@IEAAXE@Z.c)
 *     ?AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z @ 0x14001A750 (-AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z.c)
 *     ?ProcessEvent@FxSelfManagedIoMachine@@IEAAJW4FxSelfManagedIoEvents@@PEAW4FxCxCallbackProgress@@@Z @ 0x14001AB4C (-ProcessEvent@FxSelfManagedIoMachine@@IEAAJW4FxSelfManagedIoEvents@@PEAW4FxCxCallbackProgress@@@.c)
 *     ?ReleaseLock@FxWaitLockInternal@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x14001C030 (-ReleaseLock@FxWaitLockInternal@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?StopProcessingForPower@FxPkgIo@@QEAAJW4FxIoStopProcessingForPowerAction@@@Z @ 0x14001C068 (-StopProcessingForPower@FxPkgIo@@QEAAJW4FxIoStopProcessingForPowerAction@@@Z.c)
 *     ?NotifyResourceobjectsToReleaseResources@FxPkgPnp@@AEAAXXZ @ 0x14006E98C (-NotifyResourceobjectsToReleaseResources@FxPkgPnp@@AEAAXXZ.c)
 *     ?Deregister@FxWmiIrpHandler@@QEAAXXZ @ 0x14006EA28 (-Deregister@FxWmiIrpHandler@@QEAAXXZ.c)
 *     ?SetState@FxDeviceInterface@@QEAAXE@Z @ 0x14006EED4 (-SetState@FxDeviceInterface@@QEAAXE@Z.c)
 *     ?PowerIndicateWaitWakeStatus@FxPkgPnp@@QEAAEJ@Z @ 0x14006F17C (-PowerIndicateWaitWakeStatus@FxPkgPnp@@QEAAEJ@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

void __fastcall FxPkgPnp::PnpCleanupForRemove(FxPkgPnp *this, unsigned __int8 GracefulRemove)
{
  _FX_DRIVER_GLOBALS *v4; // rdx
  _FX_DRIVER_GLOBALS *v5; // rdx
  _SINGLE_LIST_ENTRY *Next; // rdi
  __int64 v7; // rdx
  __int64 v8; // r8
  unsigned __int16 v9; // r9
  FxSelfManagedIoMachine *m_SelfManagedIoMachine; // rcx

  FxWmiIrpHandler::Deregister((FxWmiIrpHandler *)this->m_DeviceBase[3].m_ParentObject);
  FxWaitLockInternal::AcquireLock(&this->m_DeviceInterfaceLock, v4, 0LL);
  Next = this->m_DeviceInterfaceHead.Next;
  this->m_DeviceInterfacesCanBeEnabled = 0;
  while ( Next )
  {
    FxDeviceInterface::SetState((FxDeviceInterface *)&Next[-6], 0);
    Next = Next->Next;
  }
  FxWaitLockInternal::ReleaseLock(&this->m_DeviceInterfaceLock, v5);
  LOBYTE(v7) = GracefulRemove;
  this->DeleteSymbolicLinkOverload(this, v7);
  FxPkgIo::StopProcessingForPower((FxPkgIo *)this->m_DeviceBase[3].m_ChildListHead.Blink, 2u, v8, v9);
  m_SelfManagedIoMachine = this->m_SelfManagedIoMachine;
  if ( m_SelfManagedIoMachine )
    FxSelfManagedIoMachine::ProcessEvent(m_SelfManagedIoMachine, SelfManagedIoEventFlush, 0LL);
  FxPkgPnp::NotifyResourceobjectsToReleaseResources(this);
  FxPkgPnp::SaveState(this, 0);
  if ( this->m_SharedPower.m_WaitWakeOwner )
    FxPkgPnp::PowerIndicateWaitWakeStatus(this, -1073741810);
}
