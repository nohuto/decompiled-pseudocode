/*
 * XREFs of ??$find@U?$find_iid_traits@UTabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@@@impl@winrt@@@?$interface_list@UITabProxyWindowFactoryInternal@Shell@Internal@Windows@@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@UTabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@@@12@@Z @ 0x18057CB9C
 * Callers:
 *     ?find_interface@?$implements@UTabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@@UITabProxyWindowFactoryInternal@345@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x18057FA10 (-find_interface@-$implements@UTabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::interface_list<Windows::Internal::Shell::ITabProxyWindowFactoryInternal>::find<winrt::impl::find_iid_traits<winrt::Windows::Internal::Shell::implementation::TabProxyWindowFactory>>(
        _QWORD *a1)
{
  _QWORD *v1; // rdx

  v1 = (_QWORD *)a1[1];
  if ( *v1 == winrt::impl::guid_v<Windows::Internal::Shell::ITabProxyWindowFactoryInternal>
    && v1[1] == 0xC28CEB6D20F799B0uLL )
  {
    return *a1;
  }
  else
  {
    return 0LL;
  }
}
