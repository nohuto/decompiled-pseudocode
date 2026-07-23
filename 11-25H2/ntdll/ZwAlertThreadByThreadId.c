/*
 * XREFs of ZwAlertThreadByThreadId @ 0x180164030
 * Callers:
 *     RtlRunOnceComplete @ 0x180004290 (RtlRunOnceComplete.c)
 *     RtlpWaitOnCriticalSection @ 0x180005E10 (RtlpWaitOnCriticalSection.c)
 *     RtlpWaitOnAddressWakeEntireList @ 0x180007734 (RtlpWaitOnAddressWakeEntireList.c)
 *     TppWorkPost @ 0x180011780 (TppWorkPost.c)
 *     TppIteWakeWaiters @ 0x18003E510 (TppIteWakeWaiters.c)
 *     TppBarrierAdjust @ 0x180041550 (TppBarrierAdjust.c)
 *     TppWorkCallbackPrologRelease @ 0x180043350 (TppWorkCallbackPrologRelease.c)
 *     TppCallbackEpilog @ 0x18007ECC0 (TppCallbackEpilog.c)
 *     TppAlpcpExecuteCallback @ 0x18007FCA0 (TppAlpcpExecuteCallback.c)
 *     RtlpWakeConditionVariable @ 0x18009E650 (RtlpWakeConditionVariable.c)
 *     RtlWakeConditionVariable @ 0x18009E790 (RtlWakeConditionVariable.c)
 *     RtlWakeAllConditionVariable @ 0x1800B7320 (RtlWakeAllConditionVariable.c)
 *     RtlpTpTimerQueueRundown @ 0x1800FD158 (RtlpTpTimerQueueRundown.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAlertThreadByThreadId(HANDLE ThreadId)
{
  NTSTATUS result; // eax

  result = 113;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
