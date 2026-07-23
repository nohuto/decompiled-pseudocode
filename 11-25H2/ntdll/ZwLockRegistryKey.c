/*
 * XREFs of ZwLockRegistryKey @ 0x1801654D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwLockRegistryKey(HANDLE KeyHandle)
{
  NTSTATUS result; // eax

  result = 278;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
