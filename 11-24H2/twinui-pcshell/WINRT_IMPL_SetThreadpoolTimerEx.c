/*
 * XREFs of WINRT_IMPL_SetThreadpoolTimerEx @ 0x1802DB171
 * Callers:
 *     ?fire_immediately@timespan_awaiter@impl@winrt@@AEAAXXZ @ 0x180336B5C (-fire_immediately@timespan_awaiter@impl@winrt@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
BOOL __stdcall WINRT_IMPL_SetThreadpoolTimerEx(
        PTP_TIMER pti,
        PFILETIME pftDueTime,
        DWORD msPeriod,
        DWORD msWindowLength)
{
  return SetThreadpoolTimerEx(pti, pftDueTime, msPeriod, msWindowLength);
}
