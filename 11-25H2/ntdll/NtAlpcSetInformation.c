/*
 * XREFs of NtAlpcSetInformation @ 0x1801643F0
 * Callers:
 *     TppAllocAlpcCompletion @ 0x18003A624 (TppAllocAlpcCompletion.c)
 *     TppCleanupGroupMemberCallbackProlog @ 0x180040C30 (TppCleanupGroupMemberCallbackProlog.c)
 *     TppFastAlpcAdjustConcurrencyCount @ 0x180043E20 (TppFastAlpcAdjustConcurrencyCount.c)
 *     TppAlpcpExecuteCallback @ 0x18007FCA0 (TppAlpcpExecuteCallback.c)
 *     TpCallbackIndependent @ 0x1800D80E0 (TpCallbackIndependent.c)
 *     AlpcRegisterCompletionList @ 0x18010E610 (AlpcRegisterCompletionList.c)
 *     AlpcAdjustCompletionListConcurrencyCount @ 0x180112CB0 (AlpcAdjustCompletionListConcurrencyCount.c)
 *     AlpcRundownCompletionList @ 0x180115D90 (AlpcRundownCompletionList.c)
 *     AlpcUnregisterCompletionList @ 0x180116360 (AlpcUnregisterCompletionList.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtAlpcSetInformation(
        HANDLE PortHandle,
        ALPC_PORT_INFORMATION_CLASS PortInformationClass,
        PVOID PortInformation,
        ULONG Length)
{
  NTSTATUS result; // eax

  result = 143;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
