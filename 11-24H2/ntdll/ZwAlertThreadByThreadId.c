/*
 * XREFs of ZwAlertThreadByThreadId @ 0x180162AA0
 * Callers:
 *     TppBarrierAdjust @ 0x180011D50 (TppBarrierAdjust.c)
 *     TppWorkCallbackPrologRelease @ 0x1800222C0 (TppWorkCallbackPrologRelease.c)
 *     TppCallbackEpilog @ 0x1800248E0 (TppCallbackEpilog.c)
 *     TppAlpcpExecuteCallback @ 0x1800258C0 (TppAlpcpExecuteCallback.c)
 *     RtlpWakeConditionVariable @ 0x18004A970 (RtlpWakeConditionVariable.c)
 *     RtlWakeConditionVariable @ 0x18004AAB0 (RtlWakeConditionVariable.c)
 *     TppWorkPost @ 0x180055B40 (TppWorkPost.c)
 *     RtlpTpTimerQueueRundown @ 0x180068E28 (RtlpTpTimerQueueRundown.c)
 *     TppIteWakeWaiters @ 0x18006CB10 (TppIteWakeWaiters.c)
 *     RtlWakeAllConditionVariable @ 0x18008E480 (RtlWakeAllConditionVariable.c)
 *     RtlRunOnceComplete @ 0x180098C20 (RtlRunOnceComplete.c)
 *     RtlpWaitOnCriticalSection @ 0x18009A7A0 (RtlpWaitOnCriticalSection.c)
 *     RtlpWaitOnAddressWakeEntireList @ 0x1800EDA00 (RtlpWaitOnAddressWakeEntireList.c)
 * Callees:
 *     <none>
 */

__int64 ZwAlertThreadByThreadId()
{
  __int64 result; // rax

  result = 113LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
