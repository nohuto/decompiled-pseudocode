/*
 * XREFs of ImpReleaseLock @ 0x1400125B8
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

void __fastcall ImpReleaseLock(__int64 a1, __int64 a2, __int64 a3)
{
  struct _ERESOURCE *v4; // rcx

  if ( *(struct _KTHREAD **)(a1 + 8) != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  v4 = *(struct _ERESOURCE **)a1;
  *(_QWORD *)(a1 + 8) = 0LL;
  ExReleaseResourceLite(v4);
  KeLeaveCriticalRegion();
}
