/*
 * XREFs of KeInvalidateRangeAllCaches @ 0x140475CD0
 * Callers:
 *     KiFlushRangeAllCaches @ 0x1405BA390 (KiFlushRangeAllCaches.c)
 *     MiPersistMemory @ 0x14067CAD0 (MiPersistMemory.c)
 * Callees:
 *     KiIpiWaitForRequestBarrier @ 0x1402A12C0 (KiIpiWaitForRequestBarrier.c)
 *     KiIpiSendRequest @ 0x1402A24D0 (KiIpiSendRequest.c)
 *     KeInvalidateRangeAllCachesNoIpi @ 0x14039D220 (KeInvalidateRangeAllCachesNoIpi.c)
 *     KeInvalidateAllCaches @ 0x14039D290 (KeInvalidateAllCaches.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

void __stdcall KeInvalidateRangeAllCaches(PVOID BaseAddress, ULONG Length)
{
  PVOID v3; // rbp
  unsigned __int8 CurrentIrql; // bl
  struct _KPRCB *CurrentPrcb; // rsi
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9

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
      KiIpiWaitForRequestBarrier((__int64)CurrentPrcb, v7, v8, v9);
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
