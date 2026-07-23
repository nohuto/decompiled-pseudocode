/*
 * XREFs of KeInvalidateAllCaches @ 0x14039D290
 * Callers:
 *     MiChangePageAttribute @ 0x14024C2DC (MiChangePageAttribute.c)
 *     MiFlushCacheForAttributeChange @ 0x14039CF08 (MiFlushCacheForAttributeChange.c)
 *     KeInvalidateRangeAllCachesNoIpi @ 0x14039D220 (KeInvalidateRangeAllCachesNoIpi.c)
 *     MiChangePageAttributeBatch @ 0x1403A8860 (MiChangePageAttributeBatch.c)
 *     KeFlushIoBuffers @ 0x140431710 (KeFlushIoBuffers.c)
 *     KeInvalidateRangeAllCaches @ 0x140475CD0 (KeInvalidateRangeAllCaches.c)
 *     MiRemovePhysicalMemoryBatchComplete @ 0x14066FA58 (MiRemovePhysicalMemoryBatchComplete.c)
 *     MiFlushCachedIoPfnRange @ 0x140676EF4 (MiFlushCachedIoPfnRange.c)
 *     MiFlushCacheRange @ 0x14068FD90 (MiFlushCacheRange.c)
 *     MiInitializeCacheFlushing @ 0x140C5C468 (MiInitializeCacheFlushing.c)
 * Callees:
 *     KiIpiWaitForRequestBarrier @ 0x1402A12C0 (KiIpiWaitForRequestBarrier.c)
 *     KiIpiSendRequest @ 0x1402A24D0 (KiIpiSendRequest.c)
 *     KxSetTimeStampBusy @ 0x14039F5DC (KxSetTimeStampBusy.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

BOOLEAN KeInvalidateAllCaches(void)
{
  unsigned __int8 CurrentIrql; // bl
  struct _KPRCB *CurrentPrcb; // rdi
  __int64 v2; // rdx
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  unsigned __int8 v7; // cl

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  if ( KiIrqlFlags )
  {
    v7 = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(v7, 12LL);
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
      KiIpiWaitForRequestBarrier((__int64)CurrentPrcb, v3, v4, v5);
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
