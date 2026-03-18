/*
 * XREFs of TtmpResetEvaluationTimer @ 0x140770284
 * Callers:
 *     TtmpSetTerminalPendingCleanup @ 0x140770364 (TtmpSetTerminalPendingCleanup.c)
 *     TtmpUpdateTerminalState @ 0x140770570 (TtmpUpdateTerminalState.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     KeCancelTimer @ 0x140333B20 (KeCancelTimer.c)
 *     KiSetTimerEx @ 0x1403347A0 (KiSetTimerEx.c)
 *     PsReferenceSiloContext @ 0x14033FA90 (PsReferenceSiloContext.c)
 */

char __fastcall TtmpResetEvaluationTimer(char *Object, __int64 a2)
{
  char result; // al

  if ( a2 )
  {
    PsReferenceSiloContext(Object);
    result = KiSetTimerEx((__int64)(Object + 88), -a2, 0, 0, (__int64)(Object + 152));
  }
  else
  {
    result = KeCancelTimer((PKTIMER)(Object + 88));
  }
  if ( result )
    return ObfDereferenceObject(Object);
  return result;
}
