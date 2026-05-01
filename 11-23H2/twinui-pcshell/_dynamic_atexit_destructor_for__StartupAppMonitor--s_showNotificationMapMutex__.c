/*
 * XREFs of _dynamic_atexit_destructor_for__StartupAppMonitor::s_showNotificationMapMutex__ @ 0x1802C7E80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void dynamic_atexit_destructor_for__StartupAppMonitor::s_showNotificationMapMutex__()
{
  _Mtx_destroy_in_situ((_Mtx_t)&StartupAppMonitor::s_showNotificationMapMutex);
}
