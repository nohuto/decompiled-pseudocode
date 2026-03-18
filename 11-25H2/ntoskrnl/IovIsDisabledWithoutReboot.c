/*
 * XREFs of IovIsDisabledWithoutReboot @ 0x14059F88C
 * Callers:
 *     VfPacketCreateAndLock @ 0x140B8B450 (VfPacketCreateAndLock.c)
 *     ViPacketNotificationCallback @ 0x140B8B550 (ViPacketNotificationCallback.c)
 * Callees:
 *     <none>
 */

bool IovIsDisabledWithoutReboot()
{
  return IovpDisabledWithoutReboot != 0;
}
