/*
 * XREFs of HUBDSM_SetttingIsochDelay @ 0x140024BD0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E8 (WPP_RECORDER_SF_d.c)
 *     HUBSM_AddEvent @ 0x14000A83C (HUBSM_AddEvent.c)
 *     HUBMISC_ControlTransfer @ 0x14002EDA8 (HUBMISC_ControlTransfer.c)
 */

__int64 __fastcall HUBDSM_SetttingIsochDelay(__int64 a1)
{
  __int64 v1; // rbx
  __int16 v2; // dx
  int v3; // eax
  __int64 v5; // [rsp+28h] [rbp-30h]

  v1 = *(_QWORD *)(a1 + 960);
  v2 = *(_WORD *)(v1 + 2590) + *(_WORD *)(*(_QWORD *)v1 + 1204LL) + *(_WORD *)(*(_QWORD *)v1 + 2508LL);
  *(_BYTE *)(v1 + 408) &= 0x1Cu;
  *(_WORD *)(v1 + 410) = v2;
  *(_BYTE *)(v1 + 409) = 49;
  *(_DWORD *)(v1 + 412) = 0;
  v3 = HUBMISC_ControlTransfer(
         *(_QWORD *)v1,
         *(_QWORD *)(v1 + 24),
         v1,
         (int)v1 + 256,
         (__int64)HUBDTX_ControlTransferComplete,
         0LL,
         0,
         1,
         *(_BYTE *)(v1 + 1520));
  if ( v3 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v5) = v3;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(v1 + 8) + 1432LL),
        2u,
        5u,
        0x6Fu,
        (__int64)&WPP_736cb17edbb73fe74dd9f642bb1bec68_Traceguids,
        v5);
    }
    HUBSM_AddEvent(v1 + 512, 4004);
  }
  return 1000LL;
}
