/*
 * XREFs of KeSetTimerEx @ 0x140315140
 * Callers:
 *     <none>
 * Callees:
 *     KiSetTimerEx @ 0x140316810 (KiSetTimerEx.c)
 */

BOOLEAN __stdcall KeSetTimerEx(PKTIMER Timer, LARGE_INTEGER DueTime, LONG Period, PKDPC Dpc)
{
  return KiSetTimerEx((_DWORD)Timer, DueTime.LowPart, Period, 0, (__int64)Dpc);
}
