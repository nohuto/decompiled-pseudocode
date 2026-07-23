/*
 * XREFs of TpSetTimer @ 0x1800F8690
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __cdecl TpSetTimer(PTP_TIMER Timer, PLARGE_INTEGER DueTime, ULONG Period, ULONG WindowLength)
{
  TpSetTimerEx(Timer, DueTime, Period, WindowLength);
}
