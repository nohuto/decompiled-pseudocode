/*
 * XREFs of PoBlockConsoleSwitch @ 0x140AAF468
 * Callers:
 *     PoPowerOffMonitor @ 0x1404C5400 (PoPowerOffMonitor.c)
 *     PopDirectedDripsNotifyAppsAndServices @ 0x14074A9E4 (PopDirectedDripsNotifyAppsAndServices.c)
 *     PopIssueActionRequest @ 0x140A84124 (PopIssueActionRequest.c)
 *     PnprQuiesceDevices @ 0x140B565F4 (PnprQuiesceDevices.c)
 * Callees:
 *     PoBlockConsoleSwitchEx @ 0x140420E04 (PoBlockConsoleSwitchEx.c)
 */

__int64 __fastcall PoBlockConsoleSwitch(__int64 a1)
{
  ULONG v2; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0;
  PoBlockConsoleSwitchEx(a1, &v2, 0LL);
  return v2;
}
