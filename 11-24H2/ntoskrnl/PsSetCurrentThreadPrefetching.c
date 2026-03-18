/*
 * XREFs of PsSetCurrentThreadPrefetching @ 0x14096B530
 * Callers:
 *     PfpPrefetchSharedStart @ 0x1409527B4 (PfpPrefetchSharedStart.c)
 *     PfpPrefetchSharedCleanup @ 0x140952940 (PfpPrefetchSharedCleanup.c)
 *     PfSnSectionInfoCleanupWorkItem @ 0x14096A900 (PfSnSectionInfoCleanupWorkItem.c)
 *     PfSnPopulateReadList @ 0x14096A9C0 (PfSnPopulateReadList.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x1402BB4D0 (KiCheckForKernelApcDelivery.c)
 */

BOOLEAN __stdcall PsSetCurrentThreadPrefetching(BOOLEAN Prefetching)
{
  struct _KTHREAD *CurrentThread; // rdx
  BOOLEAN v2; // bl
  $81B80DCEA5A02D890AB7B2872B48AC01 *v4; // rcx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v2 = ((__int64)CurrentThread[1].Queue & 0x40) != 0;
  LOBYTE(CurrentThread[1].Queue) ^= (LOBYTE(CurrentThread[1].Queue) ^ (Prefetching << 6)) & 0x40;
  if ( CurrentThread->SpecialApcDisable++ == -1 )
  {
    v4 = &CurrentThread->152;
    if ( ($81B80DCEA5A02D890AB7B2872B48AC01 *)v4->ApcState.ApcListHead[0].Flink != v4 )
      KiCheckForKernelApcDelivery((__int64)v4, (__int64)CurrentThread);
  }
  return v2;
}
