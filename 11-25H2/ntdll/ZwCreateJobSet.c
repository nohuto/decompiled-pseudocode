/*
 * XREFs of ZwCreateJobSet @ 0x1801648B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCreateJobSet(ULONG NumJob, PJOB_SET_ARRAY UserJobSet, ULONG Flags)
{
  NTSTATUS result; // eax

  result = 181;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
