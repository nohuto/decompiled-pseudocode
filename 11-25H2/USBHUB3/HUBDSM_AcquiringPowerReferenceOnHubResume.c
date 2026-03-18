/*
 * XREFs of HUBDSM_AcquiringPowerReferenceOnHubResume @ 0x14001F9E0
 * Callers:
 *     <none>
 * Callees:
 *     HUBMUX_AcquireDevicePowerReference @ 0x1400106D4 (HUBMUX_AcquireDevicePowerReference.c)
 */

__int64 __fastcall HUBDSM_AcquiringPowerReferenceOnHubResume(__int64 a1)
{
  HUBMUX_AcquireDevicePowerReference(*(volatile signed __int32 **)(a1 + 960));
  return 4077LL;
}
