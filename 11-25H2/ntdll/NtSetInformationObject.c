/*
 * XREFs of NtSetInformationObject @ 0x180163D90
 * Callers:
 *     TppCritSetThread @ 0x1800F06E0 (TppCritSetThread.c)
 *     TppCritResetThread @ 0x1800F9C38 (TppCritResetThread.c)
 * Callees:
 *     <none>
 */

__int64 NtSetInformationObject()
{
  __int64 result; // rax

  result = 92LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
