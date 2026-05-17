/*
 * XREFs of NtWorkerFactoryWorkerReady @ 0x180161CB0
 * Callers:
 *     TppWorkerThread @ 0x1800238D0 (TppWorkerThread.c)
 * Callees:
 *     <none>
 */

__int64 NtWorkerFactoryWorkerReady()
{
  __int64 result; // rax

  result = 1LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
