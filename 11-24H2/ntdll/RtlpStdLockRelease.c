/*
 * XREFs of RtlpStdLockRelease @ 0x1800310A8
 * Callers:
 *     RtlpStdExtendUpperWatermark @ 0x180030EDC (RtlpStdExtendUpperWatermark.c)
 *     RtlpStdGetRecordedStackTraceIndex @ 0x180030FC0 (RtlpStdGetRecordedStackTraceIndex.c)
 *     RtlStdReleaseStackTrace @ 0x1800310D0 (RtlStdReleaseStackTrace.c)
 *     RtlpStdLogCapturedStackTrace @ 0x1800311F0 (RtlpStdLogCapturedStackTrace.c)
 *     RtlpStdExtendLowerWatermark @ 0x1800F1930 (RtlpStdExtendLowerWatermark.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18006C390 (RtlReleaseSRWLockExclusive.c)
 */

void __fastcall RtlpStdLockRelease(_RTL_SRWLOCK *a1)
{
  if ( !byte_1801D1908 )
    RtlReleaseSRWLockExclusive(a1);
}
