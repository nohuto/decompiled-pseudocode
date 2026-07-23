/*
 * XREFs of KiTryScheduleNextForegroundBoost @ 0x14046A2F8
 * Callers:
 *     KiQuantumEnd @ 0x1402A3870 (KiQuantumEnd.c)
 *     KiQueueReadyThread @ 0x1402A4C20 (KiQueueReadyThread.c)
 *     KiDeferredReadySingleThread @ 0x1402C78D0 (KiDeferredReadySingleThread.c)
 * Callees:
 *     KiScheduleNextForegroundBoost @ 0x1405C2800 (KiScheduleNextForegroundBoost.c)
 */

__int64 __fastcall KiTryScheduleNextForegroundBoost(__int64 a1)
{
  __int64 result; // rax
  char v2; // dl

  if ( KiSchedulerForegroundBoostDecayPolicy )
  {
    result = *(unsigned int *)(*(_QWORD *)(a1 + 544) + 136LL);
    if ( (result & 0x2000) != 0 )
    {
      v2 = *(_BYTE *)(a1 + 195);
      if ( v2 < 16 )
      {
        result = *(unsigned int *)(a1 + 120);
        if ( (result & 8) == 0 && v2 > 0 )
          return KiScheduleNextForegroundBoost(a1);
      }
    }
  }
  return result;
}
