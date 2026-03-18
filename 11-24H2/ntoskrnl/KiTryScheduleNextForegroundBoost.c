/*
 * XREFs of KiTryScheduleNextForegroundBoost @ 0x14046FED0
 * Callers:
 *     KiQuantumEnd @ 0x140293C70 (KiQuantumEnd.c)
 *     KiQueueReadyThread @ 0x140295020 (KiQueueReadyThread.c)
 *     KiDeferredReadySingleThread @ 0x14031ED40 (KiDeferredReadySingleThread.c)
 * Callees:
 *     KiScheduleNextForegroundBoost @ 0x1405C50CC (KiScheduleNextForegroundBoost.c)
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
