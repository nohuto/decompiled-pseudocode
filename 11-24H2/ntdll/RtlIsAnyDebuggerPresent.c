/*
 * XREFs of RtlIsAnyDebuggerPresent @ 0x1800F2A08
 * Callers:
 *     RtlQueryProcessLockInformation @ 0x180046FA0 (RtlQueryProcessLockInformation.c)
 *     RtlReportCriticalFailure @ 0x180098B40 (RtlReportCriticalFailure.c)
 *     RtlAssert @ 0x1800F28E0 (RtlAssert.c)
 *     RtlpReportHeapFailure @ 0x18011F4EC (RtlpReportHeapFailure.c)
 *     RtlUnhandledExceptionFilter2 @ 0x18011F650 (RtlUnhandledExceptionFilter2.c)
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
