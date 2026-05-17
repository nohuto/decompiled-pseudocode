/*
 * XREFs of RtlReportFatalFailure @ 0x18011A3AC
 * Callers:
 *     RtlReportCriticalFailure @ 0x1800041B0 (RtlReportCriticalFailure.c)
 *     RtlpHpRaiseFatalLimitError @ 0x18011A2FC (RtlpHpRaiseFatalLimitError.c)
 * Callees:
 *     RtlRaiseException @ 0x180075020 (RtlRaiseException.c)
 *     RtlReportException @ 0x1800CF050 (RtlReportException.c)
 *     ZwTerminateProcess @ 0x1801637A0 (ZwTerminateProcess.c)
 */

void __fastcall RtlReportFatalFailure(EXCEPTION_RECORD *a1)
{
  RtlRaiseException(a1);
}
