/*
 * XREFs of NtReleaseWorkerFactoryWorker @ 0x180163000
 * Callers:
 *     TppWorkCallbackPrologRelease @ 0x18004ECC0 (TppWorkCallbackPrologRelease.c)
 *     TppPrepareDirectParams @ 0x180051D70 (TppPrepareDirectParams.c)
 *     TppWorkPost @ 0x18006B720 (TppWorkPost.c)
 *     TpPostTask @ 0x18008B890 (TpPostTask.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtReleaseWorkerFactoryWorker(HANDLE WorkerFactoryHandle)
{
  NTSTATUS result; // eax

  result = 382;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
