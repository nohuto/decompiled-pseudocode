/*
 * XREFs of PiDmaGuardQueueFlush @ 0x140AA2610
 * Callers:
 *     PipDmgFlushQueueAndRestartDevices @ 0x140731C6C (PipDmgFlushQueueAndRestartDevices.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14025A450 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402769C0 (ExAcquireResourceExclusiveLite.c)
 */

void __fastcall PiDmaGuardQueueFlush(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v3; // rax
  __int64 v4; // rcx
  _QWORD *v5; // rcx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PipDgqListLock, 1u);
  while ( 1 )
  {
    v3 = PipDgqListHead;
    if ( PipDgqListHead == &PipDgqListHead )
      break;
    if ( *((PVOID **)PipDgqListHead + 1) != &PipDgqListHead
      || (v4 = *(_QWORD *)PipDgqListHead, *(PVOID *)(*(_QWORD *)PipDgqListHead + 8LL) != PipDgqListHead)
      || (PipDgqListHead = *(PVOID *)PipDgqListHead,
          *(_QWORD *)(v4 + 8) = &PipDgqListHead,
          v5 = *(_QWORD **)(a1 + 8),
          *v5 != a1) )
    {
      __fastfail(3u);
    }
    *v3 = a1;
    v3[1] = v5;
    *v5 = v3;
    *(_QWORD *)(a1 + 8) = v3;
  }
  ExReleaseResourceLite(&PipDgqListLock);
  KeLeaveCriticalRegion();
}
