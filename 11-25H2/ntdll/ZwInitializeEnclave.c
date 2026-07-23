/*
 * XREFs of ZwInitializeEnclave @ 0x1801652F0
 * Callers:
 *     LdrInitializeEnclave @ 0x1800D8B40 (LdrInitializeEnclave.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwInitializeEnclave(
        HANDLE ProcessHandle,
        PVOID BaseAddress,
        PVOID EnclaveInformation,
        ULONG EnclaveInformationLength,
        PULONG EnclaveError)
{
  NTSTATUS result; // eax

  result = 263;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
