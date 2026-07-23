/*
 * XREFs of NtCommitComplete @ 0x180164550
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtCommitComplete(HANDLE EnlistmentHandle, PLARGE_INTEGER TmVirtualClock)
{
  NTSTATUS result; // eax

  result = 154;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
