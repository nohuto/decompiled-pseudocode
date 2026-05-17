/*
 * XREFs of ZwFlushKey @ 0x180165050
 * Callers:
 *     RtlApplyRXact @ 0x180109070 (RtlApplyRXact.c)
 * Callees:
 *     <none>
 */

__int64 ZwFlushKey()
{
  __int64 result; // rax

  result = 242LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
