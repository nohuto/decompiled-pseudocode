/*
 * XREFs of RtlpHpHeapHandleError @ 0x18011F190
 * Callers:
 *     RtlpLogHeapFailure @ 0x180052E50 (RtlpLogHeapFailure.c)
 * Callees:
 *     RtlpHeapHandleError @ 0x18005A8A0 (RtlpHeapHandleError.c)
 *     RtlCaptureStackBackTrace @ 0x1800900F0 (RtlCaptureStackBackTrace.c)
 *     RtlpHeapExceptionFilter @ 0x18010CF40 (RtlpHeapExceptionFilter.c)
 *     RtlpHpRaiseFatalLimitError @ 0x18011A2FC (RtlpHpRaiseFatalLimitError.c)
 *     HeapCommitFailAvoidTriageRules @ 0x18014CD10 (HeapCommitFailAvoidTriageRules.c)
 *     RtlpLocateRelatedBlocks @ 0x18014D968 (RtlpLocateRelatedBlocks.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpHpHeapHandleError(int a1, __int64 a2, __int64 a3)
{
  memset_thunk_772440563353939046(&BackTrace, 0, 0x100uLL);
  RtlCaptureStackBackTrace(1u, 0x20u, &BackTrace, 0LL);
  if ( a1 == 20 )
  {
    RtlpHpRaiseFatalLimitError((__int64)RtlpHpHeapHandleError);
  }
  else if ( a1 == 21 )
  {
    HeapCommitFailAvoidTriageRules();
  }
  if ( a1 == 3 )
    RtlpLocateRelatedBlocks(a2, a3);
  return RtlpHeapHandleError(2LL);
}
