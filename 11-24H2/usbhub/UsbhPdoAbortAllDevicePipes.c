/*
 * XREFs of UsbhPdoAbortAllDevicePipes @ 0x14001E4FC
 * Callers:
 *     UsbhPdoSetDx @ 0x14001F800 (UsbhPdoSetDx.c)
 *     Usbh_PdoSurpriseRemove_PdoEvent @ 0x140048BD8 (Usbh_PdoSurpriseRemove_PdoEvent.c)
 * Callees:
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 *     UsbhRefPdoDeviceHandle @ 0x14001E740 (UsbhRefPdoDeviceHandle.c)
 *     UsbhDerefPdoDeviceHandle @ 0x14001E9F0 (UsbhDerefPdoDeviceHandle.c)
 *     _guard_dispatch_icall @ 0x140060F80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall UsbhPdoAbortAllDevicePipes(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // rdi
  _DWORD *v6; // rax

  result = UsbhRefPdoDeviceHandle(a1, a2, a2, 1148346977LL);
  v5 = result;
  if ( result )
  {
    v6 = FdoExt(a1);
    if ( *((_QWORD *)v6 + 564) )
      (*((void (__fastcall **)(_QWORD, __int64))v6 + 564))(*((_QWORD *)v6 + 529), v5);
    return UsbhDerefPdoDeviceHandle(a1, v5, a2, 1148346977LL);
  }
  return result;
}
