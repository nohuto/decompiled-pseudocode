/*
 * XREFs of ?PowerDxStoppedDisarmWakeNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1400A4F80
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FxPkgPnp::PowerDxStoppedDisarmWakeNP(FxPkgPnp *This)
{
  This->PowerDisableWakeAtBusOverload(This);
  return 33608LL;
}
