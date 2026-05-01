/*
 * XREFs of ??$find@U?$find_iid_traits@URemoteDesktopConnectedEventArgs@implementation@Shell@Internal@Windows@winrt@@@impl@winrt@@@?$interface_list@URemoteDesktopConnectedEventArgs@Shell@Internal@Windows@winrt@@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@URemoteDesktopConnectedEventArgs@implementation@Shell@Internal@Windows@winrt@@@12@@Z @ 0x180656D2C
 * Callers:
 *     ?find_interface@?$implements@URemoteDesktopConnectedEventArgs@implementation@Shell@Internal@Windows@winrt@@U13456@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x18065D6E0 (-find_interface@-$implements@URemoteDesktopConnectedEventArgs@implementation@Shell@Internal@Wind.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::interface_list<winrt::Windows::Internal::Shell::RemoteDesktopConnectedEventArgs>::find<winrt::impl::find_iid_traits<winrt::Windows::Internal::Shell::implementation::RemoteDesktopConnectedEventArgs>>(
        _QWORD *a1)
{
  _QWORD *v1; // rdx

  v1 = (_QWORD *)a1[1];
  if ( *v1 == winrt::impl::uncloaked_iids<winrt::impl::interface_list<winrt::Windows::Internal::Shell::RemoteDesktopConnectedEventArgs>>::value
    && v1[1] == 0xDA3D83C0995F209AuLL )
  {
    return (*a1 + 16LL) & -(__int64)(*a1 != 0LL);
  }
  else
  {
    return 0LL;
  }
}
