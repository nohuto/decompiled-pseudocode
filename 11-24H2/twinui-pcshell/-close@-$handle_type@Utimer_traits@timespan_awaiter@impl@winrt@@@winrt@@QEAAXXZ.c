/*
 * XREFs of ?close@?$handle_type@Utimer_traits@timespan_awaiter@impl@winrt@@@winrt@@QEAAXXZ @ 0x180335E3C
 * Callers:
 *     ??1timespan_awaiter@impl@winrt@@QEAA@XZ @ 0x18032D458 (--1timespan_awaiter@impl@winrt@@QEAA@XZ.c)
 *     ?create_threadpool_timer@timespan_awaiter@impl@winrt@@AEAAXXZ @ 0x180335ED8 (-create_threadpool_timer@timespan_awaiter@impl@winrt@@AEAAXXZ.c)
 * Callees:
 *     WINRT_IMPL_CloseThreadpoolTimer @ 0x1802D2A80 (WINRT_IMPL_CloseThreadpoolTimer.c)
 */

void __fastcall winrt::handle_type<winrt::impl::timespan_awaiter::timer_traits>::close(struct _TP_TIMER **a1)
{
  struct _TP_TIMER *v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    WINRT_IMPL_CloseThreadpoolTimer(v2);
    *a1 = 0LL;
  }
}
