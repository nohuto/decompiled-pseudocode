/*
 * XREFs of PiDmaGuardQueueRemoveEntry @ 0x1404BD344
 * Callers:
 *     PiDmaGuardProcessPostRemove @ 0x140A8BD58 (PiDmaGuardProcessPostRemove.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14025A450 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402769C0 (ExAcquireResourceExclusiveLite.c)
 *     PipDgqFreeEntry @ 0x14073A46C (PipDgqFreeEntry.c)
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
