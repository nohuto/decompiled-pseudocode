/*
 * XREFs of UsbhSyncBusPause @ 0x1C0031870
 * Callers:
 *     UsbhHardReset_Action @ 0x1C003D0C8 (UsbhHardReset_Action.c)
 *     Usbh_HRS_Queued @ 0x1C003D9BC (Usbh_HRS_Queued.c)
 *     UsbhAsyncStop @ 0x1C00424CC (UsbhAsyncStop.c)
 *     Usbh_FDO_WaitPnpStop @ 0x1C0044890 (Usbh_FDO_WaitPnpStop.c)
 * Callees:
 *     FdoExt @ 0x1C000DEB0 (FdoExt.c)
 *     Log @ 0x1C000F210 (Log.c)
 *     UsbhDispatch_BusEvent @ 0x1C001CF30 (UsbhDispatch_BusEvent.c)
 */

__int64 __fastcall UsbhSyncBusPause(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rbx
  int v6; // eax
  unsigned int v7; // r10d

  v3 = a3;
  FdoExt(a1);
  Log(a1, 2048, 1346458174, v3, a2);
  *(_DWORD *)(a2 + 128) = v3;
  v6 = UsbhDispatch_BusEvent(a1, a2, 7);
  Log(a1, 2048, 1346458172, 0LL, v6);
  return v7;
}
