/*
 * XREFs of NtTerminateEnclave @ 0x1801656A0
 * Callers:
 *     LdrInitializeEnclave @ 0x1800D8BA0 (LdrInitializeEnclave.c)
 *     LdrDeleteEnclave @ 0x180132C60 (LdrDeleteEnclave.c)
 * Callees:
 *     <none>
 */

__int64 NtTerminateEnclave()
{
  __int64 result; // rax

  result = 465LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
