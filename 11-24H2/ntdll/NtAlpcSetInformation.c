/*
 * XREFs of NtAlpcSetInformation @ 0x180161220
 * Callers:
 *     TppCleanupGroupMemberCallbackProlog @ 0x18004C370 (TppCleanupGroupMemberCallbackProlog.c)
 *     TppFastAlpcAdjustConcurrencyCount @ 0x18004E7C0 (TppFastAlpcAdjustConcurrencyCount.c)
 *     TppAlpcpExecuteCallback @ 0x1800522C0 (TppAlpcpExecuteCallback.c)
 *     TppAllocAlpcCompletion @ 0x1800B7134 (TppAllocAlpcCompletion.c)
 *     TpCallbackIndependent @ 0x1800D52B0 (TpCallbackIndependent.c)
 *     AlpcRegisterCompletionList @ 0x1801071D0 (AlpcRegisterCompletionList.c)
 *     AlpcAdjustCompletionListConcurrencyCount @ 0x18010AF20 (AlpcAdjustCompletionListConcurrencyCount.c)
 *     AlpcRundownCompletionList @ 0x18010E0C0 (AlpcRundownCompletionList.c)
 *     AlpcUnregisterCompletionList @ 0x18010E6D0 (AlpcUnregisterCompletionList.c)
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
