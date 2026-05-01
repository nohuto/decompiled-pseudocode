/*
 * XREFs of ?LaunchForSwitchAsync@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAA?AU?$IAsyncOperation@_N@Foundation@56@AEBURemoteDesktopProviderInfo@3456@@Z @ 0x18064E498
 * Callers:
 *     ?LaunchForSwitchAsync@?$produce@URemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@UIRemoteSystemDataModelStatics@3456@@impl@winrt@@UEAAHPEAXPEAPEAX@Z @ 0x18064E440 (-LaunchForSwitchAsync@-$produce@URemoteSystemDataModel@factory_implementation@Shell@Internal@Win.c)
 *     ?LaunchAsync@SwitchProviderActivator@implementation@Shell@Internal@Windows@winrt@@UEAA?AU?$IAsyncOperation@_N@Foundation@56@AEBURemoteDesktopProviderInfo@3456@@Z @ 0x18066BC70 (-LaunchAsync@SwitchProviderActivator@implementation@Shell@Internal@Windows@winrt@@UEAA-AU-$IAsyn.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x18004C654 (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_CloudPCCommon_v3@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1802973D0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_CloudPCCommon_v3@@@details@wil@@QEAAX_NW4.c)
 *     ?GetLaunchUri@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAA?AUUri@Foundation@56@AEBURemoteDesktopProviderInfo@3456@W4Mode@CloudPCHelpers@@@Z @ 0x18064CA34 (-GetLaunchUri@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAA-AU.c)
 *     ?LaunchAsync@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAA?AU?$IAsyncOperation@_N@Foundation@56@AEBURemoteDesktopProviderInfo@3456@UUri@856@@Z @ 0x18064E254 (-LaunchAsync@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAA-AU-.c)
 */

// Hidden C++ exception states: #wind=34
const struct winrt::Windows::Foundation::Uri *__fastcall winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::LaunchForSwitchAsync(
        winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel *a1,
        const struct winrt::Windows::Foundation::Uri *a2,
        __int64 **a3)
{
  _QWORD v7[2]; // [rsp+28h] [rbp-10h] BYREF
  __int64 v8; // [rsp+58h] [rbp+20h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_CloudPCCommon_v3>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_CloudPCCommon_v3>::GetImpl'::`2'::impl,
    1u,
    3u);
  winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::GetLaunchUri(a1, v7, a3, 0);
  v8 = v7[0];
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(&v8);
  winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::LaunchAsync((__int64)a1, a2, a3, &v8);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v7);
  return a2;
}
