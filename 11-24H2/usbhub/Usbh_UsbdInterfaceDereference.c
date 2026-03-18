/*
 * XREFs of Usbh_UsbdInterfaceDereference @ 0x14003D950
 * Callers:
 *     UsbhGetDeviceBusInfo @ 0x14003B72C (UsbhGetDeviceBusInfo.c)
 *     UsbhBusIfRemoveDevice @ 0x140056C60 (UsbhBusIfRemoveDevice.c)
 * Callees:
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 *     _guard_dispatch_icall @ 0x140060F80 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall Usbh_UsbdInterfaceDereference(__int64 a1, __int64 a2))(__int64)
{
  __int64 (__fastcall *result)(__int64); // rax

  result = (__int64 (__fastcall *)(__int64))*((_QWORD *)FdoExt(a1) + 572);
  if ( result )
    return (__int64 (__fastcall *)(__int64))result(a2);
  return result;
}
