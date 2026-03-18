/*
 * XREFs of PiDcHandleSystemFirmwareUpdate @ 0x1407276C0
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140C1F07C (IopInitializePlugPlayServices.c)
 * Callees:
 *     PiDcContainerRequiresConfiguration @ 0x140A9E6E0 (PiDcContainerRequiresConfiguration.c)
 */

__int64 PiDcHandleSystemFirmwareUpdate()
{
  return PiDcContainerRequiresConfiguration((wchar_t *)L"{00000000-0000-0000-FFFF-FFFFFFFFFFFF}");
}
