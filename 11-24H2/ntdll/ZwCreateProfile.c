/*
 * XREFs of ZwCreateProfile @ 0x1801634C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwCreateProfile()
{
  __int64 result; // rax

  result = 194LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
