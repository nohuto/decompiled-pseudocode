/*
 * XREFs of ?FindExeDataForPid@Win32AppInfo@@QEAA?AV?$optional@UExeData@@@std@@I@Z @ 0x180574A18
 * Callers:
 *     ?UpdateAppViewWorker@Win32AppStateManager@@AEAAXPEAUHWND__@@W4ViewState@AppLimits@FamilySafety@Internal@Windows@@PEAUIAppStateChangeNotification@4567@@Z @ 0x180575B30 (-UpdateAppViewWorker@Win32AppStateManager@@AEAAXPEAUHWND__@@W4ViewState@AppLimits@FamilySafety@I.c)
 * Callees:
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??0ExeData@@QEAA@$$QEAU0@@Z @ 0x180574330 (--0ExeData@@QEAA@$$QEAU0@@Z.c)
 *     ??0ExeData@@QEAA@IAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@0@Z @ 0x1805743EC (--0ExeData@@QEAA@IAEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@0@Z.c)
 *     ??1ExeData@@QEAA@XZ @ 0x180574584 (--1ExeData@@QEAA@XZ.c)
 *     ?find@?$_Tree@V?$_Tmap_traits@IV?$shared_ptr@VWin32ProcessInfo@@@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$shared_ptr@VWin32ProcessInfo@@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$shared_ptr@VWin32ProcessInfo@@@std@@@std@@@std@@@std@@@2@AEBI@Z @ 0x180576280 (-find@-$_Tree@V-$_Tmap_traits@IV-$shared_ptr@VWin32ProcessInfo@@@std@@U-$less@I@2@V-$allocator@U.c)
 */

__int64 __fastcall Win32AppInfo::FindExeDataForPid(__int64 a1, __int64 a2, int a3)
{
  __int64 v7; // [rsp+20h] [rbp-88h] BYREF
  void *v8[10]; // [rsp+30h] [rbp-78h] BYREF
  int v9; // [rsp+C0h] [rbp+18h] BYREF

  v9 = a3;
  v7 = a2;
  std::_Tree<std::_Tmap_traits<unsigned int,std::shared_ptr<Win32ProcessInfo>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::shared_ptr<Win32ProcessInfo>>>,0>>::find(
    a1 + 32,
    &v7,
    &v9);
  if ( v7 == *(_QWORD *)(a1 + 32) )
  {
    *(_BYTE *)(a2 + 72) = 0;
  }
  else
  {
    ExeData::ExeData(v8, a3, *(_QWORD *)(v7 + 40) + 24LL, a1);
    ExeData::ExeData(a2, (__int64)v8);
    *(_BYTE *)(a2 + 72) = 1;
    ExeData::~ExeData(v8);
  }
  return a2;
}
