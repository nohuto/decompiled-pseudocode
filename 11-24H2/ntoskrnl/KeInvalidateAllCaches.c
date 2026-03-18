/*
 * XREFs of KeInvalidateAllCaches @ 0x1403AEA80
 * Callers:
 *     MiChangePageAttribute @ 0x14021F58C (MiChangePageAttribute.c)
 *     MiChangePageAttributeBatch @ 0x1402668E4 (MiChangePageAttributeBatch.c)
 *     MiFlushCacheForAttributeChange @ 0x1403AE6F8 (MiFlushCacheForAttributeChange.c)
 *     KeInvalidateRangeAllCachesNoIpi @ 0x1403AEA10 (KeInvalidateRangeAllCachesNoIpi.c)
 *     KeFlushIoBuffers @ 0x14043D470 (KeFlushIoBuffers.c)
 *     KeInvalidateRangeAllCaches @ 0x14047A650 (KeInvalidateRangeAllCaches.c)
 *     MiRemovePhysicalMemoryBatchComplete @ 0x14066E884 (MiRemovePhysicalMemoryBatchComplete.c)
 *     MiFlushCachedIoPfnRange @ 0x140675D24 (MiFlushCachedIoPfnRange.c)
 *     MiFlushCacheRange @ 0x14068ECB4 (MiFlushCacheRange.c)
 *     MiInitializeCacheFlushing @ 0x140C5A2D8 (MiInitializeCacheFlushing.c)
 * Callees:
 *     KiIpiWaitForRequestBarrier @ 0x1402916C0 (KiIpiWaitForRequestBarrier.c)
 *     KiIpiSendRequest @ 0x1402928D0 (KiIpiSendRequest.c)
 *     KxSetTimeStampBusy @ 0x1403B0DCC (KxSetTimeStampBusy.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 */

BOOLEAN KeInvalidateAllCaches(void)
{
  __int64 v0; // rcx
  unsigned __int8 CurrentIrql; // bl
  struct _KPRCB *CurrentPrcb; // rdi
  __int64 v3; // rdx

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v0) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(v0, 12LL);
  }
  CurrentPrcb = KeGetCurrentPrcb();
  if ( (unsigned __int8)KxSetTimeStampBusy(&KiCacheFlushTimeStamp) )
  {
    if ( (unsigned int)KeNumberProcessors_0 <= 1 )
    {
      __wbinvd();
    }
    else
    {
      KiIpiSendRequest((__int64)CurrentPrcb, 1, 0LL, 0LL, 6LL);
      __wbinvd();
      KiIpiWaitForRequestBarrier((__int64)CurrentPrcb);
    }
    _InterlockedIncrement(&KiCacheFlushTimeStamp);
  }
  if ( KiIrqlFlags )
  {
    LOBYTE(v3) = CurrentIrql;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v3);
  }
  __writecr8(CurrentIrql);
  return 1;
}
