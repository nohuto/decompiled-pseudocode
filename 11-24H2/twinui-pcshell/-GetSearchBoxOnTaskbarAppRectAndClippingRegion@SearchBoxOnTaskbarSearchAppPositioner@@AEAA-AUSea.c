/*
 * XREFs of ?GetSearchBoxOnTaskbarAppRectAndClippingRegion@SearchBoxOnTaskbarSearchAppPositioner@@AEAA?AUSearchAppSizeAndBorderInfo@@AEBUMonitorInfo@@AEBUtagRECT@@_N@Z @ 0x1802485A8
 * Callers:
 *     ?GetAppRectAndClippingRegion@SearchBoxOnTaskbarSearchAppPositioner@@UEAA?AUSearchAppSizeAndBorderInfo@@AEBUtagRECT@@0W4SearchAppActivationMode@Shell@UI@WindowsUdk@winrt@@_NAEBUhstring@8@@Z @ 0x180247F90 (-GetAppRectAndClippingRegion@SearchBoxOnTaskbarSearchAppPositioner@@UEAA-AUSearchAppSizeAndBorde.c)
 * Callees:
 *     ?_Tidy@?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@AEAAXXZ @ 0x180050D8C (-_Tidy@-$vector@UCRect@Geometry@@V-$allocator@UCRect@Geometry@@@std@@@std@@AEAAXXZ.c)
 *     ?GetAppRectForSearchBoxOnTaskbar@SearchBoxOnTaskbarSearchAppPositioner@@AEAA?AUtagRECT@@AEBUMonitorInfo@@_NHH1@Z @ 0x1802483EC (-GetAppRectForSearchBoxOnTaskbar@SearchBoxOnTaskbarSearchAppPositioner@@AEAA-AUtagRECT@@AEBUMoni.c)
 *     ?GetCenterModeSearchRect@SearchBoxOnTaskbarSearchAppPositioner@@AEAA?AUtagRECT@@AEBUMonitorInfo@@HH_N@Z @ 0x1802484E0 (-GetCenterModeSearchRect@SearchBoxOnTaskbarSearchAppPositioner@@AEAA-AUtagRECT@@AEBUMonitorInfo@.c)
 *     ?GetSearchBoxOnTaskbarClippingRegion@SearchBoxOnTaskbarSearchAppPositioner@@AEAAXAEBUtagRECT@@AEBUMonitorInfo@@_NPEAU2@AEAV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x1802487F8 (-GetSearchBoxOnTaskbarClippingRegion@SearchBoxOnTaskbarSearchAppPositioner@@AEAAXAEBUtagRECT@@AE.c)
 *     ?GetSearchPaneWidthAndHeight@SearchBoxOnTaskbarSearchAppPositioner@@AEBA?AU?$pair@HH@std@@AEBUMonitorInfo@@_N@Z @ 0x180248994 (-GetSearchPaneWidthAndHeight@SearchBoxOnTaskbarSearchAppPositioner@@AEBA-AU-$pair@HH@std@@AEBUMo.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1802D25CC (memset_0.c)
 *     ??$LogSearchPaneRect@AEAUtagRECT@@@SearchBoxOnTaskbarSearchAppPositionerTelemetry@@SAXAEAUtagRECT@@@Z @ 0x1803D565C (--$LogSearchPaneRect@AEAUtagRECT@@@SearchBoxOnTaskbarSearchAppPositionerTelemetry@@SAXAEAUtagREC.c)
 *     ?AdjustRectPositionForTouchKeyboardIfNecessary@SearchBoxOnTaskbarSearchAppPositioner@@AEAAXAEBUtagRECT@@AEBUMonitorInfo@@AEAU2@@Z @ 0x1803D58EC (-AdjustRectPositionForTouchKeyboardIfNecessary@SearchBoxOnTaskbarSearchAppPositioner@@AEAAXAEBUt.c)
 *     _anonymous_namespace_::IsAppRectCrossScreenRectOnSide @ 0x1803D5F00 (_anonymous_namespace_--IsAppRectCrossScreenRectOnSide.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SearchBoxOnTaskbarSearchAppPositioner::GetSearchBoxOnTaskbarAppRectAndClippingRegion(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        struct tagRECT *a4,
        char a5)
{
  int v7; // r15d
  LONG top; // r12d
  LONG left; // ebx
  SearchBoxOnTaskbarSearchAppPositioner *v10; // rcx
  SearchBoxOnTaskbarSearchAppPositioner *v11; // rcx
  LONG v12; // r11d
  int v13; // esi
  int v14; // r11d
  int v15; // r9d
  int v16; // ecx
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rcx
  struct MonitorInfo *v21; // [rsp+20h] [rbp-E0h]
  struct MonitorInfo *v22; // [rsp+20h] [rbp-E0h]
  struct tagRECT v23; // [rsp+48h] [rbp-B8h] BYREF
  struct tagRECT *v24; // [rsp+60h] [rbp-A0h]
  RECT rcSrc2; // [rsp+68h] [rbp-98h] BYREF
  RECT rcSrc1; // [rsp+78h] [rbp-88h] BYREF
  struct tagRECT v27; // [rsp+90h] [rbp-70h] BYREF
  _OWORD v28[3]; // [rsp+A0h] [rbp-60h] BYREF
  int v29; // [rsp+D0h] [rbp-30h]
  int v30; // [rsp+D4h] [rbp-2Ch]
  __int64 v31; // [rsp+D8h] [rbp-28h] BYREF
  __int128 v32; // [rsp+E0h] [rbp-20h]
  struct tagRECT rcDst; // [rsp+F0h] [rbp-10h] BYREF

  v24 = a4;
  *(_QWORD *)&v23.left = a2;
  v7 = *(_DWORD *)(a3 + 80);
  LOBYTE(a4) = v7 == 2;
  SearchBoxOnTaskbarSearchAppPositioner::GetSearchPaneWidthAndHeight(a1, &v23, a3, a4);
  top = v23.top;
  left = v23.left;
  LODWORD(v21) = v23.left;
  SearchBoxOnTaskbarSearchAppPositioner::GetAppRectForSearchBoxOnTaskbar(
    v10,
    &rcSrc2,
    (const struct MonitorInfo *)a3,
    a5,
    v21,
    v23.top,
    0);
  v12 = *(_DWORD *)(a3 + 8);
  if ( v7 == 2 )
  {
    rcSrc1 = *(RECT *)a3;
    v13 = _mm_cvtsi128_si32((__m128i)rcSrc1);
  }
  else
  {
    v13 = *(_DWORD *)a3;
    rcSrc1.left = *(_DWORD *)a3;
    rcSrc1.top = *(_DWORD *)(a3 + 20);
    rcSrc1.right = v12;
    rcSrc1.bottom = *(_DWORD *)(a3 + 28);
  }
  rcDst = 0LL;
  if ( v7 == 2 )
  {
    if ( (unsigned __int8)anonymous_namespace_::IsAppRectCrossScreenRectOnSide(&rcSrc2, &rcSrc1) )
    {
      rcSrc2 = *SearchBoxOnTaskbarSearchAppPositioner::GetCenterModeSearchRect(
                  v11,
                  &v23,
                  (__m128i *)a3,
                  left,
                  top,
                  v7 == 2);
      if ( (unsigned __int8)anonymous_namespace_::IsAppRectCrossScreenRectOnSide(&rcSrc2, &rcSrc1) )
      {
        LODWORD(v22) = v14 - v13;
        rcSrc2 = *SearchBoxOnTaskbarSearchAppPositioner::GetAppRectForSearchBoxOnTaskbar(
                    v11,
                    &v23,
                    (const struct MonitorInfo *)a3,
                    a5,
                    v22,
                    top,
                    1);
        SearchBoxOnTaskbarSearchAppPositionerTelemetry::LogSearchPaneRect<tagRECT &>(&rcSrc2);
      }
    }
  }
  SearchBoxOnTaskbarSearchAppPositioner::AdjustRectPositionForTouchKeyboardIfNecessary(
    v11,
    v24,
    (const struct MonitorInfo *)a3,
    &rcSrc2);
  IntersectRect(&rcDst, &rcSrc1, &rcSrc2);
  v30 = 0;
  memset_0(&v27, 0, 0x48uLL);
  v31 = 0LL;
  v32 = 0LL;
  v27 = rcDst;
  LOBYTE(v15) = a5;
  SearchBoxOnTaskbarSearchAppPositioner::GetSearchBoxOnTaskbarClippingRegion(
    v16,
    (unsigned int)&v27,
    a3,
    v15,
    (__int64)v28,
    (__int64)&v31);
  v28[2] = 0LL;
  v29 = 0;
  *(struct tagRECT *)a2 = v27;
  *(_OWORD *)(a2 + 16) = v28[0];
  *(_OWORD *)(a2 + 32) = v28[1];
  *(_OWORD *)(a2 + 48) = 0LL;
  *(_DWORD *)(a2 + 64) = 0;
  v17 = *((_QWORD *)&v32 + 1);
  v18 = v32;
  v32 = 0uLL;
  v19 = v31;
  v31 = 0LL;
  *(_QWORD *)(a2 + 72) = v19;
  *(_QWORD *)(a2 + 80) = v18;
  *(_QWORD *)(a2 + 88) = v17;
  std::vector<Geometry::CRect>::_Tidy((__int64)&v31);
  return a2;
}
