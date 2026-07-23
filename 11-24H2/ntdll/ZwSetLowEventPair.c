/*
 * XREFs of ZwSetLowEventPair @ 0x180163700
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetLowEventPair(HANDLE EventPairHandle)
{
  NTSTATUS result; // eax

  result = 438;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
