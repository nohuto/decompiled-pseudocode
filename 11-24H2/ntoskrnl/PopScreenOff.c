/*
 * XREFs of PopScreenOff @ 0x1409B8008
 * Callers:
 *     NtPowerInformation @ 0x1409F0230 (NtPowerInformation.c)
 *     PopIssueActionRequest @ 0x140A87C34 (PopIssueActionRequest.c)
 *     PopPowerInformationInternal @ 0x140AC4A30 (PopPowerInformationInternal.c)
 * Callees:
 *     PoBlockConsoleSwitchEx @ 0x14042F0D4 (PoBlockConsoleSwitchEx.c)
 *     PopControlMonitor @ 0x1409B7F80 (PopControlMonitor.c)
 *     PopDispatchStateCallout @ 0x1409B9D64 (PopDispatchStateCallout.c)
 */

__int64 __fastcall PopScreenOff(int a1)
{
  unsigned int v2; // ebx
  __int128 v4; // [rsp+20h] [rbp-30h] BYREF
  __int128 v5; // [rsp+30h] [rbp-20h]
  __int64 v6; // [rsp+40h] [rbp-10h]
  unsigned int v7; // [rsp+60h] [rbp+10h] BYREF
  unsigned int v8; // [rsp+68h] [rbp+18h] BYREF
  int v9; // [rsp+6Ch] [rbp+1Ch]

  v7 = 0;
  v5 = 0LL;
  DWORD2(v5) = 1;
  v4 = 0LL;
  v6 = 0LL;
  PoBlockConsoleSwitchEx((__int64)&v4, &v7, 0LL);
  v8 = 0;
  v9 = a1;
  v2 = v7;
  PopControlMonitor(&v8, v7);
  v7 = v2;
  v5 = 0LL;
  DWORD2(v5) = 1;
  v6 = 7LL;
  v4 = 0LL;
  return PopDispatchStateCallout(&v4, &v7);
}
