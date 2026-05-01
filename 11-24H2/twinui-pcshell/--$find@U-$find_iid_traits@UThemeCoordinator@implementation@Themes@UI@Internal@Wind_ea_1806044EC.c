/*
 * XREFs of ??$find@U?$find_iid_traits@UThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@@impl@winrt@@@?$interface_list@UIThemeCoordinator@Themes@UI@Internal@Windows@winrt@@UIImmersiveMonitorNotification@@UIImmersiveSessionIdleNotification@@UIImmersiveWindowMessageNotification@@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@UThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@@12@@Z @ 0x1806044EC
 * Callers:
 *     ??$find@U?$find_iid_traits@UThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@@impl@winrt@@@?$interface_list@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@winrt@@UIThemeCoordinator@Themes@UI@Internal@45@UIImmersiveMonitorNotification@@UIImmersiveSessionIdleNotification@@UIImmersiveWindowMessageNotification@@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@UThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@@12@@Z @ 0x180604434 (--$find@U-$find_iid_traits@UThemeCoordinator@implementation@Themes@UI@Internal@Wind_ea_180604434.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::interface_list<winrt::Windows::Internal::UI::Themes::IThemeCoordinator,IImmersiveMonitorNotification,IImmersiveSessionIdleNotification,IImmersiveWindowMessageNotification>::find<winrt::impl::find_iid_traits<winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator>>(
        __int64 *a1)
{
  _QWORD *v1; // rdx

  v1 = (_QWORD *)a1[1];
  if ( *v1 == winrt::impl::uncloaked_iids<winrt::impl::interface_list<winrt::Windows::Internal::UI::Themes::IThemeCoordinator>>::value
    && v1[1] == 0x928E8118C0490C83uLL )
  {
    return (*a1 + 24) & -(__int64)(*a1 != 0);
  }
  if ( *v1 == winrt::impl::guid_v<IImmersiveMonitorNotification> && v1[1] == 0x70929BEFF3E48C96LL )
    return *a1;
  return winrt::impl::interface_list<IImmersiveSessionIdleNotification,IImmersiveWindowMessageNotification>::find<winrt::impl::find_iid_traits<winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator>>(a1);
}
