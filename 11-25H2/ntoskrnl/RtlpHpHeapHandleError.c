/*
 * XREFs of RtlpHpHeapHandleError @ 0x1405E6C2C
 * Callers:
 *     RtlpLogHeapFailure @ 0x1402DA9BC (RtlpLogHeapFailure.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x140347BC0 (RtlCaptureStackBackTrace.c)
 *     RtlpHeapExceptionFilter @ 0x1405E6580 (RtlpHeapExceptionFilter.c)
 *     RtlpHeapHandleError @ 0x1405E6BE4 (RtlpHeapHandleError.c)
 *     RtlpLocateRelatedBlocks @ 0x1405E6C9C (RtlpLocateRelatedBlocks.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

void __fastcall __noreturn RtlpHpHeapHandleError(int a1, __int64 a2, __int64 a3)
{
  memset_0(&BackTrace, 0, 0x100uLL);
  RtlCaptureStackBackTrace(1u, 0x20u, &BackTrace, 0LL);
  if ( a1 == 3 )
    RtlpLocateRelatedBlocks(a2, a3);
  RtlpHeapHandleError();
}
