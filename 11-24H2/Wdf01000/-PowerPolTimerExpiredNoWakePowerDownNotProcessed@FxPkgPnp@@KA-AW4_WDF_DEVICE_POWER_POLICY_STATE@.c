/*
 * XREFs of ?PowerPolTimerExpiredNoWakePowerDownNotProcessed@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1400A8840
 * Callers:
 *     <none>
 * Callees:
 *     ?SetInternalFailure@FxPkgPnp@@IEAAXXZ @ 0x140084384 (-SetInternalFailure@FxPkgPnp@@IEAAXXZ.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolTimerExpiredNoWakePowerDownNotProcessed(FxPkgPnp *This)
{
  FxPkgPnp::SetInternalFailure(This);
  return 1416LL;
}
