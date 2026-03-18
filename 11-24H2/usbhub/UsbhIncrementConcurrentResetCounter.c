/*
 * XREFs of UsbhIncrementConcurrentResetCounter @ 0x14004B8F8
 * Callers:
 *     UsbhDispatch_HardResetEvent @ 0x1400376CC (UsbhDispatch_HardResetEvent.c)
 *     Usbh_HRS_Queued @ 0x14004BEAC (Usbh_HRS_Queued.c)
 * Callees:
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 */

_DWORD *__fastcall UsbhIncrementConcurrentResetCounter(__int64 a1)
{
  _DWORD *result; // rax

  result = FdoExt(a1);
  if ( (int)++result[1316] > 20 )
    KeBugCheckEx(0xFEu, 0xAuLL, 1uLL, 1uLL, 0LL);
  return result;
}
