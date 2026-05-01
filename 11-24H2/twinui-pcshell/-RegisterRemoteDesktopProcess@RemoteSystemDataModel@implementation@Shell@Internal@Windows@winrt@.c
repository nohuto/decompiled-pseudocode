/*
 * XREFs of ?RegisterRemoteDesktopProcess@RemoteSystemDataModel@implementation@Shell@Internal@Windows@winrt@@SAXIAEBUUri@Foundation@56@@Z @ 0x18064FE00
 * Callers:
 *     ?RegisterRemoteDesktopProcess@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@QEBAXIAEBUUri@Foundation@56@@Z @ 0x180641EDC (-RegisterRemoteDesktopProcess@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@QEBA.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@U?$vector_impl@UUri@Foundation@Windows@winrt@@V?$vector@UUri@Foundation@Windows@winrt@@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@@winrt@@AEAAXXZ @ 0x1801BCA28 (-unconditional_release_ref@-$com_ptr@U-$vector_impl@UUri@Foundation@Windows@winrt@@V-$vector@UUr.c)
 *     ?GetFactoryImplObj@implementation@Shell@Internal@Windows@winrt@@YA@XZ @ 0x1802C4E14 (-GetFactoryImplObj@implementation@Shell@Internal@Windows@winrt@@YA@XZ.c)
 *     ?RegisterRemoteDesktopProcess@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAAXIAEBUUri@Foundation@56@_N@Z @ 0x18064F958 (-RegisterRemoteDesktopProcess@RemoteSystemDataModel@factory_implementation@Shell@Internal@Window.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::Windows::Internal::Shell::implementation::RemoteSystemDataModel::RegisterRemoteDesktopProcess(
        unsigned int a1,
        const struct winrt::Windows::Foundation::Uri *a2)
{
  winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel **FactoryImplObj; // rax
  _QWORD *v5; // [rsp+40h] [rbp+18h] BYREF

  FactoryImplObj = (winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel **)winrt::Windows::Internal::Shell::implementation::GetFactoryImplObj((winrt::Windows::Internal::Shell::implementation *)&v5);
  winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::RegisterRemoteDesktopProcess(
    *FactoryImplObj,
    a1,
    a2,
    0);
  if ( v5 )
    winrt::com_ptr<winrt::impl::vector_impl<winrt::Windows::Foundation::Uri,std::vector<winrt::Windows::Foundation::Uri>,winrt::impl::single_threaded_collection_base>>::unconditional_release_ref(&v5);
}
