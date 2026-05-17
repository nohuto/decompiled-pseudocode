/*
 * XREFs of NtCreateIoRing @ 0x1801632E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtCreateIoRing()
{
  __int64 result; // rax

  result = 179LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
