/*
 * XREFs of ?ResetNotificationBoundary@WindowDragInputProvider@@QEAAXXZ @ 0x1801D139C
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::Internal::Shell::SnapComponent::ResetNotificationBoundaryHandler__lambda_eed24a43ab320b602e73bc35d7541654___::Invoke @ 0x1801D1350 (winrt--impl--delegate_winrt--Windows--Internal--Shell--SnapComponent--ResetNotificationBoundaryH.c)
 * Callees:
 *     ?ResetNotificationBoundary@WindowDragInputProviderTelemetry@@SAXXZ @ 0x1802214F4 (-ResetNotificationBoundary@WindowDragInputProviderTelemetry@@SAXXZ.c)
 */

void __fastcall WindowDragInputProvider::ResetNotificationBoundary(WindowDragInputProvider *this)
{
  WindowDragInputProviderTelemetry::ResetNotificationBoundary();
  WindowDragInputProvider::RegisterForCustomDockTargetMessages(this);
}
