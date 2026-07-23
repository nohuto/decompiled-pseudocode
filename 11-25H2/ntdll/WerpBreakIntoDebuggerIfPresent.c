/*
 * XREFs of WerpBreakIntoDebuggerIfPresent @ 0x1800CF0F4
 * Callers:
 *     RtlReportException @ 0x1800CF050 (RtlReportException.c)
 *     RtlReportExceptionEx @ 0x180135B80 (RtlReportExceptionEx.c)
 * Callees:
 *     WerpIsDebugPortPresent @ 0x1800CF148 (WerpIsDebugPortPresent.c)
 *     ZwTerminateProcess @ 0x1801637A0 (ZwTerminateProcess.c)
 *     ZwRaiseException @ 0x180166090 (ZwRaiseException.c)
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
