/*
 * XREFs of ZwThawRegistry @ 0x180166C90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS ZwThawRegistry(void)
{
  NTSTATUS result; // eax

  result = 468;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
