/*
 * XREFs of RtlpHpHeapHandleError @ 0x18011D8C0
 * Callers:
 *     RtlpLogHeapFailure @ 0x18002A380 (RtlpLogHeapFailure.c)
 * Callees:
 *     RtlpHeapHandleError @ 0x180031DD0 (RtlpHeapHandleError.c)
 *     RtlCaptureStackBackTrace @ 0x18003C700 (RtlCaptureStackBackTrace.c)
 *     RtlpHeapExceptionFilter @ 0x18010A4D0 (RtlpHeapExceptionFilter.c)
 *     RtlpHpRaiseFatalLimitError @ 0x1801170BC (RtlpHpRaiseFatalLimitError.c)
 *     HeapCommitFailAvoidTriageRules @ 0x18014B760 (HeapCommitFailAvoidTriageRules.c)
 *     RtlpLocateRelatedBlocks @ 0x18014C3B8 (RtlpLocateRelatedBlocks.c)
 *     memset$thunk$772440563353939046 @ 0x180172030 (memset$thunk$772440563353939046.c)
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
  return RtlpHeapHandleError();
}
