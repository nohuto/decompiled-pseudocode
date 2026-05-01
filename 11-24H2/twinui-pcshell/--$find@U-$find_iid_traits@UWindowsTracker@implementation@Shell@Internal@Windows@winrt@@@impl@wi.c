/*
 * XREFs of ??$find@U?$find_iid_traits@UWindowsTracker@implementation@Shell@Internal@Windows@winrt@@@impl@winrt@@@?$interface_list@UWindowsTracker@Shell@Internal@Windows@winrt@@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@UWindowsTracker@implementation@Shell@Internal@Windows@winrt@@@12@@Z @ 0x18065E2BC
 * Callers:
 *     ?find_interface@?$implements@UWindowsTracker@implementation@Shell@Internal@Windows@winrt@@U13456@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x18065F860 (-find_interface@-$implements@UWindowsTracker@implementation@Shell@Internal@Windows@winrt@@U13456.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::interface_list<winrt::Windows::Internal::Shell::WindowsTracker>::find<winrt::impl::find_iid_traits<winrt::Windows::Internal::Shell::implementation::WindowsTracker>>(
        _QWORD *a1)
{
  _QWORD *v1; // rdx

  v1 = (_QWORD *)a1[1];
  if ( *v1 == winrt::impl::guid_v<winrt::Windows::Internal::Shell::IWindowsTracker> && v1[1] == 0x9673D36294DAD4B2uLL )
    return (*a1 + 16LL) & -(__int64)(*a1 != 0LL);
  else
    return 0LL;
}
