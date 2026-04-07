/*
 * XREFs of ?GetMaximumContactWidth@CContactManager@@SAHUtagPOINT@@@Z @ 0x18008CB98
 * Callers:
 *     ?GetBoundedContactWidth@CContactManager@@QEAAHHUtagPOINT@@@Z @ 0x18000F838 (-GetBoundedContactWidth@CContactManager@@QEAAHHUtagPOINT@@@Z.c)
 * Callees:
 *     ?MonitorDpiFromPoint@CDesktopManager@@SAIUtagPOINT@@@Z @ 0x18000F994 (-MonitorDpiFromPoint@CDesktopManager@@SAIUtagPOINT@@@Z.c)
 */

int __fastcall CContactManager::GetMaximumContactWidth(POINT a1)
{
  int v1; // eax

  v1 = CDesktopManager::MonitorDpiFromPoint(a1);
  return MulDiv(150, v1, 96);
}
