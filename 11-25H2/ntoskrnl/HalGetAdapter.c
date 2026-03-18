/*
 * XREFs of HalGetAdapter @ 0x1406F16D0
 * Callers:
 *     <none>
 * Callees:
 *     HalpGetAdapter @ 0x1406F16EC (HalpGetAdapter.c)
 */

PADAPTER_OBJECT __stdcall HalGetAdapter(PDEVICE_DESCRIPTION DeviceDescription, PULONG NumberOfMapRegisters)
{
  return (PADAPTER_OBJECT)HalpGetAdapter(DeviceDescription, 0LL, NumberOfMapRegisters);
}
