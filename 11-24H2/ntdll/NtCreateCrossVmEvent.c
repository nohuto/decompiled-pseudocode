/*
 * XREFs of NtCreateCrossVmEvent @ 0x180161560
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtCreateCrossVmEvent()
{
  __int64 result; // rax

  result = 169LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
