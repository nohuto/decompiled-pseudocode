/*
 * XREFs of ??$find@U?$find_iid_traits@URemoteSystem@implementation@Shell@Internal@Windows@winrt@@@impl@winrt@@@?$interface_list@URemoteSystem@Shell@Internal@Windows@winrt@@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@URemoteSystem@implementation@Shell@Internal@Windows@winrt@@@12@@Z @ 0x1806467E8
 * Callers:
 *     ?find_interface@?$implements@URemoteSystem@implementation@Shell@Internal@Windows@winrt@@U13456@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x180654150 (-find_interface@-$implements@URemoteSystem@implementation@Shell@Internal@Windows@winrt@@U13456@@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::interface_list<winrt::Windows::Internal::Shell::RemoteSystem>::find<winrt::impl::find_iid_traits<winrt::Windows::Internal::Shell::implementation::RemoteSystem>>(
        _QWORD *a1)
{
  _QWORD *v1; // rdx

  v1 = (_QWORD *)a1[1];
  if ( *v1 == winrt::impl::uncloaked_iids<winrt::impl::interface_list<winrt::Windows::Internal::Shell::RemoteSystem>>::value
    && v1[1] == 0x641E50379BA22ABBLL )
  {
    return (*a1 + 16LL) & -(__int64)(*a1 != 0LL);
  }
  else
  {
    return 0LL;
  }
}
