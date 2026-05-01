/*
 * XREFs of ??$find@U?$find_iid_traits@UNetworkConnectionUtils@implementation@Shell@Internal@Windows@winrt@@@impl@winrt@@@?$interface_list@UNetworkConnectionUtils@Shell@Internal@Windows@winrt@@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@UNetworkConnectionUtils@implementation@Shell@Internal@Windows@winrt@@@12@@Z @ 0x180670078
 * Callers:
 *     ?find_interface@?$implements@UNetworkConnectionUtils@implementation@Shell@Internal@Windows@winrt@@U13456@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x180670940 (-find_interface@-$implements@UNetworkConnectionUtils@implementation@Shell@Internal@Windows@winrt.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::interface_list<winrt::Windows::Internal::Shell::NetworkConnectionUtils>::find<winrt::impl::find_iid_traits<winrt::Windows::Internal::Shell::implementation::NetworkConnectionUtils>>(
        _QWORD *a1)
{
  _QWORD *v1; // rdx

  v1 = (_QWORD *)a1[1];
  if ( *v1 == winrt::impl::guid_v<winrt::Windows::Internal::Shell::INetworkConnectionUtils>
    && v1[1] == 0xC37E0F4A4785688AuLL )
  {
    return (*a1 + 16LL) & -(__int64)(*a1 != 0LL);
  }
  else
  {
    return 0LL;
  }
}
