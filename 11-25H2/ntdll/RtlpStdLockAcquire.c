/*
 * XREFs of RtlpStdLockAcquire @ 0x180025A78
 * Callers:
 *     RtlpStdExtendUpperWatermark @ 0x1800258CC (RtlpStdExtendUpperWatermark.c)
 *     RtlpStdGetRecordedStackTraceIndex @ 0x1800259B0 (RtlpStdGetRecordedStackTraceIndex.c)
 *     RtlStdReleaseStackTrace @ 0x180025AC0 (RtlStdReleaseStackTrace.c)
 *     RtlpStdLogCapturedStackTrace @ 0x1800F10D0 (RtlpStdLogCapturedStackTrace.c)
 *     RtlpStdExtendLowerWatermark @ 0x1800F12E8 (RtlpStdExtendLowerWatermark.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 */

char __fastcall RtlpStdLockAcquire(_RTL_SRWLOCK *a1)
{
  if ( !byte_1801D4988 )
    RtlAcquireSRWLockExclusive(a1);
  return 1;
}
