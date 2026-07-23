/*
 * XREFs of PsReferencePartitionSystemProcess @ 0x140A48DC0
 * Callers:
 *     ExSwapinWorkerThreads @ 0x140A48C04 (ExSwapinWorkerThreads.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     PsReferenceSiloContext @ 0x14031EF70 (PsReferenceSiloContext.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 */

__int64 __fastcall PsReferencePartitionSystemProcess(__int64 a1, _QWORD *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 *v3; // rbx
  char *v6; // rdi
  PVOID v7; // rcx
  unsigned int v8; // edi

  CurrentThread = KeGetCurrentThread();
  v3 = (signed __int64 *)(a1 + 112);
  --CurrentThread->KernelApcDisable;
  v6 = (char *)KeAbPreAcquire(a1 + 112, 0LL);
  if ( _InterlockedCompareExchange64(v3, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v3, 0, v6, (__int64)v3);
  if ( v6 )
    v6[10] = 1;
  v7 = *(PVOID *)(a1 + 120);
  if ( v7 == MmBadPointer )
  {
    v8 = -1073740640;
  }
  else
  {
    PsReferenceSiloContext(v7);
    v8 = 0;
    *a2 = *(_QWORD *)(a1 + 120);
  }
  if ( _InterlockedCompareExchange64(v3, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v3);
  KeAbPostRelease((ULONG_PTR)v3);
  KeLeaveCriticalRegion();
  return v8;
}
