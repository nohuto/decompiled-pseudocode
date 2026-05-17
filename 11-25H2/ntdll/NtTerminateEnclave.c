/*
 * XREFs of NtTerminateEnclave @ 0x180166C30
 * Callers:
 *     LdrInitializeEnclave @ 0x1800D8B40 (LdrInitializeEnclave.c)
 *     LdrDeleteEnclave @ 0x180134740 (LdrDeleteEnclave.c)
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
