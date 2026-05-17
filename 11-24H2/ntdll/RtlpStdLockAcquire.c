/*
 * XREFs of RtlpStdLockAcquire @ 0x18009CAC8
 * Callers:
 *     RtlpStdExtendUpperWatermark @ 0x18009C91C (RtlpStdExtendUpperWatermark.c)
 *     RtlpStdGetRecordedStackTraceIndex @ 0x18009CA00 (RtlpStdGetRecordedStackTraceIndex.c)
 *     RtlStdReleaseStackTrace @ 0x18009CB10 (RtlStdReleaseStackTrace.c)
 *     RtlpStdLogCapturedStackTrace @ 0x1800EF820 (RtlpStdLogCapturedStackTrace.c)
 *     RtlpStdExtendLowerWatermark @ 0x1800EFA38 (RtlpStdExtendLowerWatermark.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 */

char __fastcall RtlpStdLockAcquire(volatile signed __int32 *a1, volatile signed __int32 **a2, unsigned __int64 a3)
{
  if ( !byte_1801D2908 )
    RtlAcquireSRWLockExclusive(a1, a2, a3);
  return 1;
}
