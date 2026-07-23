/*
 * XREFs of PnpDriverObjectDereferenceComplete @ 0x140A87004
 * Callers:
 *     IopDeleteDriver @ 0x140A86F40 (IopDeleteDriver.c)
 * Callees:
 *     PnpRequestDeviceAction @ 0x140467508 (PnpRequestDeviceAction.c)
 */

__int64 PnpDriverObjectDereferenceComplete()
{
  void *v0; // rcx
  __int128 v2; // [rsp+40h] [rbp-18h] BYREF

  v2 = 0LL;
  v0 = (void *)*((_QWORD *)IopRootDeviceNode + 4);
  DWORD2(v2) = 38;
  return PnpRequestDeviceAction(v0, 2u, 0, &v2, 0LL, 0LL, 0LL);
}
