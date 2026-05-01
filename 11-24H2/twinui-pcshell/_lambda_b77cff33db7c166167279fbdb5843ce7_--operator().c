/*
 * XREFs of _lambda_b77cff33db7c166167279fbdb5843ce7_::operator() @ 0x180285054
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::ApplicationModel::PackageCatalog_winrt::Windows::ApplicationModel::PackageUninstallingEventArgs___lambda_b77cff33db7c166167279fbdb5843ce7___::Invoke @ 0x1806615A0 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows-_ea_1806615A0.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?GetAt@?$consume_Windows_Foundation_Collections_IVectorView@U?$IVectorView@UWindowTabView@Shell@UI@Internal@Windows@winrt@@@Collections@Foundation@Windows@winrt@@UWindowTabView@Shell@UI@Internal@45@@impl@winrt@@QEBA@I@Z @ 0x1800519AC (-GetAt@-$consume_Windows_Foundation_Collections_IVectorView@U-$IVectorView@UWindowTabView@Shell@.c)
 *     ?GetNetworkConnectivityLevel@?$consume_Windows_Networking_Connectivity_IConnectionProfile@UIConnectionProfile@Connectivity@Networking@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180051D64 (-GetNetworkConnectivityLevel@-$consume_Windows_Networking_Connectivity_IConnectionProfile@UIConn.c)
 *     ?_lambda_invoker_cdecl_@_lambda_eb21f5065b31fe54e3e22ffca6c3b9a9_@@CA@AEBUIIntegratedServicesGeographicRegionPoliciesStatics@Profile@System@WindowsUdk@winrt@@@Z @ 0x180052A10 (-_lambda_invoker_cdecl_@_lambda_eb21f5065b31fe54e3e22ffca6c3b9a9_@@CA@AEBUIIntegratedServicesGeo.c)
 *     ?BackupDeveloperModeAsync@?$consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics7@UIAppListBackupExtensionStatics7@UserProfile@System@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x180052A5C (-BackupDeveloperModeAsync@-$consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics.c)
 *     ?FamilyName@?$consume_Windows_ApplicationModel_IPackageId@UIPackageId@ApplicationModel@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180052ABC (-FamilyName@-$consume_Windows_ApplicationModel_IPackageId@UIPackageId@ApplicationModel@Windows@w.c)
 *     ?CreateInstanceAsync@?$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics@UITaskGroupDataSourceAdapterStatics@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180052F5C (-CreateInstanceAsync@-$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStat.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x180053844 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x180056268 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ??8winrt@@YA_NAEBUhstring@0@0@Z @ 0x1801AAAB0 (--8winrt@@YA_NAEBUhstring@0@0@Z.c)
 *     ??Hwinrt@@YA?AUhstring@0@AEBU10@0@Z @ 0x1802A350C (--Hwinrt@@YA-AUhstring@0@AEBU10@0@Z.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802DF798 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     ??$create_and_initialize@URegistrationData@implementation@Shell@Internal@Windows@winrt@@AEBUhstring@6@AEBU76@AEAY00$$CBG@impl@winrt@@YAPEAURegistrationData@implementation@Shell@Internal@Windows@1@AEBUhstring@1@0AEAY00$$CBG@Z @ 0x18063C99C (--$create_and_initialize@URegistrationData@implementation@Shell@Internal@Windows@winrt@@AEBUhstr.c)
 *     ?UpdateRegistrationData@RemoteSystemProvider@implementation@Shell@Internal@Windows@winrt@@SAXAEBURegistrationData@3456@AEB_N@Z @ 0x1806610CC (-UpdateRegistrationData@RemoteSystemProvider@implementation@Shell@Internal@Windows@winrt@@SAXAEB.c)
 *     ?IsRemoteDesktopProviderApp@RemoteDesktopProviderPackageUninstallHandler@implementation@Shell@Internal@Windows@winrt@@AEAA_NAEBUhstring@6@@Z @ 0x1806615F0 (-IsRemoteDesktopProviderApp@RemoteDesktopProviderPackageUninstallHandler@implementation@Shell@In.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=13
void __fastcall lambda_b77cff33db7c166167279fbdb5843ce7_::operator()(
        __int64 a1,
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *a2,
        __int64 **a3)
{
  __int64 **v5; // rax
  __int64 **v6; // rax
  winrt::Windows::Internal::Shell::implementation::RemoteDesktopProviderPackageUninstallHandler *v7; // rcx
  winrt::hstring *v8; // rax
  const WCHAR *v9; // rax
  int v10; // eax
  unsigned int v11; // eax
  unsigned int v12; // esi
  int NetworkConnectivityLevel; // r15d
  __int64 *v14; // rax
  char v15; // bl
  struct winrt::hstring *v16; // rax
  __int64 v17; // rax
  __int64 *v18; // [rsp+20h] [rbp-58h] BYREF
  volatile signed __int32 *v19; // [rsp+28h] [rbp-50h] BYREF
  volatile signed __int32 *v20; // [rsp+30h] [rbp-48h] BYREF
  __int64 v21; // [rsp+38h] [rbp-40h] BYREF
  volatile signed __int32 *v22; // [rsp+40h] [rbp-38h] BYREF
  volatile signed __int32 *v23; // [rsp+48h] [rbp-30h] BYREF
  int v24; // [rsp+50h] [rbp-28h] BYREF
  __int128 v25; // [rsp+58h] [rbp-20h]
  __int64 v26; // [rsp+B0h] [rbp+38h] BYREF
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *v27; // [rsp+B8h] [rbp+40h]
  __int64 **v28; // [rsp+C0h] [rbp+48h]
  volatile signed __int32 *v29; // [rsp+C8h] [rbp+50h] BYREF

  v28 = a3;
  v27 = a2;
  v26 = a1;
  if ( _lambda_eb21f5065b31fe54e3e22ffca6c3b9a9_::_lambda_invoker_cdecl_((const struct winrt::WindowsUdk::System::Profile::IIntegratedServicesGeographicRegionPoliciesStatics *)a3) )
  {
    v5 = (__int64 **)winrt::impl::consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics7<winrt::WindowsUdk::System::UserProfile::IAppListBackupExtensionStatics7>::BackupDeveloperModeAsync(
                       a3,
                       &v21);
    v6 = (__int64 **)winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataSourceAdapterStatics>::CreateInstanceAsync(
                       v5,
                       &v26);
    winrt::impl::consume_Windows_ApplicationModel_IPackageId<winrt::Windows::ApplicationModel::IPackageId>::FamilyName(
      v6,
      &v29);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v26);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v21);
    if ( winrt::Windows::Internal::Shell::implementation::RemoteDesktopProviderPackageUninstallHandler::IsRemoteDesktopProviderApp(
           v7,
           (const struct winrt::hstring *)&v29) )
    {
      v24 = 0;
      v25 = 0LL;
      v8 = (winrt::hstring *)winrt::operator+(&v20, &c_remoteSystemAvailabilityRegPath, &v29);
      v9 = winrt::hstring::c_str(v8);
      v10 = RegDeleteTreeW(HKEY_CURRENT_USER, v9);
      if ( v10 > 0 )
        v10 = (unsigned __int16)v10 | 0x80070000;
      winrt::check_hresult(&v26, (unsigned int)v10, &v24);
      winrt::handle_type<winrt::impl::hstring_traits>::close(&v20);
      v20 = 0LL;
      v24 = 0;
      v25 = 0LL;
      v11 = (*(__int64 (__fastcall **)(__int64, volatile signed __int32 **))(*(_QWORD *)winrt::Windows::Internal::Shell::implementation::RemoteSystemProvider::m_registrationData
                                                                           + 64LL))(
              winrt::Windows::Internal::Shell::implementation::RemoteSystemProvider::m_registrationData,
              &v20);
      winrt::check_hresult(&v26, v11, &v24);
      v19 = v20;
      v12 = 0;
      NetworkConnectivityLevel = winrt::impl::consume_Windows_Networking_Connectivity_IConnectionProfile<winrt::Windows::Networking::Connectivity::IConnectionProfile>::GetNetworkConnectivityLevel((__int64 *)&v19);
      while ( v12 != NetworkConnectivityLevel )
      {
        winrt::impl::consume_Windows_Foundation_Collections_IVectorView<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Internal::UI::Shell::WindowTabView>,winrt::Windows::Internal::UI::Shell::WindowTabView>::GetAt(
          (__int64 *)&v19,
          (winrt *)&v18,
          v12);
        v14 = winrt::impl::consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics7<winrt::WindowsUdk::System::UserProfile::IAppListBackupExtensionStatics7>::BackupDeveloperModeAsync(
                &v18,
                &v22);
        v15 = winrt::operator==(v14, (__int64 *)&v29);
        winrt::handle_type<winrt::impl::hstring_traits>::close(&v22);
        if ( v15 )
        {
          LOBYTE(v26) = 0;
          v16 = (struct winrt::hstring *)winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataSourceAdapterStatics>::CreateInstanceAsync(
                                           &v18,
                                           &v23);
          v17 = winrt::impl::create_and_initialize<winrt::Windows::Internal::Shell::implementation::RegistrationData,winrt::hstring const &,winrt::hstring const &,unsigned short const (&)[1]>(
                  v16,
                  (struct winrt::hstring *)&v29,
                  (unsigned __int16 *)&pvData);
          v21 = (v17 + 16) & ((unsigned __int128)-(__int128)(unsigned __int64)v17 >> 64);
          winrt::Windows::Internal::Shell::implementation::RemoteSystemProvider::UpdateRegistrationData(
            (const struct winrt::Windows::Internal::Shell::RegistrationData *)&v21,
            (const bool *)&v26);
          winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v21);
          winrt::handle_type<winrt::impl::hstring_traits>::close(&v23);
        }
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v18);
        ++v12;
      }
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v19);
    }
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v29);
  }
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension(a2);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)a3);
}
