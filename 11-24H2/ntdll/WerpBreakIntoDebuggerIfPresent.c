/*
 * XREFs of WerpBreakIntoDebuggerIfPresent @ 0x18010B594
 * Callers:
 *     RtlReportException @ 0x18010B4F0 (RtlReportException.c)
 *     RtlReportExceptionEx @ 0x180132500 (RtlReportExceptionEx.c)
 * Callees:
 *     WerpIsDebugPortPresent @ 0x18010B5E8 (WerpIsDebugPortPresent.c)
 *     ZwTerminateProcess @ 0x1801605D0 (ZwTerminateProcess.c)
 *     ZwRaiseException @ 0x180162EC0 (ZwRaiseException.c)
 */

void __fastcall WerpBreakIntoDebuggerIfPresent(PEXCEPTION_RECORD ExceptionRecord, PCONTEXT ContextRecord, char a3)
{
  if ( (a3 & 4) == 0 && (unsigned int)WerpIsDebugPortPresent() )
  {
    do
      ZwRaiseException(ExceptionRecord, ContextRecord, 0);
    while ( (unsigned int)WerpIsDebugPortPresent() );
    ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ExceptionRecord->ExceptionCode);
  }
}
