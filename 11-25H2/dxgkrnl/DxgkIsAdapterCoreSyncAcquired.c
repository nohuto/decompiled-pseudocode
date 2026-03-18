/*
 * XREFs of DxgkIsAdapterCoreSyncAcquired @ 0x1402BC7C8
 * Callers:
 *     DxgkQueryConnectionChanges @ 0x140027940 (DxgkQueryConnectionChanges.c)
 *     DpiFdoWaitConnectionChangeComplete @ 0x140187A6C (DpiFdoWaitConnectionChangeComplete.c)
 *     DpExcludeAdapterAccess @ 0x14022E1A0 (DpExcludeAdapterAccess.c)
 *     DpiFdoQueryAdapterInfoIntegratedDisplay2 @ 0x14023DB08 (DpiFdoQueryAdapterInfoIntegratedDisplay2.c)
 *     DpiMiracastSendSyncUserModeRequest @ 0x140245598 (DpiMiracastSendSyncUserModeRequest.c)
 *     DpiPowerArbiterThread @ 0x1402BBB00 (DpiPowerArbiterThread.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreSyncAcquired@DXGADAPTER@@QEAAEW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1402BC838 (-IsCoreSyncAcquired@DXGADAPTER@@QEAAEW4DXGADAPTERCORESYNC_LEVEL@@@Z.c)
 */

char __fastcall DxgkIsAdapterCoreSyncAcquired(__int64 a1)
{
  if ( a1 )
    return DXGADAPTER::IsCoreSyncAcquired();
  WdLogSingleEntry0(2LL);
  WdLogGlobalForLineNumber = 329;
  DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"No pAdapter specified", 329LL, 0LL, 0LL, 0LL, 0LL);
  return 0;
}
