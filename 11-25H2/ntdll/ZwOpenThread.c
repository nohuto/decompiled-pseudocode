/*
 * XREFs of ZwOpenThread @ 0x180165930
 * Callers:
 *     RtlpHpEnvThreadSuspend @ 0x180033BC0 (RtlpHpEnvThreadSuspend.c)
 * Callees:
 *     <none>
 */

__int64 ZwOpenThread()
{
  __int64 result; // rax

  result = 313LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
