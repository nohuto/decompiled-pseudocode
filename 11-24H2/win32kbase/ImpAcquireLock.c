/*
 * XREFs of ImpAcquireLock @ 0x140012564
 * Callers:
 *     ImpQueueCharacter @ 0x140011B18 (ImpQueueCharacter.c)
 *     ImpWorkerRoutine @ 0x140011DF0 (ImpWorkerRoutine.c)
 *     ImpInitializeWork @ 0x1401341E0 (ImpInitializeWork.c)
 *     ImpShutdownWorker @ 0x140145278 (ImpShutdownWorker.c)
 *     ImpCleanupWork @ 0x14014D870 (ImpCleanupWork.c)
 *     ImpWaitForWorkerShutdown @ 0x140150818 (ImpWaitForWorkerShutdown.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x140012644 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

struct _KTHREAD *__fastcall ImpAcquireLock(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  struct _KTHREAD *result; // rax

  KeEnterCriticalRegion();
  if ( *(struct _KTHREAD **)(a1 + 8) == KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v2, v4);
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)a1, 1u);
  result = KeGetCurrentThread();
  *(_QWORD *)(a1 + 8) = result;
  return result;
}
