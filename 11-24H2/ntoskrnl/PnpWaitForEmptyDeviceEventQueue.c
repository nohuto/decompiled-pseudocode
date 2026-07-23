/*
 * XREFs of PnpWaitForEmptyDeviceEventQueue @ 0x1406F8A00
 * Callers:
 *     IopInitializeBootDrivers @ 0x140C20504 (IopInitializeBootDrivers.c)
 *     PipInitializeCoreDriversByGroup @ 0x140C65698 (PipInitializeCoreDriversByGroup.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 */

NTSTATUS PnpWaitForEmptyDeviceEventQueue()
{
  return KeWaitForSingleObject(&PnpEventQueueEmpty, Executive, 0, 0, 0LL);
}
