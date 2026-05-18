/*
 * XREFs of sub_18009671C @ 0x18009671C
 * Callers:
 *     sub_1800970DC @ 0x1800970DC (sub_1800970DC.c)
 *     sub_1800973E4 @ 0x1800973E4 (sub_1800973E4.c)
 *     sub_1800976EC @ 0x1800976EC (sub_1800976EC.c)
 *     sub_1800977BC @ 0x1800977BC (sub_1800977BC.c)
 *     sub_1800978E0 @ 0x1800978E0 (sub_1800978E0.c)
 *     sub_180097A70 @ 0x180097A70 (sub_180097A70.c)
 *     sub_180098368 @ 0x180098368 (sub_180098368.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180010544 @ 0x180010544 (sub_180010544.c)
 *     sub_180011010 @ 0x180011010 (sub_180011010.c)
 *     sub_180096B90 @ 0x180096B90 (sub_180096B90.c)
 */

__int64 __fastcall sub_18009671C(__int64 a1, __int64 *a2)
{
  __int64 v4; // rax
  __int64 v5; // r8
  volatile signed __int32 *v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 result; // rax
  __int128 v11; // [rsp+20h] [rbp-18h]

  sub_180096B90();
  v4 = *a2;
  v5 = a2[1];
  *a2 = 0LL;
  a2[1] = 0LL;
  *(_QWORD *)a1 = v4;
  v6 = *(volatile signed __int32 **)(a1 + 8);
  *(_QWORD *)(a1 + 8) = v5;
  if ( v6 )
    sub_180010544(v6);
  v7 = a2[2];
  v8 = a2[3];
  a2[2] = 0LL;
  a2[3] = 0LL;
  *(_QWORD *)(a1 + 16) = v7;
  v9 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(a1 + 24) = v8;
  if ( v9 )
    sub_18001050C(v9);
  *(_DWORD *)(a1 + 32) = *((_DWORD *)a2 + 8);
  *(_DWORD *)(a1 + 36) = *((_DWORD *)a2 + 9);
  *(_OWORD *)(a1 + 40) = *(_OWORD *)(a2 + 5);
  *(_OWORD *)(a1 + 56) = *(_OWORD *)(a2 + 7);
  *(_OWORD *)(a1 + 72) = *(_OWORD *)(a2 + 9);
  *(_OWORD *)(a1 + 88) = *(_OWORD *)(a2 + 11);
  *(_OWORD *)(a1 + 104) = *(_OWORD *)(a2 + 13);
  *(_OWORD *)(a1 + 120) = *(_OWORD *)(a2 + 15);
  *(_QWORD *)(a1 + 136) = a2[17];
  sub_180011010((_QWORD *)(a1 + 144), a2 + 18);
  sub_180011010((_QWORD *)(a1 + 160), a2 + 20);
  *(_QWORD *)&v11 = 0LL;
  *(_DWORD *)((char *)&v11 + 9) = 0;
  *(_WORD *)((char *)&v11 + 13) = 0;
  HIBYTE(v11) = 0;
  result = a1;
  BYTE8(v11) = 1;
  *((_DWORD *)a2 + 9) = 4;
  *(_OWORD *)(a2 + 5) = v11;
  a2[7] = 0LL;
  a2[8] = 0LL;
  a2[9] = 0LL;
  a2[10] = 0LL;
  a2[11] = 0LL;
  a2[12] = 0LL;
  a2[13] = 0LL;
  a2[14] = 0LL;
  a2[15] = 0LL;
  a2[16] = 0LL;
  a2[17] = 0LL;
  return result;
}
