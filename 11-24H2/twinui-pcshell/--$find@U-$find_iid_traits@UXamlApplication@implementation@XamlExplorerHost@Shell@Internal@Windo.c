/*
 * XREFs of ??$find@U?$find_iid_traits@UXamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@@impl@winrt@@@?$interface_list@UIApplicationOverrides@Xaml@UI@Windows@winrt@@UIApplicationOverrides2@2345@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@UXamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@@12@@Z @ 0x18044E6D4
 * Callers:
 *     ??$find@U?$find_iid_traits@UXamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@@impl@winrt@@@?$interface_list@UXamlApplication@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlMetadataProvider@Markup@Xaml@UI@56@UIApplicationOverrides@9UI@56@UIApplicationOverrides2@9UI@56@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@UXamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@@12@@Z @ 0x18044E730 (--$find@U-$find_iid_traits@UXamlApplication@implementation@XamlExplorerHost@Shell@I_ea_18044E730.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::interface_list<winrt::Windows::UI::Xaml::IApplicationOverrides,winrt::Windows::UI::Xaml::IApplicationOverrides2>::find<winrt::impl::find_iid_traits<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlApplication>>(
        __int64 *a1)
{
  _QWORD *v1; // rdx
  __int64 v2; // rax
  __int64 v3; // rcx

  v1 = (_QWORD *)a1[1];
  if ( *v1 == winrt::impl::guid_v<winrt::Windows::UI::Xaml::IApplicationOverrides> && v1[1] == 0xF1A1CE1D0B2AC9FLL )
  {
    v2 = *a1;
    v3 = *a1 + 40;
    return v3 & -(__int64)(v2 != 0);
  }
  if ( *v1 == winrt::impl::guid_v<winrt::Windows::UI::Xaml::IApplicationOverrides2> && v1[1] == 0x89D81BFD34044EC6uLL )
  {
    v2 = *a1;
    v3 = *a1 + 48;
    return v3 & -(__int64)(v2 != 0);
  }
  return 0LL;
}
