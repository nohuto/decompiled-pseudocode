/*
 * XREFs of ??1?$lock_guard@Vmutex@std@@@std@@QEAA@XZ @ 0x18020E070
 * Callers:
 *     _winrt::Windows::Internal::Shell::implementation::AppBackupListener::RegisterUTMListeners_::_1_::dtor$11 @ 0x1806CC800 (_winrt--Windows--Internal--Shell--implementation--AppBackupListener--RegisterUTMLis_ea_1806CC800.c)
 *     _StartupAppMonitor::StartupToastNotifier_::_1_::dtor$3 @ 0x1806CFCFD (_StartupAppMonitor--StartupToastNotifier_--_1_--dtor$3.c)
 *     _winrt::Windows::Internal::Shell::implementation::AppBackupListener::GetAppThatWasDeleted_::_1_::dtor$5 @ 0x1806D730A (_winrt--Windows--Internal--Shell--implementation--AppBackupListener--GetAppThatWasD_ea_1806D730A.c)
 *     _StartupAppMonitor::UpdateNotificationMap_::_1_::dtor$1 @ 0x1806DC322 (_StartupAppMonitor--UpdateNotificationMap_--_1_--dtor$1.c)
 *     _winrt::Windows::Internal::Shell::implementation::DashboardManager::UpdateWidgetsTelemetryAsync$_ResumeCoro$1_::_1_::dtor$2 @ 0x1806FC03F (_winrt--Windows--Internal--Shell--implementation--DashboardManager--UpdateWidgetsTe_ea_1806FC03F.c)
 *     _winrt::Windows::Internal::Shell::implementation::AppBackupListener::OnTileAdded$_ResumeCoro$1_::_1_::dtor$11 @ 0x1807002F8 (_winrt--Windows--Internal--Shell--implementation--AppBackupListener--OnTileAdded$_R_ea_1807002F8.c)
 * Callees:
 *     <none>
 */

int __fastcall std::lock_guard<std::mutex>::~lock_guard<std::mutex>(_Mtx_t *a1)
{
  return _Mtx_unlock(*a1);
}
