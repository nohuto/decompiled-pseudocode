/*
 * XREFs of ZwQueryMutant @ 0x180165E50
 * Callers:
 *     PsspDumpObject_Mutant @ 0x18010C820 (PsspDumpObject_Mutant.c)
 * Callees:
 *     <none>
 */

__int64 ZwQueryMutant()
{
  __int64 result; // rax

  result = 354LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
