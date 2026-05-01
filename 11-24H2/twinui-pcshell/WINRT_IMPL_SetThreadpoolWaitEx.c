/*
 * XREFs of WINRT_IMPL_SetThreadpoolWaitEx @ 0x1802DB165
 * Callers:
 *     ?fire_immediately@signal_awaiter@impl@winrt@@AEAAXXZ @ 0x180336B14 (-fire_immediately@signal_awaiter@impl@winrt@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
BOOL __stdcall WINRT_IMPL_SetThreadpoolWaitEx(PTP_WAIT pwa, HANDLE h, PFILETIME pftTimeout, PVOID Reserved)
{
  return SetThreadpoolWaitEx(pwa, h, pftTimeout, Reserved);
}
