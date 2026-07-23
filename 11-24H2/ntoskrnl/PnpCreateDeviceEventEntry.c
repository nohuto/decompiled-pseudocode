/*
 * XREFs of PnpCreateDeviceEventEntry @ 0x1408B1210
 * Callers:
 *     PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance @ 0x140482278 (PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance.c)
 *     PnpSetDeviceInstanceStartedEventFromDeviceInstance @ 0x14049FB10 (PnpSetDeviceInstanceStartedEventFromDeviceInstance.c)
 *     PnpSetDeviceInstanceRemovalEvent @ 0x1404A22A8 (PnpSetDeviceInstanceRemovalEvent.c)
 *     PnpShutdownDevices @ 0x140718630 (PnpShutdownDevices.c)
 *     PnpSetBlockedDriverEvent @ 0x14072BDF4 (PnpSetBlockedDriverEvent.c)
 *     PnpSetDeviceRemovalSafe @ 0x14072BE64 (PnpSetDeviceRemovalSafe.c)
 *     PnpSetHwProfileChangeEvent @ 0x14072BF70 (PnpSetHwProfileChangeEvent.c)
 *     PnpSetInvalidIDEvent @ 0x14072C00C (PnpSetInvalidIDEvent.c)
 *     PnpSetPowerVetoEvent @ 0x14072C0C4 (PnpSetPowerVetoEvent.c)
 *     PnpSynchronizeDeviceEventQueue @ 0x1408AFB00 (PnpSynchronizeDeviceEventQueue.c)
 *     PnpSetDeviceClassChange @ 0x1408B0E78 (PnpSetDeviceClassChange.c)
 *     PnpInsertNoopEvent @ 0x1408B1044 (PnpInsertNoopEvent.c)
 *     PnpSetCustomTargetEvent @ 0x1408B10B0 (PnpSetCustomTargetEvent.c)
 *     PnpSetPlugPlayEvent @ 0x14097B3B0 (PnpSetPlugPlayEvent.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall PnpCreateDeviceEventEntry(unsigned int a1)
{
  __int64 result; // rax

  result = ExAllocatePool2(0x100uLL, a1, 0x4B706E50u);
  if ( result )
    *(_DWORD *)(result + 64) = 1;
  return result;
}
