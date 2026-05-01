/*
 * XREFs of ?query_interface@?$root_implements@URemoteDesktopStateChangedEventArgs@implementation@Shell@Internal@Windows@winrt@@U13456@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x18061C1BC
 * Callers:
 *     ?QueryInterface@?$produce_base@U?$vector_impl@Uhstring@winrt@@V?$vector@Uhstring@winrt@@V?$allocator@Uhstring@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IIterable@Uhstring@winrt@@@Collections@Foundation@Windows@3@X@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x18061B440 (-QueryInterface@-$produce_base@U-$vector_impl@Uhstring@winrt@@V-$vector@Uhstring@winrt@@V-$alloc.c)
 *     ?QueryInterface@?$produce_base@URemoteSystemTimeOutInfoChangedEventArgs@implementation@Shell@Internal@Windows@winrt@@UIRemoteSystemTimeOutInfoChangedEventArgs@3456@X@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x18061B460 (-QueryInterface@-$produce_base@URemoteSystemTimeOutInfoChangedEventArgs@implementation@Shell@Int.c)
 *     ?QueryInterface@?$produce_base@UNetworkConnectionUtils@factory_implementation@Shell@Internal@Windows@winrt@@UINetworkConnectionUtilsStatics@3456@X@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x18061B480 (-QueryInterface@-$produce_base@UNetworkConnectionUtils@factory_implementation@Shell@Internal@Win.c)
 * Callees:
 *     ?AddRef@?$root_implements@VGamingFallbackWindow@@UIInspectable@@@impl@winrt@@QEAAIXZ @ 0x18029517C (-AddRef@-$root_implements@VGamingFallbackWindow@@UIInspectable@@@impl@winrt@@QEAAIXZ.c)
 *     ?query_interface_common@?$root_implements@USearchAppHost@implementation@Shell@UI@WindowsUdk@winrt@@U13456@UISearchAppHost2@3456@UISearchAppHost3@3456@UISearchAppHost4@3456@UISearchAppHost5@3456@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x180337A54 (-query_interface_common@-$root_implements@USearchAppHost@implementation@Shell@UI@WindowsUdk@winr.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::root_implements<winrt::Windows::Internal::Shell::implementation::RemoteDesktopStateChangedEventArgs,winrt::Windows::Internal::Shell::RemoteDesktopStateChangedEventArgs>::query_interface(
        volatile signed __int64 *a1,
        _QWORD *a2,
        __int64 *a3)
{
  __int64 v6; // rax

  v6 = (*(__int64 (__fastcall **)(volatile signed __int64 *))(*a1 + 48))(a1);
  *a3 = v6;
  if ( !v6 )
    return winrt::impl::root_implements<winrt::WindowsUdk::UI::Shell::implementation::SearchAppHost,winrt::WindowsUdk::UI::Shell::SearchAppHost,winrt::WindowsUdk::UI::Shell::ISearchAppHost2,winrt::WindowsUdk::UI::Shell::ISearchAppHost3,winrt::WindowsUdk::UI::Shell::ISearchAppHost4,winrt::WindowsUdk::UI::Shell::ISearchAppHost5>::query_interface_common(
             a1,
             a2,
             a3);
  winrt::impl::root_implements<GamingFallbackWindow,IInspectable>::AddRef((__int64)a1);
  return 0LL;
}
