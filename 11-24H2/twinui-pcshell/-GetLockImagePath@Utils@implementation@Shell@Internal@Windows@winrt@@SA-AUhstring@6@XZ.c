/*
 * XREFs of ?GetLockImagePath@Utils@implementation@Shell@Internal@Windows@winrt@@SA?AUhstring@6@XZ @ 0x180668F00
 * Callers:
 *     ?GetBackgroundImagePath@BootConnectionHandler@implementation@Shell@Internal@Windows@winrt@@MEBA?AUhstring@6@XZ @ 0x1806689D0 (-GetBackgroundImagePath@BootConnectionHandler@implementation@Shell@Internal@Windows@winrt@@MEBA-.c)
 *     ?Execute@BootConnectingState@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@W4CloudPCState@3456@@Z @ 0x180669FB0 (-Execute@BootConnectingState@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBV-$shared_ptr@.c)
 *     ?ShowPhysicalDeviceAccessTransitionScreen@BootPhysicalDeviceAccessState@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@@Z @ 0x18066A688 (-ShowPhysicalDeviceAccessTransitionScreen@BootPhysicalDeviceAccessState@implementation@Shell@Int.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?CreateInstanceAsync@?$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics@UITaskGroupDataSourceAdapterStatics@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180052F5C (-CreateInstanceAsync@-$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStat.c)
 *     ??8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x1800C6394 (--8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     ?OriginalImageFile@LockScreen@UserProfile@System@Windows@winrt@@SA@XZ @ 0x18066973C (-OriginalImageFile@LockScreen@UserProfile@System@Windows@winrt@@SA@XZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_ImprovedLockScreenImageHandling@@@details@wil@@QEAA_NXZ @ 0x180669B0C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_ImprovedLockScreenImageH.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall winrt::Windows::Internal::Shell::implementation::Utils::GetLockImagePath(_QWORD *a1)
{
  __int64 **v2; // rcx
  __int64 *v4; // [rsp+48h] [rbp+10h] BYREF
  __int64 *v5; // [rsp+50h] [rbp+18h] BYREF
  __int64 v6; // [rsp+58h] [rbp+20h] BYREF

  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_W365Boot_ImprovedLockScreenImageHandling>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_W365Boot_ImprovedLockScreenImageHandling>::GetImpl'::`2'::impl) )
  {
    winrt::Windows::System::UserProfile::LockScreen::OriginalImageFile();
    v6 = 0LL;
    if ( winrt::Windows::Foundation::operator==((void (__fastcall ****)(_QWORD, __int64 *, __int64 *))&v4, &v6) )
    {
      *a1 = 0LL;
      *a1 = 0LL;
    }
    else
    {
      winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataSourceAdapterStatics>::CreateInstanceAsync(
        &v4,
        a1);
    }
    v2 = &v4;
  }
  else
  {
    winrt::Windows::System::UserProfile::LockScreen::OriginalImageFile();
    winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataSourceAdapterStatics>::CreateInstanceAsync(
      &v5,
      a1);
    v2 = &v5;
  }
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v2);
  return a1;
}
