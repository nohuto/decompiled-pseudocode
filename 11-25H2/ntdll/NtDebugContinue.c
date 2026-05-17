/*
 * XREFs of NtDebugContinue @ 0x180164CF0
 * Callers:
 *     DbgUiContinue @ 0x1801132E0 (DbgUiContinue.c)
 * Callees:
 *     <none>
 */

__int64 NtDebugContinue()
{
  __int64 result; // rax

  result = 215LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
