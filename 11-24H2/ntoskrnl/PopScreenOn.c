/*
 * XREFs of PopScreenOn @ 0x14075D4A0
 * Callers:
 *     PopPowerInformationInternal @ 0x140AC4A30 (PopPowerInformationInternal.c)
 * Callees:
 *     PopBlockSessionSwitch @ 0x1409B7CC0 (PopBlockSessionSwitch.c)
 *     PopControlMonitor @ 0x1409B7F80 (PopControlMonitor.c)
 */

__int64 __fastcall PopScreenOn(__int64 a1)
{
  unsigned int v2; // [rsp+30h] [rbp+8h] BYREF
  int v3; // [rsp+38h] [rbp+10h] BYREF
  int v4; // [rsp+3Ch] [rbp+14h]

  v2 = -1;
  LOBYTE(a1) = 1;
  PopBlockSessionSwitch(a1, &v2);
  v3 = 2;
  v4 = 30;
  PopControlMonitor(&v3, v2);
  return PopBlockSessionSwitch(0LL, &v2);
}
