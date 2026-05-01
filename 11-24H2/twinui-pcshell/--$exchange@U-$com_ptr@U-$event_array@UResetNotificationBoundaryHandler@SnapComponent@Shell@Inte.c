/*
 * XREFs of ??$exchange@U?$com_ptr@U?$event_array@UResetNotificationBoundaryHandler@SnapComponent@Shell@Internal@Windows@winrt@@@impl@winrt@@@winrt@@U12@@std@@YA?AU?$com_ptr@U?$event_array@UResetNotificationBoundaryHandler@SnapComponent@Shell@Internal@Windows@winrt@@@impl@winrt@@@winrt@@AEAU12@$$QEAU12@@Z @ 0x1802C853C
 * Callers:
 *     ?add_agile@?$event@UResetNotificationBoundaryHandler@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@AEAA?AUevent_token@2@UResetNotificationBoundaryHandler@SnapComponent@Shell@Internal@Windows@2@@Z @ 0x1805BAAF8 (-add_agile@-$event@UResetNotificationBoundaryHandler@SnapComponent@Shell@Internal@Windows@winrt@.c)
 *     ?remove@?$event@UResetNotificationBoundaryHandler@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@QEAAXUevent_token@2@@Z @ 0x1805BB0E4 (-remove@-$event@UResetNotificationBoundaryHandler@SnapComponent@Shell@Internal@Windows@winrt@@@w.c)
 * Callees:
 *     ??4?$com_ptr@U?$event_array@U?$TypedEventHandler@UIInspectable@Foundation@Windows@winrt@@UPoint@234@@Foundation@Windows@winrt@@@impl@winrt@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x180055008 (--4-$com_ptr@U-$event_array@U-$TypedEventHandler@UIInspectable@Foundation@Windows@winrt@@UPoint@.c)
 */

__int64 *__fastcall std::exchange<winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Internal::Shell::SnapComponent::ResetNotificationBoundaryHandler>>,winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Internal::Shell::SnapComponent::ResetNotificationBoundaryHandler>>>(
        __int64 *a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 v3; // rax

  v3 = winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::m_resetNotificationBoundary;
  winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::m_resetNotificationBoundary = 0LL;
  *a1 = v3;
  winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Foundation::IInspectable,winrt::Windows::Foundation::Point>>>::operator=(
    &winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::m_resetNotificationBoundary,
    a3);
  return a1;
}
