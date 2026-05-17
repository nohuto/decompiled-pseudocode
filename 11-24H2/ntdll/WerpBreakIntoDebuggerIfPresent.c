/*
 * XREFs of WerpBreakIntoDebuggerIfPresent @ 0x180001534
 * Callers:
 *     RtlReportException @ 0x180001490 (RtlReportException.c)
 *     RtlReportExceptionEx @ 0x1801342D0 (RtlReportExceptionEx.c)
 * Callees:
 *     WerpIsDebugPortPresent @ 0x180001588 (WerpIsDebugPortPresent.c)
 *     ZwTerminateProcess @ 0x180162210 (ZwTerminateProcess.c)
 *     ZwRaiseException @ 0x180164B00 (ZwRaiseException.c)
 */

void __fastcall WerpBreakIntoDebuggerIfPresent(unsigned int *a1, __int64 a2, char a3)
{
  if ( (a3 & 4) == 0 && (unsigned int)WerpIsDebugPortPresent() )
  {
    do
      ZwRaiseException(a1, a2, 0LL);
    while ( (unsigned int)WerpIsDebugPortPresent() );
    ZwTerminateProcess(-1LL, *a1);
  }
}
