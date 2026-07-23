/*
 * XREFs of ZwShutdownWorkerFactory @ 0x180163920
 * Callers:
 *     TpReleasePool @ 0x1800D9CF0 (TpReleasePool.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwShutdownWorkerFactory(HANDLE WorkerFactoryHandle, LONG *PendingWorkerCount)
{
  NTSTATUS result; // eax

  result = 455;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
