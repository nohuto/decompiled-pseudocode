/*
 * XREFs of NtCreateTimer2 @ 0x180164B90
 * Callers:
 *     TppInitializeTimerSubQueue @ 0x18003BC48 (TppInitializeTimerSubQueue.c)
 * Callees:
 *     <none>
 */

__int64 NtCreateTimer2()
{
  __int64 result; // rax

  result = 204LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
