/*
 * XREFs of SetThreadpoolWait_0 @ 0x1802D2CC3
 * Callers:
 *     ?create_threadpool_wait@signal_awaiter@impl@winrt@@AEAAXXZ @ 0x180335F80 (-create_threadpool_wait@signal_awaiter@impl@winrt@@AEAAXXZ.c)
 *     ?fire_immediately@signal_awaiter@impl@winrt@@AEAAXXZ @ 0x180336B14 (-fire_immediately@signal_awaiter@impl@winrt@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall SetThreadpoolWait_0(PTP_WAIT pwa, HANDLE h, PFILETIME pftTimeout)
{
  SetThreadpoolWait(pwa, h, pftTimeout);
}
