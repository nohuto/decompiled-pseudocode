/*
 * XREFs of ZwReleaseMutant @ 0x180160450
 * Callers:
 *     TppCallbackEpilog @ 0x1800512E0 (TppCallbackEpilog.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwReleaseMutant(HANDLE MutantHandle, PLONG PreviousCount)
{
  NTSTATUS result; // eax

  result = 32;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
