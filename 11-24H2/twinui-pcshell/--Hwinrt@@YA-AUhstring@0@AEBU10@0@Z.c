/*
 * XREFs of ??Hwinrt@@YA?AUhstring@0@AEBU10@0@Z @ 0x1802A350C
 * Callers:
 *     ?ActivateAppAsync@UndockedSearchAppExperienceManager@@AEAAX_NW4ShellExperienceViewFocusOptions@Experience@Shell@Internal@Windows@@AEBUhstring@winrt@@W4SearchAppActivationMode@4UI@WindowsUdk@8@PEBG@Z @ 0x1802430DC (-ActivateAppAsync@UndockedSearchAppExperienceManager@@AEAAX_NW4ShellExperienceViewFocusOptions@E.c)
 *     _lambda_b77cff33db7c166167279fbdb5843ce7_::operator() @ 0x180285054 (_lambda_b77cff33db7c166167279fbdb5843ce7_--operator().c)
 *     ?DisableCloudPC@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUhstring@6@00@Z @ 0x18063FDD8 (-DisableCloudPC@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUhstring@6.c)
 *     ?EnableCloudPC@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUhstring@6@000@Z @ 0x18063FFB0 (-EnableCloudPC@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUhstring@6@.c)
 *     ?IsValidRegistrationData@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@AEAA_NAEBUhstring@6@@Z @ 0x18064160C (-IsValidRegistrationData@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@AEAA_NAEB.c)
 *     ?RecoverRegistrationData@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x180641860 (-RecoverRegistrationData@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ.c)
 *     ?CreateCorrelationIdForSwitch@Utils@implementation@Shell@Internal@Windows@winrt@@SA?AUhstring@6@U76@@Z @ 0x18064ABBC (-CreateCorrelationIdForSwitch@Utils@implementation@Shell@Internal@Windows@winrt@@SA-AUhstring@6@.c)
 *     ?CreateFileMappingName@FileMappingHelpers@Util@@QEAA?AUhstring@winrt@@QEAUHWND__@@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@AEBU34@@Z @ 0x18064AE78 (-CreateFileMappingName@FileMappingHelpers@Util@@QEAA-AUhstring@winrt@@QEAUHWND__@@AEBV-$basic_st.c)
 *     ?LaunchRemoteSystemSettingsAsync@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAA?AU?$IAsyncOperation@_N@Foundation@56@AEBURemoteDesktopProviderInfo@3456@@Z @ 0x18064E588 (-LaunchRemoteSystemSettingsAsync@RemoteSystemDataModel@factory_implementation@Shell@Internal@Win.c)
 *     ?IsRemoteDesktopProviderApp@RemoteDesktopProviderPackageUninstallHandler@implementation@Shell@Internal@Windows@winrt@@AEAA_NAEBUhstring@6@@Z @ 0x1806615F0 (-IsRemoteDesktopProviderApp@RemoteDesktopProviderPackageUninstallHandler@implementation@Shell@In.c)
 * Callees:
 *     ?concat_hstring@impl@winrt@@YA?AUhstring@2@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@0@Z @ 0x180148ED4 (-concat_hstring@impl@winrt@@YA-AUhstring@2@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@.c)
 */

volatile signed __int32 *__fastcall winrt::operator+(volatile signed __int32 *a1, __int64 *a2, __int64 *a3)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  const WCHAR *v7; // [rsp+28h] [rbp-30h] BYREF
  __int64 v8; // [rsp+30h] [rbp-28h]
  const WCHAR *v9; // [rsp+38h] [rbp-20h] BYREF
  __int64 v10; // [rsp+40h] [rbp-18h]

  v4 = *a3;
  if ( *a3 )
  {
    v7 = *(const WCHAR **)(v4 + 16);
    v8 = *(unsigned int *)(v4 + 4);
  }
  else
  {
    v7 = &pvData;
    v8 = 0LL;
  }
  v5 = *a2;
  if ( *a2 )
  {
    v9 = *(const WCHAR **)(v5 + 16);
    v10 = *(unsigned int *)(v5 + 4);
  }
  else
  {
    v9 = &pvData;
    v10 = 0LL;
  }
  winrt::impl::concat_hstring(a1, (__int64)&v9, (__int64)&v7);
  return a1;
}
