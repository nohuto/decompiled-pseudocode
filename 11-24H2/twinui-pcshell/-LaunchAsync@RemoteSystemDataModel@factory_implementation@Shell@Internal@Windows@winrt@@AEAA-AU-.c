/*
 * XREFs of ?LaunchAsync@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAA?AU?$IAsyncOperation@_N@Foundation@56@AEBURemoteDesktopProviderInfo@3456@UUri@856@@Z @ 0x18064E254
 * Callers:
 *     ?LaunchBootToCloudAsync@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAA?AU?$IAsyncOperation@_N@Foundation@56@AEBURemoteDesktopProviderInfo@3456@@Z @ 0x18064E358 (-LaunchBootToCloudAsync@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winr.c)
 *     ?LaunchForSwitchAsync@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAA?AU?$IAsyncOperation@_N@Foundation@56@AEBURemoteDesktopProviderInfo@3456@@Z @ 0x18064E498 (-LaunchForSwitchAsync@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@.c)
 *     ?LaunchRemoteSystemSettingsAsync@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAA?AU?$IAsyncOperation@_N@Foundation@56@AEBURemoteDesktopProviderInfo@3456@@Z @ 0x18064E588 (-LaunchRemoteSystemSettingsAsync@RemoteSystemDataModel@factory_implementation@Shell@Internal@Win.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?BackupDeveloperModeAsync@?$consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics7@UIAppListBackupExtensionStatics7@UserProfile@System@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x180052A5C (-BackupDeveloperModeAsync@-$consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x180053844 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?LaunchUriAsync@Launcher@System@Windows@winrt@@SA@AEBUUri@Foundation@34@@Z @ 0x180298A38 (-LaunchUriAsync@Launcher@System@Windows@winrt@@SA@AEBUUri@Foundation@34@@Z.c)
 *     ??0LauncherOptions@System@Windows@winrt@@QEAA@XZ @ 0x180621AC4 (--0LauncherOptions@System@Windows@winrt@@QEAA@XZ.c)
 *     ?LaunchUriAsync@Launcher@System@Windows@winrt@@SA@AEBUUri@Foundation@34@AEBULauncherOptions@234@@Z @ 0x1806332CC (-LaunchUriAsync@Launcher@System@Windows@winrt@@SA@AEBUUri@Foundation@34@AEBULauncherOptions@234@.c)
 *     ?TargetApplicationPackageFamilyName@?$consume_Windows_System_ILauncherOptions2@ULauncherOptions@System@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x180635374 (-TargetApplicationPackageFamilyName@-$consume_Windows_System_ILauncherOptions2@ULauncherOptions@.c)
 */

// Hidden C++ exception states: #wind=3
const struct winrt::Windows::Foundation::Uri *__fastcall winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::LaunchAsync(
        __int64 a1,
        const struct winrt::Windows::Foundation::Uri *a2,
        __int64 **a3,
        __int64 *a4)
{
  volatile signed __int32 *v8; // [rsp+28h] [rbp-30h] BYREF
  _QWORD v9[5]; // [rsp+30h] [rbp-28h] BYREF
  struct IUnknown v10; // [rsp+60h] [rbp+8h] BYREF
  __int64 *v11; // [rsp+78h] [rbp+20h]

  v11 = a4;
  if ( *(_DWORD *)(a1 + 44) == 1 )
  {
    winrt::Windows::System::Launcher::LaunchUriAsync(a2, a4);
  }
  else
  {
    winrt::Windows::System::LauncherOptions::LauncherOptions(&v10);
    v9[0] = *winrt::impl::consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics7<winrt::WindowsUdk::System::UserProfile::IAppListBackupExtensionStatics7>::BackupDeveloperModeAsync(
               a3,
               &v8);
    winrt::impl::consume_Windows_System_ILauncherOptions2<winrt::Windows::System::LauncherOptions>::TargetApplicationPackageFamilyName(
      &v10,
      v9);
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v8);
    winrt::Windows::System::Launcher::LaunchUriAsync(
      a2,
      (const struct winrt::Windows::System::LauncherOptions *)a4,
      (__int64)&v10);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v10);
  }
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)a4);
  return a2;
}
