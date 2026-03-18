/*
 * XREFs of DxgkStartDisplayCalloutBatch @ 0x1403C6930
 * Callers:
 *     DxgkQueryConnectionChanges @ 0x140027940 (DxgkQueryConnectionChanges.c)
 * Callees:
 *     ?StartDisplayCalloutBatch@ADAPTER_DISPLAY@@QEAAJXZ @ 0x1403C694C (-StartDisplayCalloutBatch@ADAPTER_DISPLAY@@QEAAJXZ.c)
 */

__int64 __fastcall DxgkStartDisplayCalloutBatch(__int64 a1)
{
  return ADAPTER_DISPLAY::StartDisplayCalloutBatch(*(ADAPTER_DISPLAY **)(a1 + 3120));
}
