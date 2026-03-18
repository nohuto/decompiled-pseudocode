/*
 * XREFs of ?PowerPolSleepingWakePowerDownFailedWakeCanceled@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1400A7DC0
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerPolicyCompleteSystemPowerIrp@FxPkgPnp@@IEAAXXZ @ 0x1400038B8 (-PowerPolicyCompleteSystemPowerIrp@FxPkgPnp@@IEAAXXZ.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolSleepingWakePowerDownFailedWakeCanceled(FxPkgPnp *This)
{
  FxPkgPnp::PowerPolicyCompleteSystemPowerIrp(This);
  return 1390LL;
}
