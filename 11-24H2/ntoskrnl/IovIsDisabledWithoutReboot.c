/*
 * XREFs of IovIsDisabledWithoutReboot @ 0x1405A2FFC
 * Callers:
 *     VfPacketCreateAndLock @ 0x140B9B430 (VfPacketCreateAndLock.c)
 *     ViPacketNotificationCallback @ 0x140B9B530 (ViPacketNotificationCallback.c)
 * Callees:
 *     <none>
 */

bool IovIsDisabledWithoutReboot()
{
  return IovpDisabledWithoutReboot != 0;
}
