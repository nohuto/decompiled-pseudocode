/*
 * XREFs of ?SwitchToCurrentDesktop@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@QEAAXXZ @ 0x18064250C
 * Callers:
 *     ?SwitchToCurrentDesktop@?$produce@UCloudPCComponent@implementation@Shell@Internal@Windows@winrt@@UIRemoteSystemProviderExtension@RemoteSystems@3456@@impl@winrt@@UEAAHXZ @ 0x1806424E0 (-SwitchToCurrentDesktop@-$produce@UCloudPCComponent@implementation@Shell@Internal@Windows@winrt@.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@U?$vector_impl@UUri@Foundation@Windows@winrt@@V?$vector@UUri@Foundation@Windows@winrt@@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@@winrt@@AEAAXXZ @ 0x1801BCA28 (-unconditional_release_ref@-$com_ptr@U-$vector_impl@UUri@Foundation@Windows@winrt@@V-$vector@UUr.c)
 *     ?GetFactoryImplObj@implementation@Shell@Internal@Windows@winrt@@YA@XZ @ 0x1802C4E14 (-GetFactoryImplObj@implementation@Shell@Internal@Windows@winrt@@YA@XZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_W365Switch_Engineering_Improvements_SwitchBugFixes@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1806422E4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_W365Switch_Engineering_Improvements_Switc.c)
 *     ?IsImmersiveRemoteSession@RemoteSystemDataModel@implementation@Shell@Internal@Windows@winrt@@SA_NXZ @ 0x18064DFF8 (-IsImmersiveRemoteSession@RemoteSystemDataModel@implementation@Shell@Internal@Windows@winrt@@SA_.c)
 *     ?SwitchToLocalVirtualDesktopInLocalSession@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEBAXXZ @ 0x18065C884 (-SwitchToLocalVirtualDesktopInLocalSession@RemoteSessionWindowManager@implementation@Shell@Inter.c)
 *     ?SwitchToRemoteVirtualDesktopInRemoteSession@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEBAXXZ @ 0x18065C8EC (-SwitchToRemoteVirtualDesktopInRemoteSession@RemoteSessionWindowManager@implementation@Shell@Int.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::Windows::Internal::Shell::implementation::CloudPCComponent::SwitchToCurrentDesktop(
        winrt::Windows::Internal::Shell::implementation::CloudPCComponent *this)
{
  __int64 v2; // r8
  __int64 v3; // r9
  int v4; // edi
  _QWORD *v5; // [rsp+38h] [rbp+10h] BYREF

  if ( winrt::Windows::Internal::Shell::implementation::RemoteSystemDataModel::IsImmersiveRemoteSession() )
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_W365Switch_Engineering_Improvements_SwitchBugFixes>::ReportUsage(
      (__int64)&`wil::Feature<__WilFeatureTraits_Feature_W365Switch_Engineering_Improvements_SwitchBugFixes>::GetImpl'::`2'::impl,
      1u,
      v2,
      v3);
    v4 = *(_DWORD *)(*(_QWORD *)winrt::Windows::Internal::Shell::implementation::GetFactoryImplObj((winrt::Windows::Internal::Shell::implementation *)&v5)
                   + 48LL);
    if ( v5 )
      winrt::com_ptr<winrt::impl::vector_impl<winrt::Windows::Foundation::Uri,std::vector<winrt::Windows::Foundation::Uri>,winrt::impl::single_threaded_collection_base>>::unconditional_release_ref(&v5);
    if ( v4 != 1 )
      winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager::SwitchToRemoteVirtualDesktopInRemoteSession((winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager *)((*((_QWORD *)this + 13) - 16LL) & -(__int64)(*((_QWORD *)this + 13) != 0LL)));
  }
  else
  {
    winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager::SwitchToLocalVirtualDesktopInLocalSession((winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager *)((*((_QWORD *)this + 13) - 16LL) & -(__int64)(*((_QWORD *)this + 13) != 0LL)));
  }
}
