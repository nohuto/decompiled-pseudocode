/*
 * XREFs of HUBDSM_InstallingMsOs20RegistryValues @ 0x140023270
 * Callers:
 *     <none>
 * Callees:
 *     HUBMISC_InstallMsOs20RegistryProperties @ 0x140030774 (HUBMISC_InstallMsOs20RegistryProperties.c)
 */

__int64 __fastcall HUBDSM_InstallingMsOs20RegistryValues(__int64 a1)
{
  return HUBMISC_InstallMsOs20RegistryProperties(*(_QWORD *)(a1 + 960));
}
