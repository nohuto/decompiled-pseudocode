/*
 * XREFs of ?GetCenterModeSearchRect@SearchBoxOnTaskbarSearchAppPositioner@@AEAA?AUtagRECT@@AEBUMonitorInfo@@HH_N@Z @ 0x1802484E0
 * Callers:
 *     ?GetAppRectForSearchBoxOnTaskbar@SearchBoxOnTaskbarSearchAppPositioner@@AEAA?AUtagRECT@@AEBUMonitorInfo@@_NHH1@Z @ 0x1802483EC (-GetAppRectForSearchBoxOnTaskbar@SearchBoxOnTaskbarSearchAppPositioner@@AEAA-AUtagRECT@@AEBUMoni.c)
 *     ?GetSearchBoxOnTaskbarAppRectAndClippingRegion@SearchBoxOnTaskbarSearchAppPositioner@@AEAA?AUSearchAppSizeAndBorderInfo@@AEBUMonitorInfo@@AEBUtagRECT@@_N@Z @ 0x1802485A8 (-GetSearchBoxOnTaskbarAppRectAndClippingRegion@SearchBoxOnTaskbarSearchAppPositioner@@AEAA-AUSea.c)
 *     ?GetTaskbarSearchBoxRect@SearchBoxOnTaskbarSearchAppPositioner@@UEAA?AURect@Foundation@Windows@winrt@@AEBUtagRECT@@@Z @ 0x180248AB0 (-GetTaskbarSearchBoxRect@SearchBoxOnTaskbarSearchAppPositioner@@UEAA-AURect@Foundation@Windows@w.c)
 * Callees:
 *     <none>
 */

struct tagRECT *__fastcall SearchBoxOnTaskbarSearchAppPositioner::GetCenterModeSearchRect(
        SearchBoxOnTaskbarSearchAppPositioner *this,
        struct tagRECT *__return_ptr retstr,
        __m128i *a3,
        int a4,
        int a5,
        bool a6)
{
  int v7; // ecx
  __m128i v8; // xmm1
  int v9; // r8d
  int v10; // eax
  LONG v11; // edx
  LONG v12; // r8d

  if ( a6 )
  {
    v7 = _mm_cvtsi128_si32(*a3);
    v8 = _mm_srli_si128(*a3, 8);
    v9 = _mm_cvtsi128_si32(_mm_srli_si128(*a3, 12));
    v10 = _mm_cvtsi128_si32(v8);
  }
  else
  {
    v7 = a3->m128i_i32[0];
    v10 = a3->m128i_i32[2];
    v9 = a3[1].m128i_i32[3];
  }
  v11 = (v10 - v7 - a4) / 2 + v7;
  retstr->left = v11;
  v12 = v9 - a5;
  retstr->right = v11 + a4;
  retstr->top = v12;
  retstr->bottom = v12 + a5;
  return retstr;
}
