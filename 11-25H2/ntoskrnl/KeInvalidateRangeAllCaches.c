/*
 * XREFs of KeInvalidateRangeAllCaches @ 0x14026F2F0
 * Callers:
 *     KiFlushRangeAllCaches @ 0x1405B8EC0 (KiFlushRangeAllCaches.c)
 *     MiPersistMemory @ 0x140670130 (MiPersistMemory.c)
 * Callees:
 *     KeInvalidateRangeAllCachesNoIpi @ 0x14026F580 (KeInvalidateRangeAllCachesNoIpi.c)
 *     KeInvalidateAllCaches @ 0x14026F5F0 (KeInvalidateAllCaches.c)
 *     KiIpiWaitForRequestBarrier @ 0x14032BC30 (KiIpiWaitForRequestBarrier.c)
 *     KiIpiSendRequest @ 0x14032D550 (KiIpiSendRequest.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
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
      KiRaiseIrqlProcessIrqlFlags(BaseAddress);
    }
    CurrentPrcb = KeGetCurrentPrcb();
    v6 = 1LL;
    if ( (unsigned int)KeNumberProcessors_0 > 1 )
    {
      KiIpiSendRequest((_DWORD)CurrentPrcb, 1, 0, 0, 7LL);
      KiIpiWaitForRequestBarrier(CurrentPrcb);
    }
    if ( KiIrqlFlags )
    {
      LOBYTE(v6) = CurrentIrql;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v6);
    }
    __writecr8(CurrentIrql);
    KeInvalidateRangeAllCachesNoIpi(v3, Length);
  }
}
