/*
 * XREFs of ZwSetDebugFilterState @ 0x180166570
 * Callers:
 *     DbgSetDebugFilterState @ 0x1801380E0 (DbgSetDebugFilterState.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetDebugFilterState(ULONG ComponentId, ULONG Level, BOOLEAN State)
{
  NTSTATUS result; // eax

  result = 411;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
