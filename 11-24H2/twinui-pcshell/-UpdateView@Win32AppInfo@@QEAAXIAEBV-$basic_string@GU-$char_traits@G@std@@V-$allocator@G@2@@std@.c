/*
 * XREFs of ?UpdateView@Win32AppInfo@@QEAAXIAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAUHWND__@@W4ViewState@AppLimits@FamilySafety@Internal@Windows@@@Z @ 0x1805760EC
 * Callers:
 *     ?UpdateAppViewWorker@Win32AppStateManager@@AEAAXPEAUHWND__@@W4ViewState@AppLimits@FamilySafety@Internal@Windows@@PEAUIAppStateChangeNotification@4567@@Z @ 0x180575B30 (-UpdateAppViewWorker@Win32AppStateManager@@AEAAXPEAUHWND__@@W4ViewState@AppLimits@FamilySafety@I.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180048554 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$_Emplace@AEAIAEAV?$shared_ptr@VWin32ProcessInfo@@@std@@@?$_Tree@V?$_Tmap_traits@IV?$shared_ptr@VWin32ProcessInfo@@@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$shared_ptr@VWin32ProcessInfo@@@std@@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBIV?$shared_ptr@VWin32ProcessInfo@@@std@@@std@@PEAX@std@@_N@1@AEAIAEAV?$shared_ptr@VWin32ProcessInfo@@@1@@Z @ 0x180573B74 (--$_Emplace@AEAIAEAV-$shared_ptr@VWin32ProcessInfo@@@std@@@-$_Tree@V-$_Tmap_traits@IV-$shared_pt.c)
 *     ??$make_shared@VWin32ProcessInfo@@AEAIAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@YA?AV?$shared_ptr@VWin32ProcessInfo@@@0@AEAIAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@@Z @ 0x18057427C (--$make_shared@VWin32ProcessInfo@@AEAIAEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2.c)
 *     ?UpdateView@Win32ProcessInfo@@QEAAXPEAUHWND__@@W4ViewState@AppLimits@FamilySafety@Internal@Windows@@@Z @ 0x18057619C (-UpdateView@Win32ProcessInfo@@QEAAXPEAUHWND__@@W4ViewState@AppLimits@FamilySafety@Internal@Windo.c)
 *     ?find@?$_Tree@V?$_Tmap_traits@IV?$shared_ptr@VWin32ProcessInfo@@@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$shared_ptr@VWin32ProcessInfo@@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$shared_ptr@VWin32ProcessInfo@@@std@@@std@@@std@@@std@@@2@AEBI@Z @ 0x180576280 (-find@-$_Tree@V-$_Tmap_traits@IV-$shared_ptr@VWin32ProcessInfo@@@std@@U-$less@I@2@V-$allocator@U.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Win32AppInfo::UpdateView(__int64 a1, int a2, __int64 a3, __int64 a4, unsigned int a5)
{
  __int64 *v7; // rdi
  __int64 v8; // [rsp+20h] [rbp-28h] BYREF
  std::_Ref_count_base *v9; // [rsp+28h] [rbp-20h]
  _BYTE v10[24]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v11; // [rsp+50h] [rbp+8h] BYREF
  int v12; // [rsp+58h] [rbp+10h] BYREF

  v12 = a2;
  v7 = (__int64 *)(a1 + 32);
  std::_Tree<std::_Tmap_traits<unsigned int,std::shared_ptr<Win32ProcessInfo>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::shared_ptr<Win32ProcessInfo>>>,0>>::find(
    a1 + 32,
    &v11,
    &v12);
  if ( v11 == *v7 )
  {
    std::make_shared<Win32ProcessInfo,unsigned int &,std::wstring const &>(&v8, &v12, a3);
    Win32ProcessInfo::UpdateView(v8, a4, a5);
    std::_Tree<std::_Tmap_traits<unsigned int,std::shared_ptr<Win32ProcessInfo>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::shared_ptr<Win32ProcessInfo>>>,0>>::_Emplace<unsigned int &,std::shared_ptr<Win32ProcessInfo> &>(
      v7,
      (__int64)v10,
      &v12);
    if ( v9 )
      std::_Ref_count_base::_Decref(v9);
  }
  else
  {
    Win32ProcessInfo::UpdateView(*(_QWORD *)(v11 + 40), a4, a5);
  }
}
