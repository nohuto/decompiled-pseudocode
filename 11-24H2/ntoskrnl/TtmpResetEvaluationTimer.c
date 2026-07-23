/*
 * XREFs of TtmpResetEvaluationTimer @ 0x1407704A4
 * Callers:
 *     TtmpSetTerminalPendingCleanup @ 0x140770584 (TtmpSetTerminalPendingCleanup.c)
 *     TtmpUpdateTerminalState @ 0x140770790 (TtmpUpdateTerminalState.c)
 * Callees:
 *     KeCancelTimer @ 0x1402BE1D0 (KeCancelTimer.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     KiSetTimerEx @ 0x140316810 (KiSetTimerEx.c)
 *     PsReferenceSiloContext @ 0x14031EF70 (PsReferenceSiloContext.c)
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
