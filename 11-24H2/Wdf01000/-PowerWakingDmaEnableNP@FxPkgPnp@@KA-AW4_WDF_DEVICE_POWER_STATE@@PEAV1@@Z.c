/*
 * XREFs of ?PowerWakingDmaEnableNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x14007A590
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerDmaEnableAndScan@FxPkgPnp@@IEAAEXZ @ 0x1400316D4 (-PowerDmaEnableAndScan@FxPkgPnp@@IEAAEXZ.c)
 */

__int64 __fastcall FxPkgPnp::PowerWakingDmaEnableNP(FxPkgPnp *This)
{
  return FxPkgPnp::PowerDmaEnableAndScan(This) != 0 ? 33636 : 33596;
}
