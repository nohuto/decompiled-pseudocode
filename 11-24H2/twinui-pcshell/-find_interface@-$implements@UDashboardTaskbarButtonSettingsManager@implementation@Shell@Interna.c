/*
 * XREFs of ?find_interface@?$implements@UDashboardTaskbarButtonSettingsManager@implementation@Shell@Internal@Windows@winrt@@U13456@Uimmersive_shell_component@6@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x1805DDF10
 * Callers:
 *     <none>
 * Callees:
 *     ??$find@U?$find_iid_traits@Uimmersive_shell_component@winrt@@@impl@winrt@@@?$interface_list@UIObjectWithSite@@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@winrt@@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@Uimmersive_shell_component@winrt@@@12@@Z @ 0x1802DEB54 (--$find@U-$find_iid_traits@Uimmersive_shell_component@winrt@@@impl@winrt@@@-$interface_list@UIOb.c)
 */

__int64 __fastcall winrt::implements<winrt::Windows::Internal::Shell::implementation::DashboardTaskbarButtonSettingsManager,winrt::Windows::Internal::Shell::DashboardTaskbarButtonSettingsManager,winrt::immersive_shell_component>::find_interface(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // rcx
  bool v3; // zf
  __int64 v6[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = a1 - 32;
  v3 = *a2 == winrt::impl::guid_v<winrt::Windows::Internal::Shell::IDashboardTaskbarButtonSettingsManager>;
  v6[0] = v2;
  v6[1] = (__int64)a2;
  if ( v3 && a2[1] == 0x354EBF7F86B55889LL )
    return (v2 + 88) & -(__int64)(v2 != 0);
  else
    return winrt::impl::interface_list<IObjectWithSite,IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable>::find<winrt::impl::find_iid_traits<winrt::immersive_shell_component>>(v6);
}
