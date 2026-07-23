/*
 * XREFs of RtlpStdLockAcquire @ 0x180031088
 * Callers:
 *     RtlpStdExtendUpperWatermark @ 0x180030EDC (RtlpStdExtendUpperWatermark.c)
 *     RtlpStdGetRecordedStackTraceIndex @ 0x180030FC0 (RtlpStdGetRecordedStackTraceIndex.c)
 *     RtlStdReleaseStackTrace @ 0x1800310D0 (RtlStdReleaseStackTrace.c)
 *     RtlpStdLogCapturedStackTrace @ 0x1800311F0 (RtlpStdLogCapturedStackTrace.c)
 *     RtlpStdExtendLowerWatermark @ 0x1800F1930 (RtlpStdExtendLowerWatermark.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18006B6C0 (RtlAcquireSRWLockExclusive.c)
 */

char __fastcall RtlpStdLockAcquire(_RTL_SRWLOCK *a1)
{
  if ( !byte_1801D1908 )
    RtlAcquireSRWLockExclusive(a1);
  return 1;
}
