/*
 * XREFs of HUBPSM30_StartingTimerForAllowingReconnectOnResumingFromD3Cold @ 0x140013530
 * Callers:
 *     <none>
 * Callees:
 *     HUBMISC_StartD3ColdReconnectTimer @ 0x140033900 (HUBMISC_StartD3ColdReconnectTimer.c)
 */

__int64 __fastcall HUBPSM30_StartingTimerForAllowingReconnectOnResumingFromD3Cold(__int64 a1)
{
  HUBMISC_StartD3ColdReconnectTimer(*(_QWORD *)(a1 + 960));
  return 3013LL;
}
