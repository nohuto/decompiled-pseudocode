/*
 * XREFs of ZwSerializeBoot @ 0x1801664B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwSerializeBoot()
{
  __int64 result; // rax

  result = 405LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
