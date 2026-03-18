/*
 * XREFs of StageQueue_ForwardScanGetNextStage @ 0x1400164C0
 * Callers:
 *     Bulk_CompleteTransfers @ 0x140011C6C (Bulk_CompleteTransfers.c)
 *     Isoch_Transfer_CompleteStaleStages @ 0x140015EC0 (Isoch_Transfer_CompleteStaleStages.c)
 *     Bulk_FindStage @ 0x140016194 (Bulk_FindStage.c)
 *     Isoch_CompleteStaleTransfers @ 0x140016500 (Isoch_CompleteStaleTransfers.c)
 *     Isoch_ProcessTransferEventWithED1 @ 0x140016B10 (Isoch_ProcessTransferEventWithED1.c)
 *     Bulk_ProcessTransferEventWithED1 @ 0x140019A00 (Bulk_ProcessTransferEventWithED1.c)
 *     Isoch_CompleteTransfers @ 0x140025880 (Isoch_CompleteTransfers.c)
 *     Isoch_FindTrbMatch @ 0x140029CC8 (Isoch_FindTrbMatch.c)
 *     Bulk_IsTransferEventLikelyDuplicate_Internal @ 0x14004D94C (Bulk_IsTransferEventLikelyDuplicate_Internal.c)
 * Callees:
 *     <none>
 */

unsigned __int8 *__fastcall StageQueue_ForwardScanGetNextStage(unsigned __int8 *a1)
{
  unsigned __int8 v1; // r8
  int v2; // edx
  __int64 v3; // r9

  v1 = a1[6];
  if ( !v1 )
    return 0LL;
  v2 = a1[5];
  v3 = v2 * (unsigned int)*a1;
  a1[6] = v1 - 1;
  a1[5] = (v2 + 1) % (unsigned int)a1[1];
  return &a1[v3 + 16];
}
