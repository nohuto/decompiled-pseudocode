/*
 * XREFs of NtAlpcSetInformation @ 0x180162E60
 * Callers:
 *     TppCleanupGroupMemberCallbackProlog @ 0x18001F970 (TppCleanupGroupMemberCallbackProlog.c)
 *     TppFastAlpcAdjustConcurrencyCount @ 0x180021DC0 (TppFastAlpcAdjustConcurrencyCount.c)
 *     TppAlpcpExecuteCallback @ 0x1800258C0 (TppAlpcpExecuteCallback.c)
 *     TppAllocAlpcCompletion @ 0x1800BF374 (TppAllocAlpcCompletion.c)
 *     TpCallbackIndependent @ 0x1800DAD50 (TpCallbackIndependent.c)
 *     AlpcRegisterCompletionList @ 0x18010C490 (AlpcRegisterCompletionList.c)
 *     AlpcAdjustCompletionListConcurrencyCount @ 0x18010FF40 (AlpcAdjustCompletionListConcurrencyCount.c)
 *     AlpcRundownCompletionList @ 0x180112E00 (AlpcRundownCompletionList.c)
 *     AlpcUnregisterCompletionList @ 0x1801133D0 (AlpcUnregisterCompletionList.c)
 * Callees:
 *     <none>
 */

__int64 NtAlpcSetInformation()
{
  __int64 result; // rax

  result = 143LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
