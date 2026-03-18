/*
 * XREFs of HUBHTX_GetHubStatusUsingControlTransfer @ 0x1400049B8
 * Callers:
 *     HUBHSM_GettingHubPortStatus @ 0x1400091E0 (HUBHSM_GettingHubPortStatus.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E8 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x14000698C (WPP_RECORDER_SF_.c)
 *     HUBSM_AddEvent @ 0x14000A83C (HUBSM_AddEvent.c)
 *     HUBMISC_ControlTransfer @ 0x14002EDA8 (HUBMISC_ControlTransfer.c)
 */

__int64 __fastcall HUBHTX_GetHubStatusUsingControlTransfer(__int64 a1)
{
  __int64 v1; // rsi
  __int64 *v3; // rdi
  __int64 result; // rax
  __int64 v5; // [rsp+28h] [rbp-40h]

  v1 = a1 + 796;
  *(_BYTE *)(a1 + 968) = *(_BYTE *)(a1 + 968) & 0x1C | 0xA0;
  *(_BYTE *)(a1 + 969) = 0;
  *(_DWORD *)(a1 + 970) = 0;
  *(_WORD *)(a1 + 974) = 4;
  *(_DWORD *)(a1 + 800) = *(_DWORD *)(a1 + 796);
  v3 = (__int64 *)(a1 + 2536);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(*v3, 4, 3, 25, (__int64)&WPP_70469c384dd13630d566350a6f2705ad_Traceguids);
  result = HUBMISC_ControlTransfer(
             a1,
             *(_QWORD *)(a1 + 248),
             a1,
             (int)a1 + 816,
             (__int64)HUBHTX_HubControlTransferComplete,
             v1,
             4,
             0,
             *(_BYTE *)(a1 + 2288));
  if ( (int)result < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v5) = result;
      WPP_RECORDER_SF_d(*v3, 2u, 3u, 0x1Au, (__int64)&WPP_70469c384dd13630d566350a6f2705ad_Traceguids, v5);
    }
    return HUBSM_AddEvent(a1 + 1280, 2004LL);
  }
  return result;
}
