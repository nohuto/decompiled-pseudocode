/*
 * XREFs of ?OnTabChanged@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUWindowTabView@3UI@456@AEBUWindowTabViewPropertyChangedEventArgs@38456@@Z @ 0x18026DEA0
 * Callers:
 *     <none>
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?BackupDeveloperModeAsync@?$consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics7@UIAppListBackupExtensionStatics7@UserProfile@System@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x180052A5C (-BackupDeveloperModeAsync@-$consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics.c)
 *     ?FamilyName@?$consume_Windows_ApplicationModel_IPackageId@UIPackageId@ApplicationModel@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180052ABC (-FamilyName@-$consume_Windows_ApplicationModel_IPackageId@UIPackageId@ApplicationModel@Windows@w.c)
 *     ?CreateInstanceAsync@?$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics@UITaskGroupDataSourceAdapterStatics@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180052F5C (-CreateInstanceAsync@-$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStat.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x180053844 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?Query@?$consume_Windows_Foundation_IUriRuntimeClass@UIUriRuntimeClass@Foundation@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180054A2C (-Query@-$consume_Windows_Foundation_IUriRuntimeClass@UIUriRuntimeClass@Foundation@Windows@winrt@.c)
 *     ?GetResults@?$consume_Windows_Foundation_IAsyncOperation@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@_N@impl@winrt@@QEBA@XZ @ 0x180054CAC (-GetResults@-$consume_Windows_Foundation_IAsyncOperation@U-$IAsyncOperation@_N@Foundation@Window.c)
 *     ?TileId@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUhstring@6@@Z @ 0x180055E2C (-TileId@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUhstring@6@@Z.c)
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x180056268 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ?GetForCurrentProcess@?$consume_Windows_UI_Internal_Input_IInputSiteStatics@UIInputSiteStatics@Input@Internal@UI@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800CFE14 (-GetForCurrentProcess@-$consume_Windows_UI_Internal_Input_IInputSiteStatics@UIInputSiteStatics@I.c)
 *     ??$_Traits_equal@U?$char_traits@G@std@@@std@@YA_NQEBG_K01@Z @ 0x18010EB48 (--$_Traits_equal@U-$char_traits@G@std@@@std@@YA_NQEBG_K01@Z.c)
 *     ?__private_IsEnabledPreCheck@?$FeatureImpl@U__WilFeatureTraits_Feature_TabThumbnailsRefreshedOnDemand@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x18019255C (-__private_IsEnabledPreCheck@-$FeatureImpl@U__WilFeatureTraits_Feature_TabThumbnailsRefreshedOnD.c)
 *     ??Bhstring@winrt@@QEBA?AV?$basic_string_view@GU?$char_traits@G@std@@@std@@XZ @ 0x1801953E8 (--Bhstring@winrt@@QEBA-AV-$basic_string_view@GU-$char_traits@G@std@@@std@@XZ.c)
 *     ?SetWindowIconAsync@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAA?AUfire_and_forget@6@XZ @ 0x1801DC224 (-SetWindowIconAsync@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAA-AUfire_and_.c)
 *     ?SetWindowThumbnailAsync@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAA?AUfire_and_forget@6@XZ @ 0x1801F4160 (-SetWindowThumbnailAsync@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAA-AUfire.c)
 *     ?SetAndCreateIconFromGlyphAsync@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAA?AUfire_and_forget@6@XZ @ 0x1802D03D0 (-SetAndCreateIconFromGlyphAsync@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAA.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802DF798 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     ?RegisterTaskbarGlom@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUhstring@6@@Z @ 0x1805817F8 (-RegisterTaskbarGlom@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUhstrin.c)
 *     ?UpdateTileGuid@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x180582BC0 (-UpdateTileGuid@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=11
void __fastcall winrt::Windows::Internal::Shell::implementation::TabProxyWindow::OnTabChanged(
        HWND *this,
        const struct winrt::Windows::Internal::UI::Shell::WindowTabView *a2,
        __int64 **a3)
{
  int v5; // edi
  __int64 *v6; // rcx
  unsigned int v7; // eax
  char v8; // dl
  __int64 **v9; // rax
  _QWORD *v10; // rax
  __int64 **v11; // rax
  char v12; // bl
  __int64 *v13; // rcx
  unsigned int v14; // eax
  volatile signed __int32 *v15; // r12
  unsigned int v16; // edi
  unsigned int v17; // r15d
  unsigned int v18; // eax
  int v19; // edi
  __int64 (__fastcall *v20)(volatile signed __int32 *, _QWORD, volatile signed __int32 **); // rbx
  unsigned int v21; // eax
  __int64 *v22; // rax
  __int64 **v23; // rax
  winrt::hstring *v24; // rax
  const WCHAR *v25; // rax
  __int64 *v26; // rax
  __int64 **v27; // rax
  const struct winrt::hstring *v28; // rax
  __int64 **v29; // rax
  const struct winrt::hstring *v30; // rax
  volatile signed __int32 *v31; // [rsp+20h] [rbp-69h] BYREF
  volatile signed __int32 *v32; // [rsp+28h] [rbp-61h] BYREF
  __int64 v33; // [rsp+30h] [rbp-59h] BYREF
  __int128 v34; // [rsp+38h] [rbp-51h]
  volatile signed __int32 *v35; // [rsp+48h] [rbp-41h] BYREF
  __int64 v36; // [rsp+50h] [rbp-39h] BYREF
  volatile signed __int32 *v37; // [rsp+58h] [rbp-31h] BYREF
  __int64 v38; // [rsp+60h] [rbp-29h] BYREF
  volatile signed __int32 *v39; // [rsp+68h] [rbp-21h] BYREF
  __int64 v40; // [rsp+70h] [rbp-19h] BYREF
  volatile signed __int32 *v41; // [rsp+78h] [rbp-11h] BYREF
  int v42; // [rsp+80h] [rbp-9h] BYREF
  __int128 v43; // [rsp+88h] [rbp-1h]
  _QWORD v44[9]; // [rsp+98h] [rbp+Fh] BYREF
  int v45; // [rsp+100h] [rbp+77h] BYREF
  volatile signed __int32 *v46; // [rsp+108h] [rbp+7Fh] BYREF

  v5 = 0;
  v45 = 0;
  v6 = *a3;
  LODWORD(v33) = 0;
  v34 = 0LL;
  v7 = (*(__int64 (__fastcall **)(__int64 *, int *))(*v6 + 56))(v6, &v45);
  winrt::check_hresult(&v46, v7, &v33);
  if ( (_BYTE)v45 && *((_BYTE *)this + 184) )
  {
    v9 = (__int64 **)winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataSourceAdapterStatics>::CreateInstanceAsync(
                       a3,
                       &v32);
    v45 = 1;
    v10 = winrt::impl::consume_Windows_ApplicationModel_IPackageId<winrt::Windows::ApplicationModel::IPackageId>::FamilyName(
            v9,
            &v35);
    v5 = 3;
    v45 = 3;
    if ( !*v10
      || (v11 = (__int64 **)winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataSourceAdapterStatics>::CreateInstanceAsync(
                              a3,
                              &v31),
          v45 = 7,
          v5 = 15,
          v12 = 0,
          !*winrt::impl::consume_Windows_Foundation_IUriRuntimeClass<winrt::Windows::Foundation::IUriRuntimeClass>::Query(
              v11,
              &v46)) )
    {
      v12 = 1;
    }
    if ( (v5 & 8) != 0 )
    {
      v5 &= ~8u;
      winrt::handle_type<winrt::impl::hstring_traits>::close(&v46);
    }
    if ( (v5 & 4) != 0 )
    {
      v5 &= ~4u;
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v31);
    }
    if ( (v5 & 2) != 0 )
    {
      v5 &= ~2u;
      winrt::handle_type<winrt::impl::hstring_traits>::close(&v35);
    }
    if ( (v5 & 1) != 0 )
    {
      v5 &= ~1u;
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v32);
    }
    if ( v12 )
      winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowIconAsync((__int64)this, (__int64)&v45);
    else
      winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetAndCreateIconFromGlyphAsync(this, &v45);
  }
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_TabThumbnailsRefreshedOnDemand>::__private_IsEnabledPreCheck(
    `wil::Feature<__WilFeatureTraits_Feature_TabThumbnailsRefreshedOnDemand>::GetImpl'::`2'::impl,
    v8);
  if ( winrt::impl::consume_Windows_Foundation_IAsyncOperation<winrt::Windows::Foundation::IAsyncOperation<bool>,bool>::GetResults((__int64 *)a3) )
    winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowThumbnailAsync(
      (__int64)this,
      (__int64)&v45);
  v31 = 0LL;
  v13 = *a3;
  LODWORD(v33) = 0;
  v34 = 0LL;
  v14 = (*(__int64 (__fastcall **)(__int64 *, volatile signed __int32 **))(*v13 + 72))(v13, &v31);
  winrt::check_hresult(&v45, v14, &v33);
  v15 = v31;
  v41 = v31;
  v16 = v5 | 0x10;
  v17 = 0;
  LODWORD(v46) = 0;
  LODWORD(v33) = 0;
  v34 = 0LL;
  v18 = (*(__int64 (__fastcall **)(volatile signed __int32 *, volatile signed __int32 **))(*(_QWORD *)v31 + 56LL))(
          v31,
          &v46);
  winrt::check_hresult(&v45, v18, &v33);
  while ( v17 != (_DWORD)v46 )
  {
    v31 = 0LL;
    v19 = v16 | 0x40;
    v45 = v19;
    v42 = 0;
    v43 = 0LL;
    v20 = *(__int64 (__fastcall **)(volatile signed __int32 *, _QWORD, volatile signed __int32 **))(*(_QWORD *)v15 + 48LL);
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v31);
    v21 = v20(v15, v17, &v31);
    winrt::check_hresult(&v35, v21, &v42);
    v16 = v19 & 0xFFFFFF9F | 0x20;
    v22 = winrt::hstring::operator std::basic_string_view<unsigned short>((__int64 *)&v31, v44);
    if ( std::_Traits_equal<std::char_traits<unsigned short>>(*v22, v22[1], L"Title", 5LL) )
    {
      v23 = (__int64 **)winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataSourceAdapterStatics>::CreateInstanceAsync(
                          a3,
                          &v36);
      v24 = (winrt::hstring *)winrt::impl::consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics7<winrt::WindowsUdk::System::UserProfile::IAppListBackupExtensionStatics7>::BackupDeveloperModeAsync(
                                v23,
                                &v32);
      v25 = winrt::hstring::c_str(v24);
      SetWindowTextW(this[4], v25);
      winrt::handle_type<winrt::impl::hstring_traits>::close(&v32);
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v36);
    }
    else
    {
      v26 = winrt::hstring::operator std::basic_string_view<unsigned short>((__int64 *)&v31, &v33);
      if ( std::_Traits_equal<std::char_traits<unsigned short>>(*v26, v26[1], L"TreatAsSecondaryTileId", 22LL) )
      {
        v27 = (__int64 **)winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataSourceAdapterStatics>::CreateInstanceAsync(
                            a3,
                            &v38);
        v28 = (const struct winrt::hstring *)winrt::impl::consume_Windows_UI_Internal_Input_IInputSiteStatics<winrt::Windows::UI::Internal::Input::IInputSiteStatics>::GetForCurrentProcess(
                                               v27,
                                               &v37);
        winrt::Windows::Internal::Shell::implementation::TabProxyWindow::TileId(
          (winrt::Windows::Internal::Shell::implementation::TabProxyWindow *)this,
          v28);
        winrt::handle_type<winrt::impl::hstring_traits>::close(&v37);
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v38);
        v29 = (__int64 **)winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataSourceAdapterStatics>::CreateInstanceAsync(
                            a3,
                            &v40);
        v30 = (const struct winrt::hstring *)winrt::impl::consume_Windows_UI_Internal_Input_IInputSiteStatics<winrt::Windows::UI::Internal::Input::IInputSiteStatics>::GetForCurrentProcess(
                                               v29,
                                               &v39);
        winrt::Windows::Internal::Shell::implementation::TabProxyWindow::RegisterTaskbarGlom(
          (winrt::Windows::Internal::Shell::implementation::TabProxyWindow *)this,
          v30);
        winrt::handle_type<winrt::impl::hstring_traits>::close(&v39);
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v40);
        winrt::Windows::Internal::Shell::implementation::TabProxyWindow::UpdateTileGuid((winrt::Windows::Internal::Shell::implementation::TabProxyWindow *)this);
      }
    }
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v31);
    ++v17;
  }
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v41);
}
