/*
 * XREFs of ?_DispatchWaitWake@FxPkgPnp@@KAJPEAV1@PEAVFxIrp@@@Z @ 0x140003110
 * Callers:
 *     <none>
 * Callees:
 *     ?DispatchWaitWake@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x140003128 (-DispatchWaitWake@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z.c)
 */

int __fastcall FxPkgPnp::_DispatchWaitWake(FxPkgPnp *This, FxIrp *Irp)
{
  return FxPkgPnp::DispatchWaitWake(This, Irp);
}
