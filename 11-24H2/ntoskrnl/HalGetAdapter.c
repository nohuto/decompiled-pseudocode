/*
 * XREFs of HalGetAdapter @ 0x1406FB100
 * Callers:
 *     <none>
 * Callees:
 *     HalpGetAdapter @ 0x1406FB11C (HalpGetAdapter.c)
 */

PADAPTER_OBJECT __stdcall HalGetAdapter(PDEVICE_DESCRIPTION DeviceDescription, PULONG NumberOfMapRegisters)
{
  return (PADAPTER_OBJECT)HalpGetAdapter(DeviceDescription, 0LL, NumberOfMapRegisters);
}
