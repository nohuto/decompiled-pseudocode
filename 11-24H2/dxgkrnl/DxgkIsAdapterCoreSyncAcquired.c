/*
 * XREFs of DxgkIsAdapterCoreSyncAcquired @ 0x1402C9FC8
 * Callers:
 *     DxgkQueryConnectionChanges @ 0x140027BD0 (DxgkQueryConnectionChanges.c)
 *     DpiFdoWaitConnectionChangeComplete @ 0x140189C24 (DpiFdoWaitConnectionChangeComplete.c)
 *     DpExcludeAdapterAccess @ 0x140234A00 (DpExcludeAdapterAccess.c)
 *     DpiFdoQueryAdapterInfoIntegratedDisplay2 @ 0x1402446F8 (DpiFdoQueryAdapterInfoIntegratedDisplay2.c)
 *     DpiMiracastSendSyncUserModeRequest @ 0x14024C3A8 (DpiMiracastSendSyncUserModeRequest.c)
 *     DpiPowerArbiterThread @ 0x1402C9300 (DpiPowerArbiterThread.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreSyncAcquired@DXGADAPTER@@QEAAEW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1402CA038 (-IsCoreSyncAcquired@DXGADAPTER@@QEAAEW4DXGADAPTERCORESYNC_LEVEL@@@Z.c)
 */

char __fastcall DxgkIsAdapterCoreSyncAcquired(__int64 a1)
{
  if ( a1 )
    return DXGADAPTER::IsCoreSyncAcquired();
  WdLogSingleEntry0(2LL);
  WdLogGlobalForLineNumber = 329;
  DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"No pAdapter specified", 329LL, 0LL, 0LL, 0LL, 0LL);
  return 0;
}
