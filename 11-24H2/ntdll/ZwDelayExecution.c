/*
 * XREFs of ZwDelayExecution @ 0x1801606D0
 * Callers:
 *     RtlpInitMuiCriticalSection @ 0x1800115D4 (RtlpInitMuiCriticalSection.c)
 *     InitSpecialMachineFrames @ 0x18002C2A4 (InitSpecialMachineFrames.c)
 *     InitSecurityCookie @ 0x18002C338 (InitSecurityCookie.c)
 *     LdrpInitializeThread @ 0x18003F210 (LdrpInitializeThread.c)
 *     EtwpWaitForBufferReferenceCount @ 0x1800A9EFC (EtwpWaitForBufferReferenceCount.c)
 *     EtwpFreeLoggerContext @ 0x1800AA48C (EtwpFreeLoggerContext.c)
 *     LdrpWaitForInitializationComplete @ 0x1800AE930 (LdrpWaitForInitializationComplete.c)
 *     RtlDelayExecution @ 0x1800CFA10 (RtlDelayExecution.c)
 *     GetShipAssertBuffer @ 0x1800DE1E4 (GetShipAssertBuffer.c)
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x1800E3360 (MicrosoftTelemetryAssertTriggeredWorker.c)
 *     RtlpLockHeapForClone @ 0x180140BD8 (RtlpLockHeapForClone.c)
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
