/*
 * XREFs of ?PowerInitialPowerUpFailed@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1400A52A0
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerSendPowerUpFailureEvent@FxPkgPnp@@IEAAXXZ @ 0x1400A5514 (-PowerSendPowerUpFailureEvent@FxPkgPnp@@IEAAXXZ.c)
 */

__int64 __fastcall FxPkgPnp::PowerInitialPowerUpFailed(FxPkgPnp *This)
{
  FxPkgPnp::PowerSendPowerUpFailureEvent(This);
  return 789LL;
}
