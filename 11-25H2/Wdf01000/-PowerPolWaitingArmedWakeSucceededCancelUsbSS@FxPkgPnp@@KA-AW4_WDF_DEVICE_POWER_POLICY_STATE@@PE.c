/*
 * XREFs of ?PowerPolWaitingArmedWakeSucceededCancelUsbSS@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x140062830
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerPolicyCancelUsbSSIfCapable@FxPkgPnp@@IEAAEXZ @ 0x140062884 (-PowerPolicyCancelUsbSSIfCapable@FxPkgPnp@@IEAAEXZ.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolWaitingArmedWakeSucceededCancelUsbSS(FxPkgPnp *This)
{
  return FxPkgPnp::PowerPolicyCancelUsbSSIfCapable(This) != 0 ? 1472 : 1361;
}
