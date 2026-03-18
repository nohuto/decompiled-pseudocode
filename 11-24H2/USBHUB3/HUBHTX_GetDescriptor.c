/*
 * XREFs of HUBHTX_GetDescriptor @ 0x1400046D0
 * Callers:
 *     HUBHTX_GetHubDescriptorUsingControlTransfer @ 0x140004914 (HUBHTX_GetHubDescriptorUsingControlTransfer.c)
 *     HUBHSM_GettingHubConfigurationDescriptorWithDefaultLength @ 0x140008F30 (HUBHSM_GettingHubConfigurationDescriptorWithDefaultLength.c)
 *     HUBHSM_GettingHubConfigurationDescriptorWithReturnedLength @ 0x140009070 (HUBHSM_GettingHubConfigurationDescriptorWithReturnedLength.c)
 * Callees:
 *     WPP_RECORDER_SF_c @ 0x140006A64 (WPP_RECORDER_SF_c.c)
 *     WPP_RECORDER_SF_cd @ 0x140006F70 (WPP_RECORDER_SF_cd.c)
 *     HUBMISC_ControlTransfer @ 0x14002EDA8 (HUBMISC_ControlTransfer.c)
 */

__int64 __fastcall HUBHTX_GetDescriptor(__int64 a1, __int64 a2, int a3, char a4, int a5, char a6)
{
  char v7; // al
  __int64 v9; // rbp

  *(_BYTE *)(a1 + 969) = 6;
  *(_BYTE *)(a1 + 971) = a4;
  v7 = *(_BYTE *)(a1 + 968);
  *(_WORD *)(a1 + 974) = a3;
  v9 = a2;
  *(_BYTE *)(a1 + 968) = v7 & 0x9C | (a6 != 0 ? -96 : 0x80);
  *(_BYTE *)(a1 + 970) = 0;
  *(_WORD *)(a1 + 972) = 0;
  if ( a6 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 4;
      WPP_RECORDER_SF_c(
        *(_QWORD *)(a1 + 2536),
        a2,
        3,
        15,
        (__int64)&WPP_70469c384dd13630d566350a6f2705ad_Traceguids,
        a4);
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_cd(*(_QWORD *)(a1 + 2536), a2, a3, a4);
  }
  return HUBMISC_ControlTransfer(
           a1,
           *(_QWORD *)(a1 + 248),
           a1,
           (int)a1 + 816,
           (__int64)HUBHTX_HubControlTransferComplete,
           v9,
           a3,
           1,
           *(_BYTE *)(a1 + 2288));
}
