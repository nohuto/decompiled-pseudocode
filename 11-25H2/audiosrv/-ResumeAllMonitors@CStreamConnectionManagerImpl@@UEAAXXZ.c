/*
 * XREFs of ?ResumeAllMonitors@CStreamConnectionManagerImpl@@UEAAXXZ @ 0x180113740
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CStreamConnectionManagerImpl::ResumeAllMonitors(CMonitorManager **this)
{
  CMonitorManager::Continue(this[1]);
}
