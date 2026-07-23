/*
 * XREFs of PspJobClose @ 0x14085AC90
 * Callers:
 *     <none>
 * Callees:
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     PspHardDereferenceSiloWorker @ 0x1403B33A0 (PspHardDereferenceSiloWorker.c)
 *     PsGetServerSiloGlobals @ 0x1403C2DC0 (PsGetServerSiloGlobals.c)
 *     PsIsServerSilo @ 0x1403C35A8 (PsIsServerSilo.c)
 *     PspLockJobMemoryLimitsExclusive @ 0x14085AC20 (PspLockJobMemoryLimitsExclusive.c)
 *     PspTerminateAllProcessesInJobHierarchy @ 0x14085C7FC (PspTerminateAllProcessesInJobHierarchy.c)
 *     PspLockJobExclusive @ 0x14085CC60 (PspLockJobExclusive.c)
 *     PspUnlockJob @ 0x14085EB90 (PspUnlockJob.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall PspJobClose(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  char v4; // di
  struct _KTHREAD *CurrentThread; // rsi
  void *v7; // rbp
  __int64 v8; // rcx
  char *ServerSiloGlobals; // rbx
  void *v10; // rcx

  v4 = 1;
  if ( a4 <= 1 )
  {
    CurrentThread = KeGetCurrentThread();
    _InterlockedOr((volatile signed __int32 *)(a2 + 1552), 1u);
    PspLockJobExclusive(a2, CurrentThread);
    if ( (*(_DWORD *)(a2 + 256) & 0x2000) != 0 )
    {
      if ( _interlockedbittestandset((volatile signed __int32 *)(a2 + 1552), 0x1Du)
        || (*(_DWORD *)(a2 + 1552) & 0x40000000) == 0 )
      {
        v4 = 0;
      }
      PspUnlockJob(a2, CurrentThread);
      PspTerminateAllProcessesInJobHierarchy((PRKEVENT)a2);
      PspLockJobExclusive(a2, CurrentThread);
      if ( v4 )
        PspHardDereferenceSiloWorker(a2);
    }
    PspLockJobMemoryLimitsExclusive(a2, 0LL, 0LL);
    v7 = *(void **)(a2 + 552);
    *(_QWORD *)(a2 + 552) = 0LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 1264), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a2 + 1264));
    KeAbPostRelease(a2 + 1264);
    PspUnlockJob(a2, CurrentThread);
    if ( v7 )
      ObfDereferenceObjectWithTag(v7, 0x624A7350u);
    if ( (*(_DWORD *)(a2 + 1552) & 0x40000000) != 0 && PsIsServerSilo(a2) )
    {
      ServerSiloGlobals = (char *)PsGetServerSiloGlobals(v8);
      v10 = (void *)*((_QWORD *)ServerSiloGlobals + 174);
      if ( v10 )
      {
        ExFreePoolWithTag(v10, 0);
        *(_OWORD *)(ServerSiloGlobals + 1384) = 0LL;
      }
    }
  }
}
