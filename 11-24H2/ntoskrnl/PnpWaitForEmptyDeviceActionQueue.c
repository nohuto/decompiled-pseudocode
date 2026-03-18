/*
 * XREFs of PnpWaitForEmptyDeviceActionQueue @ 0x14072D27C
 * Callers:
 *     PopGracefulShutdown @ 0x140B5BA88 (PopGracefulShutdown.c)
 *     IopInitializeBootDrivers @ 0x140C1E4C4 (IopInitializeBootDrivers.c)
 *     PnpWaitForDevicesToStart @ 0x140C22720 (PnpWaitForDevicesToStart.c)
 *     PipInitializeCoreDriversByGroup @ 0x140C6351C (PipInitializeCoreDriversByGroup.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 */

NTSTATUS PnpWaitForEmptyDeviceActionQueue()
{
  return KeWaitForSingleObject(&PnpEnumerationLock, Executive, 0, 0, 0LL);
}
