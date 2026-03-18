/*
 * XREFs of HUBMISC_StartD3ColdReconnectTimer @ 0x140033900
 * Callers:
 *     HUBPSM30_StartingTimerForAllowingReconnectOnResumingFromD3Cold @ 0x140013530 (HUBPSM30_StartingTimerForAllowingReconnectOnResumingFromD3Cold.c)
 * Callees:
 *     WPP_RECORDER_SF_qd @ 0x1400074C8 (WPP_RECORDER_SF_qd.c)
 */

__int64 __fastcall HUBMISC_StartD3ColdReconnectTimer(__int64 a1)
{
  unsigned int *v2; // rbx
  int v4; // [rsp+30h] [rbp-18h]

  v2 = (unsigned int *)(a1 + 1440);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v4 = *v2;
    WPP_RECORDER_SF_qd(
      *(_QWORD *)(a1 + 1432),
      4u,
      4u,
      0x38u,
      (__int64)&WPP_dde998bf8bb3310d95d4227a99ba80b7_Traceguids,
      a1,
      v4);
  }
  return ExSetTimer(*(_QWORD *)(a1 + 1312), -10000LL * *v2, 0LL, 0LL);
}
