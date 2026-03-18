/*
 * XREFs of PnpCreateDeviceEventEntry @ 0x14096A54C
 * Callers:
 *     PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance @ 0x140487C78 (PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance.c)
 *     PnpSetDeviceInstanceStartedEventFromDeviceInstance @ 0x1404A4850 (PnpSetDeviceInstanceStartedEventFromDeviceInstance.c)
 *     PnpSetDeviceInstanceRemovalEvent @ 0x1404A6D88 (PnpSetDeviceInstanceRemovalEvent.c)
 *     PnpShutdownDevices @ 0x14070E9A0 (PnpShutdownDevices.c)
 *     PnpSetBlockedDriverEvent @ 0x140721E64 (PnpSetBlockedDriverEvent.c)
 *     PnpSetDeviceRemovalSafe @ 0x140721ED4 (PnpSetDeviceRemovalSafe.c)
 *     PnpSetHwProfileChangeEvent @ 0x140721FE0 (PnpSetHwProfileChangeEvent.c)
 *     PnpSetInvalidIDEvent @ 0x14072207C (PnpSetInvalidIDEvent.c)
 *     PnpSetPowerVetoEvent @ 0x140722134 (PnpSetPowerVetoEvent.c)
 *     PnpSetPlugPlayEvent @ 0x14083327C (PnpSetPlugPlayEvent.c)
 *     PnpSetDeviceClassChange @ 0x14096A1B4 (PnpSetDeviceClassChange.c)
 *     PnpInsertNoopEvent @ 0x14096A380 (PnpInsertNoopEvent.c)
 *     PnpSetCustomTargetEvent @ 0x14096A3EC (PnpSetCustomTargetEvent.c)
 *     PnpSynchronizeDeviceEventQueue @ 0x140A88290 (PnpSynchronizeDeviceEventQueue.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

__int64 PnpCreateDeviceEventEntry()
{
  __int64 result; // rax

  result = ExAllocatePool2(0x100uLL);
  if ( result )
    *(_DWORD *)(result + 64) = 1;
  return result;
}
