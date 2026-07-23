/*
 * XREFs of NtReleaseWorkerFactoryWorker @ 0x1801661D0
 * Callers:
 *     TppWorkPost @ 0x180011780 (TppWorkPost.c)
 *     TpPostTask @ 0x18003D360 (TpPostTask.c)
 *     TppWorkCallbackPrologRelease @ 0x180043350 (TppWorkCallbackPrologRelease.c)
 *     TppPrepareDirectParams @ 0x18007F750 (TppPrepareDirectParams.c)
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
