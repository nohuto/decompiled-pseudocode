/*
 * XREFs of ?PnpEventFailedInit@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1400A2F80
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleasePowerThread@FxPkgPnp@@AEAAXXZ @ 0x14004B044 (-ReleasePowerThread@FxPkgPnp@@AEAAXXZ.c)
 *     ?PnpFinishProcessingIrp@FxPkgPnp@@IEAAXE@Z @ 0x140073638 (-PnpFinishProcessingIrp@FxPkgPnp@@IEAAXE@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FxPkgPnp::PnpEventFailedInit(FxPkgPnp *This, unsigned __int8 a2)
{
  unsigned __int8 v3; // dl

  FxPkgPnp::ReleasePowerThread(This, a2);
  This->ReleaseReenumerationInterface(This);
  FxPkgPnp::PnpFinishProcessingIrp(This, v3);
  return 261LL;
}
