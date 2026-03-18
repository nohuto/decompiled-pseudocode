/*
 * XREFs of StageQueue_ForwardScanGetNextStage @ 0x140012400
 * Callers:
 *     Bulk_FindStage @ 0x140003CBC (Bulk_FindStage.c)
 *     Bulk_CompleteTransfers @ 0x14000568C (Bulk_CompleteTransfers.c)
 *     Isoch_ProcessTransferEventWithED1 @ 0x140011400 (Isoch_ProcessTransferEventWithED1.c)
 *     Isoch_CompleteStaleTransfers @ 0x1400121A0 (Isoch_CompleteStaleTransfers.c)
 *     Isoch_Transfer_CompleteStaleStages @ 0x140012930 (Isoch_Transfer_CompleteStaleStages.c)
 *     Isoch_FindTrbMatch @ 0x140012FE8 (Isoch_FindTrbMatch.c)
 *     Isoch_CompleteTransfers @ 0x140022988 (Isoch_CompleteTransfers.c)
 *     Bulk_IsTransferEventLikelyDuplicate_Internal @ 0x14004D07C (Bulk_IsTransferEventLikelyDuplicate_Internal.c)
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
