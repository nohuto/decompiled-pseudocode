/*
 * XREFs of TtmpSetTerminalPendingCleanup @ 0x140770584
 * Callers:
 *     TtmiCreateTerminal @ 0x14076F708 (TtmiCreateTerminal.c)
 *     TtmpCloseTerminalHandle @ 0x140770350 (TtmpCloseTerminalHandle.c)
 * Callees:
 *     TtmiScheduleSessionWorker @ 0x14076A144 (TtmiScheduleSessionWorker.c)
 *     TtmpResetEvaluationTimer @ 0x1407704A4 (TtmpResetEvaluationTimer.c)
 */

char __fastcall TtmpSetTerminalPendingCleanup(__int64 a1, __int64 a2)
{
  *(_DWORD *)(a2 + 36) |= 1u;
  TtmiScheduleSessionWorker(a1, 2);
  return TtmpResetEvaluationTimer((char *)a2, 0LL);
}
