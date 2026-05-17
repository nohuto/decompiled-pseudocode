/*
 * XREFs of NtQueryInformationJobObject @ 0x180164740
 * Callers:
 *     TppJobpRundownJob @ 0x180069A78 (TppJobpRundownJob.c)
 *     RtlGetSessionProperties @ 0x180139040 (RtlGetSessionProperties.c)
 * Callees:
 *     <none>
 */

__int64 NtQueryInformationJobObject()
{
  __int64 result; // rax

  result = 342LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
