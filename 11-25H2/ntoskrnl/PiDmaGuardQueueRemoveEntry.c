/*
 * XREFs of PiDmaGuardQueueRemoveEntry @ 0x1404BE3BC
 * Callers:
 *     PiDmaGuardProcessPostRemove @ 0x140A87040 (PiDmaGuardProcessPostRemove.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExAcquireResourceExclusiveLite @ 0x14028A9E0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
 *     PipDgqFreeEntry @ 0x14072E1DC (PipDgqFreeEntry.c)
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
