/*
 * XREFs of HUBMISC_StartOverCurrentTimer @ 0x140033730
 * Callers:
 *     HUBPSM20_StartingOverCurrentTimer @ 0x1400133B0 (HUBPSM20_StartingOverCurrentTimer.c)
 * Callees:
 *     WPP_RECORDER_SF_qd @ 0x1400074C8 (WPP_RECORDER_SF_qd.c)
 */

__int64 __fastcall HUBMISC_StartOverCurrentTimer(__int64 a1)
{
  int v3; // [rsp+30h] [rbp-18h]

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v3 = 500;
    WPP_RECORDER_SF_qd(
      *(_QWORD *)(a1 + 1432),
      2u,
      4u,
      0x37u,
      (__int64)&WPP_a8f221bb5af334040897444f02cc5603_Traceguids,
      a1,
      v3);
  }
  return ExSetTimer(*(_QWORD *)(a1 + 1312), -5000000LL, 0LL, 0LL);
}
