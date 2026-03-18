/*
 * XREFs of ?DeleteGlobalCache@EDIDCACHE@DxgMonitor@@SAXXZ @ 0x14026FF24
 * Callers:
 *     ?MonitorCleanupGlobal@@YAJXZ @ 0x1400062AC (-MonitorCleanupGlobal@@YAJXZ.c)
 * Callees:
 *     ??_GEDIDCACHE@DxgMonitor@@UEAAPEAXI@Z @ 0x1400911F0 (--_GEDIDCACHE@DxgMonitor@@UEAAPEAXI@Z.c)
 */

void DxgMonitor::EDIDCACHE::DeleteGlobalCache(void)
{
  if ( DxgMonitor::EDIDCACHE::s_pEdidCache )
    DxgMonitor::EDIDCACHE::`scalar deleting destructor'(DxgMonitor::EDIDCACHE::s_pEdidCache, 1);
  DxgMonitor::EDIDCACHE::s_pEdidCache = 0LL;
}
