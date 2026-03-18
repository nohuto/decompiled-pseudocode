/*
 * XREFs of PsReferencePartitionSystemProcess @ 0x140A4E3C0
 * Callers:
 *     ExSwapinWorkerThreads @ 0x140A4E204 (ExSwapinWorkerThreads.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     PsReferenceSiloContext @ 0x14029A8F0 (PsReferenceSiloContext.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 */

__int64 __fastcall PsReferencePartitionSystemProcess(__int64 a1, _QWORD *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 *v3; // rbx
  __int64 *v6; // rdi
  PVOID v7; // rcx
  unsigned int v8; // edi

  CurrentThread = KeGetCurrentThread();
  v3 = (signed __int64 *)(a1 + 112);
  --CurrentThread->KernelApcDisable;
  v6 = KeAbPreAcquire(a1 + 112, 0LL);
  if ( _InterlockedCompareExchange64(v3, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v3, 0, v6, (unsigned __int64)v3);
  if ( v6 )
    *((_BYTE *)v6 + 10) = 1;
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
