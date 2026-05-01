/*
 * XREFs of ?find_interface@?$implements@UXamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@U134567@UIClosable@Foundation@67@UIXamlExplorerHostWindowLocal@@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x180218E90
 * Callers:
 *     <none>
 * Callees:
 *     ??$find@U?$find_iid_traits@UXamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@@impl@winrt@@@?$interface_list@UXamlExplorerHostWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIClosable@Foundation@56@UIXamlExplorerHostWindowLocal@@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@UXamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@@12@@Z @ 0x180453BC8 (--$find@U-$find_iid_traits@UXamlExplorerHostWindow@implementation@XamlExplorerHost@_ea_180453BC8.c)
 */

__int64 __fastcall winrt::implements<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow,winrt::Windows::Internal::Shell::XamlExplorerHost::XamlExplorerHostWindow,winrt::Windows::Foundation::IClosable,IXamlExplorerHostWindowLocal>::find_interface(
        __int64 a1,
        __int64 a2)
{
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF

  v3[1] = a2;
  v3[0] = a1 - 24;
  return winrt::impl::interface_list<winrt::Windows::Internal::Shell::XamlExplorerHost::XamlExplorerHostWindow,winrt::Windows::Foundation::IClosable,IXamlExplorerHostWindowLocal>::find<winrt::impl::find_iid_traits<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow>>(v3);
}
