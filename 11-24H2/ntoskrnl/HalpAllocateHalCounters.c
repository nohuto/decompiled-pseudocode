/*
 * XREFs of HalpAllocateHalCounters @ 0x14053E368
 * Callers:
 *     EmonAllocateCounterEnhanced @ 0x14055AA30 (EmonAllocateCounterEnhanced.c)
 *     EmonAllocateCounterOriginal @ 0x14055ABCC (EmonAllocateCounterOriginal.c)
 *     EmonMarkCountersReserved @ 0x14055BF80 (EmonMarkCountersReserved.c)
 *     Amd64AllocateCounter @ 0x14056A5AC (Amd64AllocateCounter.c)
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
