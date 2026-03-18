/*
 * XREFs of UsbhPdoAbortAllDevicePipes @ 0x1C001A1D0
 * Callers:
 *     UsbhPdoSetDx @ 0x1C001ACC4 (UsbhPdoSetDx.c)
 *     Usbh_PdoSurpriseRemove_PdoEvent @ 0x1C003B488 (Usbh_PdoSurpriseRemove_PdoEvent.c)
 * Callees:
 *     FdoExt @ 0x1C000DEB0 (FdoExt.c)
 *     UsbhRefPdoDeviceHandle @ 0x1C0019C20 (UsbhRefPdoDeviceHandle.c)
 *     UsbhDerefPdoDeviceHandle @ 0x1C0019ED0 (UsbhDerefPdoDeviceHandle.c)
 *     _guard_dispatch_icall_nop @ 0x1C0023500 (_guard_dispatch_icall_nop.c)
 */

void __fastcall UsbhPdoAbortAllDevicePipes(__int64 a1, __int64 a2)
{
  __int64 v4; // rdi
  _DWORD *v5; // rax

  v4 = UsbhRefPdoDeviceHandle(a1, a2, a2, 0x44726261u);
  if ( v4 )
  {
    v5 = FdoExt(a1);
    if ( *((_QWORD *)v5 + 564) )
      (*((void (__fastcall **)(_QWORD, __int64))v5 + 564))(*((_QWORD *)v5 + 529), v4);
    UsbhDerefPdoDeviceHandle(a1, v4, a2, 0x44726261u);
  }
}
