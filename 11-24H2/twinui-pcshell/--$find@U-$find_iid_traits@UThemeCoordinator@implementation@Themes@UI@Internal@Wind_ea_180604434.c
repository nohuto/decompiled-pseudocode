/*
 * XREFs of ??$find@U?$find_iid_traits@UThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@@impl@winrt@@@?$interface_list@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@winrt@@UIThemeCoordinator@Themes@UI@Internal@45@UIImmersiveMonitorNotification@@UIImmersiveSessionIdleNotification@@UIImmersiveWindowMessageNotification@@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@UThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@@12@@Z @ 0x180604434
 * Callers:
 *     ??$find@U?$find_iid_traits@UThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@@impl@winrt@@@?$interface_list@UIObjectWithSite@@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@winrt@@UIThemeCoordinator@Themes@UI@Internal@67@UIImmersiveMonitorNotification@@UIImmersiveSessionIdleNotification@@UIImmersiveWindowMessageNotification@@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@UThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@@12@@Z @ 0x180604490 (--$find@U-$find_iid_traits@UThemeCoordinator@implementation@Themes@UI@Internal@Wind_ea_180604490.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::interface_list<IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable,winrt::Windows::Internal::UI::Themes::IThemeCoordinator,IImmersiveMonitorNotification,IImmersiveSessionIdleNotification,IImmersiveWindowMessageNotification>::find<winrt::impl::find_iid_traits<winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator>>(
        __int64 *a1)
{
  _QWORD *v1; // rdx
  __int64 v2; // rax
  __int64 v3; // rcx

  v1 = (_QWORD *)a1[1];
  if ( *v1 == winrt::impl::guid_v<IImmersiveShellComponent> && v1[1] == 0xC45FA8EF5C7AA582uLL )
  {
    v2 = *a1;
    v3 = *a1 + 48;
    return v3 & -(__int64)(v2 != 0);
  }
  if ( *v1 == winrt::impl::guid_v<IInspectable> && v1[1] == 0x901E1065AAD75A9CuLL )
  {
    v2 = *a1;
    v3 = *a1 + 56;
    return v3 & -(__int64)(v2 != 0);
  }
  return winrt::impl::interface_list<winrt::Windows::Internal::UI::Themes::IThemeCoordinator,IImmersiveMonitorNotification,IImmersiveSessionIdleNotification,IImmersiveWindowMessageNotification>::find<winrt::impl::find_iid_traits<winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator>>();
}
