/*
 * XREFs of ?_PnpQueryStopDevice@FxPkgPnp@@KAJPEAV1@PEAVFxIrp@@@Z @ 0x1400A6670
 * Callers:
 *     <none>
 * Callees:
 *     ?PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z @ 0x14003D074 (-PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z.c)
 *     ?SetPendingPnpIrp@FxPkgPnp@@IEAAXPEAVFxIrp@@E@Z @ 0x14003DF60 (-SetPendingPnpIrp@FxPkgPnp@@IEAAXPEAVFxIrp@@E@Z.c)
 */

__int64 __fastcall FxPkgPnp::_PnpQueryStopDevice(FxPkgPnp *This, FxIrp *Irp)
{
  unsigned __int8 v3; // r8

  FxPkgPnp::SetPendingPnpIrp(This, Irp, 1u);
  FxPkgPnp::PnpProcessEvent(This, PnpEventQueryStop, v3);
  return 259LL;
}
