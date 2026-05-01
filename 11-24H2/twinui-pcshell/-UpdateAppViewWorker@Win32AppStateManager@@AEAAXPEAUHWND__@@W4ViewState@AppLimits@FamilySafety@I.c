/*
 * XREFs of ?UpdateAppViewWorker@Win32AppStateManager@@AEAAXPEAUHWND__@@W4ViewState@AppLimits@FamilySafety@Internal@Windows@@PEAUIAppStateChangeNotification@4567@@Z @ 0x180575B30
 * Callers:
 *     _lambda_bfcda2f4b09e169516dee7a5816294eb_::operator() @ 0x180574694 (_lambda_bfcda2f4b09e169516dee7a5816294eb_--operator().c)
 *     ?UpdateAppView@Win32AppStateManager@@UEAAXPEAUIApplicationView@@W4ViewState@AppLimits@FamilySafety@Internal@Windows@@PEAUIAppStateChangeNotification@4567@_N@Z @ 0x180575930 (-UpdateAppView@Win32AppStateManager@@UEAAXPEAUIApplicationView@@W4ViewState@AppLimits@FamilySafe.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180048554 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800561C8 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x18005C784 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$ComPtr@UIA.c)
 *     ?_Extract@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@PEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x18006A48C (-_Extract@-$_Tree_val@U-$_Tree_simple_types@U-$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositio.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800B9040 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x1800EA680 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800F2678 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180120A50 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x1801343EC (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x18013C6D0 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ??$_Freenode@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VUwpAppPackageInfo@@@2@@std@@PEAX@std@@@std@@@?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VUwpAppPackageInfo@@@2@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VUwpAppPackageInfo@@@2@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1802CBBC0 (--$_Freenode@V-$allocator@U-$_Tree_node@U-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$al.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??$DebugInfo@AEAY0DL@$$CBG@AppUsageTelemetry@@SAXAEAY0DL@$$CBG@Z @ 0x180573778 (--$DebugInfo@AEAY0DL@$$CBG@AppUsageTelemetry@@SAXAEAY0DL@$$CBG@Z.c)
 *     ??$_Emplace@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VWin32AppInfo@@@2@@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VWin32AppInfo@@@2@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VWin32AppInfo@@@2@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VWin32AppInfo@@@2@@std@@PEAX@std@@_N@1@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@$$QEAV?$shared_ptr@VWin32AppInfo@@@1@@Z @ 0x180573E00 (--$_Emplace@AEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$shared_ptr@VWin3.c)
 *     ??$_Emplace@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBV12@@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@PEAX@std@@_N@1@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@0@Z @ 0x180573EE8 (--$_Emplace@AEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEBV12@@-$_Tree@V-$.c)
 *     ??$_Freenode@V?$allocator@U?$_Tree_node@U?$pair@QEAUHWND__@@UExeData@@@std@@PEAX@std@@@std@@@?$_Tree_node@U?$pair@QEAUHWND__@@UExeData@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_Tree_node@U?$pair@QEAUHWND__@@UExeData@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x180573FFC (--$_Freenode@V-$allocator@U-$_Tree_node@U-$pair@QEAUHWND__@@UExeData@@@std@@PEAX@std@@@std@@@-$_.c)
 *     ??$make_shared@VWin32AppInfo@@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@YA?AV?$shared_ptr@VWin32AppInfo@@@0@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@@Z @ 0x1805741D4 (--$make_shared@VWin32AppInfo@@AEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@.c)
 *     ??0ExeData@@QEAA@$$QEAU0@@Z @ 0x180574330 (--0ExeData@@QEAA@$$QEAU0@@Z.c)
 *     ??0ExeData@@QEAA@AEBU0@@Z @ 0x1805743A0 (--0ExeData@@QEAA@AEBU0@@Z.c)
 *     ??1?$_Optional_destruct_base@UExeData@@$0A@@std@@QEAA@XZ @ 0x18057448C (--1-$_Optional_destruct_base@UExeData@@$0A@@std@@QEAA@XZ.c)
 *     ??1?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@QEAA@XZ @ 0x18057455C (--1-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V12@@std@@QEAA@XZ.c)
 *     ??1ExeData@@QEAA@XZ @ 0x180574584 (--1ExeData@@QEAA@XZ.c)
 *     ?FindExeDataForPid@Win32AppInfo@@QEAA?AV?$optional@UExeData@@@std@@I@Z @ 0x180574A18 (-FindExeDataForPid@Win32AppInfo@@QEAA-AV-$optional@UExeData@@@std@@I@Z.c)
 *     ?GetAppIdFromExePath@ExePathToAppIdMapping@@QEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBV23@@Z @ 0x180574B98 (-GetAppIdFromExePath@ExePathToAppIdMapping@@QEAA-AV-$basic_string@GU-$char_traits@G@std@@V-$allo.c)
 *     ?IsProcessActive@Win32ProcessInfo@@QEAA_NXZ @ 0x180575024 (-IsProcessActive@Win32ProcessInfo@@QEAA_NXZ.c)
 *     ?RemoveAppFromTerminationTarget@Win32AppStateManager@@AEAAXAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@_N@Z @ 0x180575240 (-RemoveAppFromTerminationTarget@Win32AppStateManager@@AEAAXAEBV-$basic_string@GU-$char_traits@G@.c)
 *     ?SaveExeData@ExeDataCache@@QEAAXPEAUHWND__@@IAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@1@Z @ 0x180575340 (-SaveExeData@ExeDataCache@@QEAAXPEAUHWND__@@IAEBV-$basic_string@GU-$char_traits@G@std@@V-$alloca.c)
 *     ?UpdateView@Win32AppInfo@@QEAAXIAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAUHWND__@@W4ViewState@AppLimits@FamilySafety@Internal@Windows@@@Z @ 0x1805760EC (-UpdateView@Win32AppInfo@@QEAAXIAEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@.c)
 *     ?find@?$_Tree@V?$_Tmap_traits@PEAUHWND__@@UExeData@@U?$less@PEAUHWND__@@@std@@V?$allocator@U?$pair@QEAUHWND__@@UExeData@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHWND__@@UExeData@@@std@@@std@@@std@@@2@AEBQEAUHWND__@@@Z @ 0x1805762C4 (-find@-$_Tree@V-$_Tmap_traits@PEAUHWND__@@UExeData@@U-$less@PEAUHWND__@@@std@@V-$allocator@U-$pa.c)
 *     ?find@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VWin32AppInfo@@@2@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VWin32AppInfo@@@2@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VWin32AppInfo@@@2@@std@@@std@@@std@@@2@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@@Z @ 0x180576308 (-find@-$_Tree@V-$_Tmap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$s.c)
 *     ?ComputeAppIdFromExePath@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x180576714 (-ComputeAppIdFromExePath@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@PEBG.c)
 *     ?GetAppIdForSpecialCategoryApp@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBGI@Z @ 0x1805767B0 (-GetAppIdForSpecialCategoryApp@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std.c)
 *     ?TryGetProcessExePathAndAppId@@YA?AU?$pair@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@I@Z @ 0x180576E20 (-TryGetProcessExePathAndAppId@@YA-AU-$pair@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=9
void __fastcall Win32AppStateManager::UpdateAppViewWorker(__int64 a1, RTL_SRWLOCK *a2, int a3, __int64 a4)
{
  char v7; // r13
  __int64 v8; // r8
  RTL_SRWLOCK *v9; // rbx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 i; // rax
  __int64 j; // rcx
  __int64 *v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 *v20; // rax
  __int64 v21; // rcx
  __int64 v22; // r8
  DWORD v23; // edi
  __int64 v24; // rax
  __int64 ExeDataForPid; // rax
  __int64 v26; // rbx
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // r15
  __int64 v31; // r8
  __int64 ProcessExePathAndAppId; // rbx
  const WCHAR *v33; // rcx
  __int128 *v34; // rdx
  __int64 AppIdForSpecialCategoryApp; // rax
  __int64 AppIdFromExePath; // rax
  __int128 *v37; // rdx
  __int64 v38; // rax
  __int128 *v39; // rdx
  char v40; // [rsp+30h] [rbp-D0h]
  DWORD dwProcessId[2]; // [rsp+38h] [rbp-C8h] BYREF
  RTL_SRWLOCK *v42[3]; // [rsp+48h] [rbp-B8h] BYREF
  void *v43; // [rsp+60h] [rbp-A0h] BYREF
  char v44[32]; // [rsp+68h] [rbp-98h] BYREF
  char v45[32]; // [rsp+88h] [rbp-78h] BYREF
  char v46; // [rsp+A8h] [rbp-58h]
  __int64 v47; // [rsp+B0h] [rbp-50h]
  _BYTE v48[80]; // [rsp+B8h] [rbp-48h] BYREF
  __int128 v49; // [rsp+108h] [rbp+8h] BYREF
  __int64 v50; // [rsp+118h] [rbp+18h]
  unsigned __int64 v51; // [rsp+120h] [rbp+20h]
  __int128 v52; // [rsp+128h] [rbp+28h] BYREF
  __int64 v53; // [rsp+138h] [rbp+38h]
  unsigned __int64 v54; // [rsp+140h] [rbp+40h]
  RTL_SRWLOCK *v55; // [rsp+150h] [rbp+50h] BYREF
  std::_Ref_count_base *v56; // [rsp+158h] [rbp+58h]

  v47 = a4;
  v7 = 0;
  v40 = 0;
  v49 = 0LL;
  v50 = 0LL;
  v51 = 7LL;
  LOWORD(v49) = 0;
  v42[0] = a2;
  Microsoft::WRL::Wrappers::SRWLock::LockShared((RTL_SRWLOCK **)dwProcessId, (RTL_SRWLOCK *)(a1 + 96));
  std::_Tree<std::_Tmap_traits<HWND__ *,ExeData,std::less<HWND__ *>,std::allocator<std::pair<HWND__ * const,ExeData>>,0>>::find(
    a1 + 104,
    &v55,
    v42);
  if ( v55 == *(RTL_SRWLOCK **)(a1 + 104) )
  {
    v46 = 0;
  }
  else
  {
    ExeData::ExeData((ExeData *)&v43, (const struct ExeData *)&v55[5]);
    v46 = 1;
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>((RTL_SRWLOCK **)dwProcessId);
  if ( a3 != 1 )
  {
    v52 = 0LL;
    v53 = 0LL;
    v54 = 7LL;
    LOWORD(v52) = 0;
    if ( v46 )
    {
      v23 = (unsigned int)v43;
LABEL_41:
      std::wstring::operator=((char *)&v52, v44, v8);
      std::wstring::operator=((char *)&v49, v45, v31);
      goto LABEL_54;
    }
    dwProcessId[0] = 0;
    GetWindowThreadProcessId((HWND)a2, dwProcessId);
    v23 = dwProcessId[0];
    if ( dwProcessId[0] && v23 != GetCurrentProcessId() )
    {
      Microsoft::WRL::Wrappers::SRWLock::LockShared(&v55, (RTL_SRWLOCK *)(a1 + 56));
      v24 = **(_QWORD **)(a1 + 64);
      *(_QWORD *)dwProcessId = v24;
      while ( !*(_BYTE *)(v24 + 25) )
      {
        ExeDataForPid = Win32AppInfo::FindExeDataForPid(*(_QWORD *)(v24 + 64), (__int64)v48, v23);
        v26 = ExeDataForPid;
        if ( *(_BYTE *)(ExeDataForPid + 72) )
        {
          if ( v46 )
          {
            LODWORD(v43) = *(_DWORD *)ExeDataForPid;
            std::wstring::operator=((__int64)v44, ExeDataForPid + 8);
            std::wstring::operator=((__int64)v45, v26 + 40);
          }
          else
          {
            ExeData::ExeData((__int64)&v43, ExeDataForPid);
            v46 = 1;
          }
        }
        else if ( v46 )
        {
          ExeData::~ExeData(&v43);
          v46 = 0;
        }
        std::_Optional_destruct_base<ExeData,0>::~_Optional_destruct_base<ExeData,0>((ExeData *)v48);
        if ( v46 )
        {
          v30 = a1 + 96;
          ExeDataCache::SaveExeData(a1 + 96, (__int64)a2, (unsigned int)v43, (__int64)v44, (__int64)v45);
          goto LABEL_40;
        }
        std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<Microsoft::WRL::ComPtr<IApplicationView> const,std::shared_ptr<BroadcastDVRActiveAppInfo>>>>,std::_Iterator_base0>::operator++(
          (__int64 *)dwProcessId,
          v27,
          v28,
          v29);
        v24 = *(_QWORD *)dwProcessId;
      }
      v30 = a1 + 96;
LABEL_40:
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v55);
      if ( v46 )
        goto LABEL_41;
      ProcessExePathAndAppId = TryGetProcessExePathAndAppId(&v55, v23);
      std::wstring::operator=((__int64)&v52, ProcessExePathAndAppId);
      std::wstring::operator=((__int64)&v49, ProcessExePathAndAppId + 32);
      std::pair<std::wstring const,std::wstring>::~pair<std::wstring const,std::wstring>((void **)&v55);
      if ( v53 )
      {
        if ( v50 )
        {
          AppUsageTelemetry::DebugInfo<unsigned short const (&)[59]>(v33);
        }
        else
        {
          v34 = &v52;
          if ( v54 > 7 )
            v34 = (__int128 *)v52;
          AppIdForSpecialCategoryApp = GetAppIdForSpecialCategoryApp(&v55, v34, v23);
          std::wstring::operator=((__int64)&v49, AppIdForSpecialCategoryApp);
          std::wstring::_Tidy_deallocate((void **)&v55);
        }
        if ( !v50 )
        {
          AppIdFromExePath = ExePathToAppIdMapping::GetAppIdFromExePath(
                               (RTL_SRWLOCK *)(a1 + 120),
                               (__int64)&v55,
                               (unsigned __int16 *)&v52);
          std::wstring::operator=((__int64)&v49, AppIdFromExePath);
          std::wstring::_Tidy_deallocate((void **)&v55);
          if ( !v50 )
          {
            v37 = &v52;
            if ( v54 > 7 )
              v37 = (__int128 *)v52;
            v38 = ComputeAppIdFromExePath(&v55, v37);
            std::wstring::operator=((__int64)&v49, v38);
            std::wstring::_Tidy_deallocate((void **)&v55);
            wil::AcquireSRWLockExclusive(&v55, (RTL_SRWLOCK *)(a1 + 120));
            std::_Tree<std::_Tmap_traits<std::wstring,std::wstring,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::wstring>>,0>>::_Emplace<std::wstring const &,std::wstring const &>(
              (__int64 *)(a1 + 128),
              (__int64)v42,
              (unsigned __int16 *)&v52,
              (__int64)&v49);
            CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v55);
          }
        }
        ExeDataCache::SaveExeData(v30, (__int64)a2, v23, (__int64)&v52, (__int64)&v49);
LABEL_54:
        wil::AcquireSRWLockExclusive(v42, (RTL_SRWLOCK *)(a1 + 56));
        std::_Tree<std::_Tmap_traits<std::wstring,std::shared_ptr<Win32AppInfo>,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::shared_ptr<Win32AppInfo>>>,0>>::find(
          a1 + 64,
          &v55,
          &v49);
        if ( v55 == *(RTL_SRWLOCK **)(a1 + 64) )
        {
          std::make_shared<Win32AppInfo,std::wstring &>(&v55, (__int64)&v49);
          Win32AppInfo::UpdateView((_DWORD)v55, v23, (unsigned int)&v52, (_DWORD)a2, a3);
          std::_Tree<std::_Tmap_traits<std::wstring,std::shared_ptr<Win32AppInfo>,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::shared_ptr<Win32AppInfo>>>,0>>::_Emplace<std::wstring &,std::shared_ptr<Win32AppInfo>>(
            (__int64 *)(a1 + 64),
            (__int64)dwProcessId,
            (unsigned __int16 *)&v49,
            &v55);
          v40 = 1;
          if ( v56 )
            std::_Ref_count_base::_Decref(v56);
        }
        else
        {
          Win32AppInfo::UpdateView(v55[8].Ptr, v23, (unsigned int)&v52, (_DWORD)a2, a3);
        }
        CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(v42);
        std::wstring::_Tidy_deallocate((void **)&v52);
        LOBYTE(v22) = v40;
        if ( v40 )
          goto LABEL_59;
        goto LABEL_63;
      }
    }
    std::wstring::_Tidy_deallocate((void **)&v52);
    goto LABEL_63;
  }
  if ( v46 )
  {
    std::wstring::operator=((char *)&v49, v45, v8);
    wil::AcquireSRWLockExclusive(v42, (RTL_SRWLOCK *)(a1 + 56));
    std::_Tree<std::_Tmap_traits<std::wstring,std::shared_ptr<Win32AppInfo>,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::shared_ptr<Win32AppInfo>>>,0>>::find(
      a1 + 64,
      &v55,
      &v49);
    v9 = v55;
    if ( v55 != *(RTL_SRWLOCK **)(a1 + 64) )
    {
      Win32AppInfo::UpdateView(v55[8].Ptr, (_DWORD)v43, (unsigned int)v44, (_DWORD)a2, 1);
      v11 = **((_QWORD **)v9[8].Ptr + 4);
      while ( !*(_BYTE *)(v11 + 25) )
      {
        if ( Win32ProcessInfo::IsProcessActive(*(__int64 ****)(v11 + 40)) )
          goto LABEL_20;
        v13 = *(_QWORD *)(v12 + 16);
        if ( *(_BYTE *)(v13 + 25) )
        {
          for ( i = *(_QWORD *)(v12 + 8); !*(_BYTE *)(i + 25) && v12 == *(_QWORD *)(i + 16); i = *(_QWORD *)(i + 8) )
            v12 = i;
          v11 = i;
        }
        else
        {
          v11 = *(_QWORD *)(v12 + 16);
          for ( j = *(_QWORD *)v13; !*(_BYTE *)(j + 25); j = *(_QWORD *)j )
            v11 = j;
        }
      }
      v7 = 1;
      v16 = std::_Tree_val<std::_Tree_simple_types<std::pair<HWND__ * const,CDesktopPositioner::WindowCloakInfo>>>::_Extract(
              (_QWORD *)(a1 + 64),
              (__int64)v9,
              v10,
              v11);
      std::_Tree_node<std::pair<std::wstring const,std::shared_ptr<UwpAppPackageInfo>>,void *>::_Freenode<std::allocator<std::_Tree_node<std::pair<std::wstring const,std::shared_ptr<UwpAppPackageInfo>>,void *>>>(
        v17,
        (void **)v16);
    }
LABEL_20:
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(v42);
    v55 = a2;
    wil::AcquireSRWLockExclusive((RTL_SRWLOCK **)dwProcessId, (RTL_SRWLOCK *)(a1 + 96));
    std::_Tree<std::_Tmap_traits<HWND__ *,ExeData,std::less<HWND__ *>,std::allocator<std::pair<HWND__ * const,ExeData>>,0>>::find(
      a1 + 104,
      v42,
      &v55);
    if ( v42[0] != *(RTL_SRWLOCK **)(a1 + 104) )
    {
      v20 = std::_Tree_val<std::_Tree_simple_types<std::pair<HWND__ * const,CDesktopPositioner::WindowCloakInfo>>>::_Extract(
              (_QWORD *)(a1 + 104),
              (__int64)v42[0],
              v18,
              v19);
      std::_Tree_node<std::pair<HWND__ * const,ExeData>,void *>::_Freenode<std::allocator<std::_Tree_node<std::pair<HWND__ * const,ExeData>,void *>>>(
        v21,
        (__int64)v20);
    }
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((RTL_SRWLOCK **)dwProcessId);
    if ( v7 )
    {
      Win32AppStateManager::RemoveAppFromTerminationTarget(a1, (unsigned __int16 *)&v49, 1);
      LOBYTE(v22) = 0;
LABEL_59:
      v39 = &v49;
      if ( v51 > 7 )
        v39 = (__int128 *)v49;
      (*(void (__fastcall **)(__int64, __int128 *, __int64))(*(_QWORD *)v47 + 24LL))(v47, v39, v22);
    }
  }
LABEL_63:
  std::_Optional_destruct_base<ExeData,0>::~_Optional_destruct_base<ExeData,0>((ExeData *)&v43);
  std::wstring::_Tidy_deallocate((void **)&v49);
}
