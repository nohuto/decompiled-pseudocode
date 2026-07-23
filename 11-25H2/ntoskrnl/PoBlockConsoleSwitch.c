/*
 * XREFs of PoBlockConsoleSwitch @ 0x140AAF508
 * Callers:
 *     PoPowerOffMonitor @ 0x1404CC3C0 (PoPowerOffMonitor.c)
 *     PopDirectedDripsNotifyAppsAndServices @ 0x1407405E4 (PopDirectedDripsNotifyAppsAndServices.c)
 *     PopIssueActionRequest @ 0x140A83104 (PopIssueActionRequest.c)
 *     PnprQuiesceDevices @ 0x140B445A4 (PnprQuiesceDevices.c)
 * Callees:
 *     PoBlockConsoleSwitchEx @ 0x140311910 (PoBlockConsoleSwitchEx.c)
 */

__int64 __fastcall PoBlockConsoleSwitch(__int64 a1)
{
  ULONG v2; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0;
  PoBlockConsoleSwitchEx(a1, &v2, 0LL);
  return v2;
}
