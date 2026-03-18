/*
 * XREFs of GET_FDO_PNPSTATE @ 0x140039A5C
 * Callers:
 *     UsbhFdoSystemPowerState @ 0x14002D470 (UsbhFdoSystemPowerState.c)
 *     Usbh_FDO_WaitPnpAdd @ 0x140050E50 (Usbh_FDO_WaitPnpAdd.c)
 *     Usbh_FDO_WaitPnpRemove @ 0x140050ED0 (Usbh_FDO_WaitPnpRemove.c)
 *     Usbh_PnpRemove @ 0x1400515C4 (Usbh_PnpRemove.c)
 * Callees:
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 */

__int64 __fastcall GET_FDO_PNPSTATE(__int64 a1)
{
  FdoExt(*(_QWORD *)(a1 + 8));
  return (unsigned int)FdoExt(*(_QWORD *)(a1 + 8))[340];
}
