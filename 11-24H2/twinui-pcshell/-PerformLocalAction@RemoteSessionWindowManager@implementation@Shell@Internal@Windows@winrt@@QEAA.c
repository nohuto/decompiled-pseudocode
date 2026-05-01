/*
 * XREFs of ?PerformLocalAction@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBW4RemoteDesktopLocalAction@3456@@Z @ 0x18065BC7C
 * Callers:
 *     ?PerformLocalAction@?$produce@URemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@UIRemoteSessionWindowManager@3456@@impl@winrt@@UEAAHH@Z @ 0x18065BC50 (-PerformLocalAction@-$produce@URemoteSessionWindowManager@implementation@Shell@Internal@Windows@.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@U?$vector_impl@UUri@Foundation@Windows@winrt@@V?$vector@UUri@Foundation@Windows@winrt@@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@@winrt@@AEAAXXZ @ 0x1801BCA28 (-unconditional_release_ref@-$com_ptr@U-$vector_impl@UUri@Foundation@Windows@winrt@@V-$vector@UUr.c)
 *     ?GetFactoryImplObj@implementation@Shell@Internal@Windows@winrt@@YA@XZ @ 0x1802C4E14 (-GetFactoryImplObj@implementation@Shell@Internal@Windows@winrt@@YA@XZ.c)
 *     ?PerformLocalAction@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAAXAEBW4RemoteDesktopLocalAction@3456@@Z @ 0x18064EDE8 (-PerformLocalAction@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@Q.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager::PerformLocalAction(
        winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager *this,
        const enum winrt::Windows::Internal::Shell::RemoteDesktopLocalAction *a2)
{
  winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel **FactoryImplObj; // rax
  _QWORD *v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = this;
  FactoryImplObj = (winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel **)winrt::Windows::Internal::Shell::implementation::GetFactoryImplObj((winrt::Windows::Internal::Shell::implementation *)&v4);
  winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::PerformLocalAction(
    *FactoryImplObj,
    a2);
  if ( v4 )
    winrt::com_ptr<winrt::impl::vector_impl<winrt::Windows::Foundation::Uri,std::vector<winrt::Windows::Foundation::Uri>,winrt::impl::single_threaded_collection_base>>::unconditional_release_ref(&v4);
}
