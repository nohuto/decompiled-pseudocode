/*
 * XREFs of ?StartMonitor@StartupAppMonitor@@QEAAXXZ @ 0x1800F0B10
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_6808b338f89be0d2d60c00a970e053ed__&_::Run @ 0x1802C2710 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_6808b338f89be0d2d60c00a970e053ed__-_--Run.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180048554 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800489DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??0?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z @ 0x180049024 (--0-$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z.c)
 *     ??1?$function@$$A6A_NJ@Z@wistd@@QEAA@XZ @ 0x1800BC4BC (--1-$function@$$A6A_NJ@Z@wistd@@QEAA@XZ.c)
 *     ??4?$unique_any_t@V?$registry_watcher_t@V?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800EF28C (--4-$unique_any_t@V-$registry_watcher_t@V-$unique_storage@U-$resource_policy@PEAUregistry_watche.c)
 *     ?create@?$registry_watcher_t@V?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_exception_policy@3@@wil@@QEAAXPEAUHKEY__@@PEBG_N$$QEAV?$function@$$A6AXW4RegistryChangeKind@wil@@@Z@wistd@@@Z @ 0x1800F1574 (-create@-$registry_watcher_t@V-$unique_storage@U-$resource_policy@PEAUregistry_watcher_state@det.c)
 *     ?put@?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAUHKEY__@@XZ @ 0x1800F2248 (-put@-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@.c)
 *     ?create@?$event_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@QEAAJW4EventOptions@2@PEBGPEAU_SECURITY_ATTRIBUTES@@PEA_N@Z @ 0x1800F24B4 (-create@-$event_t@V-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1801CF810 (--1-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$integral.c)
 *     ?Release@registry_watcher_state@details@wil@@QEAAXXZ @ 0x1801D751C (-Release@registry_watcher_state@details@wil@@QEAAXXZ.c)
 *     ??$make_shared@VStartupRegKeyNotification@@AEAPEAUHKEY__@@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAW4StartupAppLocation@@AEAV34@@std@@YA?AV?$shared_ptr@VStartupRegKeyNotification@@@0@AEAPEAUHKEY__@@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@AEAW4StartupAppLocation@@1@Z @ 0x1801E1D28 (--$make_shared@VStartupRegKeyNotification@@AEAPEAUHKEY__@@AEAV-$basic_string@GU-$char_traits@G@s.c)
 *     ?CheckForChange@StartupNotification@@QEAAX_N@Z @ 0x18023AB8C (-CheckForChange@StartupNotification@@QEAAX_N@Z.c)
 *     ??$?0AEAUREGKEYINFO@@@?$_Ref_count_obj2@UREGKEYINFO@@@std@@QEAA@AEAUREGKEYINFO@@@Z @ 0x1802B3860 (--$-0AEAUREGKEYINFO@@@-$_Ref_count_obj2@UREGKEYINFO@@@std@@QEAA@AEAUREGKEYINFO@@@Z.c)
 *     wistd::function_void___cdecl(enum_wil::RegistryChangeKind)_::function_void___cdecl(enum_wil::RegistryChangeKind)___lambda_f9d92d283d219251b39b1fca3d115af1__void_ @ 0x1802C8258 (wistd--function_void___cdecl(enum_wil--RegistryChangeKind)_--function_void___cdecl(enum_wil--Reg.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 *     ?_Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x18033BE5C (-_Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 *     wistd::function_void___cdecl(enum_wil::FolderChangeEvent_unsigned_short_const__)_::function_void___cdecl(enum_wil::FolderChangeEvent_unsigned_short_const__)___lambda_d30d699a9b0100ad99955a9d234ed237__void_ @ 0x18058332C (wistd--function_void___cdecl(enum_wil--FolderChangeEvent_unsigned_short_const__)_--function_void.c)
 *     ??$make_shared@VStartupFolderNotification@@AEAU_GUID@@AEAW4StartupAppLocation@@AEAPEAUHKEY__@@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@YA?AV?$shared_ptr@VStartupFolderNotification@@@0@AEAU_GUID@@AEAW4StartupAppLocation@@AEAPEAUHKEY__@@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@@Z @ 0x180583650 (--$make_shared@VStartupFolderNotification@@AEAU_GUID@@AEAW4StartupAppLocation@@AEAPEAUHKEY__@@AE.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUfolder_change_reader_state@details@wil@@P6AXPEAU123@@Z$1?delete_folder_change_reader_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x180583930 (--1-$unique_storage@U-$resource_policy@PEAUfolder_change_reader_state@details@wil@@P6AXPEAU123@@.c)
 *     ?make_folder_change_reader@wil@@YA?AV?$unique_any_t@V?$folder_change_reader_t@V?$unique_storage@U?$resource_policy@PEAUfolder_change_reader_state@details@wil@@P6AXPEAU123@@Z$1?delete_folder_change_reader_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_exception_policy@3@@wil@@@1@PEBG_NW4FolderChangeEvents@1@$$QEAV?$function@$$A6AXW4FolderChangeEvent@wil@@PEBG@Z@wistd@@@Z @ 0x180584CB8 (-make_folder_change_reader@wil@@YA-AV-$unique_any_t@V-$folder_change_reader_t@V-$unique_storage@.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUfolder_change_reader_state@details@wil@@P6AXPEAU123@@Z$1?delete_folder_change_reader_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUfolder_change_reader_state@23@@Z @ 0x180584D10 (-reset@-$unique_storage@U-$resource_policy@PEAUfolder_change_reader_state@details@wil@@P6AXPEAU1.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=10
void __fastcall StartupAppMonitor::StartMonitor(StartupAppMonitor *this)
{
  int v2; // r14d
  HKEY *v3; // rax
  bool v4; // r12
  char *v5; // r15
  HKEY v6; // rax
  void *v7; // rax
  __int64 v8; // rbx
  int v9; // r14d
  _QWORD *v10; // rsi
  __int64 v11; // r13
  _QWORD *v12; // rax
  _QWORD *v13; // rcx
  _QWORD *v14; // r8
  _QWORD *v15; // r12
  __int64 *v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rdx
  std::_Ref_count_base *v19; // rcx
  _QWORD *i; // rbx
  __int64 *v21; // rax
  StartupNotification **v22; // rsi
  __int64 v23; // rcx
  __int64 v24; // rdx
  std::_Ref_count_base *v25; // rcx
  int v26; // r8d
  int v27; // r9d
  _QWORD *v28; // rdx
  _QWORD *v29; // rax
  _QWORD *v30; // r14
  HKEY *v31; // rax
  unsigned int Key; // eax
  unsigned int v33; // eax
  HKEY v34; // rax
  const char *v35; // r9
  PHKEY phkResult; // [rsp+20h] [rbp-218h]
  unsigned int phkResulta; // [rsp+20h] [rbp-218h]
  bool v38; // [rsp+50h] [rbp-1E8h]
  BYTE Data[4]; // [rsp+54h] [rbp-1E4h] BYREF
  HKEY hKey; // [rsp+58h] [rbp-1E0h] BYREF
  wil::details::registry_watcher_state *v41; // [rsp+60h] [rbp-1D8h] BYREF
  HKEY v42[3]; // [rsp+68h] [rbp-1D0h] BYREF
  __int128 v43; // [rsp+80h] [rbp-1B8h] BYREF
  _QWORD v44[3]; // [rsp+90h] [rbp-1A8h] BYREF
  __int64 v45; // [rsp+A8h] [rbp-190h]
  _QWORD v46[2]; // [rsp+B0h] [rbp-188h] BYREF
  _QWORD v47[2]; // [rsp+C0h] [rbp-178h] BYREF
  _QWORD v48[2]; // [rsp+D0h] [rbp-168h] BYREF
  __int64 v49; // [rsp+E0h] [rbp-158h] BYREF
  std::_Ref_count_base *v50; // [rsp+E8h] [rbp-150h]
  char v51; // [rsp+F0h] [rbp-148h] BYREF
  std::_Ref_count_base *v52; // [rsp+F8h] [rbp-140h]
  char v53; // [rsp+100h] [rbp-138h] BYREF
  std::_Ref_count_base *v54; // [rsp+108h] [rbp-130h]
  _BYTE v55[112]; // [rsp+110h] [rbp-128h] BYREF
  __int64 v56; // [rsp+180h] [rbp-B8h]
  _BYTE v57[120]; // [rsp+188h] [rbp-B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+238h] [rbp+0h]

  v2 = 0;
  _create___event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEAAJW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z(
    &StartupAppMonitor::s_showNotificationMapUpdateEvent,
    0LL);
  v42[0] = 0LL;
  v3 = (HKEY *)wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>::put(v42);
  *(_DWORD *)Data = RegOpenKeyExW(
                      HKEY_CURRENT_USER,
                      L"Software\\Microsoft\\Windows\\CurrentVersion\\RunNotification",
                      0,
                      0x20019u,
                      v3);
  v4 = *(_DWORD *)Data != 2;
  v38 = *(_DWORD *)Data != 2;
  v5 = (char *)this + 184;
  v6 = (HKEY)((char *)this + 496);
  hKey = (HKEY)((char *)this + 496);
  try
  {
    while ( v5 != (char *)v6 )
    {
      v7 = operator new(0x78uLL);
      v8 = std::_Ref_count_obj2<REGKEYINFO>::_Ref_count_obj2<REGKEYINFO>(v7, v5);
      v9 = v2 | 1;
      v10 = (_QWORD *)(v8 + 16);
      v44[0] = v8 + 16;
      v44[1] = v8;
      v11 = *((_QWORD *)this + 18);
      if ( *((_QWORD *)this + 19) == 0x7FFFFFFFFFFFFFFLL )
        std::_Xlength_error("list too long");
      v44[2] = (char *)this + 144;
      v45 = 0LL;
      v12 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x20uLL);
      std::shared_ptr<InputAppViewCoodinatorHandler>::shared_ptr<InputAppViewCoodinatorHandler>(v12 + 2, v44);
      ++*((_QWORD *)this + 19);
      v13 = *(_QWORD **)(v11 + 8);
      *v14 = v11;
      v14[1] = v13;
      v45 = 0LL;
      *(_QWORD *)(v11 + 8) = v14;
      *v13 = v14;
      v15 = (_QWORD *)(v8 + 24);
      v16 = (__int64 *)std::make_shared<StartupRegKeyNotification,HKEY__ * &,std::wstring &,enum StartupAppLocation &,std::wstring &>(
                         (unsigned int)&v51,
                         (_DWORD)v10,
                         (int)v8 + 24,
                         (int)v8 + 56,
                         v8 + 64);
      v17 = *v16;
      v18 = v16[1];
      *v16 = 0LL;
      v16[1] = 0LL;
      *(_QWORD *)(v8 + 96) = v17;
      v19 = *(std::_Ref_count_base **)(v8 + 104);
      *(_QWORD *)(v8 + 104) = v18;
      if ( v19 )
        std::_Ref_count_base::_Decref(v19);
      if ( v52 )
        std::_Ref_count_base::_Decref(v52);
      if ( v8 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
        v10 = (_QWORD *)v44[0];
      }
      v46[0] = v10;
      v46[1] = v8;
      std::shared_ptr<InputAppViewCoodinatorHandler>::shared_ptr<InputAppViewCoodinatorHandler>(v47, v46);
      wistd::function_void___cdecl_enum_wil::RegistryChangeKind__::function_void___cdecl_enum_wil::RegistryChangeKind____lambda_f9d92d283d219251b39b1fca3d115af1__void_(
        v55,
        v47);
      if ( *(_QWORD *)(v8 + 48) > 7uLL )
        v15 = (_QWORD *)*v15;
      v41 = 0LL;
      wil::registry_watcher_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::registry_watcher_state *,void (*)(wil::details::registry_watcher_state *),&void wil::details::delete_registry_watcher_state(wil::details::registry_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::registry_watcher_state *,wil::details::registry_watcher_state *,0,std::nullptr_t>>,wil::err_exception_policy>::create(
        &v41,
        *v10,
        v15,
        0LL,
        v55);
      v2 = v9 | 2;
      wil::unique_any_t<wil::registry_watcher_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::registry_watcher_state *,void (*)(wil::details::registry_watcher_state *),&void wil::details::delete_registry_watcher_state(wil::details::registry_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::registry_watcher_state *,wil::details::registry_watcher_state *,0,std::nullptr_t>>,wil::err_returncode_policy>>::operator=(
        v10 + 12,
        &v41);
      if ( v41 )
        wil::details::registry_watcher_state::Release(v41);
      if ( v56 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v56 + 24LL))(v56);
      v4 = v38;
      StartupNotification::CheckForChange(*(StartupNotification **)(v8 + 96), v38);
      if ( v8 )
      {
        std::_Ref_count_base::_Decref((std::_Ref_count_base *)v8);
        std::_Ref_count_base::_Decref((std::_Ref_count_base *)v8);
      }
      v5 += 104;
      v6 = hKey;
    }
    for ( i = (_QWORD *)((char *)this + 496); i != (_QWORD *)((char *)this + 672); i += 11 )
    {
      v21 = (__int64 *)std::make_shared<StartupFolderNotification,_GUID &,enum StartupAppLocation &,HKEY__ * &,std::wstring &>(
                         (unsigned int)&v53,
                         (_DWORD)i,
                         (int)i + 16,
                         (int)i + 24,
                         (__int64)(i + 4));
      v22 = (StartupNotification **)(i + 8);
      v23 = *v21;
      v24 = v21[1];
      *v21 = 0LL;
      v21[1] = 0LL;
      i[8] = v23;
      v25 = (std::_Ref_count_base *)i[9];
      i[9] = v24;
      if ( v25 )
        std::_Ref_count_base::_Decref(v25);
      if ( v54 )
        std::_Ref_count_base::_Decref(v54);
      std::shared_ptr<InputAppViewCoodinatorHandler>::shared_ptr<InputAppViewCoodinatorHandler>(&v49, i + 8);
      std::shared_ptr<InputAppViewCoodinatorHandler>::shared_ptr<InputAppViewCoodinatorHandler>(v48, &v49);
      wistd::function_void___cdecl_enum_wil::FolderChangeEvent_unsigned_short_const____::function_void___cdecl_enum_wil::FolderChangeEvent_unsigned_short_const______lambda_d30d699a9b0100ad99955a9d234ed237__void_(
        v57,
        v48);
      v28 = (_QWORD *)((char *)*v22 + 64);
      if ( *((_QWORD *)*v22 + 11) > 7uLL )
        v28 = (_QWORD *)*v28;
      v29 = (_QWORD *)wil::make_folder_change_reader((unsigned int)&hKey, (_DWORD)v28, v26, v27, (unsigned int)v57);
      v30 = v29;
      if ( i + 10 != v29 )
      {
        wil::details::unique_storage<wil::details::resource_policy<wil::details::folder_change_reader_state *,void (*)(wil::details::folder_change_reader_state *),&void wil::details::delete_folder_change_reader_state(wil::details::folder_change_reader_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::folder_change_reader_state *,wil::details::folder_change_reader_state *,0,std::nullptr_t>>::reset(
          i + 10,
          *v29);
        *v30 = 0LL;
      }
      wil::details::unique_storage<wil::details::resource_policy<wil::details::folder_change_reader_state *,void (*)(wil::details::folder_change_reader_state *),&void wil::details::delete_folder_change_reader_state(wil::details::folder_change_reader_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::folder_change_reader_state *,wil::details::folder_change_reader_state *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<wil::details::folder_change_reader_state *,void (*)(wil::details::folder_change_reader_state *),&void wil::details::delete_folder_change_reader_state(wil::details::folder_change_reader_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::folder_change_reader_state *,wil::details::folder_change_reader_state *,0,std::nullptr_t>>(&hKey);
      wistd::function<bool (long)>::~function<bool (long)>((__int64)v57);
      StartupNotification::CheckForChange(*v22, v4);
      if ( v50 )
        std::_Ref_count_base::_Decref(v50);
    }
    if ( *(_DWORD *)Data == 2 )
    {
      hKey = 0LL;
      v31 = (HKEY *)wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>::put(&hKey);
      Key = RegCreateKeyExW(
              HKEY_CURRENT_USER,
              L"Software\\Microsoft\\Windows\\CurrentVersion\\Notifications\\Settings\\Windows.SystemToast.StartupApp",
              0,
              0LL,
              0,
              0x102u,
              0LL,
              v31,
              0LL);
      if ( Key )
        wil::details::in1diag3::_Throw_Win32(
          retaddr,
          (void *)0xA1,
          (unsigned int)"pcshell\\twinui\\startupappmonitor\\lib\\startupappmonitorimpl.cpp",
          (const char *)Key,
          phkResulta);
      *(_DWORD *)Data = 0;
      v33 = RegSetValueExW(hKey, L"Enabled", 0, 4u, Data, 4u);
      if ( v33 )
        wil::details::in1diag3::_Throw_Win32(
          retaddr,
          (void *)0xA4,
          (unsigned int)"pcshell\\twinui\\startupappmonitor\\lib\\startupappmonitorimpl.cpp",
          (const char *)v33,
          (unsigned int)phkResult);
      wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(&hKey);
    }
    _create___event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEAAJW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z(
      (char *)this + 176,
      0LL);
    v34 = (HKEY)operator new(0x10uLL);
    *(_QWORD *)v34 = this;
    *((_QWORD *)v34 + 1) = StartupAppMonitor::StartupToastNotifier;
    hKey = v34;
    LODWORD(phkResult) = 0;
    *(_QWORD *)&v43 = _o__beginthreadex(
                        0LL,
                        0LL,
                        ____Invoke_V__tuple_P6AXPEAVStartupAppMonitor____EPEAV1__std___0A__00_thread_std__CAIPEAX_Z,
                        v34,
                        phkResult,
                        (char *)&v43 + 8);
    if ( (_QWORD)v43 )
    {
      if ( *((_DWORD *)this + 42) )
      {
        _o_terminate();
        __debugbreak();
      }
      *((_OWORD *)this + 10) = v43;
      if ( v42[0] )
        RegCloseKey(v42[0]);
    }
    else
    {
      DWORD2(v43) = 0;
      std::_Throw_Cpp_error(6);
    }
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0xA9,
      (unsigned int)"pcshell\\twinui\\startupappmonitor\\lib\\startupappmonitorimpl.cpp",
      v35);
  }
}
