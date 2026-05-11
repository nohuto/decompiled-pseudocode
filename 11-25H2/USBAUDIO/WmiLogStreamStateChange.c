/*
 * XREFs of WmiLogStreamStateChange @ 0x140006CF0
 * Callers:
 *     PinSetDeviceState @ 0x14003DE30 (PinSetDeviceState.c)
 * Callees:
 *     WmiLogEvent @ 0x140006D2C (WmiLogEvent.c)
 */

__int64 __fastcall WmiLogStreamStateChange(int a1, int a2, int a3)
{
  __int128 v4; // [rsp+40h] [rbp-18h] BYREF

  LOBYTE(a2) = a2 + 1;
  v4 = ExBus_PinState_GUID;
  return WmiLogEvent(a1, a2, (unsigned int)&v4, a1, a3, 0, 0);
}
