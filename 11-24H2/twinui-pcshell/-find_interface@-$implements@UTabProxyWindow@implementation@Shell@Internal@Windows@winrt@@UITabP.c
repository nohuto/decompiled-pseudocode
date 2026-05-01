/*
 * XREFs of ?find_interface@?$implements@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@UITabProxyWindowInternal@345@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x180580300
 * Callers:
 *     <none>
 * Callees:
 *     ??$find@U?$find_iid_traits@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@impl@winrt@@@?$interface_list@UITabProxyWindowInternal@Shell@Internal@Windows@@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@12@@Z @ 0x18057FFC0 (--$find@U-$find_iid_traits@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@impl@wi.c)
 */

__int64 __fastcall winrt::implements<winrt::Windows::Internal::Shell::implementation::TabProxyWindow,Windows::Internal::Shell::ITabProxyWindowInternal>::find_interface(
        __int64 a1,
        __int64 a2)
{
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF

  v3[1] = a2;
  v3[0] = a1 - 8;
  return winrt::impl::interface_list<Windows::Internal::Shell::ITabProxyWindowInternal>::find<winrt::impl::find_iid_traits<winrt::Windows::Internal::Shell::implementation::TabProxyWindow>>(v3);
}
