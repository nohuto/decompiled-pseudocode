/*
 * XREFs of ?_PnpSurpriseRemoval@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x14003F1F0
 * Callers:
 *     <none>
 * Callees:
 *     ?PnpSurpriseRemoval@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x14003DF28 (-PnpSurpriseRemoval@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z.c)
 *     ?DeviceSurpriseRemoved@FxDeviceDescriptionEntry@@QEAAXXZ @ 0x14003F22C (-DeviceSurpriseRemoved@FxDeviceDescriptionEntry@@QEAAXXZ.c)
 */

__int64 __fastcall FxPkgPdo::_PnpSurpriseRemoval(FxPkgPnp *This, FxIrp *Irp)
{
  FxDeviceDescriptionEntry::DeviceSurpriseRemoved((FxDeviceDescriptionEntry *)This[1].m_Globals);
  return FxPkgPnp::PnpSurpriseRemoval(This, Irp);
}
