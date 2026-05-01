/*
 * XREFs of _dynamic_atexit_destructor_for__StartupAppMonitor::s_showNotificationMapUpdateEvent__ @ 0x180706FE0
 * Callers:
 *     <none>
 * Callees:
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x18004C678 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 */

void __fastcall dynamic_atexit_destructor_for__StartupAppMonitor::s_showNotificationMapUpdateEvent__(
        __int64 a1,
        void *a2)
{
  if ( StartupAppMonitor::s_showNotificationMapUpdateEvent )
    wil::details::CloseHandle((wil::details *)StartupAppMonitor::s_showNotificationMapUpdateEvent, a2);
}
