/*
 * XREFs of ?BackupAppLevelTileAsync@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXUTileId@StartScreen@UI@WindowsUdk@6@Uhstring@6@@Z @ 0x180104AA8
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::AppBackupListener::OnTileAdded$_ResumeCoro$1 @ 0x1806144F0 (winrt--Windows--Internal--Shell--implementation--AppBackupListener--OnTileAdded$_ResumeCoro$1.c)
 *     winrt::Windows::Internal::Shell::implementation::AppBackupListener::OnTileChanged$_ResumeCoro$1 @ 0x1806148E0 (winrt--Windows--Internal--Shell--implementation--AppBackupListener--OnTileChanged$_ResumeCoro$1.c)
 *     winrt::Windows::Internal::Shell::implementation::AppBackupListener::OnTileRemoved$_ResumeCoro$1 @ 0x180614BD0 (winrt--Windows--Internal--Shell--implementation--AppBackupListener--OnTileRemoved$_ResumeCoro$1.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004C608 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?GetView@?$consume_Windows_Foundation_Collections_IVector@U?$IVector@UWindowId@UI@Windows@winrt@@@Collections@Foundation@Windows@winrt@@UWindowId@UI@45@@impl@winrt@@QEBA@XZ @ 0x180050E68 (-GetView@-$consume_Windows_Foundation_Collections_IVector@U-$IVector@UWindowId@UI@Windows@winrt@.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x180053844 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?Parse@?$consume_Windows_Data_Json_IJsonObjectStatics@UIJsonObjectStatics@Json@Data@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x180055CEC (-Parse@-$consume_Windows_Data_Json_IJsonObjectStatics@UIJsonObjectStatics@Json@Data@Windows@winr.c)
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x180056268 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ?ToString@?$consume_Windows_Foundation_IStringable@UTileId@StartScreen@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x180104EB4 (-ToString@-$consume_Windows_Foundation_IStringable@UTileId@StartScreen@UI@WindowsUdk@winrt@@@imp.c)
 *     winrt::Windows::Internal::Shell::implementation::CensorTileId @ 0x180104F6C (winrt--Windows--Internal--Shell--implementation--CensorTileId.c)
 *     ??$make_unique_string_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG_K@Z @ 0x180105FA0 (--$make_unique_string_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@.c)
 *     ?QueryParsed@?$consume_Windows_Foundation_IUriRuntimeClass@UIUriRuntimeClass@Foundation@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1802A813C (-QueryParsed@-$consume_Windows_Foundation_IUriRuntimeClass@UIUriRuntimeClass@Foundation@Windows@.c)
 *     ?CreateCubicBezierEasingFunction@?$consume_Windows_UI_Composition_ICompositor@UICompositor@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUfloat2@Numerics@Foundation@Windows@3@0@Z @ 0x1802BC9DC (-CreateCubicBezierEasingFunction@-$consume_Windows_UI_Composition_ICompositor@UICompositor@Compo.c)
 *     ??$AttemptAppLevelTileBackup@PEAGPEBG@CAppBackupListenerTelemetry@@SAX$$QEAPEAG$$QEAPEBG@Z @ 0x1802C7ED4 (--$AttemptAppLevelTileBackup@PEAGPEBG@CAppBackupListenerTelemetry@@SAX$$QEAPEAG$$QEAPEBG@Z.c)
 *     ??$NullFactory_Error@AEAY0FI@$$CBG@CAppBackupListenerTelemetry@@SAXAEAY0FI@$$CBG@Z @ 0x1802CD298 (--$NullFactory_Error@AEAY0FI@$$CBG@CAppBackupListenerTelemetry@@SAXAEAY0FI@$$CBG@Z.c)
 *     ??$call@AEAV_lambda_7b7c9298bfeaa6f21443744179c3c395_@@@?$factory_cache_entry@UExtensionFactory@AppExtensions@ApplicationModel@WindowsUdk@winrt@@UIExtensionFactoryStatics@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_7b7c9298bfeaa6f21443744179c3c395_@@@Z @ 0x1803D569C (--$call@AEAV_lambda_7b7c9298bfeaa6f21443744179c3c395_@@@-$factory_cache_entry@UExtensionFactory@.c)
 *     ?BackupTileAsync@?$consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics6@UIAppListBackupExtensionStatics6@UserProfile@System@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBUTileCollection@StartScreen@UI@WindowsUdk@3@AEBUTileId@5673@AEBUhstring@param@3@@Z @ 0x180611F3C (-BackupTileAsync@-$consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics6@UIAppLi.c)
 *     ?GetDateTime@?$consume_Windows_Foundation_IPropertyValue@U?$IReference@V?$time_point@Uclock@winrt@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@chrono@std@@@Foundation@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180613CE0 (-GetDateTime@-$consume_Windows_Foundation_IPropertyValue@U-$IReference@V-$time_point@Uclock@winr.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=10 #try_helpers=1
void __fastcall winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppLevelTileAsync(
        __int64 a1,
        __int64 *a2,
        winrt::hstring *a3)
{
  int v6; // ebx
  winrt::hstring *v7; // rax
  const WCHAR *v8; // rax
  __int64 v9; // rax
  int v10; // r13d
  __int64 v11; // rcx
  __int64 **v12; // rax
  _QWORD *View; // rax
  __int64 **v14; // rax
  _QWORD *v15; // rax
  char v16; // di
  void (__fastcall ***v17)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 v18; // rdi
  __int64 v19; // r12
  void *v20; // rbx
  LPVOID pv; // [rsp+30h] [rbp-F8h] BYREF
  LPVOID v22; // [rsp+38h] [rbp-F0h] BYREF
  const unsigned __int16 *v23; // [rsp+40h] [rbp-E8h] BYREF
  __int64 v24; // [rsp+48h] [rbp-E0h] BYREF
  volatile signed __int32 *v25; // [rsp+50h] [rbp-D8h] BYREF
  void (__fastcall ***v26)(_QWORD, void *, __int64 *); // [rsp+58h] [rbp-D0h] BYREF
  _BYTE v27[8]; // [rsp+60h] [rbp-C8h] BYREF
  _DWORD *v28; // [rsp+68h] [rbp-C0h] BYREF
  _DWORD v29[4]; // [rsp+70h] [rbp-B8h] BYREF
  const wchar_t *v30; // [rsp+80h] [rbp-A8h]
  _DWORD *v31; // [rsp+88h] [rbp-A0h] BYREF
  _DWORD v32[4]; // [rsp+90h] [rbp-98h] BYREF
  const unsigned __int16 *v33; // [rsp+A0h] [rbp-88h]
  _QWORD v34[2]; // [rsp+A8h] [rbp-80h] BYREF
  _BYTE v35[8]; // [rsp+B8h] [rbp-70h] BYREF
  __int64 *v36; // [rsp+C0h] [rbp-68h]
  _QWORD v37[11]; // [rsp+D0h] [rbp-58h] BYREF
  __int64 v38; // [rsp+130h] [rbp+8h] BYREF
  __int64 *v39; // [rsp+138h] [rbp+10h]
  winrt::hstring *v40; // [rsp+140h] [rbp+18h]
  __int64 v41; // [rsp+148h] [rbp+20h] BYREF

  v40 = a3;
  v39 = a2;
  v6 = 0;
  LODWORD(v38) = 0;
  v7 = (winrt::hstring *)winrt::impl::consume_Windows_Foundation_IStringable<winrt::WindowsUdk::UI::StartScreen::TileId>::ToString(
                           a2,
                           &v25);
  v8 = winrt::hstring::c_str(v7);
  v9 = winrt::Windows::Internal::Shell::implementation::CensorTileId(v8);
  wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(
    &pv,
    v9,
    -1LL);
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v25);
  v10 = a1 + 152;
  winrt::impl::consume_Windows_Data_Json_IJsonObjectStatics<winrt::Windows::Data::Json::IJsonObjectStatics>::Parse(
    (__int64 **)(a1 + 152),
    &v41,
    a2);
  if ( !v41 )
    goto LABEL_5;
  v12 = (__int64 **)winrt::impl::consume_Windows_Foundation_IUriRuntimeClass<winrt::Windows::Foundation::IUriRuntimeClass>::QueryParsed(
                      &v41,
                      &v23);
  LODWORD(v38) = 1;
  View = winrt::impl::consume_Windows_Foundation_Collections_IVector<winrt::Windows::Foundation::Collections::IVector<winrt::Windows::UI::WindowId>,winrt::Windows::UI::WindowId>::GetView(
           v12,
           &v22);
  v6 = 3;
  LODWORD(v38) = 3;
  if ( !*View )
    goto LABEL_4;
  v14 = (__int64 **)winrt::impl::consume_Windows_Foundation_IUriRuntimeClass<winrt::Windows::Foundation::IUriRuntimeClass>::QueryParsed(
                      &v41,
                      v27);
  LODWORD(v38) = 7;
  v15 = winrt::impl::consume_Windows_Foundation_Collections_IVector<winrt::Windows::Foundation::Collections::IVector<winrt::Windows::UI::WindowId>,winrt::Windows::UI::WindowId>::GetView(
          v14,
          &v24);
  v6 = 15;
  LODWORD(v38) = 15;
  if ( *(_QWORD *)winrt::impl::consume_Windows_Foundation_IPropertyValue<winrt::Windows::Foundation::IReference<std::chrono::time_point<winrt::clock,std::chrono::duration<__int64,std::ratio<1,10000000>>>>>::GetDateTime(
                    v15,
                    v35) )
LABEL_5:
    v16 = 0;
  else
LABEL_4:
    v16 = 1;
  if ( (v6 & 8) != 0 )
  {
    v6 &= ~8u;
    LODWORD(v38) = v6;
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v24);
  }
  if ( (v6 & 4) != 0 )
  {
    v6 &= ~4u;
    LODWORD(v38) = v6;
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v27);
  }
  if ( (v6 & 2) != 0 )
  {
    v6 &= ~2u;
    LODWORD(v38) = v6;
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v22);
  }
  if ( (v6 & 1) != 0 )
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v23);
  if ( v16 )
  {
    if ( v41 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v41);
    if ( pv )
      CoTaskMemFree(pv);
  }
  else
  {
    v29[0] = 1;
    v29[1] = 52;
    v30 = L"WindowsUdk.System.UserProfile.AppListBackupExtension";
    v28 = v29;
    if ( aComMicrosoftWi_4[45] )
      abort();
    v32[0] = 1;
    v32[1] = 45;
    v33 = L"com.microsoft.windows.extension.applistbackup";
    v31 = v32;
    v34[0] = &v31;
    v34[1] = &v28;
    v36 = &qword_1808CAD08;
    _InterlockedIncrement64(&qword_1808CAD08);
    if ( winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::ApplicationModel::AppExtensions::ExtensionFactory,winrt::WindowsUdk::ApplicationModel::AppExtensions::IExtensionFactoryStatics> )
    {
      winrt::impl::consume_Windows_UI_Composition_ICompositor<winrt::Windows::UI::Composition::ICompositor>::CreateCubicBezierEasingFunction(
        &winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::ApplicationModel::AppExtensions::ExtensionFactory,winrt::WindowsUdk::ApplicationModel::AppExtensions::IExtensionFactoryStatics>,
        &v26,
        &v31,
        &v28);
      _InterlockedDecrement64(&qword_1808CAD08);
    }
    else
    {
      _InterlockedDecrement64(&qword_1808CAD08);
      winrt::impl::factory_cache_entry<winrt::WindowsUdk::ApplicationModel::AppExtensions::ExtensionFactory,winrt::WindowsUdk::ApplicationModel::AppExtensions::IExtensionFactoryStatics>::call<_lambda_7b7c9298bfeaa6f21443744179c3c395_ &>(
        v11,
        &v26,
        v34);
    }
    v17 = (void (__fastcall ***)(_QWORD, _QWORD, _QWORD))v26;
    if ( v26 )
    {
      v24 = 0LL;
      (**v26)(v26, &winrt::impl::guid_v<winrt::WindowsUdk::System::UserProfile::IAppListBackupExtensionStatics6>, &v24);
      v18 = v24;
      v38 = v24;
      v19 = v24;
    }
    else
    {
      v18 = 0LL;
      v38 = 0LL;
      v19 = 0LL;
    }
    if ( v17 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v26);
    if ( v19 )
    {
      v23 = winrt::hstring::c_str(a3);
      v20 = pv;
      v22 = pv;
      CAppBackupListenerTelemetry::AttemptAppLevelTileBackup<unsigned short *,unsigned short const *>(&v22, &v23);
      v37[0] = *(_QWORD *)a3;
      winrt::impl::consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics6<winrt::WindowsUdk::System::UserProfile::IAppListBackupExtensionStatics6>::BackupTileAsync(
        (unsigned int)&v38,
        (unsigned int)&v25,
        v10,
        (_DWORD)a2,
        (__int64)v37);
      if ( v25 )
        winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v25);
    }
    else
    {
      CAppBackupListenerTelemetry::NullFactory_Error<unsigned short const (&)[88]>();
      v20 = pv;
    }
    if ( v18 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v38);
    if ( v41 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v41);
    if ( v20 )
      CoTaskMemFree(v20);
  }
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)a2);
  winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)a3);
}
