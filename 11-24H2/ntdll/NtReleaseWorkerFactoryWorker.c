/*
 * XREFs of NtReleaseWorkerFactoryWorker @ 0x180164C40
 * Callers:
 *     TppWorkCallbackPrologRelease @ 0x1800222C0 (TppWorkCallbackPrologRelease.c)
 *     TppPrepareDirectParams @ 0x180025370 (TppPrepareDirectParams.c)
 *     TppWorkPost @ 0x180055B40 (TppWorkPost.c)
 *     TpPostTask @ 0x18006EFB0 (TpPostTask.c)
 * Callees:
 *     <none>
 */

__int64 NtReleaseWorkerFactoryWorker()
{
  __int64 result; // rax

  result = 382LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
