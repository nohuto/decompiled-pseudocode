/*
 * XREFs of DxgkStartDisplayCalloutBatch @ 0x1403BA7F8
 * Callers:
 *     DxgkQueryConnectionChanges @ 0x140027BD0 (DxgkQueryConnectionChanges.c)
 * Callees:
 *     ?StartDisplayCalloutBatch@ADAPTER_DISPLAY@@QEAAJXZ @ 0x1403BA814 (-StartDisplayCalloutBatch@ADAPTER_DISPLAY@@QEAAJXZ.c)
 */

__int64 __fastcall DxgkStartDisplayCalloutBatch(__int64 a1)
{
  return ADAPTER_DISPLAY::StartDisplayCalloutBatch(*(ADAPTER_DISPLAY **)(a1 + 3120));
}
