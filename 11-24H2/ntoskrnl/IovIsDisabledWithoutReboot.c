/*
 * XREFs of IovIsDisabledWithoutReboot @ 0x14059FF3C
 * Callers:
 *     VfPacketCreateAndLock @ 0x140B9D430 (VfPacketCreateAndLock.c)
 *     ViPacketNotificationCallback @ 0x140B9D530 (ViPacketNotificationCallback.c)
 * Callees:
 *     <none>
 */

bool IovIsDisabledWithoutReboot()
{
  return IovpDisabledWithoutReboot != 0;
}
