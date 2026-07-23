/*
 * XREFs of ZwAlertThreadByThreadId @ 0x180160E60
 * Callers:
 *     RtlRunOnceComplete @ 0x18002DA70 (RtlRunOnceComplete.c)
 *     RtlpWaitOnCriticalSection @ 0x18002F5F0 (RtlpWaitOnCriticalSection.c)
 *     RtlpWaitOnAddressWakeEntireList @ 0x180031484 (RtlpWaitOnAddressWakeEntireList.c)
 *     TppBarrierAdjust @ 0x18003E750 (TppBarrierAdjust.c)
 *     TppWorkCallbackPrologRelease @ 0x18004ECC0 (TppWorkCallbackPrologRelease.c)
 *     TppCallbackEpilog @ 0x1800512E0 (TppCallbackEpilog.c)
 *     TppAlpcpExecuteCallback @ 0x1800522C0 (TppAlpcpExecuteCallback.c)
 *     RtlpWakeConditionVariable @ 0x180060550 (RtlpWakeConditionVariable.c)
 *     RtlWakeConditionVariable @ 0x180060690 (RtlWakeConditionVariable.c)
 *     TppWorkPost @ 0x18006B720 (TppWorkPost.c)
 *     TppIteWakeWaiters @ 0x1800893F0 (TppIteWakeWaiters.c)
 *     RtlWakeAllConditionVariable @ 0x1800A9F40 (RtlWakeAllConditionVariable.c)
 *     RtlpTpTimerQueueRundown @ 0x1800F5E58 (RtlpTpTimerQueueRundown.c)
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
