/*
 * XREFs of ??Hwinrt@@YA?AUhstring@0@AEBU10@PEBG@Z @ 0x1802AAA38
 * Callers:
 *     ?ActivateAppAsync@UndockedSearchAppExperienceManager@@AEAAX_NW4ShellExperienceViewFocusOptions@Experience@Shell@Internal@Windows@@AEBUhstring@winrt@@W4SearchAppActivationMode@4UI@WindowsUdk@8@PEBG@Z @ 0x1802430DC (-ActivateAppAsync@UndockedSearchAppExperienceManager@@AEAAX_NW4ShellExperienceViewFocusOptions@E.c)
 *     ?SetupDragScaleFactorAnimations@CAppThumbnailWindow@@AEAAX_N@Z @ 0x1804A9C0C (-SetupDragScaleFactorAnimations@CAppThumbnailWindow@@AEAAX_N@Z.c)
 *     LockScreenWidgetPackageHelperBase::GetVolumeToInstallPackageAsync$_ResumeCoro$1 @ 0x1805D2D00 (LockScreenWidgetPackageHelperBase--GetVolumeToInstallPackageAsync$_ResumeCoro$1.c)
 *     ?IsFileSystemSupported@LockScreenWidgetPackageHelperBase@@IEAA_NUPackageVolume@Deployment@Management@Windows@winrt@@@Z @ 0x1805D4234 (-IsFileSystemSupported@LockScreenWidgetPackageHelperBase@@IEAA_NUPackageVolume@Deployment@Manage.c)
 *     ?CopyCorrelationIdForBootUserSession@Utils@implementation@Shell@Internal@Windows@winrt@@SAXXZ @ 0x18063FA80 (-CopyCorrelationIdForBootUserSession@Utils@implementation@Shell@Internal@Windows@winrt@@SAXXZ.c)
 *     ?DisableCloudPC@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUhstring@6@00@Z @ 0x18063FDD8 (-DisableCloudPC@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUhstring@6.c)
 *     ?EnableCloudPC@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUhstring@6@000@Z @ 0x18063FFB0 (-EnableCloudPC@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUhstring@6@.c)
 *     ?IsBootCorrelationIdForSessionPresent@Utils@implementation@Shell@Internal@Windows@winrt@@SA_NXZ @ 0x1806412FC (-IsBootCorrelationIdForSessionPresent@Utils@implementation@Shell@Internal@Windows@winrt@@SA_NXZ.c)
 *     ?RecoverRegistrationData@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x180641860 (-RecoverRegistrationData@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ.c)
 *     ?CreateFileMappingName@FileMappingHelpers@Util@@QEAA?AUhstring@winrt@@QEAUHWND__@@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@AEBU34@@Z @ 0x18064AE78 (-CreateFileMappingName@FileMappingHelpers@Util@@QEAA-AUhstring@winrt@@QEAUHWND__@@AEBV-$basic_st.c)
 *     ?LaunchRemoteSystemSettingsAsync@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAA?AU?$IAsyncOperation@_N@Foundation@56@AEBURemoteDesktopProviderInfo@3456@@Z @ 0x18064E588 (-LaunchRemoteSystemSettingsAsync@RemoteSystemDataModel@factory_implementation@Shell@Internal@Win.c)
 * Callees:
 *     ?concat_hstring@impl@winrt@@YA?AUhstring@2@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@0@Z @ 0x180148ED4 (-concat_hstring@impl@winrt@@YA-AUhstring@2@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@.c)
 */

volatile signed __int32 *__fastcall winrt::operator+(volatile signed __int32 *a1, __int64 *a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v5; // rcx
  const WCHAR *v7; // [rsp+28h] [rbp-30h] BYREF
  __int64 v8; // [rsp+30h] [rbp-28h]
  _QWORD v9[4]; // [rsp+38h] [rbp-20h] BYREF

  v9[0] = a3;
  v3 = -1LL;
  do
    ++v3;
  while ( *(_WORD *)(a3 + 2 * v3) );
  v5 = *a2;
  v9[1] = v3;
  if ( v5 )
  {
    v7 = *(const WCHAR **)(v5 + 16);
    v8 = *(unsigned int *)(v5 + 4);
  }
  else
  {
    v8 = 0LL;
    v7 = &pvData;
  }
  winrt::impl::concat_hstring(a1, (__int64)&v7, (__int64)v9);
  return a1;
}
