/*
 * XREFs of Usbh_PnpRemove @ 0x1400515C4
 * Callers:
 *     Usbh_FDO_WaitPnpAdd @ 0x140050E50 (Usbh_FDO_WaitPnpAdd.c)
 *     Usbh_FDO_WaitPnpRemove @ 0x140050ED0 (Usbh_FDO_WaitPnpRemove.c)
 *     Usbh_FDO_WaitPnpRestart @ 0x140050F70 (Usbh_FDO_WaitPnpRestart.c)
 *     Usbh_FDO_WaitPnpStart @ 0x140051110 (Usbh_FDO_WaitPnpStart.c)
 *     Usbh_FDO_WaitPnpStop @ 0x140051310 (Usbh_FDO_WaitPnpStop.c)
 *     Usbh_FDO_WaitPnpStop_CB @ 0x140051480 (Usbh_FDO_WaitPnpStop_CB.c)
 * Callees:
 *     UsbhDispatch_BusEvent @ 0x14001FC5C (UsbhDispatch_BusEvent.c)
 *     UsbhReleaseFdoPnpLock @ 0x14002DDF4 (UsbhReleaseFdoPnpLock.c)
 *     GET_FDO_PNPSTATE @ 0x140039A5C (GET_FDO_PNPSTATE.c)
 *     UsbhReferenceListClose @ 0x14004E404 (UsbhReferenceListClose.c)
 *     UsbhModuleDispatch @ 0x14005084C (UsbhModuleDispatch.c)
 *     UsbhSetFdoPnpState @ 0x140050CB4 (UsbhSetFdoPnpState.c)
 */

__int64 __fastcall Usbh_PnpRemove(__int64 a1, int a2)
{
  __int64 v4; // rdx

  GET_FDO_PNPSTATE(a1);
  UsbhSetFdoPnpState(*(_QWORD *)(a1 + 8), 3, a2);
  UsbhReleaseFdoPnpLock(*(_QWORD *)(a1 + 8), a1);
  UsbhDispatch_BusEvent(*(struct _DEVICE_OBJECT **)(a1 + 8), a1, 12);
  UsbhReferenceListClose(*(_QWORD *)(a1 + 8));
  UsbhModuleDispatch(0LL, v4, *(struct _DRIVER_OBJECT **)(a1 + 8), 2, 0LL, a1);
  return 0LL;
}
