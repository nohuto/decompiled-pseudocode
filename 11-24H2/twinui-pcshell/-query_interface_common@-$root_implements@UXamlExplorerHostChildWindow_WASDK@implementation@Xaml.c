/*
 * XREFs of ?query_interface_common@?$root_implements@UXamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@U134567@UIXamlExplorerHostChildWindow_WASDK2@34567@UIXamlExplorerHostChildWindow_WASDK3@34567@UIXamlExplorerHostChildWindow_WASDK4@34567@UIClosable@Foundation@67@Unon_agile@7@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x1804538B0
 * Callers:
 *     ?QueryInterface@?$implements@UXamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@U134567@UIXamlExplorerHostChildWindow_WASDK2@34567@UIXamlExplorerHostChildWindow_WASDK3@34567@UIXamlExplorerHostChildWindow_WASDK4@34567@UIClosable@Foundation@67@Unon_agile@7@@winrt@@QEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1804528E0 (-QueryInterface@-$implements@UXamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@.c)
 *     ?QueryInterface@?$produce_base@UXamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlExplorerHostChildWindow_WASDK2@34567@X@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x1804529D0 (-QueryInterface@-$produce_base@UXamlExplorerHostChildWindow_WASDK@implementation@Xa_ea_1804529D0.c)
 *     ?QueryInterface@?$produce_base@UXamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlExplorerHostChildWindow_WASDK3@34567@X@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x180452A40 (-QueryInterface@-$produce_base@UXamlExplorerHostChildWindow_WASDK@implementation@Xa_ea_180452A40.c)
 *     ?QueryInterface@?$produce_base@UXamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlExplorerHostChildWindow_WASDK4@34567@X@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x180452AB0 (-QueryInterface@-$produce_base@UXamlExplorerHostChildWindow_WASDK@implementation@Xa_ea_180452AB0.c)
 * Callees:
 *     ?AddRef@?$root_implements@VGamingFallbackWindow@@UIInspectable@@@impl@winrt@@QEAAIXZ @ 0x18029517C (-AddRef@-$root_implements@VGamingFallbackWindow@@UIInspectable@@@impl@winrt@@QEAAIXZ.c)
 *     ?make_weak_ref@?$root_implements@UXamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@U134567@UIClosable@Foundation@67@Unon_agile@7@@impl@winrt@@AEAAPEAUIWeakReferenceSource@23@XZ @ 0x180450E1C (-make_weak_ref@-$root_implements@UXamlExplorerHostChildWindow@implementation@XamlExplorerHost@Sh.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::root_implements<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow_WASDK,winrt::Windows::Internal::Shell::XamlExplorerHost::XamlExplorerHostChildWindow_WASDK,winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostChildWindow_WASDK2,winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostChildWindow_WASDK3,winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostChildWindow_WASDK4,winrt::Windows::Foundation::IClosable,winrt::non_agile>::query_interface_common(
        volatile signed __int64 *a1,
        _QWORD *a2,
        __int64 *a3)
{
  __int64 (*v5)(void); // rax
  __int64 weak_ref; // rax

  if ( *a2 == winrt::impl::guid_v<winrt::Windows::Foundation::IUnknown> && a2[1] == 0x46000000000000C0LL )
  {
    v5 = *(__int64 (**)(void))(*a1 + 24);
LABEL_4:
    *a3 = v5();
    winrt::impl::root_implements<GamingFallbackWindow,IInspectable>::AddRef((__int64)a1);
    return 0LL;
  }
  if ( *a2 == winrt::impl::guid_v<IInspectable> && a2[1] == 0x901E1065AAD75A9CuLL )
  {
    v5 = *(__int64 (**)(void))(*a1 + 56);
    goto LABEL_4;
  }
  if ( *a2 != *(_QWORD *)L"8" || a2[1] != 0x46000000000000C0LL )
    return (**(__int64 (__fastcall ***)(volatile signed __int64 *))a1)(a1);
  weak_ref = winrt::impl::root_implements<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow,winrt::Windows::Internal::Shell::XamlExplorerHost::XamlExplorerHostChildWindow,winrt::Windows::Foundation::IClosable,winrt::non_agile>::make_weak_ref(a1);
  *a3 = weak_ref;
  return weak_ref == 0 ? 0x8007000E : 0;
}
