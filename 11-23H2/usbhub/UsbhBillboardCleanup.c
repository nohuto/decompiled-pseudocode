/*
 * XREFs of UsbhBillboardCleanup @ 0x1C00532D4
 * Callers:
 *     UsbhDeletePdo @ 0x1C005409C (UsbhDeletePdo.c)
 *     UsbhPdoPnp_SurpriseRemoveDevice @ 0x1C0056AC0 (UsbhPdoPnp_SurpriseRemoveDevice.c)
 * Callees:
 *     PdoExt @ 0x1C000A1D0 (PdoExt.c)
 *     UsbhFdoCleanupDeviceInterfaceForBillBoard @ 0x1C002A378 (UsbhFdoCleanupDeviceInterfaceForBillBoard.c)
 */

void __fastcall UsbhBillboardCleanup(PDEVICE_OBJECT Pdo)
{
  _DWORD *v2; // rbx
  void *v3; // rcx

  v2 = PdoExt((__int64)Pdo);
  if ( (v2[355] & 0x400) != 0 )
    IoSetDevicePropertyData(Pdo, &DEVPKEY_Device_UsbBillboardInfo, 0, 0, 0x1003u, 0, 0LL);
  ZwUpdateWnfStateData(&WNF_USB_BILLBOARD_CHANGE, 0LL, 0LL);
  UsbhFdoCleanupDeviceInterfaceForBillBoard(
    *((_QWORD *)v2 + 148),
    *((_WORD *)v2 + 714),
    (struct _UNICODE_STRING *)v2 + 151,
    (_BYTE *)v2 + 2432);
  v3 = (void *)*((_QWORD *)v2 + 303);
  if ( v3 )
  {
    ExFreePoolWithTag(v3, 0);
    *((_QWORD *)v2 + 303) = 0LL;
  }
  *((_QWORD *)v2 + 301) = 0LL;
}
