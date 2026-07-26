/*
 * XREFs of ?HandlersRestoredTimeLimitedStopTimer@StopTimerOnExitDetails@?$IdleStateMachine@VNdisWdfIdle@@@@SA?AW4StopTimerResult@SmFx@@PEAX@Z @ 0x1400B7990
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IdleStateMachine<NdisWdfIdle>::StopTimerOnExitDetails::HandlersRestoredTimeLimitedStopTimer(
        __int64 a1)
{
  return 2 - (unsigned int)(KeCancelTimer((PKTIMER)(a1 + 8)) != 0);
}
