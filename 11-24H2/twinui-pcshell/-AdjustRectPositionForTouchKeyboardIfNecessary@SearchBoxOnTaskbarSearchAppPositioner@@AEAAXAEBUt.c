/*
 * XREFs of ?AdjustRectPositionForTouchKeyboardIfNecessary@SearchBoxOnTaskbarSearchAppPositioner@@AEAAXAEBUtagRECT@@AEBUMonitorInfo@@AEAU2@@Z @ 0x1803D58EC
 * Callers:
 *     ?GetSearchBoxOnTaskbarAppRectAndClippingRegion@SearchBoxOnTaskbarSearchAppPositioner@@AEAA?AUSearchAppSizeAndBorderInfo@@AEBUMonitorInfo@@AEBUtagRECT@@_N@Z @ 0x1802485A8 (-GetSearchBoxOnTaskbarAppRectAndClippingRegion@SearchBoxOnTaskbarSearchAppPositioner@@AEAA-AUSea.c)
 * Callees:
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 */

void __fastcall SearchBoxOnTaskbarSearchAppPositioner::AdjustRectPositionForTouchKeyboardIfNecessary(
        SearchBoxOnTaskbarSearchAppPositioner *this,
        const struct tagRECT *a2,
        const struct MonitorInfo *a3,
        struct tagRECT *a4)
{
  int v4; // ebp
  struct tagRECT rcDst; // [rsp+20h] [rbp-38h] BYREF

  v4 = *((_DWORD *)a3 + 18) - *((_DWORD *)a3 + 16);
  rcDst = 0LL;
  if ( !IsRectEmpty(a2) && IntersectRect(&rcDst, a2, a4) && *((_DWORD *)a3 + 3) - a2->bottom <= v4 )
    OffsetRect(a4, 0, a2->top - a4->bottom);
}
