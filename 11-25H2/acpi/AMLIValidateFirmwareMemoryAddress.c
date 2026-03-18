/*
 * XREFs of AMLIValidateFirmwareMemoryAddress @ 0x14006AE58
 * Callers:
 *     AcpiValidatePepDeviceControlResources @ 0x1400A2104 (AcpiValidatePepDeviceControlResources.c)
 * Callees:
 *     AmlpValidateFirmwareMemoryAddress @ 0x140034730 (AmlpValidateFirmwareMemoryAddress.c)
 */

__int64 __fastcall AMLIValidateFirmwareMemoryAddress(const void **a1, unsigned int a2)
{
  return AmlpValidateFirmwareMemoryAddress(a1, a2);
}
