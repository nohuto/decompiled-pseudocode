/*
 * XREFs of ZwDelayExecution @ 0x1801638A0
 * Callers:
 *     InitSpecialMachineFrames @ 0x180002AB4 (InitSpecialMachineFrames.c)
 *     InitSecurityCookie @ 0x180002B48 (InitSecurityCookie.c)
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x18006727C (MicrosoftTelemetryAssertTriggeredWorker.c)
 *     LdrpInitializeThread @ 0x180073EB0 (LdrpInitializeThread.c)
 *     RtlpInitMuiCriticalSection @ 0x18008BB44 (RtlpInitMuiCriticalSection.c)
 *     EtwpWaitForBufferReferenceCount @ 0x1800B72DC (EtwpWaitForBufferReferenceCount.c)
 *     EtwpFreeLoggerContext @ 0x1800B78AC (EtwpFreeLoggerContext.c)
 *     RtlDelayExecution @ 0x1800CE100 (RtlDelayExecution.c)
 *     LdrpWaitForInitializationComplete @ 0x1800D23D0 (LdrpWaitForInitializationComplete.c)
 *     GetShipAssertBuffer @ 0x1800DF8C4 (GetShipAssertBuffer.c)
 *     RtlpLockHeapForClone @ 0x180144118 (RtlpLockHeapForClone.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwDelayExecution(BOOLEAN Alertable, PLARGE_INTEGER DelayInterval)
{
  NTSTATUS result; // eax

  result = 52;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
