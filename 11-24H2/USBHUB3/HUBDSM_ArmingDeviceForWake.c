/*
 * XREFs of HUBDSM_ArmingDeviceForWake @ 0x14001FCF0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E8 (WPP_RECORDER_SF_d.c)
 *     HUBSM_AddEvent @ 0x14000A83C (HUBSM_AddEvent.c)
 *     HUBMISC_ControlTransfer @ 0x14002EDA8 (HUBMISC_ControlTransfer.c)
 */

__int64 __fastcall HUBDSM_ArmingDeviceForWake(__int64 a1)
{
  __int64 v1; // rbx
  char v2; // cl
  char v3; // cl
  __int16 v4; // ax
  int v5; // eax
  __int64 v7; // [rsp+28h] [rbp-30h]

  v1 = *(_QWORD *)(a1 + 960);
  _InterlockedOr((volatile signed __int32 *)(*(_QWORD *)(v1 + 16) + 32LL), 2u);
  v2 = *(_BYTE *)(v1 + 408) & 0x1F;
  *(_BYTE *)(v1 + 409) = 3;
  *(_WORD *)(v1 + 414) = 0;
  if ( (*(_DWORD *)(v1 + 1464) & 0x800) != 0 )
  {
    *(_WORD *)(v1 + 412) = 768;
    v3 = v2 & 0xFC | 1;
    v4 = 0;
  }
  else
  {
    *(_WORD *)(v1 + 412) = 0;
    v4 = 1;
    v3 = v2 & 0xFC;
  }
  *(_BYTE *)(v1 + 408) = v3;
  *(_WORD *)(v1 + 410) = v4;
  v5 = HUBMISC_ControlTransfer(
         *(_QWORD *)v1,
         *(_QWORD *)(v1 + 24),
         v1,
         (int)v1 + 256,
         (__int64)HUBDTX_ControlTransferComplete,
         0LL,
         0,
         1,
         *(_BYTE *)(v1 + 1520));
  if ( v5 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v7) = v5;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(v1 + 8) + 1432LL),
        2u,
        5u,
        0x22u,
        (__int64)&WPP_736cb17edbb73fe74dd9f642bb1bec68_Traceguids,
        v7);
    }
    HUBSM_AddEvent(v1 + 512, 4004);
  }
  return 1000LL;
}
