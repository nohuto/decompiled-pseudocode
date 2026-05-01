/*
 * XREFs of ??0?$producers_base@UXamlExplorerHostChildWindow@factory_implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@V?$tuple@UIActivationFactory@Foundation@Windows@winrt@@UIXamlExplorerHostChildWindowFactory@XamlExplorerHost@Shell@Internal@34@@std@@@impl@winrt@@QEAA@XZ @ 0x1802A3018
 * Callers:
 *     ?winrt_make_Windows_Internal_Shell_XamlExplorerHost_XamlExplorerHostChildWindow@@YAPEAXXZ @ 0x1802A2FC8 (-winrt_make_Windows_Internal_Shell_XamlExplorerHost_XamlExplorerHostChildWindow@@YAPEAXXZ.c)
 * Callees:
 *     ??0?$producer_convert@UXamlExplorerHostChildWindow@factory_implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIActivationFactory@Foundation@67@X@impl@winrt@@QEAA@XZ @ 0x18044EC0C (--0-$producer_convert@UXamlExplorerHostChildWindow@factory_implementation@XamlExplorerHost@Shell.c)
 *     ??0?$producer_convert@UXamlExplorerHostChildWindow@factory_implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlExplorerHostChildWindowFactory@34567@X@impl@winrt@@QEAA@XZ @ 0x180450800 (--0-$producer_convert@UXamlExplorerHostChildWindow@factory_implementation@XamlExplo_ea_180450800.c)
 */

__int64 __fastcall winrt::impl::producers_base<winrt::Windows::Internal::Shell::XamlExplorerHost::factory_implementation::XamlExplorerHostChildWindow,std::tuple<winrt::Windows::Foundation::IActivationFactory,winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostChildWindowFactory>>::producers_base<winrt::Windows::Internal::Shell::XamlExplorerHost::factory_implementation::XamlExplorerHostChildWindow,std::tuple<winrt::Windows::Foundation::IActivationFactory,winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostChildWindowFactory>>(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rcx
  __int64 v3; // r8

  winrt::impl::producer_convert<winrt::Windows::Internal::Shell::XamlExplorerHost::factory_implementation::XamlExplorerHostChildWindow,winrt::Windows::Foundation::IActivationFactory,void>::producer_convert<winrt::Windows::Internal::Shell::XamlExplorerHost::factory_implementation::XamlExplorerHostChildWindow,winrt::Windows::Foundation::IActivationFactory,void>(
    a1,
    a2,
    a1);
  winrt::impl::producer_convert<winrt::Windows::Internal::Shell::XamlExplorerHost::factory_implementation::XamlExplorerHostChildWindow,winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostChildWindowFactory,void>::producer_convert<winrt::Windows::Internal::Shell::XamlExplorerHost::factory_implementation::XamlExplorerHostChildWindow,winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostChildWindowFactory,void>(v2 + 8);
  return v3;
}
