/*
 * XREFs of ?GetAppRectForSearchBoxOnTaskbar@SearchBoxOnTaskbarSearchAppPositioner@@AEAA?AUtagRECT@@AEBUMonitorInfo@@_NHH1@Z @ 0x1802483EC
 * Callers:
 *     ?GetSearchBoxOnTaskbarAppRectAndClippingRegion@SearchBoxOnTaskbarSearchAppPositioner@@AEAA?AUSearchAppSizeAndBorderInfo@@AEBUMonitorInfo@@AEBUtagRECT@@_N@Z @ 0x1802485A8 (-GetSearchBoxOnTaskbarAppRectAndClippingRegion@SearchBoxOnTaskbarSearchAppPositioner@@AEAA-AUSea.c)
 *     ?GetTaskbarSearchBoxRect@SearchBoxOnTaskbarSearchAppPositioner@@UEAA?AURect@Foundation@Windows@winrt@@AEBUtagRECT@@@Z @ 0x180248AB0 (-GetTaskbarSearchBoxRect@SearchBoxOnTaskbarSearchAppPositioner@@UEAA-AURect@Foundation@Windows@w.c)
 * Callees:
 *     ?GetCenterModeSearchRect@SearchBoxOnTaskbarSearchAppPositioner@@AEAA?AUtagRECT@@AEBUMonitorInfo@@HH_N@Z @ 0x1802484E0 (-GetCenterModeSearchRect@SearchBoxOnTaskbarSearchAppPositioner@@AEAA-AUtagRECT@@AEBUMonitorInfo@.c)
 *     _anonymous_namespace_::GetInnerSearchBoxOffset @ 0x180248550 (_anonymous_namespace_--GetInnerSearchBoxOffset.c)
 */

struct tagRECT *__fastcall SearchBoxOnTaskbarSearchAppPositioner::GetAppRectForSearchBoxOnTaskbar(
        SearchBoxOnTaskbarSearchAppPositioner *this,
        struct tagRECT *__return_ptr retstr,
        const struct MonitorInfo *a3,
        char a4,
        struct MonitorInfo *a5,
        int a6,
        bool a7)
{
  bool v9; // al
  LONG v10; // edx
  LONG v11; // ecx
  LONG v12; // eax
  LONG v13; // edx
  LONG v14; // ecx
  struct tagRECT v16; // [rsp+30h] [rbp-18h] BYREF

  v9 = *((_DWORD *)a3 + 20) == 2;
  *retstr = 0LL;
  if ( a7 )
    goto LABEL_12;
  if ( *((_DWORD *)a3 + 20) == 2 )
  {
    if ( a4 )
    {
      v10 = anonymous_namespace_::GetInnerSearchBoxOffset(a3) + *((_DWORD *)a3 + 17);
      v11 = v10 - (_DWORD)a5;
    }
    else
    {
      v11 = *((_DWORD *)a3 + 15) - anonymous_namespace_::GetInnerSearchBoxOffset(a3);
      v10 = v11 + (_DWORD)a5;
    }
    retstr->right = v10;
    retstr->left = v11;
    v12 = *((_DWORD *)a3 + 3);
    retstr->bottom = v12;
    retstr->top = v12 - a6;
    return retstr;
  }
  if ( *((_DWORD *)a3 + 19) == 1 )
  {
LABEL_12:
    *retstr = *SearchBoxOnTaskbarSearchAppPositioner::GetCenterModeSearchRect(this, &v16, a3, (int)a5, a6, v9);
    return retstr;
  }
  if ( a4 )
    v13 = *((_DWORD *)a3 + 2) - (_DWORD)a5;
  else
    v13 = *(_DWORD *)a3;
  v14 = *((_DWORD *)a3 + 7);
  v16.top = v14 - a6;
  v16.right = v13 + (_DWORD)a5;
  v16.left = v13;
  v16.bottom = v14;
  *retstr = v16;
  return retstr;
}
