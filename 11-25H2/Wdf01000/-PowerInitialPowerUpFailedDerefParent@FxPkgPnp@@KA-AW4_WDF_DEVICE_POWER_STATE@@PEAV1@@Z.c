/*
 * XREFs of ?PowerInitialPowerUpFailedDerefParent@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1400A51F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FxPkgPnp::PowerInitialPowerUpFailedDerefParent(FxPkgPnp *This)
{
  This->PowerParentPowerDereference(This);
  return 837LL;
}
