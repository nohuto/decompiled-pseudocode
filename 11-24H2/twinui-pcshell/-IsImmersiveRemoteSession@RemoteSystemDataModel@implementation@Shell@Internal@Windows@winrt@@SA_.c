/*
 * XREFs of ?IsImmersiveRemoteSession@RemoteSystemDataModel@implementation@Shell@Internal@Windows@winrt@@SA_NXZ @ 0x18064DFF8
 * Callers:
 *     ?SwitchToCurrentDesktop@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@QEAAXXZ @ 0x18064250C (-SwitchToCurrentDesktop@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@QEAAXXZ.c)
 *     ?IsImmersiveRemoteSession@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEBA_NXZ @ 0x18065AE4C (-IsImmersiveRemoteSession@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt.c)
 *     ?SwitchToRemoteDesktop@SwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBUguid@6@W4SwitchSource@3456@@Z @ 0x18066F1E0 (-SwitchToRemoteDesktop@SwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@UEAA.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@U?$vector_impl@UUri@Foundation@Windows@winrt@@V?$vector@UUri@Foundation@Windows@winrt@@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@@winrt@@AEAAXXZ @ 0x1801BCA28 (-unconditional_release_ref@-$com_ptr@U-$vector_impl@UUri@Foundation@Windows@winrt@@V-$vector@UUr.c)
 *     ?GetFactoryImplObj@implementation@Shell@Internal@Windows@winrt@@YA@XZ @ 0x1802C4E14 (-GetFactoryImplObj@implementation@Shell@Internal@Windows@winrt@@YA@XZ.c)
 */

bool winrt::Windows::Internal::Shell::implementation::RemoteSystemDataModel::IsImmersiveRemoteSession(void)
{
  char v0; // bl
  _QWORD *v2; // [rsp+30h] [rbp+8h] BYREF

  v0 = *(_BYTE *)(*(_QWORD *)winrt::Windows::Internal::Shell::implementation::GetFactoryImplObj((winrt::Windows::Internal::Shell::implementation *)&v2)
                + 40LL);
  if ( v2 )
    winrt::com_ptr<winrt::impl::vector_impl<winrt::Windows::Foundation::Uri,std::vector<winrt::Windows::Foundation::Uri>,winrt::impl::single_threaded_collection_base>>::unconditional_release_ref(&v2);
  return v0;
}
