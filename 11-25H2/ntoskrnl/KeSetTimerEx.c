/*
 * XREFs of KeSetTimerEx @ 0x14045AFC0
 * Callers:
 *     <none>
 * Callees:
 *     KiSetTimerEx @ 0x1402ED730 (KiSetTimerEx.c)
 */

BOOLEAN __stdcall KeSetTimerEx(PKTIMER Timer, LARGE_INTEGER DueTime, LONG Period, PKDPC Dpc)
{
  return KiSetTimerEx((__int64)Timer, DueTime.QuadPart, Period, 0, (__int64)Dpc);
}
