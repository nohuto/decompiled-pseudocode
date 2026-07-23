/*
 * XREFs of RtlReportFatalFailure @ 0x18011215C
 * Callers:
 *     RtlReportCriticalFailure @ 0x18002D990 (RtlReportCriticalFailure.c)
 *     RtlpHpRaiseFatalLimitError @ 0x1801120AC (RtlpHpRaiseFatalLimitError.c)
 * Callees:
 *     RtlRaiseException @ 0x18008CDF0 (RtlRaiseException.c)
 *     RtlReportException @ 0x18010B4F0 (RtlReportException.c)
 *     ZwTerminateProcess @ 0x1801605D0 (ZwTerminateProcess.c)
 */

void __fastcall RtlReportFatalFailure(EXCEPTION_RECORD *a1)
{
  RtlRaiseException(a1);
}
