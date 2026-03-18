/*
 * XREFs of HUBPSM30_SettingU1TImeOut @ 0x140014470
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E8 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dD @ 0x1400025E4 (WPP_RECORDER_SF_dD.c)
 *     HUBMISC_ControlTransfer @ 0x14002EC7C (HUBMISC_ControlTransfer.c)
 *     _guard_dispatch_icall @ 0x140045D00 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HUBPSM30_SettingU1TImeOut(__int64 a1)
{
  __int64 v1; // rbx
  char v2; // al
  __int64 *v3; // rdi
  int v4; // eax
  int v6; // [rsp+28h] [rbp-30h]
  __int64 v7; // [rsp+28h] [rbp-30h]
  int v8; // [rsp+30h] [rbp-28h]

  v1 = *(_QWORD *)(a1 + 960);
  v2 = *(_BYTE *)(v1 + 168) & 0x1C;
  *(_BYTE *)(v1 + 169) = 3;
  *(_WORD *)(v1 + 170) = 23;
  *(_BYTE *)(v1 + 168) = v2 | 0x23;
  *(_BYTE *)(v1 + 173) = *(_BYTE *)(*(_QWORD *)(v1 + 1328) + 2212LL);
  *(_BYTE *)(v1 + 172) = *(_BYTE *)(v1 + 200);
  *(_WORD *)(v1 + 174) = 0;
  v3 = (__int64 *)(v1 + 1432);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v8 = *(unsigned __int8 *)(*(_QWORD *)(v1 + 1328) + 2212LL);
    v6 = *(unsigned __int16 *)(v1 + 200);
    WPP_RECORDER_SF_dD(*v3, 4u, 4u, 0x3Cu, (__int64)&WPP_70469c384dd13630d566350a6f2705ad_Traceguids, v6, v8);
  }
  v4 = HUBMISC_ControlTransfer(
         *(_QWORD *)v1,
         *(_QWORD *)(*(_QWORD *)v1 + 248LL),
         v1,
         (int)v1 + 16,
         (__int64)HUBHTX_PortControlTransferComplete,
         0LL,
         0,
         0,
         *(_BYTE *)(*(_QWORD *)v1 + 2280LL));
  if ( v4 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v7) = v4;
      WPP_RECORDER_SF_d(*v3, 2u, 4u, 0x3Du, (__int64)&WPP_70469c384dd13630d566350a6f2705ad_Traceguids, v7);
    }
    (*(void (__fastcall **)(__int64, __int64))(v1 + 1240))(v1, 3008LL);
  }
  return 1000LL;
}
