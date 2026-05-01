/*
 * XREFs of ?SwitchToRemoteDesktop@RemoteSystemDataModel@implementation@Shell@Internal@Windows@winrt@@SAXAEBUhstring@6@@Z @ 0x180651348
 * Callers:
 *     ?SwitchToRemoteDesktop@SwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBUguid@6@W4SwitchSource@3456@@Z @ 0x18066F1E0 (-SwitchToRemoteDesktop@SwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@UEAA.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@U?$vector_impl@UUri@Foundation@Windows@winrt@@V?$vector@UUri@Foundation@Windows@winrt@@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@@winrt@@AEAAXXZ @ 0x1801BCA28 (-unconditional_release_ref@-$com_ptr@U-$vector_impl@UUri@Foundation@Windows@winrt@@V-$vector@UUr.c)
 *     ?GetFactoryImplObj@implementation@Shell@Internal@Windows@winrt@@YA@XZ @ 0x1802C4E14 (-GetFactoryImplObj@implementation@Shell@Internal@Windows@winrt@@YA@XZ.c)
 *     ?SwitchToRemoteDesktop@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUhstring@6@@Z @ 0x1806510A4 (-SwitchToRemoteDesktop@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::Windows::Internal::Shell::implementation::RemoteSystemDataModel::SwitchToRemoteDesktop(
        const struct winrt::hstring *a1)
{
  RTL_SRWLOCK **FactoryImplObj; // rax
  _QWORD *v3; // [rsp+38h] [rbp+10h] BYREF

  FactoryImplObj = (RTL_SRWLOCK **)winrt::Windows::Internal::Shell::implementation::GetFactoryImplObj((winrt::Windows::Internal::Shell::implementation *)&v3);
  winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::SwitchToRemoteDesktop(
    *FactoryImplObj,
    a1);
  if ( v3 )
    winrt::com_ptr<winrt::impl::vector_impl<winrt::Windows::Foundation::Uri,std::vector<winrt::Windows::Foundation::Uri>,winrt::impl::single_threaded_collection_base>>::unconditional_release_ref(&v3);
}
