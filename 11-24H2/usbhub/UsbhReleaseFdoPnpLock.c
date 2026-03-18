/*
 * XREFs of UsbhReleaseFdoPnpLock @ 0x14002DDF4
 * Callers:
 *     UsbhIoctlGetDescriptorForPDO @ 0x140012028 (UsbhIoctlGetDescriptorForPDO.c)
 *     UsbhFdoSystemPowerState @ 0x14002D470 (UsbhFdoSystemPowerState.c)
 *     UsbhEtwRundown @ 0x14002DB8C (UsbhEtwRundown.c)
 *     UsbhInstallMsOs20RegistryProperties @ 0x1400426C0 (UsbhInstallMsOs20RegistryProperties.c)
 *     UsbhInstallMsOsExtendedProperties @ 0x1400427A0 (UsbhInstallMsOsExtendedProperties.c)
 *     UsbhAsyncStop @ 0x14004F168 (UsbhAsyncStop.c)
 *     Usbh_FDO_WaitPnpAdd @ 0x140050E50 (Usbh_FDO_WaitPnpAdd.c)
 *     Usbh_FDO_WaitPnpRemove @ 0x140050ED0 (Usbh_FDO_WaitPnpRemove.c)
 *     Usbh_FDO_WaitPnpRestart @ 0x140050F70 (Usbh_FDO_WaitPnpRestart.c)
 *     Usbh_FDO_WaitPnpStart @ 0x140051110 (Usbh_FDO_WaitPnpStart.c)
 *     Usbh_FDO_WaitPnpStop @ 0x140051310 (Usbh_FDO_WaitPnpStop.c)
 *     Usbh_FDO_WaitPnpStop_CB @ 0x140051480 (Usbh_FDO_WaitPnpStop_CB.c)
 *     Usbh_PnpRemove @ 0x1400515C4 (Usbh_PnpRemove.c)
 * Callees:
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 */

LONG __fastcall UsbhReleaseFdoPnpLock(__int64 a1, __int64 a2)
{
  struct _KSEMAPHORE *v3; // rbx

  v3 = (struct _KSEMAPHORE *)FdoExt(a1);
  FdoExt(*(_QWORD *)(a2 + 8));
  *(_DWORD *)(a2 + 48) = 1734964085;
  v3[41].Header.WaitListHead.Blink = 0LL;
  return KeReleaseSemaphore(v3 + 155, 16, 1, 0);
}
