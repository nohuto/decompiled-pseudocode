/*
 * XREFs of ?QueryInterface@?$produce_base@U?$map_impl@Uhstring@winrt@@U12@V?$map@Uhstring@winrt@@U12@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@U12@@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IMapView@Uhstring@winrt@@U12@@Collections@Foundation@Windows@3@X@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x18033B770
 * Callers:
 *     <none>
 * Callees:
 *     ?AddRef@?$root_implements@VGamingFallbackWindow@@UIInspectable@@@impl@winrt@@QEAAIXZ @ 0x18029517C (-AddRef@-$root_implements@VGamingFallbackWindow@@UIInspectable@@@impl@winrt@@QEAAIXZ.c)
 *     ?query_interface_common@?$root_implements@USearchAppHost@implementation@Shell@UI@WindowsUdk@winrt@@U13456@UISearchAppHost2@3456@UISearchAppHost3@3456@UISearchAppHost4@3456@UISearchAppHost5@3456@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x180337A54 (-query_interface_common@-$root_implements@USearchAppHost@implementation@Shell@UI@WindowsUdk@winr.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::produce_base<winrt::impl::map_impl<winrt::hstring,winrt::hstring,std::map<winrt::hstring,winrt::hstring>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IMapView<winrt::hstring,winrt::hstring>,void>::QueryInterface(
        unsigned __int64 a1,
        _QWORD *a2,
        __int64 *a3)
{
  volatile signed __int64 *v5; // rbx
  __int64 v6; // rax
  unsigned int v7; // r9d

  v5 = (volatile signed __int64 *)((a1 - 24) & ((unsigned __int128)-(__int128)a1 >> 64));
  v6 = (*(__int64 (__fastcall **)(volatile signed __int64 *))(*v5 + 48))(v5);
  *a3 = v6;
  if ( v6 )
    winrt::impl::root_implements<GamingFallbackWindow,IInspectable>::AddRef((__int64)v5);
  else
    return (unsigned int)winrt::impl::root_implements<winrt::WindowsUdk::UI::Shell::implementation::SearchAppHost,winrt::WindowsUdk::UI::Shell::SearchAppHost,winrt::WindowsUdk::UI::Shell::ISearchAppHost2,winrt::WindowsUdk::UI::Shell::ISearchAppHost3,winrt::WindowsUdk::UI::Shell::ISearchAppHost4,winrt::WindowsUdk::UI::Shell::ISearchAppHost5>::query_interface_common(
                           v5,
                           a2,
                           a3);
  return v7;
}
