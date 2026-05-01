/*
 * XREFs of ??$find@U?$find_iid_traits@URemoteDesktopStateChangedEventArgs@implementation@Shell@Internal@Windows@winrt@@@impl@winrt@@@?$interface_list@URemoteDesktopStateChangedEventArgs@Shell@Internal@Windows@winrt@@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@URemoteDesktopStateChangedEventArgs@implementation@Shell@Internal@Windows@winrt@@@12@@Z @ 0x180656D68
 * Callers:
 *     ?find_interface@?$implements@URemoteDesktopStateChangedEventArgs@implementation@Shell@Internal@Windows@winrt@@U13456@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x18065D710 (-find_interface@-$implements@URemoteDesktopStateChangedEventArgs@implementation@Shell@Internal@W.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::interface_list<winrt::Windows::Internal::Shell::RemoteDesktopStateChangedEventArgs>::find<winrt::impl::find_iid_traits<winrt::Windows::Internal::Shell::implementation::RemoteDesktopStateChangedEventArgs>>(
        _QWORD *a1)
{
  _QWORD *v1; // rdx

  v1 = (_QWORD *)a1[1];
  if ( *v1 == winrt::impl::uncloaked_iids<winrt::impl::interface_list<winrt::Windows::Internal::Shell::RemoteDesktopStateChangedEventArgs>>::value
    && v1[1] == 0x165B816252D9659ALL )
  {
    return (*a1 + 16LL) & -(__int64)(*a1 != 0LL);
  }
  else
  {
    return 0LL;
  }
}
