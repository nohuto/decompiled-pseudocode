/*
 * XREFs of NtWaitForAlertByThreadId @ 0x1801658E0
 * Callers:
 *     TppBarrierAdjust @ 0x180011D50 (TppBarrierAdjust.c)
 *     RtlSleepConditionVariableCS @ 0x180013330 (RtlSleepConditionVariableCS.c)
 *     RtlpAcquireSRWLockSharedContended @ 0x180017E40 (RtlpAcquireSRWLockSharedContended.c)
 *     TppWaitCompletion @ 0x18001FE00 (TppWaitCompletion.c)
 *     RtlSleepConditionVariableSRW @ 0x180049EB0 (RtlSleepConditionVariableSRW.c)
 *     RtlpAcquireSRWLockExclusiveContended @ 0x18004A470 (RtlpAcquireSRWLockExclusiveContended.c)
 *     RtlDeleteTimerQueueEx @ 0x180068CA0 (RtlDeleteTimerQueueEx.c)
 *     TpSetTimerEx @ 0x18006AF80 (TpSetTimerEx.c)
 *     TppCancelTimer @ 0x18006C3B0 (TppCancelTimer.c)
 *     RtlpRunOnceWaitForInit @ 0x180096DD8 (RtlpRunOnceWaitForInit.c)
 *     RtlpWaitOnCriticalSection @ 0x18009A7A0 (RtlpWaitOnCriticalSection.c)
 *     RtlWaitOnAddress @ 0x18009B4E0 (RtlWaitOnAddress.c)
 *     RtlpWaitOnAddress @ 0x18009B780 (RtlpWaitOnAddress.c)
 *     RtlpWaitOnAddressRemoveWaitBlock @ 0x18009BA90 (RtlpWaitOnAddressRemoveWaitBlock.c)
 *     RtlpWaitOnAddressWithTimeout @ 0x1800DB9F0 (RtlpWaitOnAddressWithTimeout.c)
 * Callees:
 *     <none>
 */

__int64 NtWaitForAlertByThreadId()
{
  __int64 result; // rax

  result = 483LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
