/*
 * XREFs of OSQueueWorkItem @ 0x140013FD4
 * Callers:
 *     RestartContext @ 0x14001384C (RestartContext.c)
 *     InsertReadyQueue @ 0x140013A60 (InsertReadyQueue.c)
 *     AMLIResumeInterpreter @ 0x14002D894 (AMLIResumeInterpreter.c)
 * Callees:
 *     <none>
 */

LONG __fastcall OSQueueWorkItem(_QWORD *a1)
{
  KIRQL v2; // al
  _QWORD *v3; // rcx

  v2 = KeAcquireSpinLockRaiseToDpc(&ACPIWorkerQueueSpinLock);
  v3 = (_QWORD *)qword_140089B08;
  if ( *(__int64 **)qword_140089B08 != &ACPIWorkQueue )
    __fastfail(3u);
  *a1 = &ACPIWorkQueue;
  a1[1] = v3;
  *v3 = a1;
  qword_140089B08 = (__int64)a1;
  KeReleaseSpinLock(&ACPIWorkerQueueSpinLock, v2);
  return KeSetEvent(&ACPIProcessWorkQueueEvent, 0, 0);
}
