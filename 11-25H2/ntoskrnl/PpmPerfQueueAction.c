/*
 * XREFs of PpmPerfQueueAction @ 0x1403E88F0
 * Callers:
 *     PpmParkReportUnparkedCores @ 0x1403AD800 (PpmParkReportUnparkedCores.c)
 *     PpmParkReportParkedCores @ 0x1403AD8E0 (PpmParkReportParkedCores.c)
 *     PpmParkUnblockIdle @ 0x1403E8470 (PpmParkUnblockIdle.c)
 *     PpmPerfApplyProcessorStates @ 0x1403E8630 (PpmPerfApplyProcessorStates.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x140252D80 (KeInsertQueueDpc.c)
 */

char __fastcall PpmPerfQueueAction(__int64 a1, char a2)
{
  signed __int32 v2; // eax

  _m_prefetchw((const void *)(a1 + 35224));
  v2 = _InterlockedOr((volatile signed __int32 *)(a1 + 35224), 1 << a2);
  if ( !v2 )
    LOBYTE(v2) = KeInsertQueueDpc((PRKDPC)(a1 + 35160), 0LL, 0LL);
  return v2;
}
