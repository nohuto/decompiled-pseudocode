/*
 * XREFs of sub_180093980 @ 0x180093980
 * Callers:
 *     sub_180094A00 @ 0x180094A00 (sub_180094A00.c)
 * Callees:
 *     sub_1800938E0 @ 0x1800938E0 (sub_1800938E0.c)
 */

__int64 __fastcall sub_180093980(__int64 a1)
{
  int v2; // eax
  __int128 v3; // xmm1
  __int128 v4; // xmm0
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int64 result; // rax
  __int128 v8; // xmm0

  *(_BYTE *)(a1 + 1088) = 1;
  sub_1800938E0((__int64 *)(a1 + 8), a1 + 488);
  v2 = *(_DWORD *)(a1 + 904);
  v3 = *(_OWORD *)(a1 + 864);
  *(_OWORD *)(a1 + 728) = *(_OWORD *)(a1 + 848);
  v4 = *(_OWORD *)(a1 + 880);
  *(_OWORD *)(a1 + 744) = v3;
  *(_QWORD *)&v3 = *(_QWORD *)(a1 + 896);
  *(_OWORD *)(a1 + 760) = v4;
  v5 = *(_OWORD *)(a1 + 1028);
  *(_QWORD *)(a1 + 776) = v3;
  v6 = *(_OWORD *)(a1 + 1044);
  *(_DWORD *)(a1 + 784) = v2;
  result = *(unsigned int *)(a1 + 1084);
  *(_OWORD *)(a1 + 908) = v5;
  v8 = *(_OWORD *)(a1 + 1060);
  *(_OWORD *)(a1 + 924) = v6;
  *(_QWORD *)&v6 = *(_QWORD *)(a1 + 1076);
  *(_OWORD *)(a1 + 940) = v8;
  *(_QWORD *)(a1 + 956) = v6;
  *(_DWORD *)(a1 + 964) = result;
  return result;
}
