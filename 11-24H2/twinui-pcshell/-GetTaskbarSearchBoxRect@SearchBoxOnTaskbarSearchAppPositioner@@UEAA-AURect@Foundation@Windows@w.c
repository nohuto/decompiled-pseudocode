/*
 * XREFs of ?GetTaskbarSearchBoxRect@SearchBoxOnTaskbarSearchAppPositioner@@UEAA?AURect@Foundation@Windows@winrt@@AEBUtagRECT@@@Z @ 0x180248AB0
 * Callers:
 *     <none>
 * Callees:
 *     ?CalculateTaskbarSearchBoxRect@SearchBoxOnTaskbarSearchAppPositioner@@AEAA?AURect@Foundation@Windows@winrt@@AEBUMonitorInfo@@AEBUtagRECT@@_N@Z @ 0x180247EA8 (-CalculateTaskbarSearchBoxRect@SearchBoxOnTaskbarSearchAppPositioner@@AEAA-AURect@Foundation@Win.c)
 *     ?GetAppRectForSearchBoxOnTaskbar@SearchBoxOnTaskbarSearchAppPositioner@@AEAA?AUtagRECT@@AEBUMonitorInfo@@_NHH1@Z @ 0x1802483EC (-GetAppRectForSearchBoxOnTaskbar@SearchBoxOnTaskbarSearchAppPositioner@@AEAA-AUtagRECT@@AEBUMoni.c)
 *     ?GetCenterModeSearchRect@SearchBoxOnTaskbarSearchAppPositioner@@AEAA?AUtagRECT@@AEBUMonitorInfo@@HH_N@Z @ 0x1802484E0 (-GetCenterModeSearchRect@SearchBoxOnTaskbarSearchAppPositioner@@AEAA-AUtagRECT@@AEBUMonitorInfo@.c)
 *     ?GetSearchPaneWidthAndHeight@SearchBoxOnTaskbarSearchAppPositioner@@AEBA?AU?$pair@HH@std@@AEBUMonitorInfo@@_N@Z @ 0x180248994 (-GetSearchPaneWidthAndHeight@SearchBoxOnTaskbarSearchAppPositioner@@AEBA-AU-$pair@HH@std@@AEBUMo.c)
 *     ?UnscaleByMonitorDPI@SearchAppSizeHelpers@@YA?AURect@Foundation@Windows@winrt@@AEBU2345@H@Z @ 0x1802BEAF8 (-UnscaleByMonitorDPI@SearchAppSizeHelpers@@YA-AURect@Foundation@Windows@winrt@@AEBU2345@H@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??$LogSearchPaneRect@AEAUtagRECT@@@SearchBoxOnTaskbarSearchAppPositionerTelemetry@@SAXAEAUtagRECT@@@Z @ 0x1803D565C (--$LogSearchPaneRect@AEAUtagRECT@@@SearchBoxOnTaskbarSearchAppPositionerTelemetry@@SAXAEAUtagREC.c)
 *     _anonymous_namespace_::IsAppRectCrossScreenRectOnSide @ 0x1803D5F00 (_anonymous_namespace_--IsAppRectCrossScreenRectOnSide.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall SearchBoxOnTaskbarSearchAppPositioner::GetTaskbarSearchBoxRect(__int64 a1, __int64 a2)
{
  char v4; // di
  bool v5; // r15
  __int64 v6; // rcx
  LONG top; // r14d
  LONG left; // ebx
  SearchBoxOnTaskbarSearchAppPositioner *v9; // rcx
  SearchBoxOnTaskbarSearchAppPositioner *v10; // rcx
  __int64 v11; // rax
  struct MonitorInfo *v13; // [rsp+20h] [rbp-79h]
  struct MonitorInfo *v14; // [rsp+20h] [rbp-79h]
  struct tagRECT v15; // [rsp+40h] [rbp-59h] BYREF
  _BYTE v16[16]; // [rsp+50h] [rbp-49h] BYREF
  __m128i v17[3]; // [rsp+60h] [rbp-39h] BYREF
  unsigned int v18; // [rsp+98h] [rbp-1h]
  int v19; // [rsp+B0h] [rbp+17h]

  (*(void (__fastcall **)(_QWORD, __m128i *))(**(_QWORD **)(a1 + 8) + 8LL))(*(_QWORD *)(a1 + 8), v17);
  v4 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 8) + 16LL))(*(_QWORD *)(a1 + 8));
  v5 = v19 == 2;
  SearchBoxOnTaskbarSearchAppPositioner::GetSearchPaneWidthAndHeight(v6, &v15.left, (__int64)v17, v19 == 2);
  top = v15.top;
  left = v15.left;
  LODWORD(v13) = v15.left;
  SearchBoxOnTaskbarSearchAppPositioner::GetAppRectForSearchBoxOnTaskbar(
    v9,
    &v15,
    (const struct MonitorInfo *)v17,
    v4,
    v13,
    v15.top,
    0);
  if ( v5 )
  {
    if ( (unsigned __int8)anonymous_namespace_::IsAppRectCrossScreenRectOnSide(&v15, v17) )
    {
      v15 = *SearchBoxOnTaskbarSearchAppPositioner::GetCenterModeSearchRect(v10, &v15, v17, left, top, v5);
      if ( (unsigned __int8)anonymous_namespace_::IsAppRectCrossScreenRectOnSide(&v15, v17) )
      {
        LODWORD(v14) = v17[0].m128i_i32[2] - v17[0].m128i_i32[0];
        v15 = *SearchBoxOnTaskbarSearchAppPositioner::GetAppRectForSearchBoxOnTaskbar(
                 v10,
                 &v15,
                 (const struct MonitorInfo *)v17,
                 v4,
                 v14,
                 top,
                 1);
        SearchBoxOnTaskbarSearchAppPositionerTelemetry::LogSearchPaneRect<tagRECT &>(&v15);
      }
    }
  }
  v11 = SearchBoxOnTaskbarSearchAppPositioner::CalculateTaskbarSearchBoxRect((__int64)v10, (__int64)v16, v17, &v15, v4);
  SearchAppSizeHelpers::UnscaleByMonitorDPI(a2, v11, v18);
  return a2;
}
