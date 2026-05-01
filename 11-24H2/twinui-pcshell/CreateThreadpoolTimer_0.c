/*
 * XREFs of CreateThreadpoolTimer_0 @ 0x1802D2ABC
 * Callers:
 *     ?create_threadpool_timer@timespan_awaiter@impl@winrt@@AEAAXXZ @ 0x180335ED8 (-create_threadpool_timer@timespan_awaiter@impl@winrt@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
PTP_TIMER __stdcall CreateThreadpoolTimer_0(PTP_TIMER_CALLBACK pfnti, PVOID pv, PTP_CALLBACK_ENVIRON pcbe)
{
  return CreateThreadpoolTimer(pfnti, pv, pcbe);
}
