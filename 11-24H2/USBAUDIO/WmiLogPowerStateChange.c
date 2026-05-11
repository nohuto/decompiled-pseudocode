/*
 * XREFs of WmiLogPowerStateChange @ 0x14000B6B4
 * Callers:
 *     DeviceSetPowerState @ 0x14003F210 (DeviceSetPowerState.c)
 * Callees:
 *     WmiLogEvent @ 0x1400069C8 (WmiLogEvent.c)
 */

NTSTATUS __fastcall WmiLogPowerStateChange(__int64 a1, int a2, int a3, int a4)
{
  __int128 v5; // [rsp+40h] [rbp-18h] BYREF

  v5 = ExBus_PowerState_GUID;
  return WmiLogEvent(a1, a3 + 96, &v5, a1, a2, a3, a4);
}
