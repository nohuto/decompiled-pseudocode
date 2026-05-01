/*
 * XREFs of ?find@?$_Tree@V?$_Tmap_traits@PEAUHWND__@@UExeData@@U?$less@PEAUHWND__@@@std@@V?$allocator@U?$pair@QEAUHWND__@@UExeData@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHWND__@@UExeData@@@std@@@std@@@std@@@2@AEBQEAUHWND__@@@Z @ 0x1805762C4
 * Callers:
 *     ?UpdateAppViewWorker@Win32AppStateManager@@AEAAXPEAUHWND__@@W4ViewState@AppLimits@FamilySafety@Internal@Windows@@PEAUIAppStateChangeNotification@4567@@Z @ 0x180575B30 (-UpdateAppViewWorker@Win32AppStateManager@@AEAAXPEAUHWND__@@W4ViewState@AppLimits@FamilySafety@I.c)
 * Callees:
 *     ??$_Find_lower_bound@PEAUHWND__@@@?$_Tree@V?$_Tmap_traits@PEAUHWND__@@UExeData@@U?$less@PEAUHWND__@@@std@@V?$allocator@U?$pair@QEAUHWND__@@UExeData@@@std@@@4@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@QEAUHWND__@@UExeData@@@std@@PEAX@std@@@1@AEBQEAUHWND__@@@Z @ 0x1801B0FE8 (--$_Find_lower_bound@PEAUHWND__@@@-$_Tree@V-$_Tmap_traits@PEAUHWND__@@UExeData@@U-$less@PEAUHWND.c)
 */

__int64 *__fastcall std::_Tree<std::_Tmap_traits<HWND__ *,ExeData,std::less<HWND__ *>,std::allocator<std::pair<HWND__ * const,ExeData>>,0>>::find(
        __int64 *a1,
        __int64 a2,
        _QWORD *a3)
{
  _QWORD *v4; // r8
  __int64 *v5; // r11
  __int64 v6; // r10
  __int64 v8; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+30h] [rbp-18h]

  std::_Tree<std::_Tmap_traits<HWND__ *,ExeData,std::less<HWND__ *>,std::allocator<std::pair<HWND__ * const,ExeData>>,0>>::_Find_lower_bound<HWND__ *>(
    a1,
    &v8,
    a3);
  v6 = v9;
  if ( *(_BYTE *)(v9 + 25) || *v4 < *(_QWORD *)(v9 + 32) )
    v6 = *a1;
  *v5 = v6;
  return v5;
}
