/*
 * XREFs of PiDcHandleSystemFirmwareUpdate @ 0x14071B740
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140C0DF14 (IopInitializePlugPlayServices.c)
 * Callees:
 *     PiDcContainerRequiresConfiguration @ 0x140A9989C (PiDcContainerRequiresConfiguration.c)
 */

__int64 PiDcHandleSystemFirmwareUpdate()
{
  return PiDcContainerRequiresConfiguration((int)L"{00000000-0000-0000-FFFF-FFFFFFFFFFFF}");
}
