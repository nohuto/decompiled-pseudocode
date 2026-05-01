/*
 * XREFs of ??$find@U?$find_iid_traits@UProcessInfoChangedEventArgs@implementation@Shell@Internal@Windows@winrt@@@impl@winrt@@@?$interface_list@UProcessInfoChangedEventArgs@Shell@Internal@Windows@winrt@@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@UProcessInfoChangedEventArgs@implementation@Shell@Internal@Windows@winrt@@@12@@Z @ 0x1806467AC
 * Callers:
 *     ?find_interface@?$implements@UProcessInfoChangedEventArgs@implementation@Shell@Internal@Windows@winrt@@U13456@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x180654120 (-find_interface@-$implements@UProcessInfoChangedEventArgs@implementation@Shell@Internal@Windows@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::interface_list<winrt::Windows::Internal::Shell::ProcessInfoChangedEventArgs>::find<winrt::impl::find_iid_traits<winrt::Windows::Internal::Shell::implementation::ProcessInfoChangedEventArgs>>(
        _QWORD *a1)
{
  _QWORD *v1; // rdx

  v1 = (_QWORD *)a1[1];
  if ( *v1 == winrt::impl::guid_v<winrt::Windows::Internal::Shell::IProcessInfoChangedEventArgs>
    && v1[1] == 0x562410F1DB33BB91LL )
  {
    return (*a1 + 16LL) & -(__int64)(*a1 != 0LL);
  }
  else
  {
    return 0LL;
  }
}
