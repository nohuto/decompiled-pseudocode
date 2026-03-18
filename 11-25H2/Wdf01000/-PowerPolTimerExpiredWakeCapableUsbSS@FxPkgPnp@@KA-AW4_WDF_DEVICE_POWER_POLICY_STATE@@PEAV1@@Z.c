/*
 * XREFs of ?PowerPolTimerExpiredWakeCapableUsbSS@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x14003CB80
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerPolicySubmitUsbIdleNotification@FxPkgPnp@@IEAAXXZ @ 0x14003C454 (-PowerPolicySubmitUsbIdleNotification@FxPkgPnp@@IEAAXXZ.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolTimerExpiredWakeCapableUsbSS(FxPkgPnp *This)
{
  FxPkgPnp::PowerPolicySubmitUsbIdleNotification(This);
  return 1472LL;
}
