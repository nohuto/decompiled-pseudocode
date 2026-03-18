/*
 * XREFs of FWUPDATE_GetMMIO @ 0x14004180C
 * Callers:
 *     HUBHSM_ReadingUsb4DromStatus @ 0x140009340 (HUBHSM_ReadingUsb4DromStatus.c)
 *     HUBHSM_ReadingUsb4DromDwordOffset @ 0x140009C30 (HUBHSM_ReadingUsb4DromDwordOffset.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E8 (WPP_RECORDER_SF_d.c)
 *     HUBMISC_ControlTransfer @ 0x14002EC7C (HUBMISC_ControlTransfer.c)
 */

__int64 __fastcall FWUPDATE_GetMMIO(__int64 a1, __int16 a2, __int64 a3)
{
  char v3; // al
  int v5; // edi
  __int64 v7; // [rsp+28h] [rbp-30h]

  v3 = *(_BYTE *)(a1 + 960);
  *(_BYTE *)(a1 + 961) = 64;
  *(_WORD *)(a1 + 962) = 1024;
  *(_BYTE *)(a1 + 960) = v3 & 0x1C | 0xC0;
  *(_WORD *)(a1 + 964) = a2;
  *(_WORD *)(a1 + 966) = 4;
  v5 = HUBMISC_ControlTransfer(
         a1,
         *(_QWORD *)(a1 + 248),
         a1,
         (_QWORD *)(a1 + 808),
         (__int64)FWUPDATE_HubVendorControlTransferComplete,
         a3,
         4,
         0,
         *(_BYTE *)(a1 + 2280));
  if ( v5 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v7) = v5;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1 + 2528),
      2u,
      3u,
      0x32u,
      (__int64)&WPP_2fd11ae104fa34a9334eddada324a17a_Traceguids,
      v7);
  }
  return (unsigned int)v5;
}
