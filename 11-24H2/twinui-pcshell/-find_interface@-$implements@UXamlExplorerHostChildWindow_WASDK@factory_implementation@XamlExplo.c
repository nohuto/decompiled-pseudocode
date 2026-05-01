/*
 * XREFs of ?find_interface@?$implements@UXamlExplorerHostChildWindow_WASDK@factory_implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIActivationFactory@Foundation@67@UIXamlExplorerHostChildWindow_WASDKFactory@34567@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x180229CF0
 * Callers:
 *     <none>
 * Callees:
 *     ??$find@U?$find_iid_traits@UXamlExplorerHostChildWindow_WASDK@factory_implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@@impl@winrt@@@?$interface_list@UIActivationFactory@Foundation@Windows@winrt@@UIXamlExplorerHostChildWindow_WASDKFactory@XamlExplorerHost@Shell@Internal@34@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@UXamlExplorerHostChildWindow_WASDK@factory_implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@@12@@Z @ 0x180451610 (--$find@U-$find_iid_traits@UXamlExplorerHostChildWindow_WASDK@factory_implementation@XamlExplore.c)
 */

__int64 __fastcall winrt::implements<winrt::Windows::Internal::Shell::XamlExplorerHost::factory_implementation::XamlExplorerHostChildWindow_WASDK,winrt::Windows::Foundation::IActivationFactory,winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostChildWindow_WASDKFactory>::find_interface(
        __int64 a1,
        __int64 a2)
{
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF

  v3[0] = a1;
  v3[1] = a2;
  return winrt::impl::interface_list<winrt::Windows::Foundation::IActivationFactory,winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostChildWindow_WASDKFactory>::find<winrt::impl::find_iid_traits<winrt::Windows::Internal::Shell::XamlExplorerHost::factory_implementation::XamlExplorerHostChildWindow_WASDK>>(v3);
}
