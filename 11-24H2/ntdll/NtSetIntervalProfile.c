/*
 * XREFs of NtSetIntervalProfile @ 0x180163680
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtSetIntervalProfile(ULONG Interval, KPROFILE_SOURCE Source)
{
  NTSTATUS result; // eax

  result = 434;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
