/*
 * XREFs of RtlpHpHeapHandleError @ 0x1405F2F74
 * Callers:
 *     RtlpLogHeapFailure @ 0x1402B2E04 (RtlpLogHeapFailure.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x14027C690 (RtlCaptureStackBackTrace.c)
 *     RtlpHeapExceptionFilter @ 0x1405F28D0 (RtlpHeapExceptionFilter.c)
 *     RtlpHeapHandleError @ 0x1405F2F2C (RtlpHeapHandleError.c)
 *     RtlpLocateRelatedBlocks @ 0x1405F2FE4 (RtlpLocateRelatedBlocks.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

void __fastcall __noreturn RtlpHpHeapHandleError(int a1, __int64 a2, __int64 a3)
{
  memset_0(&BackTrace, 0, 0x100uLL);
  RtlCaptureStackBackTrace(1u, 0x20u, &BackTrace, 0LL);
  if ( a1 == 3 )
    RtlpLocateRelatedBlocks(a2, a3);
  RtlpHeapHandleError();
}
