/*
 * XREFs of ?find_interface@?$implements@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@U13456@Uimmersive_shell_component@6@UIImmersiveWindowMessageNotification@@UIEdgeUiTouchInvocation@@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x1801FE570
 * Callers:
 *     <none>
 * Callees:
 *     ??$find@U?$find_iid_traits@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@@impl@winrt@@@?$interface_list@UDashboardManager@Shell@Internal@Windows@winrt@@UIObjectWithSite@@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@45@UIImmersiveWindowMessageNotification@@UIEdgeUiTouchInvocation@@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@@12@@Z @ 0x1805C481C (--$find@U-$find_iid_traits@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@@impl@.c)
 */

__int64 __fastcall winrt::implements<winrt::Windows::Internal::Shell::implementation::DashboardManager,winrt::Windows::Internal::Shell::DashboardManager,winrt::immersive_shell_component,IImmersiveWindowMessageNotification,IEdgeUiTouchInvocation>::find_interface(
        __int64 a1,
        __int64 a2)
{
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF

  v3[1] = a2;
  v3[0] = a1 - 56;
  return winrt::impl::interface_list<winrt::Windows::Internal::Shell::DashboardManager,IObjectWithSite,IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable,IImmersiveWindowMessageNotification,IEdgeUiTouchInvocation>::find<winrt::impl::find_iid_traits<winrt::Windows::Internal::Shell::implementation::DashboardManager>>(v3);
}
