/*
 * XREFs of PpmPerfQueueAction @ 0x14029F0D0
 * Callers:
 *     PpmPerfApplyProcessorStates @ 0x14029EE10 (PpmPerfApplyProcessorStates.c)
 *     PpmParkReportUnparkedCores @ 0x1403546E0 (PpmParkReportUnparkedCores.c)
 *     PpmParkReportParkedCores @ 0x1403547C0 (PpmParkReportParkedCores.c)
 *     PpmParkUnblockIdle @ 0x140457DA0 (PpmParkUnblockIdle.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x1402542F0 (KeInsertQueueDpc.c)
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
