/*
 * XREFs of ?ProcessRemoveDeviceOverload@FxPkgPdo@@EEAAJPEAVFxIrp@@@Z @ 0x14003E640
 * Callers:
 *     <none>
 * Callees:
 *     ?CompletePnpRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z @ 0x14002D90C (-CompletePnpRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z.c)
 *     ?CleanupStateMachines@FxPkgPnp@@QEAAXE@Z @ 0x14003EF90 (-CleanupStateMachines@FxPkgPnp@@QEAAXE@Z.c)
 *     ?DeleteDevice@FxPkgPnp@@IEAAXXZ @ 0x140040E74 (-DeleteDevice@FxPkgPnp@@IEAAXXZ.c)
 */

__int64 __fastcall FxPkgPdo::ProcessRemoveDeviceOverload(FxPkgPdo *this, FxIrp *Irp)
{
  if ( this->m_CanBeDeleted )
  {
    IoReleaseRemoveLockAndWaitEx(
      (PIO_REMOVE_LOCK)&this->m_DeviceBase->m_DeviceObject.m_DeviceObject[1],
      Irp->m_Irp,
      0x20u);
    FxPkgPnp::CleanupStateMachines(this, 1u);
    FxPkgPnp::DeleteDevice(this);
    IofCompleteRequest(Irp->m_Irp, 0);
    Irp->m_Irp = 0LL;
    return 0LL;
  }
  else
  {
    this->m_DeviceRemoveProcessed = 0LL;
    return FxPkgPnp::CompletePnpRequest(this, Irp, Irp->m_Irp->IoStatus.Status);
  }
}
