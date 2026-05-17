/*
 * XREFs of NtModifyBootEntry @ 0x1801655F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtModifyBootEntry()
{
  __int64 result; // rax

  result = 287LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
