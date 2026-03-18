/*
 * XREFs of HUBDSM_EnablingU2 @ 0x140022440
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E8 (WPP_RECORDER_SF_d.c)
 *     HUBSM_AddEvent @ 0x14000A83C (HUBSM_AddEvent.c)
 *     HUBMISC_ControlTransfer @ 0x14002EDA8 (HUBMISC_ControlTransfer.c)
 */

__int64 __fastcall HUBDSM_EnablingU2(__int64 a1)
{
  __int64 v1; // rbx
  int v2; // eax
  __int64 v4; // [rsp+28h] [rbp-30h]

  v1 = *(_QWORD *)(a1 + 960);
  *(_BYTE *)(v1 + 408) &= 0x1Cu;
  *(_BYTE *)(v1 + 409) = 3;
  *(_DWORD *)(v1 + 412) = 0;
  *(_WORD *)(v1 + 410) = 49;
  v2 = HUBMISC_ControlTransfer(
         *(_QWORD *)v1,
         *(_QWORD *)(v1 + 24),
         v1,
         (int)v1 + 256,
         (__int64)HUBDTX_ControlTransferComplete,
         0LL,
         0,
         1,
         *(_BYTE *)(v1 + 1520));
  if ( v2 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v4) = v2;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(v1 + 8) + 1432LL),
        2u,
        5u,
        0x6Cu,
        (__int64)&WPP_736cb17edbb73fe74dd9f642bb1bec68_Traceguids,
        v4);
    }
    HUBSM_AddEvent(v1 + 512, 4004);
  }
  return 1000LL;
}
