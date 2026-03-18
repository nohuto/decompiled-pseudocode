/*
 * XREFs of UsbhCheck4GlobalErrata @ 0x140059FFC
 * Callers:
 *     UsbhGetUsbDeviceFlags @ 0x1400255F4 (UsbhGetUsbDeviceFlags.c)
 * Callees:
 *     PdoExt @ 0x140006D10 (PdoExt.c)
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 *     UsbhApplyDeviceFix @ 0x140059F08 (UsbhApplyDeviceFix.c)
 */

_DWORD *__fastcall UsbhCheck4GlobalErrata(__int64 a1, __int64 a2)
{
  _DWORD *result; // rax

  FdoExt(a1);
  result = PdoExt(a2);
  if ( dword_14006F6B4 )
    result = UsbhApplyDeviceFix(a1, a2, 3);
  if ( dword_14006F6B8 )
    return UsbhApplyDeviceFix(a1, a2, 4);
  return result;
}
