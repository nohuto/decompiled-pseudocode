/*
 * XREFs of NtWaitForAlertByThreadId @ 0x180166E70
 * Callers:
 *     RtlpRunOnceWaitForInit @ 0x180002444 (RtlpRunOnceWaitForInit.c)
 *     RtlpWaitOnCriticalSection @ 0x180005E10 (RtlpWaitOnCriticalSection.c)
 *     RtlWaitOnAddress @ 0x180006B50 (RtlWaitOnAddress.c)
 *     RtlpWaitOnAddress @ 0x180006DF0 (RtlpWaitOnAddress.c)
 *     RtlpWaitOnAddressRemoveWaitBlock @ 0x180007100 (RtlpWaitOnAddressRemoveWaitBlock.c)
 *     RtlpWaitOnAddressWithTimeout @ 0x180007600 (RtlpWaitOnAddressWithTimeout.c)
 *     TpSetTimerEx @ 0x18003E670 (TpSetTimerEx.c)
 *     TppCancelTimer @ 0x18003FCF0 (TppCancelTimer.c)
 *     TppWaitCompletion @ 0x180041270 (TppWaitCompletion.c)
 *     TppBarrierAdjust @ 0x180041550 (TppBarrierAdjust.c)
 *     RtlpAcquireSRWLockSharedContended @ 0x18007A040 (RtlpAcquireSRWLockSharedContended.c)
 *     RtlSleepConditionVariableCS @ 0x18007ADC0 (RtlSleepConditionVariableCS.c)
 *     RtlSleepConditionVariableSRW @ 0x18009DB90 (RtlSleepConditionVariableSRW.c)
 *     RtlpAcquireSRWLockExclusiveContended @ 0x18009E150 (RtlpAcquireSRWLockExclusiveContended.c)
 *     RtlDeleteTimerQueueEx @ 0x1800FCFD0 (RtlDeleteTimerQueueEx.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtWaitForAlertByThreadId(PVOID Address, PLARGE_INTEGER Timeout)
{
  NTSTATUS result; // eax

  result = 483;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
