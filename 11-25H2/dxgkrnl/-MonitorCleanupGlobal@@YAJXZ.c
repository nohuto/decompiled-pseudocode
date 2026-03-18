/*
 * XREFs of ?MonitorCleanupGlobal@@YAJXZ @ 0x1400062AC
 * Callers:
 *     DxgkUnload @ 0x1401C6C00 (DxgkUnload.c)
 *     DriverEntry @ 0x140433078 (DriverEntry.c)
 * Callees:
 *     ?DeleteGlobalCache@EDIDCACHE@DxgMonitor@@SAXXZ @ 0x140268FC4 (-DeleteGlobalCache@EDIDCACHE@DxgMonitor@@SAXXZ.c)
 *     ?DestroyStaticUSB4Class@MONITOR_MGR@@SAXXZ @ 0x14026C0A0 (-DestroyStaticUSB4Class@MONITOR_MGR@@SAXXZ.c)
 *     ?MonitorCleanupAdditionalTiming@@YAXXZ @ 0x14026E45C (-MonitorCleanupAdditionalTiming@@YAXXZ.c)
 */

__int64 MonitorCleanupGlobal(void)
{
  KIRQL v0; // al
  struct _LIST_ENTRY *Flink; // rbx

  WdLogNewEntry5_WdTrace();
  WdLogGlobalForLineNumber = 189;
  IoUnregisterPlugPlayNotification(MONITOR_MGR::_pInterfaceNotificationHandle);
  v0 = KeAcquireSpinLockRaiseToDpc(&MONITOR_MGR::_MonitorPendingEventTraceLock);
  Flink = MONITOR_MGR::_MonitorPendingEventTraceHead.Flink;
  KeReleaseSpinLock(&MONITOR_MGR::_MonitorPendingEventTraceLock, v0);
  if ( Flink != &MONITOR_MGR::_MonitorPendingEventTraceHead )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 208;
  }
  MONITOR_MGR::DestroyStaticUSB4Class();
  MonitorCleanupAdditionalTiming();
  DxgMonitor::EDIDCACHE::DeleteGlobalCache();
  return 0LL;
}
