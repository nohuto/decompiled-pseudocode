/*
 * XREFs of ?find_interface@?$implements@URemoteDesktopConnectedEventArgs@implementation@Shell@Internal@Windows@winrt@@U13456@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x18065D6E0
 * Callers:
 *     <none>
 * Callees:
 *     ??$find@U?$find_iid_traits@URemoteDesktopConnectedEventArgs@implementation@Shell@Internal@Windows@winrt@@@impl@winrt@@@?$interface_list@URemoteDesktopConnectedEventArgs@Shell@Internal@Windows@winrt@@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@URemoteDesktopConnectedEventArgs@implementation@Shell@Internal@Windows@winrt@@@12@@Z @ 0x180656D2C (--$find@U-$find_iid_traits@URemoteDesktopConnectedEventArgs@implementation@Shell@Internal@Window.c)
 */

__int64 __fastcall winrt::implements<winrt::Windows::Internal::Shell::implementation::RemoteDesktopConnectedEventArgs,winrt::Windows::Internal::Shell::RemoteDesktopConnectedEventArgs>::find_interface(
        __int64 a1,
        __int64 a2)
{
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF

  v3[0] = a1;
  v3[1] = a2;
  return winrt::impl::interface_list<winrt::Windows::Internal::Shell::RemoteDesktopConnectedEventArgs>::find<winrt::impl::find_iid_traits<winrt::Windows::Internal::Shell::implementation::RemoteDesktopConnectedEventArgs>>(v3);
}
