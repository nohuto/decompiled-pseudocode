/*
 * XREFs of ??1FxAutoIrp@@QEAA@XZ @ 0x14006B3D8
 * Callers:
 *     ?QueryForD3ColdInterface@FxPkgPnp@@QEAAXXZ @ 0x14004087C (-QueryForD3ColdInterface@FxPkgPnp@@QEAAXXZ.c)
 *     ?PnpDeviceUsageNotification@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x140077D68 (-PnpDeviceUsageNotification@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z.c)
 *     ??_GFxUsbIdleInfo@@QEAAPEAXI@Z @ 0x1400A795C (--_GFxUsbIdleInfo@@QEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FxAutoIrp::~FxAutoIrp(FxAutoIrp *this)
{
  _IRP *m_Irp; // rcx

  m_Irp = this->m_Irp;
  if ( m_Irp )
    IoFreeIrp(m_Irp);
}
