/*
 * XREFs of ?FireAndForgetIrp@FxPkgPdo@@EEAAJPEAVFxIrp@@@Z @ 0x140002FD0
 * Callers:
 *     <none>
 * Callees:
 *     ?CompletePowerRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z @ 0x140004A8C (-CompletePowerRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z.c)
 *     ?CompletePnpRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z @ 0x14002D90C (-CompletePnpRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z.c)
 */

int __fastcall FxPkgPdo::FireAndForgetIrp(FxPkgPdo *this, FxIrp *Irp)
{
  int Status; // r8d

  Status = Irp->m_Irp->IoStatus.Status;
  if ( Irp->m_Irp->Tail.Overlay.CurrentStackLocation->MajorFunction == 22 )
    return FxPkgPnp::CompletePowerRequest(this, Irp, Status);
  else
    return FxPkgPnp::CompletePnpRequest(this, Irp, Status);
}
