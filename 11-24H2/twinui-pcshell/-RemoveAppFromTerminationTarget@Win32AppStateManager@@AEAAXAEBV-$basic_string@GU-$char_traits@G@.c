/*
 * XREFs of ?RemoveAppFromTerminationTarget@Win32AppStateManager@@AEAAXAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@_N@Z @ 0x180575240
 * Callers:
 *     ?CancelTerminateApp@Win32AppStateManager@@UEAAXPEBG@Z @ 0x180574800 (-CancelTerminateApp@Win32AppStateManager@@UEAAXPEBG@Z.c)
 *     ?UpdateAppViewWorker@Win32AppStateManager@@AEAAXPEAUHWND__@@W4ViewState@AppLimits@FamilySafety@Internal@Windows@@PEAUIAppStateChangeNotification@4567@@Z @ 0x180575B30 (-UpdateAppViewWorker@Win32AppStateManager@@AEAAXPEAUHWND__@@W4ViewState@AppLimits@FamilySafety@I.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x18004D04C (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x1800EA680 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x18013C6D0 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ??$_Find_lower_bound@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VUwpAppPackageInfo@@@2@U?$less@X@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VUwpAppPackageInfo@@@2@@std@@@2@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VUwpAppPackageInfo@@@2@@std@@PEAX@std@@@1@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x1802B4A50 (--$_Find_lower_bound@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@-$_Tree@V-$_.c)
 *     ??$_Lower_bound_duplicate@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VWin32AppInfo@@@2@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VWin32AppInfo@@@2@@std@@@2@$0A@@std@@@std@@IEBA_NQEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VWin32AppInfo@@@2@@std@@PEAX@1@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x180366328 (--$_Lower_bound_duplicate@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@-$_Tree.c)
 *     ??$DebugInfo@AEAY0CL@$$CBG@AppUsageTelemetry@@SAXAEAY0CL@$$CBG@Z @ 0x180573658 (--$DebugInfo@AEAY0CL@$$CBG@AppUsageTelemetry@@SAXAEAY0CL@$$CBG@Z.c)
 *     ??$DebugInfo@AEAY0DC@$$CBG@AppUsageTelemetry@@SAXAEAY0DC@$$CBG@Z @ 0x1805736E8 (--$DebugInfo@AEAY0DC@$$CBG@AppUsageTelemetry@@SAXAEAY0DC@$$CBG@Z.c)
 *     ??$EnforcedAppClosed@PEBG@AppUsageTelemetry@@SAX$$QEAPEBG@Z @ 0x18057384C (--$EnforcedAppClosed@PEBG@AppUsageTelemetry@@SAX$$QEAPEBG@Z.c)
 *     ??$erase@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$pair@IW4TerminationType@AppLimits@FamilySafety@Internal@Windows@@@2@@std@@@std@@@std@@@std@@$0A@@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$pair@IW4TerminationType@AppLimits@FamilySafety@Internal@Windows@@@2@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$pair@IW4TerminationType@AppLimits@FamilySafety@Internal@Windows@@@2@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$pair@IW4TerminationType@AppLimits@FamilySafety@Internal@Windows@@@2@@std@@@std@@@std@@@1@V21@@Z @ 0x180574188 (--$erase@V-$_Tree_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$basic_string@GU-$ch.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Win32AppStateManager::RemoveAppFromTerminationTarget(__int64 a1, unsigned __int16 *a2, char a3)
{
  __int64 v6; // rsi
  __int64 v7; // rcx
  const WCHAR *v8; // rcx
  __int64 v9; // [rsp+20h] [rbp-38h] BYREF
  __int64 v10; // [rsp+30h] [rbp-28h]
  const WCHAR *v11; // [rsp+60h] [rbp+8h] BYREF
  RTL_SRWLOCK *v12; // [rsp+78h] [rbp+20h] BYREF

  AppUsageTelemetry::DebugInfo<unsigned short const (&)[43]>((const WCHAR *)a1);
  wil::AcquireSRWLockExclusive(&v12, (RTL_SRWLOCK *)(a1 + 56));
  std::_Tree<std::_Tmap_traits<std::wstring,std::shared_ptr<UwpAppPackageInfo>,std::less<void>,std::allocator<std::pair<std::wstring const,std::shared_ptr<UwpAppPackageInfo>>>,0>>::_Find_lower_bound<std::wstring>(
    a1 + 80,
    &v9,
    a2);
  v6 = v10;
  if ( std::_Tree<std::_Tmap_traits<std::wstring,std::shared_ptr<Win32AppInfo>,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::shared_ptr<Win32AppInfo>>>,0>>::_Lower_bound_duplicate<std::wstring>(
         v7,
         v10,
         a2)
    && v6 != *(_QWORD *)(a1 + 80) )
  {
    if ( a3 )
    {
      if ( *((_QWORD *)a2 + 3) > 7uLL )
        a2 = *(unsigned __int16 **)a2;
      v11 = a2;
      AppUsageTelemetry::EnforcedAppClosed<unsigned short const *>(&v11);
    }
    std::_Tree<std::_Tmap_traits<std::wstring,std::pair<unsigned int,enum Windows::Internal::FamilySafety::AppLimits::TerminationType>,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::pair<unsigned int,enum Windows::Internal::FamilySafety::AppLimits::TerminationType>>>,0>>::erase<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,std::pair<unsigned int,enum Windows::Internal::FamilySafety::AppLimits::TerminationType>>>>>,0>(
      a1 + 80,
      &v11,
      v6);
  }
  if ( !*(_QWORD *)(a1 + 88) && *(_QWORD *)(a1 + 152) )
  {
    AppUsageTelemetry::DebugInfo<unsigned short const (&)[50]>(v8);
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 152) + 64LL))(*(_QWORD *)(a1 + 152));
    wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)(a1 + 152));
  }
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v12);
}
