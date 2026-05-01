/*
 * XREFs of ?find_interface@?$implements@UXamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@U134567@UIXamlExplorerHostChildWindow_WASDK2@34567@UIXamlExplorerHostChildWindow_WASDK3@34567@UIXamlExplorerHostChildWindow_WASDK4@34567@UIClosable@Foundation@67@Unon_agile@7@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x180453390
 * Callers:
 *     <none>
 * Callees:
 *     ??$find@U?$find_iid_traits@UXamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@@impl@winrt@@@?$interface_list@UIXamlExplorerHostChildWindow_WASDK2@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlExplorerHostChildWindow_WASDK3@23456@UIXamlExplorerHostChildWindow_WASDK4@23456@UIClosable@Foundation@56@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@UXamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@@12@@Z @ 0x18045166C (--$find@U-$find_iid_traits@UXamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Sh.c)
 */

__int64 __fastcall winrt::implements<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow_WASDK,winrt::Windows::Internal::Shell::XamlExplorerHost::XamlExplorerHostChildWindow_WASDK,winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostChildWindow_WASDK2,winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostChildWindow_WASDK3,winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostChildWindow_WASDK4,winrt::Windows::Foundation::IClosable,winrt::non_agile>::find_interface(
        __int64 a1,
        _QWORD *a2)
{
  bool v2; // zf
  __int64 v5[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = *a2 == winrt::impl::guid_v<winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostChildWindow_WASDK>;
  v5[0] = a1;
  v5[1] = (__int64)a2;
  if ( v2 && a2[1] == 0x91AB9319139051A6uLL )
    return (a1 + 16) & -(__int64)(a1 != 0);
  else
    return winrt::impl::interface_list<winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostChildWindow_WASDK2,winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostChildWindow_WASDK3,winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostChildWindow_WASDK4,winrt::Windows::Foundation::IClosable>::find<winrt::impl::find_iid_traits<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow_WASDK>>(v5);
}
