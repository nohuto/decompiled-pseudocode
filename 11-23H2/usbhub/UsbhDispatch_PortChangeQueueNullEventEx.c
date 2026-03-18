/*
 * XREFs of UsbhDispatch_PortChangeQueueNullEventEx @ 0x1C0014CD0
 * Callers:
 *     UsbhHubRunPortChangeQueue @ 0x1C0013CC0 (UsbhHubRunPortChangeQueue.c)
 * Callees:
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C0014330 (UsbhDispatch_PortChangeQueueEventEx.c)
 */

int *__fastcall UsbhDispatch_PortChangeQueueNullEventEx(__int64 a1, __int64 a2, int a3, __int64 a4, int *a5)
{
  return UsbhDispatch_PortChangeQueueEventEx(a1, a2, a3, a4, 0LL, 0, 0LL, a5);
}
