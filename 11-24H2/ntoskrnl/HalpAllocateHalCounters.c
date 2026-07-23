/*
 * XREFs of HalpAllocateHalCounters @ 0x14053BC68
 * Callers:
 *     EmonAllocateCounterEnhanced @ 0x140558660 (EmonAllocateCounterEnhanced.c)
 *     EmonAllocateCounterOriginal @ 0x1405587FC (EmonAllocateCounterOriginal.c)
 *     EmonMarkCountersReserved @ 0x140559BB0 (EmonMarkCountersReserved.c)
 *     Amd64AllocateCounter @ 0x140567A3C (Amd64AllocateCounter.c)
 * Callees:
 *     <none>
 */

__int64 HalpAllocateHalCounters()
{
  struct _KPRCB *CurrentPrcb; // rcx

  CurrentPrcb = KeGetCurrentPrcb();
  if ( (_InterlockedExchangeAdd((volatile signed __int32 *)&CurrentPrcb->HalReserved[3], 2u) & 1) == 0 )
    return 0LL;
  _InterlockedAdd((volatile signed __int32 *)&CurrentPrcb->HalReserved[3], 0xFFFFFFFE);
  return 3221225473LL;
}
