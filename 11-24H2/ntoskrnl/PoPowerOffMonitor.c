/*
 * XREFs of PoPowerOffMonitor @ 0x1404C5400
 * Callers:
 *     NtPowerInformation @ 0x1409EDB00 (NtPowerInformation.c)
 * Callees:
 *     PoStartPowerStateTasks @ 0x1406F6DA4 (PoStartPowerStateTasks.c)
 *     PoEndPowerStateTasks @ 0x1406F6E70 (PoEndPowerStateTasks.c)
 *     PoUnblockConsoleSwitch @ 0x14099E6E8 (PoUnblockConsoleSwitch.c)
 *     PopDispatchStateCallout @ 0x1409A03B4 (PopDispatchStateCallout.c)
 *     PoBlockConsoleSwitch @ 0x140AAF468 (PoBlockConsoleSwitch.c)
 */

__int64 PoPowerOffMonitor()
{
  unsigned int v0; // ebx
  __int128 v2; // [rsp+20h] [rbp-30h] BYREF
  __int128 v3; // [rsp+30h] [rbp-20h]
  __int64 v4; // [rsp+40h] [rbp-10h]
  unsigned int v5; // [rsp+60h] [rbp+10h] BYREF

  v3 = 0LL;
  DWORD2(v3) = 1;
  v2 = 0LL;
  v4 = 0LL;
  v5 = PoBlockConsoleSwitch(&v2);
  PoStartPowerStateTasks(&v2);
  LODWORD(v4) = 12;
  v0 = PopDispatchStateCallout(&v2, &v5);
  PoEndPowerStateTasks(&v2);
  PoUnblockConsoleSwitch(&v2, v5);
  return v0;
}
