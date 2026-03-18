/*
 * XREFs of ?PnpEnableInterfacesAndRegisterWmi@FxPkgPnp@@IEAAJXZ @ 0x14006ED64
 * Callers:
 *     ?PnpEventEnableInterfaces@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x14006ED40 (-PnpEventEnableInterfaces@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 * Callees:
 *     ?AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z @ 0x14001A750 (-AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z.c)
 *     ?ReleaseLock@FxWaitLockInternal@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x14001C030 (-ReleaseLock@FxWaitLockInternal@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Register@FxWmiIrpHandler@@QEAAJXZ @ 0x14006EDFC (-Register@FxWmiIrpHandler@@QEAAJXZ.c)
 *     ?SetState@FxDeviceInterface@@QEAAXE@Z @ 0x14006EED4 (-SetState@FxDeviceInterface@@QEAAXE@Z.c)
 *     ?SetInternalFailure@FxPkgPnp@@IEAAXXZ @ 0x140084394 (-SetInternalFailure@FxPkgPnp@@IEAAXXZ.c)
 */

__int64 __fastcall FxPkgPnp::PnpEnableInterfacesAndRegisterWmi(FxPkgPnp *this, _FX_DRIVER_GLOBALS *a2)
{
  FxWaitLockInternal *p_m_DeviceInterfaceLock; // rsi
  _FX_DRIVER_GLOBALS *v4; // rdx
  _SINGLE_LIST_ENTRY *Next; // rbx
  int v6; // ebx

  p_m_DeviceInterfaceLock = &this->m_DeviceInterfaceLock;
  FxWaitLockInternal::AcquireLock(&this->m_DeviceInterfaceLock, a2, 0LL);
  Next = this->m_DeviceInterfaceHead.Next;
  this->m_DeviceInterfacesCanBeEnabled = 1;
  while ( Next )
  {
    if ( BYTE1(Next[1].Next) )
      FxDeviceInterface::SetState((FxDeviceInterface *)&Next[-6], 1u);
    Next = Next->Next;
  }
  FxWaitLockInternal::ReleaseLock(p_m_DeviceInterfaceLock, v4);
  v6 = FxWmiIrpHandler::Register((FxWmiIrpHandler *)this->m_DeviceBase[3].m_ParentObject);
  if ( v6 < 0 )
  {
    FxPkgPnp::SetInternalFailure(this);
    this->m_PendingPnPIrp->IoStatus.Status = v6;
  }
  return (unsigned int)v6;
}
