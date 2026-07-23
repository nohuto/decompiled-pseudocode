/*
 * XREFs of RtlpHpHeapHandleError @ 0x1405F05B4
 * Callers:
 *     RtlpLogHeapFailure @ 0x14035B9C4 (RtlpLogHeapFailure.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x140231C20 (RtlCaptureStackBackTrace.c)
 *     RtlpHeapExceptionFilter @ 0x1405EFF10 (RtlpHeapExceptionFilter.c)
 *     RtlpHeapHandleError @ 0x1405F056C (RtlpHeapHandleError.c)
 *     RtlpLocateRelatedBlocks @ 0x1405F0624 (RtlpLocateRelatedBlocks.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

void __fastcall __noreturn RtlpHpHeapHandleError(int a1, __int64 a2, __int64 a3)
{
  memset_0(&BackTrace, 0, 0x100uLL);
  RtlCaptureStackBackTrace(1u, 0x20u, &BackTrace, 0LL);
  if ( a1 == 3 )
    RtlpLocateRelatedBlocks(a2, a3);
  RtlpHeapHandleError();
}
