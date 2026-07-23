/*
 * XREFs of PiDmaGuardQueueRemoveEntry @ 0x1404B84B4
 * Callers:
 *     PiDmaGuardProcessPostRemove @ 0x140A88248 (PiDmaGuardProcessPostRemove.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14022BF50 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     PipDgqFreeEntry @ 0x14073839C (PipDgqFreeEntry.c)
 */

void __fastcall PiDmaGuardQueueRemoveEntry(PVOID a1)
{
  struct _KTHREAD *CurrentThread; // rax
  PVOID *i; // rcx
  PVOID *v4; // rax
  PVOID **v5; // rdx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PipDgqListLock, 1u);
  for ( i = (PVOID *)PipDgqListHead; i != &PipDgqListHead; i = (PVOID *)*i )
  {
    v4 = (PVOID *)*i;
    if ( i[2] == a1 )
    {
      if ( v4[1] != i || (v5 = (PVOID **)i[1], *v5 != i) )
        __fastfail(3u);
      *v5 = v4;
      v4[1] = v5;
      PipDgqFreeEntry(i);
      break;
    }
  }
  ExReleaseResourceLite(&PipDgqListLock);
  KeLeaveCriticalRegion();
}
