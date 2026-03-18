/*
 * XREFs of ?PowerDxDisablingWakeAtBusNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1400A4D70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FxPkgPnp::PowerDxDisablingWakeAtBusNP(FxPkgPnp *This)
{
  This->PowerDisableWakeAtBusOverload(This);
  return 33588LL;
}
