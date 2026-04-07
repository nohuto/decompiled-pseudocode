/*
 * XREFs of ?MonitorDpiFromPoint@CDesktopManager@@SAIUtagPOINT@@@Z @ 0x18000F994
 * Callers:
 *     ?Start@CPenBarrelKeyVisual@@QEAAJPEBUtagPOINT@@KI@Z @ 0x18000DD7C (-Start@CPenBarrelKeyVisual@@QEAAJPEBUtagPOINT@@KI@Z.c)
 *     ?GetMinimumContactWidth@CContactManager@@SAHUtagPOINT@@@Z @ 0x18000F8A8 (-GetMinimumContactWidth@CContactManager@@SAHUtagPOINT@@@Z.c)
 *     ?GetMaximumContactWidth@CContactManager@@SAHUtagPOINT@@@Z @ 0x18008CB98 (-GetMaximumContactWidth@CContactManager@@SAHUtagPOINT@@@Z.c)
 *     ?Start@CFlickVisual@@QEAAJPEBUtagPOINT@@W4FLICK_TYPE@@I@Z @ 0x1800945D0 (-Start@CFlickVisual@@QEAAJPEBUtagPOINT@@W4FLICK_TYPE@@I@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CDesktopManager::MonitorDpiFromPoint(POINT a1)
{
  unsigned int v1; // ebx
  HMONITOR v2; // rax
  unsigned int v4; // [rsp+38h] [rbp+10h] BYREF
  int v5; // [rsp+40h] [rbp+18h] BYREF

  v5 = 0;
  v1 = 96;
  v4 = 96;
  v2 = MonitorFromPoint(a1, 0);
  if ( !v2 || (unsigned int)GetDpiForMonitorInternal(v2, 0LL, &v5, &v4) )
    return v4;
  return v1;
}
