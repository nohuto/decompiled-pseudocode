/*
 * XREFs of NtCompleteConnectPort @ 0x180164650
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtCompleteConnectPort(HANDLE PortHandle)
{
  NTSTATUS result; // eax

  result = 162;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
