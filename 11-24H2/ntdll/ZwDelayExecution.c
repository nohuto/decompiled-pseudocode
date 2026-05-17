/*
 * XREFs of ZwDelayExecution @ 0x180162310
 * Callers:
 *     LdrpInitializeThread @ 0x180012810 (LdrpInitializeThread.c)
 *     LdrpWaitForInitializationComplete @ 0x180066750 (LdrpWaitForInitializationComplete.c)
 *     RtlpInitMuiCriticalSection @ 0x18007CC94 (RtlpInitMuiCriticalSection.c)
 *     EtwpWaitForBufferReferenceCount @ 0x18008E43C (EtwpWaitForBufferReferenceCount.c)
 *     EtwpFreeLoggerContext @ 0x18008EA0C (EtwpFreeLoggerContext.c)
 *     InitSpecialMachineFrames @ 0x180097454 (InitSpecialMachineFrames.c)
 *     InitSecurityCookie @ 0x1800974E8 (InitSecurityCookie.c)
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x1800ADB9C (MicrosoftTelemetryAssertTriggeredWorker.c)
 *     RtlDelayExecution @ 0x1800D46A0 (RtlDelayExecution.c)
 *     GetShipAssertBuffer @ 0x1800E2C14 (GetShipAssertBuffer.c)
 *     RtlpLockHeapForClone @ 0x180142A28 (RtlpLockHeapForClone.c)
 * Callees:
 *     <none>
 */

__int64 ZwDelayExecution()
{
  __int64 result; // rax

  result = 52LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
