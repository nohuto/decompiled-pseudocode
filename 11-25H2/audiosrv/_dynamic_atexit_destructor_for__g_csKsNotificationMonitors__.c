/*
 * XREFs of _dynamic_atexit_destructor_for__g_csKsNotificationMonitors__ @ 0x180169E80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void dynamic_atexit_destructor_for__g_csKsNotificationMonitors__()
{
  DeleteCriticalSection(&g_csKsNotificationMonitors);
}
