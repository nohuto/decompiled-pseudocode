/*
 * XREFs of PnpWaitForEmptyDeviceActionQueue @ 0x1407212FC
 * Callers:
 *     PopGracefulShutdown @ 0x140B4BB18 (PopGracefulShutdown.c)
 *     IopInitializeBootDrivers @ 0x140C0D35C (IopInitializeBootDrivers.c)
 *     PnpWaitForDevicesToStart @ 0x140C11644 (PnpWaitForDevicesToStart.c)
 *     PipInitializeCoreDriversByGroup @ 0x140C52208 (PipInitializeCoreDriversByGroup.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 */

NTSTATUS PnpWaitForEmptyDeviceActionQueue()
{
  return KeWaitForSingleObject(&PnpEnumerationLock, Executive, 0, 0, 0LL);
}
