/*
 * XREFs of _dynamic_initializer_for__g_csKsNotificationMonitors__ @ 0x180008A50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int dynamic_initializer_for__g_csKsNotificationMonitors__()
{
  InitializeCriticalSectionEx(&g_csKsNotificationMonitors, 0, 0);
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__g_csKsNotificationMonitors__);
}
