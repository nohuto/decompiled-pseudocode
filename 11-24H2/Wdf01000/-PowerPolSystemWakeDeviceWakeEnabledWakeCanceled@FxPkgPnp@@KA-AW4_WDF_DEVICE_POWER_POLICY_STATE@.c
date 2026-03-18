/*
 * XREFs of ?PowerPolSystemWakeDeviceWakeEnabledWakeCanceled@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x14007AD20
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerPolicySendDevicePowerRequest@FxPkgPnp@@IEAAJW4_DEVICE_POWER_STATE@@W4SendDeviceRequestAction@@W4RequestDIrpReason@@@Z @ 0x1400302FC (-PowerPolicySendDevicePowerRequest@FxPkgPnp@@IEAAJW4_DEVICE_POWER_STATE@@W4SendDeviceRequestActi.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolSystemWakeDeviceWakeEnabledWakeCanceled(FxPkgPnp *This)
{
  int v1; // eax
  unsigned int v2; // ecx

  v1 = FxPkgPnp::PowerPolicySendDevicePowerRequest(This, (POWER_STATE)1, Retry, RequestD0ForS0);
  v2 = 1472;
  if ( v1 < 0 )
    return 1470;
  return v2;
}
