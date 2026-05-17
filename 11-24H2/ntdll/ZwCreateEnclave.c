/*
 * XREFs of ZwCreateEnclave @ 0x180163240
 * Callers:
 *     LdrCreateEnclave @ 0x180111AD0 (LdrCreateEnclave.c)
 * Callees:
 *     <none>
 */

__int64 ZwCreateEnclave()
{
  __int64 result; // rax

  result = 174LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
