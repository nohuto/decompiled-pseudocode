/*
 * XREFs of ?_PnpCompleteIrp@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1400A2CC0
 * Callers:
 *     <none>
 * Callees:
 *     ?CompletePnpRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z @ 0x1400161AC (-CompletePnpRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z.c)
 */

__int64 __fastcall FxPkgPdo::_PnpCompleteIrp(FxPkgPnp *This, FxIrp *Irp)
{
  return FxPkgPnp::CompletePnpRequest(This, Irp, Irp->m_Irp->IoStatus.Status);
}
