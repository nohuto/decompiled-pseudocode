/*
 * XREFs of ?fire_immediately@timespan_awaiter@impl@winrt@@AEAAXXZ @ 0x180336B5C
 * Callers:
 *     ?_lambda_invoker_cdecl_@_lambda_cc4fe2aa99c177bf5bc948fdc2bace84_@@CA@PEAX@Z @ 0x180329460 (-_lambda_invoker_cdecl_@_lambda_cc4fe2aa99c177bf5bc948fdc2bace84_@@CA@PEAX@Z.c)
 *     ?create_threadpool_timer@timespan_awaiter@impl@winrt@@AEAAXXZ @ 0x180335ED8 (-create_threadpool_timer@timespan_awaiter@impl@winrt@@AEAAXXZ.c)
 * Callees:
 *     WINRT_IMPL_SetThreadpoolTimer @ 0x1802D2AA4 (WINRT_IMPL_SetThreadpoolTimer.c)
 *     WINRT_IMPL_SetThreadpoolTimerEx @ 0x1802DB171 (WINRT_IMPL_SetThreadpoolTimerEx.c)
 */

void __fastcall winrt::impl::timespan_awaiter::fire_immediately(PTP_TIMER *this)
{
  struct _FILETIME pftDueTime; // [rsp+30h] [rbp+8h] BYREF

  if ( WINRT_IMPL_SetThreadpoolTimerEx(this[1], 0LL, 0, 0) )
  {
    pftDueTime = 0LL;
    WINRT_IMPL_SetThreadpoolTimer(this[1], &pftDueTime, 0, 0);
  }
}
