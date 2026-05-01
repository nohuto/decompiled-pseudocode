/*
 * XREFs of ?Release@?$implements@UXamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@U134567@UIXamlExplorerHostChildWindow_WASDK2@34567@UIXamlExplorerHostChildWindow_WASDK3@34567@UIXamlExplorerHostChildWindow_WASDK4@34567@UIClosable@Foundation@67@Unon_agile@7@@winrt@@QEAAKXZ @ 0x180452B20
 * Callers:
 *     ?unconditional_release_ref@?$com_ptr@UXamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x1802C5318 (-unconditional_release_ref@-$com_ptr@UXamlExplorerHostChildWindow_WASDK@implementation@XamlExplo.c)
 *     ?Release@?$produce_base@UXamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlExplorerHostChildWindow_WASDK@34567@X@impl@winrt@@UEAAIXZ @ 0x1802CE490 (-Release@-$produce_base@UXamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell.c)
 *     ?Release@?$produce_base@UXamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIClosable@Foundation@67@X@impl@winrt@@UEAAIXZ @ 0x180452B70 (-Release@-$produce_base@UXamlExplorerHostChildWindow_WASDK@implementation@XamlExplo_ea_180452B70.c)
 * Callees:
 *     ?subtract_final_reference@?$root_implements@UXamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@U134567@UIClosable@Foundation@67@Unon_agile@7@@impl@winrt@@IEAAIXZ @ 0x1801B9F08 (-subtract_final_reference@-$root_implements@UXamlExplorerHostChildWindow@implementation@XamlExpl.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::implements<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow_WASDK,winrt::Windows::Internal::Shell::XamlExplorerHost::XamlExplorerHostChildWindow_WASDK,winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostChildWindow_WASDK2,winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostChildWindow_WASDK3,winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostChildWindow_WASDK4,winrt::Windows::Foundation::IClosable,winrt::non_agile>::Release(
        _QWORD *a1)
{
  unsigned int v2; // edi

  v2 = winrt::impl::root_implements<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow,winrt::Windows::Internal::Shell::XamlExplorerHost::XamlExplorerHostChildWindow,winrt::Windows::Foundation::IClosable,winrt::non_agile>::subtract_final_reference((__int64)a1);
  if ( !v2 )
  {
    a1[1] = 1LL;
    if ( a1 )
      (*(void (__fastcall **)(_QWORD *))(*a1 + 8LL))(a1);
  }
  return v2;
}
