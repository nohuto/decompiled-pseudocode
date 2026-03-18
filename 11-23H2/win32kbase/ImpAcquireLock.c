/*
 * XREFs of ImpAcquireLock @ 0x1C007B8AC
 * Callers:
 *     ImpInitializeWork @ 0x1C007AD6C (ImpInitializeWork.c)
 *     ImpWorkerRoutine @ 0x1C007B0F0 (ImpWorkerRoutine.c)
 *     ImpShutdownWorker @ 0x1C00C2890 (ImpShutdownWorker.c)
 *     ImpCleanupWork @ 0x1C00C2E38 (ImpCleanupWork.c)
 *     ImpWaitForWorkerShutdown @ 0x1C00C4810 (ImpWaitForWorkerShutdown.c)
 *     ImpQueueCharacter @ 0x1C0235D58 (ImpQueueCharacter.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C00ADF88 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

struct _KTHREAD *ImpAcquireLock()
{
  struct _KTHREAD *result; // rax

  KeEnterCriticalRegion();
  if ( (struct _KTHREAD *)qword_1C028F9C8 == KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  ExAcquireResourceExclusiveLite(ImpRequestLock, 1u);
  result = KeGetCurrentThread();
  qword_1C028F9C8 = (__int64)result;
  return result;
}
