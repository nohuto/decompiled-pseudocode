/*
 * XREFs of Usbh_HubDerefDeviceHandle @ 0x140033290
 * Callers:
 *     UsbhUnlinkPdoDeviceHandle @ 0x140015900 (UsbhUnlinkPdoDeviceHandle.c)
 *     UsbhCreateDevice @ 0x140017858 (UsbhCreateDevice.c)
 *     UsbhGetHubDeviceInformation @ 0x14003C0B0 (UsbhGetHubDeviceInformation.c)
 *     UsbhInitializeTtHub @ 0x14003CCEC (UsbhInitializeTtHub.c)
 *     UsbhFdoHandleGetDumpDataIoctl @ 0x14003F88C (UsbhFdoHandleGetDumpDataIoctl.c)
 * Callees:
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 *     _guard_dispatch_icall @ 0x140060F80 (_guard_dispatch_icall.c)
 */

_DWORD *__fastcall Usbh_HubDerefDeviceHandle(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  _DWORD *result; // rax

  result = FdoExt(a1);
  if ( *((_QWORD *)result + 559) )
    return (_DWORD *)(*((__int64 (__fastcall **)(_QWORD, __int64, __int64, _QWORD))result + 559))(
                       *((_QWORD *)result + 529),
                       a2,
                       a3,
                       a4);
  return result;
}
