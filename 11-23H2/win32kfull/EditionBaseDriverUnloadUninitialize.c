/*
 * XREFs of EditionBaseDriverUnloadUninitialize @ 0x1C00598D0
 * Callers:
 *     <none>
 * Callees:
 *     UnloadWin32kCall @ 0x1C0059948 (UnloadWin32kCall.c)
 *     ?OnDriverUnload@CTopologyManager@@SAXXZ @ 0x1C005A09C (-OnDriverUnload@CTopologyManager@@SAXXZ.c)
 *     ?CleanupRitTimerScanWakeEvent@CRitTimerScanWakeSystem@@SAXXZ @ 0x1C009F378 (-CleanupRitTimerScanWakeEvent@CRitTimerScanWakeSystem@@SAXXZ.c)
 *     ?Delete@CRapidHpdInfo@@CAXW4InputTracing_DesktopRecalcRapidHpdResult@@@Z @ 0x1C00A0448 (-Delete@CRapidHpdInfo@@CAXW4InputTracing_DesktopRecalcRapidHpdResult@@@Z.c)
 */

__int64 EditionBaseDriverUnloadUninitialize()
{
  struct CMonitorTopology *v0; // rcx

  CRitTimerScanWakeSystem::CleanupRitTimerScanWakeEvent();
  CRapidHpdInfo::Delete(3LL);
  v0 = DesktopRecalc::pmrLastConnected;
  if ( DesktopRecalc::pmrLastConnected
    && _InterlockedExchangeAdd((volatile signed __int32 *)DesktopRecalc::pmrLastConnected, 0xFFFFFFFF) == 1 )
  {
    Win32FreePool(v0);
  }
  CTopologyManager::OnDriverUnload();
  UnloadWin32kCall();
  if ( g_wil_details_featureChangeNotification )
  {
    RtlUnregisterFeatureConfigurationChangeNotification();
    g_wil_details_featureChangeNotification = 0LL;
  }
  g_wil_details_isFeatureStagingInitialized = 0;
  return 0LL;
}
