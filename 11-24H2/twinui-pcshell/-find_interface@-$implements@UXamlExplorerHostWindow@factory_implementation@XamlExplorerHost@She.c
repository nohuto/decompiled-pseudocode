/*
 * XREFs of ?find_interface@?$implements@UXamlExplorerHostWindow@factory_implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIActivationFactory@Foundation@67@UIXamlExplorerHostWindowFactory@34567@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x180454370
 * Callers:
 *     <none>
 * Callees:
 *     ??$find@U?$find_iid_traits@UXamlExplorerHostWindow@factory_implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@@impl@winrt@@@?$interface_list@UIActivationFactory@Foundation@Windows@winrt@@UIXamlExplorerHostWindowFactory@XamlExplorerHost@Shell@Internal@34@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@UXamlExplorerHostWindow@factory_implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@@12@@Z @ 0x180453B14 (--$find@U-$find_iid_traits@UXamlExplorerHostWindow@factory_implementation@XamlExplorerHost@Shell.c)
 */

__int64 __fastcall winrt::implements<winrt::Windows::Internal::Shell::XamlExplorerHost::factory_implementation::XamlExplorerHostWindow,winrt::Windows::Foundation::IActivationFactory,winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostWindowFactory>::find_interface(
        __int64 a1,
        __int64 a2)
{
  __int64 v3[3]; // [rsp+20h] [rbp-18h] BYREF

  v3[0] = a1;
  v3[1] = a2;
  return winrt::impl::interface_list<winrt::Windows::Foundation::IActivationFactory,winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostWindowFactory>::find<winrt::impl::find_iid_traits<winrt::Windows::Internal::Shell::XamlExplorerHost::factory_implementation::XamlExplorerHostWindow>>(v3);
}
