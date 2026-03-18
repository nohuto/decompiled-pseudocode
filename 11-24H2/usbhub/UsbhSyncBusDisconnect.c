/*
 * XREFs of UsbhSyncBusDisconnect @ 0x140039434
 * Callers:
 *     UsbhFdoD0Worker_Action @ 0x14002D060 (UsbhFdoD0Worker_Action.c)
 *     UsbhHardReset_Action @ 0x14004B668 (UsbhHardReset_Action.c)
 *     Usbh_HRS_Queued @ 0x14004BEAC (Usbh_HRS_Queued.c)
 * Callees:
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 *     UsbhDispatch_BusEvent @ 0x14001FC5C (UsbhDispatch_BusEvent.c)
 *     Log @ 0x1400298B0 (Log.c)
 */

__int64 __fastcall UsbhSyncBusDisconnect(struct _DEVICE_OBJECT *a1, __int64 a2)
{
  int v4; // r9d
  int v5; // eax
  unsigned int v6; // r10d

  FdoExt((__int64)a1);
  Log((__int64)a1, 2048, 1111774014, 0LL, 0LL);
  v5 = UsbhDispatch_BusEvent(a1, a2, v4 + 11);
  Log((__int64)a1, 2048, 1111774012, 0LL, v5);
  return v6;
}
