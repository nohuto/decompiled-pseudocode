/*
 * XREFs of ??$find@U?$find_iid_traits@UDiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@@impl@winrt@@@?$interface_list@UIObjectWithSite@@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@winrt@@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@UDiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@@12@@Z @ 0x180617F04
 * Callers:
 *     ??$find@U?$find_iid_traits@UDiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@@impl@winrt@@@?$interface_list@UIApplicationViewChangeListener@@UIWindowSnappingEvents@@UIObjectWithSite@@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@winrt@@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@UDiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@@12@@Z @ 0x180617E50 (--$find@U-$find_iid_traits@UDiscoverabilityManager@implementation@Shell@Internal@Wi_ea_180617E50.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::interface_list<IObjectWithSite,IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable>::find<winrt::impl::find_iid_traits<winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager>>(
        __int64 *a1)
{
  _QWORD *v1; // rdx
  __int64 v2; // rax
  __int64 v3; // rcx

  v1 = (_QWORD *)a1[1];
  if ( *v1 == winrt::impl::guid_v<IObjectWithSite> && v1[1] == 0x52733D00AA0029A2LL )
  {
    v2 = *a1;
    v3 = *a1 + 24;
    return v3 & -(__int64)(v2 != 0);
  }
  if ( *v1 == winrt::impl::guid_v<IServiceProvider> && v1[1] == 0xFA096000AA003480uLL )
  {
    v2 = *a1;
    v3 = *a1 + 32;
    return v3 & -(__int64)(v2 != 0);
  }
  return winrt::impl::interface_list<IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable>::find<winrt::impl::find_iid_traits<winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager>>(a1);
}
