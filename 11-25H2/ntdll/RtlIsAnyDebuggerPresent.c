/*
 * XREFs of RtlIsAnyDebuggerPresent @ 0x1800F4578
 * Callers:
 *     RtlReportCriticalFailure @ 0x1800041B0 (RtlReportCriticalFailure.c)
 *     RtlQueryProcessLockInformation @ 0x18009AC80 (RtlQueryProcessLockInformation.c)
 *     RtlAssert @ 0x1800F4450 (RtlAssert.c)
 *     RtlpReportHeapFailure @ 0x180120DBC (RtlpReportHeapFailure.c)
 *     RtlUnhandledExceptionFilter2 @ 0x180120F20 (RtlUnhandledExceptionFilter2.c)
 * Callees:
 *     <none>
 */

unsigned __int8 RtlIsAnyDebuggerPresent()
{
  unsigned __int8 result; // al

  result = NtCurrentPeb()->BeingDebugged;
  if ( !result )
    return (MEMORY[0x7FFE02D4] & 3) == 3;
  return result;
}
