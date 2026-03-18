/*
 * XREFs of PnpSetDeviceInstanceStartedEvent @ 0x1404A4834
 * Callers:
 *     PipProcessStartPhase3 @ 0x1408333C4 (PipProcessStartPhase3.c)
 * Callees:
 *     PnpSetDeviceInstanceStartedEventFromDeviceInstance @ 0x1404A4850 (PnpSetDeviceInstanceStartedEventFromDeviceInstance.c)
 */

__int64 __fastcall PnpSetDeviceInstanceStartedEvent(__int64 a1)
{
  return PnpSetDeviceInstanceStartedEventFromDeviceInstance(a1 + 40);
}
