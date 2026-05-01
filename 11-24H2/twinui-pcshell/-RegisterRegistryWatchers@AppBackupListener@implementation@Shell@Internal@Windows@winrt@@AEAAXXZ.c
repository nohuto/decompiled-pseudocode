/*
 * XREFs of ?RegisterRegistryWatchers@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x180298070
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::AppBackupListener::InitializeAppBackupListenerAsync$_ResumeCoro$1 @ 0x180613E40 (winrt--Windows--Internal--Shell--implementation--AppBackupListener--InitializeAppBa_ea_180613E40.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800B9040 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??4?$unique_any_t@V?$registry_watcher_t@V?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800EF28C (--4-$unique_any_t@V-$registry_watcher_t@V-$unique_storage@U-$resource_policy@PEAUregistry_watche.c)
 *     ?put@?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAUHKEY__@@XZ @ 0x1800F2248 (-put@-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@.c)
 *     ?create_common@?$registry_watcher_t@V?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@AEAAJ$$QEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@_N$$QEAV?$function@$$A6AXW4RegistryChangeKind@wil@@@Z@wistd@@@Z @ 0x1800F229C (-create_common@-$registry_watcher_t@V-$unique_storage@U-$resource_policy@PEAUregist_ea_1800F229C.c)
 *     ??$?HGU?$char_traits@G@std@@V?$allocator@G@1@@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@QEBG$$QEAV10@@Z @ 0x180112818 (--$-HGU-$char_traits@G@std@@V-$allocator@G@1@@std@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1801CF810 (--1-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$integral.c)
 *     ?Release@registry_watcher_state@details@wil@@QEAAXXZ @ 0x1801D751C (-Release@registry_watcher_state@details@wil@@QEAAXXZ.c)
 *     ??$NullAlloc_Error@PEBG@CAppBackupListenerTelemetry@@SAX$$QEAPEBG@Z @ 0x1802982D0 (--$NullAlloc_Error@PEBG@CAppBackupListenerTelemetry@@SAX$$QEAPEBG@Z.c)
 *     ?to_wstring@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@H@Z @ 0x180298340 (-to_wstring@std@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@1@H@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$unique_any_t@V?$registry_watcher_t@V?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@wil@@@std@@@std@@YAXPEAV?$unique_any_t@V?$registry_watcher_t@V?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@wil@@QEAV12@AEAV?$allocator@V?$unique_any_t@V?$registry_watcher_t@V?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@wil@@@0@@Z @ 0x1802983AC (--$_Destroy_range@V-$allocator@V-$unique_any_t@V-$registry_watcher_t@V-$unique_storage@U-$resour.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@V?$unique_any_t@V?$registry_watcher_t@V?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@wil@@V?$allocator@V?$unique_any_t@V?$registry_watcher_t@V?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@wil@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1806105EC (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@V-$unique_any_t@V-$registry_watcher_t@V-$u.c)
 *     ??$_Uninitialized_value_construct_n@V?$allocator@V?$unique_any_t@V?$registry_watcher_t@V?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@wil@@@std@@@std@@YAPEAV?$unique_any_t@V?$registry_watcher_t@V?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@wil@@PEAV12@_KAEAV?$allocator@V?$unique_any_t@V?$registry_watcher_t@V?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@wil@@@0@@Z @ 0x1806107F8 (--$_Uninitialized_value_construct_n@V-$allocator@V-$unique_any_t@V-$registry_watcher_t@V-$unique.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall winrt::Windows::Internal::Shell::implementation::AppBackupListener::RegisterRegistryWatchers(
        winrt::Windows::Internal::Shell::implementation::AppBackupListener *this)
{
  __int64 *v2; // rsi
  __int64 v3; // rcx
  __int64 v4; // r9
  unsigned __int64 v5; // r8
  __int64 v6; // rbx
  unsigned int v7; // r15d
  char *v8; // r12
  __int64 v9; // r13
  winrt::Windows::Internal::Shell::implementation::AppBackupListener *v10; // rax
  HKEY v11; // rdi
  const WCHAR *v12; // rbx
  HKEY *phkResult; // rax
  LSTATUS Key; // eax
  bool v15; // sf
  void **v16; // rax
  wil::details::registry_watcher_state *v17; // rax
  wil::details::registry_watcher_state *v18; // [rsp+58h] [rbp-B0h] BYREF
  HKEY hKey[6]; // [rsp+60h] [rbp-A8h] BYREF
  void *v20[4]; // [rsp+90h] [rbp-78h] BYREF
  _BYTE v21[8]; // [rsp+B0h] [rbp-58h] BYREF
  __int64 (__fastcall **v22)(void *); // [rsp+B8h] [rbp-50h] BYREF
  unsigned int v23; // [rsp+C0h] [rbp-48h]
  HKEY v24; // [rsp+C8h] [rbp-40h]
  const WCHAR *v25; // [rsp+D0h] [rbp-38h]
  winrt::Windows::Internal::Shell::implementation::AppBackupListener *v26; // [rsp+D8h] [rbp-30h]
  winrt::Windows::Internal::Shell::implementation::AppBackupListener *v27; // [rsp+E0h] [rbp-28h]
  __int64 (__fastcall ***v28)(void *); // [rsp+120h] [rbp+18h]
  void *v29[4]; // [rsp+128h] [rbp+20h] BYREF

  v2 = (__int64 *)((char *)this + 216);
  v3 = *((_QWORD *)this + 28);
  v4 = *v2;
  v5 = (v3 - *v2) >> 3;
  if ( v5 <= 4 )
  {
    if ( v5 < 4 )
    {
      if ( (unsigned __int64)((v2[2] - v4) >> 3) >= 4 )
        v2[1] = std::_Uninitialized_value_construct_n<std::allocator<wil::unique_any_t<wil::registry_watcher_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::registry_watcher_state *,void (*)(wil::details::registry_watcher_state *),&void wil::details::delete_registry_watcher_state(wil::details::registry_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::registry_watcher_state *,wil::details::registry_watcher_state *,0,std::nullptr_t>>,wil::err_returncode_policy>>>>(
                  v3,
                  4 - v5);
      else
        std::vector<wil::unique_any_t<wil::registry_watcher_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::registry_watcher_state *,void (*)(wil::details::registry_watcher_state *),&void wil::details::delete_registry_watcher_state(wil::details::registry_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::registry_watcher_state *,wil::details::registry_watcher_state *,0,std::nullptr_t>>,wil::err_returncode_policy>>>::_Resize_reallocate<std::_Value_init_tag>(v2);
    }
  }
  else
  {
    v6 = v4 + 32;
    std::_Destroy_range<std::allocator<wil::unique_any_t<wil::registry_watcher_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::registry_watcher_state *,void (*)(wil::details::registry_watcher_state *),&void wil::details::delete_registry_watcher_state(wil::details::registry_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::registry_watcher_state *,wil::details::registry_watcher_state *,0,std::nullptr_t>>,wil::err_returncode_policy>>>>(
      v4 + 32,
      v3);
    v2[1] = v6;
  }
  v7 = 0;
  v8 = (char *)&unk_1808C56A0;
  v9 = 0LL;
  do
  {
    v10 = 0LL;
    if ( this )
    {
      (*(void (__fastcall **)(winrt::Windows::Internal::Shell::implementation::AppBackupListener *))(*(_QWORD *)this + 8LL))(this);
      v10 = this;
    }
    v11 = *(HKEY *)v8;
    v12 = (const WCHAR *)*((_QWORD *)v8 + 1);
    v22 = &off_18072B0D0;
    v23 = v7;
    v24 = v11;
    v25 = v12;
    v26 = this;
    v27 = v10;
    v28 = &v22;
    v18 = 0LL;
    hKey[0] = 0LL;
    phkResult = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>::put(hKey);
    Key = RegCreateKeyExW(v11, v12, 0, 0LL, 0, 0x10u, 0LL, phkResult, 0LL);
    v15 = Key < 0;
    if ( Key > 0 )
      v15 = 1;
    if ( v15 )
    {
      wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(hKey);
    }
    else
    {
      wil::registry_watcher_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::registry_watcher_state *,void (*)(wil::details::registry_watcher_state *),&void wil::details::delete_registry_watcher_state(wil::details::registry_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::registry_watcher_state *,wil::details::registry_watcher_state *,0,std::nullptr_t>>,wil::err_returncode_policy>::create_common(
        (__int64)&v18,
        hKey,
        1,
        (__int64)v21);
      if ( hKey[0] )
        RegCloseKey(hKey[0]);
    }
    wil::unique_any_t<wil::registry_watcher_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::registry_watcher_state *,void (*)(wil::details::registry_watcher_state *),&void wil::details::delete_registry_watcher_state(wil::details::registry_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::registry_watcher_state *,wil::details::registry_watcher_state *,0,std::nullptr_t>>,wil::err_returncode_policy>>::operator=(
      (_QWORD *)(*v2 + 8LL * (int)v7),
      &v18);
    if ( v18 )
      wil::details::registry_watcher_state::Release(v18);
    if ( v28 )
      (*v28)[3](v28);
    if ( !*(_QWORD *)(*v2 + v9) )
    {
      v16 = (void **)std::to_wstring(v29, v7);
      std::operator+<unsigned short>((__int64)v20, (char *)L"Registry watcher null for ", v16);
      std::wstring::_Tidy_deallocate(v29);
      v17 = (wil::details::registry_watcher_state *)v20;
      if ( v20[3] > (void *)7 )
        v17 = (wil::details::registry_watcher_state *)v20[0];
      v18 = v17;
      CAppBackupListenerTelemetry::NullAlloc_Error<unsigned short const *>(&v18);
      std::wstring::_Tidy_deallocate(v20);
    }
    ++v7;
    v9 += 8LL;
    v8 += 16;
  }
  while ( v8 != &CRVPrivate::cfhImmersiveShellStartup );
}
