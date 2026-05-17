/*
 * XREFs of RtlpStdLockRelease @ 0x18009CAE8
 * Callers:
 *     RtlpStdExtendUpperWatermark @ 0x18009C91C (RtlpStdExtendUpperWatermark.c)
 *     RtlpStdGetRecordedStackTraceIndex @ 0x18009CA00 (RtlpStdGetRecordedStackTraceIndex.c)
 *     RtlStdReleaseStackTrace @ 0x18009CB10 (RtlStdReleaseStackTrace.c)
 *     RtlpStdLogCapturedStackTrace @ 0x1800EF820 (RtlpStdLogCapturedStackTrace.c)
 *     RtlpStdExtendLowerWatermark @ 0x1800EFA38 (RtlpStdExtendLowerWatermark.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 */

__int64 __fastcall RtlpStdLockRelease(volatile signed __int64 *a1)
{
  __int64 result; // rax

  if ( !byte_1801D2908 )
    return RtlReleaseSRWLockExclusive(a1);
  return result;
}
