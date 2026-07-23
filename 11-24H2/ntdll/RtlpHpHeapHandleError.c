/*
 * XREFs of RtlpHpHeapHandleError @ 0x18011BAF0
 * Callers:
 *     RtlpLogHeapFailure @ 0x180056D80 (RtlpLogHeapFailure.c)
 * Callees:
 *     RtlpHeapHandleError @ 0x180010460 (RtlpHeapHandleError.c)
 *     RtlCaptureStackBackTrace @ 0x18001C980 (RtlCaptureStackBackTrace.c)
 *     RtlpHeapExceptionFilter @ 0x180105400 (RtlpHeapExceptionFilter.c)
 *     RtlpHpRaiseFatalLimitError @ 0x1801120AC (RtlpHpRaiseFatalLimitError.c)
 *     HeapCommitFailAvoidTriageRules @ 0x180149B10 (HeapCommitFailAvoidTriageRules.c)
 *     RtlpLocateRelatedBlocks @ 0x18014A780 (RtlpLocateRelatedBlocks.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
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
