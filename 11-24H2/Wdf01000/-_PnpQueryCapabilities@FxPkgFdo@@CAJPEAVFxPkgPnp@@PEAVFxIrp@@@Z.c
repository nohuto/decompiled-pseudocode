/*
 * XREFs of ?_PnpQueryCapabilities@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x140063010
 * Callers:
 *     <none>
 * Callees:
 *     ?PnpQueryCapabilities@FxPkgFdo@@AEAAJPEAVFxIrp@@@Z @ 0x140063028 (-PnpQueryCapabilities@FxPkgFdo@@AEAAJPEAVFxIrp@@@Z.c)
 */

int __fastcall FxPkgFdo::_PnpQueryCapabilities(FxPkgFdo *This, FxIrp *Irp)
{
  return FxPkgFdo::PnpQueryCapabilities(This, Irp);
}
