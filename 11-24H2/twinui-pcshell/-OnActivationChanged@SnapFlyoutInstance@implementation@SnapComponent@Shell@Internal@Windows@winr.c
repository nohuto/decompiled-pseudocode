/*
 * XREFs of ?OnActivationChanged@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@AEAAXAEBUIInspectable@Foundation@67@AEBUActivationChangedEventArgs@XamlExplorerHost@4567@@Z @ 0x1802185F0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsSystemProvided@?$consume_WindowsUdk_UI_Shell_IWebSearchProvider@UIWebSearchProvider@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x1801CA780 (-IsSystemProvided@-$consume_WindowsUdk_UI_Shell_IWebSearchProvider@UIWebSearchProvider@Shell@UI@.c)
 *     ?AppWindow@?$consume_Windows_Internal_Shell_SnapComponent_IControlWindow@UIControlWindow@SnapComponent@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1801CA8E4 (-AppWindow@-$consume_Windows_Internal_Shell_SnapComponent_IControlWindow@UIControlWindow@SnapCom.c)
 *     ??$SnapFlyoutInstance_ActivationChanged@AEAIAEA_N@SnapFlyoutTelemetry@@SAXAEAIAEA_N@Z @ 0x18021AF6C (--$SnapFlyoutInstance_ActivationChanged@AEAIAEA_N@SnapFlyoutTelemetry@@SAXAEAIAEA_N@Z.c)
 */

void __fastcall winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance::OnActivationChanged(
        winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance *this,
        const struct IInspectable *a2,
        const struct winrt::Windows::Internal::Shell::XamlExplorerHost::ActivationChangedEventArgs *a3)
{
  bool v3; // di
  HWND v6; // rbx

  v3 = 0;
  if ( !*((_BYTE *)this + 340) )
  {
    if ( winrt::impl::consume_WindowsUdk_UI_Shell_IWebSearchProvider<winrt::WindowsUdk::UI::Shell::IWebSearchProvider>::IsSystemProvided((__int64 *)a3) )
    {
      v6 = (HWND)winrt::impl::consume_Windows_Internal_Shell_SnapComponent_IControlWindow<winrt::Windows::Internal::Shell::SnapComponent::IControlWindow>::AppWindow((__int64 *)a3);
      v3 = v6 == GetForegroundWindow();
    }
    *((_BYTE *)this + 338) = v3;
    SnapFlyoutTelemetry::SnapFlyoutInstance_ActivationChanged<unsigned int &,bool &>((char *)this + 320);
  }
}
