/*
 * XREFs of PoBlockConsoleSwitch @ 0x140AB44F8
 * Callers:
 *     PoPowerOffMonitor @ 0x1404CBF90 (PoPowerOffMonitor.c)
 *     PopDirectedDripsNotifyAppsAndServices @ 0x14074C6B4 (PopDirectedDripsNotifyAppsAndServices.c)
 *     PopIssueActionRequest @ 0x140A87C34 (PopIssueActionRequest.c)
 *     PnprQuiesceDevices @ 0x140B545A4 (PnprQuiesceDevices.c)
 * Callees:
 *     PoBlockConsoleSwitchEx @ 0x14042F0D4 (PoBlockConsoleSwitchEx.c)
 */

__int64 __fastcall PoBlockConsoleSwitch(__int64 a1)
{
  unsigned int v2; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0;
  PoBlockConsoleSwitchEx(a1, &v2, 0LL);
  return v2;
}
