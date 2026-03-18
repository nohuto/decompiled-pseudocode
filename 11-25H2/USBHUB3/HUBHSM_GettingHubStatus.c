/*
 * XREFs of HUBHSM_GettingHubStatus @ 0x140009210
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E8 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x14000698C (WPP_RECORDER_SF_.c)
 *     HUBSM_AddEvent @ 0x14000A83C (HUBSM_AddEvent.c)
 *     HUBMISC_ControlTransfer @ 0x14002EC7C (HUBMISC_ControlTransfer.c)
 */

__int64 __fastcall HUBHSM_GettingHubStatus(__int64 a1)
{
  __int64 v1; // rbx
  __int64 *v2; // rdi
  int v3; // eax
  __int64 v5; // [rsp+28h] [rbp-40h]

  v1 = *(_QWORD *)(a1 + 960);
  *(_BYTE *)(v1 + 960) = *(_BYTE *)(v1 + 960) & 0x1C | 0x80;
  *(_BYTE *)(v1 + 961) = 0;
  *(_DWORD *)(v1 + 962) = 0;
  *(_WORD *)(v1 + 966) = 2;
  v2 = (__int64 *)(v1 + 2528);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(*v2, 4, 3, 23, (__int64)&WPP_70469c384dd13630d566350a6f2705ad_Traceguids);
  v3 = HUBMISC_ControlTransfer(
         v1,
         *(_QWORD *)(v1 + 248),
         v1,
         (int)v1 + 808,
         (__int64)HUBHTX_HubControlTransferComplete,
         v1 + 804,
         2,
         0,
         *(_BYTE *)(v1 + 2280));
  if ( v3 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v5) = v3;
      WPP_RECORDER_SF_d(*v2, 2u, 3u, 0x18u, (__int64)&WPP_70469c384dd13630d566350a6f2705ad_Traceguids, v5);
    }
    HUBSM_AddEvent(v1 + 1272, 2004LL);
  }
  return 1000LL;
}
