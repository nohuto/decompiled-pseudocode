/*
 * XREFs of PnpInitializeProcessor @ 0x1405A0E0C
 * Callers:
 *     KeStartDynamicProcessor @ 0x14073A410 (KeStartDynamicProcessor.c)
 * Callees:
 *     PnpRequestDeviceAction @ 0x140467508 (PnpRequestDeviceAction.c)
 */

__int64 PnpInitializeProcessor()
{
  void *v0; // rcx
  __int128 v2; // [rsp+40h] [rbp-18h] BYREF

  v2 = 0LL;
  v0 = (void *)*((_QWORD *)IopRootDeviceNode + 4);
  DWORD2(v2) = 1;
  PnpRequestDeviceAction(v0, 6u, 0, &v2, 0LL, 0LL, 0LL);
  return 0LL;
}
