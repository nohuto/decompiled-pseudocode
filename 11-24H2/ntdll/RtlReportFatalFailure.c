/*
 * XREFs of RtlReportFatalFailure @ 0x18011716C
 * Callers:
 *     RtlReportCriticalFailure @ 0x180098B40 (RtlReportCriticalFailure.c)
 *     RtlpHpRaiseFatalLimitError @ 0x1801170BC (RtlpHpRaiseFatalLimitError.c)
 * Callees:
 *     RtlReportException @ 0x180001490 (RtlReportException.c)
 *     RtlRaiseException @ 0x180070510 (RtlRaiseException.c)
 *     ZwTerminateProcess @ 0x180162210 (ZwTerminateProcess.c)
 */

void __fastcall RtlReportFatalFailure(EXCEPTION_RECORD *a1)
{
  RtlRaiseException(a1);
}
