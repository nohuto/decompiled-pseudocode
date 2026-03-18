/*
 * XREFs of ?_PnpQueryCapabilities@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x14002D760
 * Callers:
 *     <none>
 * Callees:
 *     ?PnpQueryCapabilities@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z @ 0x14002D778 (-PnpQueryCapabilities@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z.c)
 */

int __fastcall FxPkgPdo::_PnpQueryCapabilities(FxPkgPdo *This, FxIrp *Irp)
{
  return FxPkgPdo::PnpQueryCapabilities(This, Irp);
}
