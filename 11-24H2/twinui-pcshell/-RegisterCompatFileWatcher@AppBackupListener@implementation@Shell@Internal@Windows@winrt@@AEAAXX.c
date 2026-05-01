/*
 * XREFs of ?RegisterCompatFileWatcher@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x180614F68
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::AppBackupListener::InitializeAppBackupListenerAsync$_ResumeCoro$1 @ 0x180613E40 (winrt--Windows--Internal--Shell--implementation--AppBackupListener--InitializeAppBa_ea_180613E40.c)
 * Callees:
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800561C8 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800B9040 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??$ExpandEnvironmentStringsW@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@$0BAA@@wil@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x1800BAD58 (--$ExpandEnvironmentStringsW@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@$0BAA.c)
 *     ??1?$function@$$A6A_NJ@Z@wistd@@QEAA@XZ @ 0x1800BC4BC (--1-$function@$$A6A_NJ@Z@wistd@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUfolder_change_reader_state@details@wil@@P6AXPEAU123@@Z$1?delete_folder_change_reader_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x180583930 (--1-$unique_storage@U-$resource_policy@PEAUfolder_change_reader_state@details@wil@@P6AXPEAU123@@.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUfolder_change_reader_state@details@wil@@P6AXPEAU123@@Z$1?delete_folder_change_reader_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUfolder_change_reader_state@23@@Z @ 0x180584D10 (-reset@-$unique_storage@U-$resource_policy@PEAUfolder_change_reader_state@details@wil@@P6AXPEAU1.c)
 *     ??$NullAlloc_Error@AEAY0BH@$$CBG@CAppBackupListenerTelemetry@@SAXAEAY0BH@$$CBG@Z @ 0x1806101BC (--$NullAlloc_Error@AEAY0BH@$$CBG@CAppBackupListenerTelemetry@@SAXAEAY0BH@$$CBG@Z.c)
 *     ?create_common@?$folder_change_reader_t@V?$unique_storage@U?$resource_policy@PEAUfolder_change_reader_state@details@wil@@P6AXPEAU123@@Z$1?delete_folder_change_reader_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@AEAAJPEBG_NW4FolderChangeEvents@2@$$QEAV?$function@$$A6AXW4FolderChangeEvent@wil@@PEBG@Z@wistd@@@Z @ 0x180616AC8 (-create_common@-$folder_change_reader_t@V-$unique_storage@U-$resource_policy@PEAUfo_ea_180616AC8.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::Windows::Internal::Shell::implementation::AppBackupListener::RegisterCompatFileWatcher(
        winrt::Windows::Internal::Shell::implementation::AppBackupListener *this)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rbx
  struct wil::details::folder_change_reader_state *v4; // rdx
  __int64 v5; // rcx
  const char *v6; // r9
  wil::details *v7; // [rsp+30h] [rbp-B8h] BYREF
  void *v8[4]; // [rsp+38h] [rbp-B0h] BYREF
  _BYTE v9[8]; // [rsp+58h] [rbp-90h] BYREF
  _QWORD v10[14]; // [rsp+60h] [rbp-88h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+0h]

  try
  {
    v2 = wil::ExpandEnvironmentStringsW<std::wstring,256>(v8, (__int64)L"%windir%\\appcompat");
    v3 = (_QWORD *)((char *)this + 432);
    std::wstring::operator=((__int64)this + 432, (__int64)v2);
    std::wstring::_Tidy_deallocate(v8);
    v10[0] = off_1807590E0;
    v10[1] = this;
    v10[13] = v10;
    if ( *((_QWORD *)this + 57) > 7uLL )
      v3 = (_QWORD *)*v3;
    v7 = 0LL;
    wil::folder_change_reader_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::folder_change_reader_state *,void (*)(wil::details::folder_change_reader_state *),&void wil::details::delete_folder_change_reader_state(wil::details::folder_change_reader_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::folder_change_reader_state *,wil::details::folder_change_reader_state *,0,std::nullptr_t>>,wil::err_returncode_policy>::create_common(
      &v7,
      v3);
    if ( (wil::details **)((char *)this + 360) != &v7 )
    {
      wil::details::unique_storage<wil::details::resource_policy<wil::details::folder_change_reader_state *,void (*)(wil::details::folder_change_reader_state *),&void wil::details::delete_folder_change_reader_state(wil::details::folder_change_reader_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::folder_change_reader_state *,wil::details::folder_change_reader_state *,0,std::nullptr_t>>::reset(
        (wil::details **)this + 45,
        v7);
      v7 = 0LL;
    }
    wil::details::unique_storage<wil::details::resource_policy<wil::details::folder_change_reader_state *,void (*)(wil::details::folder_change_reader_state *),&void wil::details::delete_folder_change_reader_state(wil::details::folder_change_reader_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::folder_change_reader_state *,wil::details::folder_change_reader_state *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<wil::details::folder_change_reader_state *,void (*)(wil::details::folder_change_reader_state *),&void wil::details::delete_folder_change_reader_state(wil::details::folder_change_reader_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::folder_change_reader_state *,wil::details::folder_change_reader_state *,0,std::nullptr_t>>(
      &v7,
      v4);
    wistd::function<bool (long)>::~function<bool (long)>((__int64)v9);
    if ( !*((_QWORD *)this + 45) )
      CAppBackupListenerTelemetry::NullAlloc_Error<unsigned short const (&)[23]>(v5);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x470,
      (int)"pcshell\\twinui\\appbackuplistener\\lib\\appbackuplistener.cpp",
      v6);
  }
}
