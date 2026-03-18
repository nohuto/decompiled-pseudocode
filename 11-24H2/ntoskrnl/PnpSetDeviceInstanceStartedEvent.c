/*
 * XREFs of PnpSetDeviceInstanceStartedEvent @ 0x1404A4D64
 * Callers:
 *     PipProcessStartPhase3 @ 0x14099006C (PipProcessStartPhase3.c)
 * Callees:
 *     PnpSetDeviceInstanceStartedEventFromDeviceInstance @ 0x1404A4D80 (PnpSetDeviceInstanceStartedEventFromDeviceInstance.c)
 */

__int64 __fastcall PnpSetDeviceInstanceStartedEvent(__int64 a1)
{
  return PnpSetDeviceInstanceStartedEventFromDeviceInstance(a1 + 40);
}
