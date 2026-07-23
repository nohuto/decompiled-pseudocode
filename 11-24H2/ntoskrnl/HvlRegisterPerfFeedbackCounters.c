/*
 * XREFs of HvlRegisterPerfFeedbackCounters @ 0x140586924
 * Callers:
 *     PpmPerfRegisterHvPerfStateCounters @ 0x1407637F0 (PpmPerfRegisterHvPerfStateCounters.c)
 * Callees:
 *     HvlpSetPowerProperty @ 0x1404B88E0 (HvlpSetPowerProperty.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall HvlRegisterPerfFeedbackCounters(int a1, __int64 a2)
{
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v11[7]; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v12; // [rsp+90h] [rbp-70h]

  DWORD1(v11[0]) = 0;
  memset_0(v11, 0, 0x214uLL);
  v4 = *(_OWORD *)a2;
  LODWORD(v11[0]) = 1;
  v5 = *(_OWORD *)(a2 + 16);
  DWORD2(v11[0]) = a1;
  v11[1] = v4;
  v6 = *(_OWORD *)(a2 + 32);
  v11[2] = v5;
  v7 = *(_OWORD *)(a2 + 48);
  v11[3] = v6;
  v8 = *(_OWORD *)(a2 + 64);
  v11[4] = v7;
  v9 = *(_OWORD *)(a2 + 80);
  v11[5] = v8;
  v12 = *(_QWORD *)(a2 + 96);
  v11[6] = v9;
  return HvlpSetPowerProperty(v11);
}
