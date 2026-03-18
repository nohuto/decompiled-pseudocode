/*
 * XREFs of Usbh_HubRemoveUsbDevice @ 0x140048868
 * Callers:
 *     UsbhUnlinkPdoDeviceHandle @ 0x140015900 (UsbhUnlinkPdoDeviceHandle.c)
 *     UsbhCreateDevice @ 0x140017858 (UsbhCreateDevice.c)
 * Callees:
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 *     _guard_dispatch_icall @ 0x140060F80 (_guard_dispatch_icall.c)
 */

_DWORD *__fastcall Usbh_HubRemoveUsbDevice(__int64 a1, __int64 a2)
{
  _DWORD *result; // rax

  result = FdoExt(a1);
  if ( *((_QWORD *)result + 535) )
    return (_DWORD *)(*((__int64 (__fastcall **)(_QWORD, __int64, _QWORD))result + 535))(
                       *((_QWORD *)result + 529),
                       a2,
                       0LL);
  return result;
}
