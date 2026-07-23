/*
 * XREFs of RtlIsAnyDebuggerPresent @ 0x1800ED2F8
 * Callers:
 *     RtlQueryProcessLockInformation @ 0x18002AFA0 (RtlQueryProcessLockInformation.c)
 *     RtlReportCriticalFailure @ 0x18002D990 (RtlReportCriticalFailure.c)
 *     RtlAssert @ 0x1800ED1D0 (RtlAssert.c)
 *     RtlpReportHeapFailure @ 0x18011D71C (RtlpReportHeapFailure.c)
 *     RtlUnhandledExceptionFilter2 @ 0x18011D880 (RtlUnhandledExceptionFilter2.c)
 * Callees:
 *     <none>
 */

BOOLEAN RtlIsAnyDebuggerPresent(void)
{
  BOOLEAN result; // al

  result = NtCurrentPeb()->BeingDebugged;
  if ( !result )
    return (MEMORY[0x7FFE02D4] & 3) == 3;
  return result;
}
