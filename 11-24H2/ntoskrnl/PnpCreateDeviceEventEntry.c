/*
 * XREFs of PnpCreateDeviceEventEntry @ 0x1408B3920
 * Callers:
 *     PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance @ 0x140487208 (PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance.c)
 *     PnpSetDeviceInstanceStartedEventFromDeviceInstance @ 0x1404A4D80 (PnpSetDeviceInstanceStartedEventFromDeviceInstance.c)
 *     PnpSetDeviceInstanceRemovalEvent @ 0x1404A7878 (PnpSetDeviceInstanceRemovalEvent.c)
 *     PnpShutdownDevices @ 0x14071AAA0 (PnpShutdownDevices.c)
 *     PnpSetBlockedDriverEvent @ 0x14072DDE4 (PnpSetBlockedDriverEvent.c)
 *     PnpSetDeviceRemovalSafe @ 0x14072DE54 (PnpSetDeviceRemovalSafe.c)
 *     PnpSetHwProfileChangeEvent @ 0x14072DF60 (PnpSetHwProfileChangeEvent.c)
 *     PnpSetInvalidIDEvent @ 0x14072DFFC (PnpSetInvalidIDEvent.c)
 *     PnpSetPowerVetoEvent @ 0x14072E0B4 (PnpSetPowerVetoEvent.c)
 *     PnpSynchronizeDeviceEventQueue @ 0x1408B220C (PnpSynchronizeDeviceEventQueue.c)
 *     PnpSetDeviceClassChange @ 0x1408B3588 (PnpSetDeviceClassChange.c)
 *     PnpInsertNoopEvent @ 0x1408B3754 (PnpInsertNoopEvent.c)
 *     PnpSetCustomTargetEvent @ 0x1408B37C0 (PnpSetCustomTargetEvent.c)
 *     PnpSetPlugPlayEvent @ 0x140990378 (PnpSetPlugPlayEvent.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 */

__int64 PnpCreateDeviceEventEntry()
{
  __int64 result; // rax

  result = ExAllocatePool2(0x100uLL);
  if ( result )
    *(_DWORD *)(result + 64) = 1;
  return result;
}
