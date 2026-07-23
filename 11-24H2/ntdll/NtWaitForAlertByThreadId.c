/*
 * XREFs of NtWaitForAlertByThreadId @ 0x180163CA0
 * Callers:
 *     RtlpWaitOnCriticalSection @ 0x18002F5F0 (RtlpWaitOnCriticalSection.c)
 *     RtlWaitOnAddress @ 0x180030330 (RtlWaitOnAddress.c)
 *     RtlpWaitOnAddress @ 0x1800305D0 (RtlpWaitOnAddress.c)
 *     RtlpWaitOnAddressRemoveWaitBlock @ 0x1800308E0 (RtlpWaitOnAddressRemoveWaitBlock.c)
 *     RtlpWaitOnAddressWithTimeout @ 0x180031350 (RtlpWaitOnAddressWithTimeout.c)
 *     TppBarrierAdjust @ 0x18003E750 (TppBarrierAdjust.c)
 *     RtlSleepConditionVariableCS @ 0x18003FD30 (RtlSleepConditionVariableCS.c)
 *     RtlpAcquireSRWLockSharedContended @ 0x180044840 (RtlpAcquireSRWLockSharedContended.c)
 *     TppWaitCompletion @ 0x18004C800 (TppWaitCompletion.c)
 *     RtlSleepConditionVariableSRW @ 0x18005FA90 (RtlSleepConditionVariableSRW.c)
 *     RtlpAcquireSRWLockExclusiveContended @ 0x180060050 (RtlpAcquireSRWLockExclusiveContended.c)
 *     TpSetTimerEx @ 0x180087860 (TpSetTimerEx.c)
 *     TppCancelTimer @ 0x180088C90 (TppCancelTimer.c)
 *     RtlpRunOnceWaitForInit @ 0x1800E5590 (RtlpRunOnceWaitForInit.c)
 *     RtlDeleteTimerQueueEx @ 0x1800F5CD0 (RtlDeleteTimerQueueEx.c)
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
