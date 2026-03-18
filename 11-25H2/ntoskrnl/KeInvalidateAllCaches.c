/*
 * XREFs of KeInvalidateAllCaches @ 0x14026F5F0
 * Callers:
 *     MiChangePageAttribute @ 0x14024DE74 (MiChangePageAttribute.c)
 *     KeInvalidateRangeAllCaches @ 0x14026F2F0 (KeInvalidateRangeAllCaches.c)
 *     MiFlushCacheForAttributeChange @ 0x14026F3B4 (MiFlushCacheForAttributeChange.c)
 *     KeInvalidateRangeAllCachesNoIpi @ 0x14026F580 (KeInvalidateRangeAllCachesNoIpi.c)
 *     MiChangePageAttributeBatch @ 0x1403B70F4 (MiChangePageAttributeBatch.c)
 *     KeFlushIoBuffers @ 0x14043D260 (KeFlushIoBuffers.c)
 *     MiRemovePhysicalMemoryBatchComplete @ 0x140662D44 (MiRemovePhysicalMemoryBatchComplete.c)
 *     MiFlushCachedIoPfnRange @ 0x14066A2C4 (MiFlushCachedIoPfnRange.c)
 *     MiFlushCacheRange @ 0x1406833D0 (MiFlushCacheRange.c)
 *     MiInitializeCacheFlushing @ 0x140C48FA8 (MiInitializeCacheFlushing.c)
 * Callees:
 *     KxSetTimeStampBusy @ 0x1402703B8 (KxSetTimeStampBusy.c)
 *     KiIpiWaitForRequestBarrier @ 0x14032BC30 (KiIpiWaitForRequestBarrier.c)
 *     KiIpiSendRequest @ 0x14032D550 (KiIpiSendRequest.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

BOOLEAN KeInvalidateAllCaches(void)
{
  unsigned __int8 CurrentIrql; // bl
  struct _KPRCB *CurrentPrcb; // rdi
  __int64 v2; // rdx
  unsigned __int8 v4; // cl

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  if ( KiIrqlFlags )
  {
    v4 = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(v4);
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
      KiIpiSendRequest((_DWORD)CurrentPrcb, 1, 0, 0, 6LL);
      __wbinvd();
      KiIpiWaitForRequestBarrier(CurrentPrcb);
    }
    _InterlockedIncrement(&KiCacheFlushTimeStamp);
  }
  if ( KiIrqlFlags )
  {
    LOBYTE(v2) = CurrentIrql;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v2);
  }
  __writecr8(CurrentIrql);
  return 1;
}
