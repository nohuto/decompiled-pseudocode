/*
 * XREFs of ZwUnloadDriver @ 0x180166D30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwUnloadDriver(PUNICODE_STRING DriverServiceName)
{
  NTSTATUS result; // eax

  result = 473;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
