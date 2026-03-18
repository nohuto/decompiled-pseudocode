/*
 * XREFs of TtmpSetTerminalPendingCleanup @ 0x140770364
 * Callers:
 *     TtmiCreateTerminal @ 0x14076F4E8 (TtmiCreateTerminal.c)
 *     TtmpCloseTerminalHandle @ 0x140770130 (TtmpCloseTerminalHandle.c)
 * Callees:
 *     TtmiScheduleSessionWorker @ 0x140769F24 (TtmiScheduleSessionWorker.c)
 *     TtmpResetEvaluationTimer @ 0x140770284 (TtmpResetEvaluationTimer.c)
 */

char __fastcall TtmpSetTerminalPendingCleanup(__int64 a1, __int64 a2)
{
  *(_DWORD *)(a2 + 36) |= 1u;
  TtmiScheduleSessionWorker(a1, 2);
  return TtmpResetEvaluationTimer((char *)a2, 0LL);
}
