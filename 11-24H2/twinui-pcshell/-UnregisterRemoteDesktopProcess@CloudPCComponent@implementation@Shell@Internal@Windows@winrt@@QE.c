/*
 * XREFs of ?UnregisterRemoteDesktopProcess@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@QEBAXI@Z @ 0x1806425C4
 * Callers:
 *     ?UnregisterRemoteDesktopProcess@?$produce@UCloudPCComponent@implementation@Shell@Internal@Windows@winrt@@UIRemoteSystemProviderExtension@RemoteSystems@3456@@impl@winrt@@UEAAHI@Z @ 0x1806425A0 (-UnregisterRemoteDesktopProcess@-$produce@UCloudPCComponent@implementation@Shell@Internal@Window.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@U?$vector_impl@UUri@Foundation@Windows@winrt@@V?$vector@UUri@Foundation@Windows@winrt@@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@@winrt@@AEAAXXZ @ 0x1801BCA28 (-unconditional_release_ref@-$com_ptr@U-$vector_impl@UUri@Foundation@Windows@winrt@@V-$vector@UUr.c)
 *     ?GetFactoryImplObj@implementation@Shell@Internal@Windows@winrt@@YA@XZ @ 0x1802C4E14 (-GetFactoryImplObj@implementation@Shell@Internal@Windows@winrt@@YA@XZ.c)
 *     ?UnregisterRemoteDesktopProcess@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAAXI@Z @ 0x180652280 (-UnregisterRemoteDesktopProcess@RemoteSystemDataModel@factory_implementation@Shell@Internal@Wind.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::Windows::Internal::Shell::implementation::CloudPCComponent::UnregisterRemoteDesktopProcess(
        winrt::Windows::Internal::Shell::implementation::CloudPCComponent *this,
        unsigned int a2)
{
  winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel **FactoryImplObj; // rax
  _QWORD *v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = this;
  FactoryImplObj = (winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel **)winrt::Windows::Internal::Shell::implementation::GetFactoryImplObj((winrt::Windows::Internal::Shell::implementation *)&v4);
  winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::UnregisterRemoteDesktopProcess(
    *FactoryImplObj,
    a2);
  if ( v4 )
    winrt::com_ptr<winrt::impl::vector_impl<winrt::Windows::Foundation::Uri,std::vector<winrt::Windows::Foundation::Uri>,winrt::impl::single_threaded_collection_base>>::unconditional_release_ref(&v4);
}
