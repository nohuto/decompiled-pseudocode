/*
 * XREFs of HUBDSM_FailedDeviceHubSuspended @ 0x140021630
 * Callers:
 *     <none>
 * Callees:
 *     HUBMUX_ReleaseDevicePowerReference @ 0x140011D8C (HUBMUX_ReleaseDevicePowerReference.c)
 */

__int64 __fastcall HUBDSM_FailedDeviceHubSuspended(__int64 a1)
{
  HUBMUX_ReleaseDevicePowerReference(*(volatile signed __int32 **)(a1 + 960));
  return 1000LL;
}
