/*
 * XREFs of HUBDTX_SetSelUsingControlTransfer @ 0x14002C1FC
 * Callers:
 *     HUBDSM_SettingSEL @ 0x140024A90 (HUBDSM_SettingSEL.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E8 (WPP_RECORDER_SF_d.c)
 *     HUBSM_AddEvent @ 0x14000A83C (HUBSM_AddEvent.c)
 *     HUBMISC_ControlTransfer @ 0x14002EDA8 (HUBMISC_ControlTransfer.c)
 */

__int64 __fastcall HUBDTX_SetSelUsingControlTransfer(__int64 *a1)
{
  __int64 v1; // r9
  _BYTE *v2; // r14
  unsigned __int16 v3; // r8
  int v5; // esi
  unsigned __int16 v6; // dx
  unsigned __int16 v7; // r11
  unsigned __int16 v8; // r8
  __int64 v9; // rdi
  int v10; // eax
  unsigned int v11; // edx
  char v12; // al
  __int64 v13; // rdx
  __int64 result; // rax
  __int64 v15; // [rsp+28h] [rbp-40h]

  v1 = *a1;
  v2 = (char *)a1 + 2204;
  v3 = *((_WORD *)a1 + 1100);
  v5 = *(unsigned __int8 *)(*a1 + 240);
  if ( v3 <= *(_WORD *)(*a1 + 2490) )
    v3 = *(_WORD *)(*a1 + 2490);
  v6 = *(_WORD *)(v1 + 2494) + (1000 * (v5 - *(unsigned __int8 *)(v1 + 2496)) + 500) / 1000;
  if ( v3 <= v6 )
  {
    *((_BYTE *)a1 + 2205) = v6;
  }
  else
  {
    *((_BYTE *)a1 + 2205) = v3;
    _InterlockedOr((volatile signed __int32 *)a1 + 556, 1u);
  }
  v7 = *((_WORD *)a1 + 1101);
  *((_WORD *)a1 + 1105) = v3 + *(_WORD *)(v1 + 2502) + ((unsigned int)*(unsigned __int8 *)(*a1 + 1203) + 5) / 0xA;
  if ( v7 <= *(_WORD *)(v1 + 2492) )
    v7 = *(_WORD *)(v1 + 2492);
  v8 = *(_WORD *)(v1 + 2498) + (__int16)(1000 * (v5 - *(unsigned __int8 *)(v1 + 2500)) + 500) / 1000;
  if ( v7 <= v8 )
  {
    *((_WORD *)a1 + 1104) = v8;
  }
  else
  {
    *((_WORD *)a1 + 1104) = v7;
    _InterlockedOr((volatile signed __int32 *)a1 + 556, 2u);
    v8 = *((_WORD *)a1 + 1104);
  }
  v9 = *a1;
  v10 = *((unsigned __int16 *)a1 + 1294);
  *((_WORD *)a1 + 1106) = v7 + *(_WORD *)(v1 + 2504) + ((unsigned int)*(unsigned __int8 *)(*a1 + 1203) + 5) / 0xA;
  v11 = *((unsigned __int16 *)a1 + 1295);
  if ( (_BYTE)v5 )
    v11 = (800 * v5 + 2200 + (v5 + 1) * (v10 + v11)) / 0x3E8;
  else
    LOWORD(v11) = v10 + v11;
  *v2 = *((_BYTE *)a1 + 2205) + v11 + 5;
  *((_WORD *)a1 + 1103) = v11 + v8 + 5;
  v12 = *((_BYTE *)a1 + 1520);
  *((_BYTE *)a1 + 408) &= 0x1Cu;
  v13 = a1[3];
  *((_BYTE *)a1 + 409) = 48;
  *((_DWORD *)a1 + 103) = 393216;
  *((_WORD *)a1 + 205) = 0;
  result = HUBMISC_ControlTransfer(
             v9,
             v13,
             (_DWORD)a1,
             (int)a1 + 256,
             (__int64)HUBDTX_ControlTransferComplete,
             (__int64)v2,
             6,
             1,
             v12);
  if ( (int)result < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v15) = result;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1[1] + 1432),
        2u,
        5u,
        0x6Du,
        (__int64)&WPP_736cb17edbb73fe74dd9f642bb1bec68_Traceguids,
        v15);
    }
    return HUBSM_AddEvent((__int64)(a1 + 64), 4004);
  }
  return result;
}
