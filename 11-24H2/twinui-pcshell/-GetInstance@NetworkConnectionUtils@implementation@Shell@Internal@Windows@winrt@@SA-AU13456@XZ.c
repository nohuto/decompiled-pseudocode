/*
 * XREFs of ?GetInstance@NetworkConnectionUtils@implementation@Shell@Internal@Windows@winrt@@SA?AU13456@XZ @ 0x18067057C
 * Callers:
 *     ?OnNetworkChanged@BootProviderActivator@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUTransitionScreen@7CloudDesktop@3456@AEBURemoteDesktopProviderInfo@3456@@Z @ 0x180669418 (-OnNetworkChanged@BootProviderActivator@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUTr.c)
 *     ?GetInstance@NetworkConnectionUtils@Shell@Internal@Windows@winrt@@SA?AU12345@XZ @ 0x180670510 (-GetInstance@NetworkConnectionUtils@Shell@Internal@Windows@winrt@@SA-AU12345@XZ.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@U?$vector_impl@UUri@Foundation@Windows@winrt@@V?$vector@UUri@Foundation@Windows@winrt@@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@@winrt@@AEAAXXZ @ 0x1801BCA28 (-unconditional_release_ref@-$com_ptr@U-$vector_impl@UUri@Foundation@Windows@winrt@@V-$vector@UUr.c)
 *     ??$make_factory@UNetworkConnectionUtils@factory_implementation@Shell@Internal@Windows@winrt@@@impl@winrt@@YA?AUIActivationFactory@Foundation@Windows@1@XZ @ 0x18067014C (--$make_factory@UNetworkConnectionUtils@factory_implementation@Shell@Internal@Windows@winrt@@@im.c)
 *     ?GetInstance@NetworkConnectionUtils@factory_implementation@Shell@Internal@Windows@winrt@@QEBA?AU13456@XZ @ 0x180670530 (-GetInstance@NetworkConnectionUtils@factory_implementation@Shell@Internal@Windows@winrt@@QEBA-AU.c)
 */

__int64 *__fastcall winrt::Windows::Internal::Shell::implementation::NetworkConnectionUtils::GetInstance(__int64 *a1)
{
  __int64 *v2; // rbx
  __int64 *v4; // [rsp+40h] [rbp+8h] BYREF
  __int64 *v5; // [rsp+48h] [rbp+10h] BYREF

  v4 = a1;
  winrt::impl::make_factory<winrt::Windows::Internal::Shell::factory_implementation::NetworkConnectionUtils>((__int64 *)&v4);
  if ( v4 )
    v2 = v4 - 2;
  else
    v2 = 0LL;
  v4 = 0LL;
  v5 = v2;
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v4);
  winrt::Windows::Internal::Shell::factory_implementation::NetworkConnectionUtils::GetInstance((__int64)v2, a1);
  if ( v2 )
    winrt::com_ptr<winrt::impl::vector_impl<winrt::Windows::Foundation::Uri,std::vector<winrt::Windows::Foundation::Uri>,winrt::impl::single_threaded_collection_base>>::unconditional_release_ref(&v5);
  return a1;
}
