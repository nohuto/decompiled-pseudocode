/*
 * XREFs of ?get_local_iids@?$implements@UDashboardTaskbarButtonSettingsManager@implementation@Shell@Internal@Windows@winrt@@U13456@Uimmersive_shell_component@6@@winrt@@UEBA?AU?$pair@IPEBUguid@winrt@@@std@@XZ @ 0x1805DDF70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::implements<winrt::Windows::Internal::Shell::implementation::DashboardTaskbarButtonSettingsManager,winrt::Windows::Internal::Shell::DashboardTaskbarButtonSettingsManager,winrt::immersive_shell_component>::get_local_iids(
        __int64 a1,
        __int64 a2)
{
  *(_DWORD *)a2 = 1;
  *(_QWORD *)(a2 + 8) = &winrt::impl::guid_v<winrt::Windows::Internal::Shell::IDashboardTaskbarButtonSettingsManager>;
  return a2;
}
