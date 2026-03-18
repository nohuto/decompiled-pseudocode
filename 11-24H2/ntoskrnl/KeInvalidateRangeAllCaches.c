/*
 * XREFs of KeInvalidateRangeAllCaches @ 0x14047A650
 * Callers:
 *     KiFlushRangeAllCaches @ 0x1405BCD60 (KiFlushRangeAllCaches.c)
 *     MiPersistMemory @ 0x14067B8F0 (MiPersistMemory.c)
 * Callees:
 *     KiIpiWaitForRequestBarrier @ 0x1402916C0 (KiIpiWaitForRequestBarrier.c)
 *     KiIpiSendRequest @ 0x1402928D0 (KiIpiSendRequest.c)
 *     KeInvalidateRangeAllCachesNoIpi @ 0x1403AEA10 (KeInvalidateRangeAllCachesNoIpi.c)
 *     KeInvalidateAllCaches @ 0x1403AEA80 (KeInvalidateAllCaches.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 */

void __stdcall KeInvalidateRangeAllCaches(PVOID BaseAddress, ULONG Length)
{
  PVOID v3; // rbp
  unsigned __int8 CurrentIrql; // bl
  struct _KPRCB *CurrentPrcb; // rsi
  __int64 v6; // rdx

  v3 = BaseAddress;
  if ( Length >= KiLargestCacheSize )
  {
    KeInvalidateAllCaches();
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xCuLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(BaseAddress) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(BaseAddress, 12LL);
    }
    CurrentPrcb = KeGetCurrentPrcb();
    v6 = 1LL;
    if ( (unsigned int)KeNumberProcessors_0 > 1 )
    {
      KiIpiSendRequest((__int64)CurrentPrcb, 1, 0LL, 0LL, 7LL);
      KiIpiWaitForRequestBarrier((__int64)CurrentPrcb);
    }
    if ( KiIrqlFlags )
    {
      LOBYTE(v6) = CurrentIrql;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v6);
    }
    __writecr8(CurrentIrql);
    KeInvalidateRangeAllCachesNoIpi((__int64)v3, Length);
  }
}
