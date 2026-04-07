/*
 * XREFs of ?GetBoundedContactWidth@CContactManager@@QEAAHHUtagPOINT@@@Z @ 0x1800548C0
 * Callers:
 *     ?UpdateLocationWithScalar@CDirectTouchVisual@@IEAAJPEBUtagPOINT@@PEBUtagRECT@@M@Z @ 0x1800547C4 (-UpdateLocationWithScalar@CDirectTouchVisual@@IEAAJPEBUtagPOINT@@PEBUtagRECT@@M@Z.c)
 *     ?Start@CContactStationaryVisual@@QEAAJW4STATIONARY_ANIMATION_TYPE@1@PEBUtagPOINT@@PEBUtagRECT@@_N@Z @ 0x1800B2710 (-Start@CContactStationaryVisual@@QEAAJW4STATIONARY_ANIMATION_TYPE@1@PEBUtagPOINT@@PEBUtagRECT@@_.c)
 *     ?Start@CPressTapVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@0@Z @ 0x1800CD598 (-Start@CPressTapVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@0@Z.c)
 * Callees:
 *     ?MonitorDpiFromPoint@CDesktopManager@@SAIUtagPOINT@@@Z @ 0x180054930 (-MonitorDpiFromPoint@CDesktopManager@@SAIUtagPOINT@@@Z.c)
 */

__int64 __fastcall CContactManager::GetBoundedContactWidth(CContactManager *this, int a2, struct tagPOINT a3)
{
  int v5; // eax
  int v6; // ecx
  int v7; // eax
  int v8; // eax

  v5 = CDesktopManager::MonitorDpiFromPoint(a3);
  v6 = MulDiv(50, v5, 96);
  if ( a2 >= v6 )
  {
    v7 = CDesktopManager::MonitorDpiFromPoint(a3);
    v8 = MulDiv(150, v7, 96);
    v6 = a2;
    if ( a2 > v8 )
      return (unsigned int)v8;
  }
  return (unsigned int)v6;
}
