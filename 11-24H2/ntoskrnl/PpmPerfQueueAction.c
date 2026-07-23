/*
 * XREFs of PpmPerfQueueAction @ 0x1402AF01C
 * Callers:
 *     PpmPerfApplyProcessorStates @ 0x1402AF070 (PpmPerfApplyProcessorStates.c)
 *     PpmParkReportUnparkedCores @ 0x1402B2410 (PpmParkReportUnparkedCores.c)
 *     PpmParkReportParkedCores @ 0x1402B24F0 (PpmParkReportParkedCores.c)
 *     PpmParkUnblockIdle @ 0x14044D0B0 (PpmParkUnblockIdle.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x140284900 (KeInsertQueueDpc.c)
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
