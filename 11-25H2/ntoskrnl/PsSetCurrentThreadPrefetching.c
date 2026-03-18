/*
 * XREFs of PsSetCurrentThreadPrefetching @ 0x1408C2900
 * Callers:
 *     PfSnSectionInfoCleanupWorkItem @ 0x1408C1CD0 (PfSnSectionInfoCleanupWorkItem.c)
 *     PfSnPopulateReadList @ 0x1408C1D90 (PfSnPopulateReadList.c)
 *     PfpPrefetchSharedCleanup @ 0x1408EBCF8 (PfpPrefetchSharedCleanup.c)
 *     PfpPrefetchSharedStart @ 0x1408EBE2C (PfpPrefetchSharedStart.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x140320950 (KiCheckForKernelApcDelivery.c)
 */

BOOLEAN __stdcall PsSetCurrentThreadPrefetching(BOOLEAN Prefetching)
{
  struct _KTHREAD *CurrentThread; // rdx
  BOOLEAN v2; // bl
  bool v3; // zf

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v2 = ((__int64)CurrentThread[1].Queue & 0x40) != 0;
  LOBYTE(CurrentThread[1].Queue) ^= (LOBYTE(CurrentThread[1].Queue) ^ (Prefetching << 6)) & 0x40;
  v3 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v3 && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  return v2;
}
