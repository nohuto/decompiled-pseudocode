/*
 * XREFs of ?_PnpStartDevice@FxPkgPnp@@KAJPEAV1@PEAVFxIrp@@@Z @ 0x14003E030
 * Callers:
 *     <none>
 * Callees:
 *     ?PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z @ 0x14003D074 (-PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z.c)
 *     ?SetPendingPnpIrp@FxPkgPnp@@IEAAXPEAVFxIrp@@E@Z @ 0x14003DF60 (-SetPendingPnpIrp@FxPkgPnp@@IEAAXPEAVFxIrp@@E@Z.c)
 */

__int64 __fastcall FxPkgPnp::_PnpStartDevice(FxPkgPnp *This, FxIrp *Irp)
{
  unsigned __int8 v3; // r8

  FxPkgPnp::SetPendingPnpIrp(This, Irp, 1u);
  FxPkgPnp::PnpProcessEvent(This, PnpEventStartDevice, v3);
  return 259LL;
}
