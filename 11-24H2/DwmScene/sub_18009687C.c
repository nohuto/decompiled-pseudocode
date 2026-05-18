/*
 * XREFs of sub_18009687C @ 0x18009687C
 * Callers:
 *     sub_18009723C @ 0x18009723C (sub_18009723C.c)
 *     sub_180097544 @ 0x180097544 (sub_180097544.c)
 *     sub_18009784C @ 0x18009784C (sub_18009784C.c)
 *     sub_18009791C @ 0x18009791C (sub_18009791C.c)
 *     sub_180097A40 @ 0x180097A40 (sub_180097A40.c)
 *     sub_180097BD0 @ 0x180097BD0 (sub_180097BD0.c)
 *     sub_1800984C8 @ 0x1800984C8 (sub_1800984C8.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180010644 @ 0x180010644 (sub_180010644.c)
 *     sub_180011110 @ 0x180011110 (sub_180011110.c)
 *     sub_180096CF0 @ 0x180096CF0 (sub_180096CF0.c)
 */

__int64 __fastcall sub_18009687C(__int64 a1, __int64 *a2)
{
  __int64 v4; // rax
  __int64 v5; // r8
  volatile signed __int32 *v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 result; // rax
  __int128 v11; // [rsp+20h] [rbp-18h]

  sub_180096CF0();
  v4 = *a2;
  v5 = a2[1];
  *a2 = 0LL;
  a2[1] = 0LL;
  *(_QWORD *)a1 = v4;
  v6 = *(volatile signed __int32 **)(a1 + 8);
  *(_QWORD *)(a1 + 8) = v5;
  if ( v6 )
    sub_180010644(v6);
  v7 = a2[2];
  v8 = a2[3];
  a2[2] = 0LL;
  a2[3] = 0LL;
  *(_QWORD *)(a1 + 16) = v7;
  v9 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(a1 + 24) = v8;
  if ( v9 )
    sub_18001060C(v9);
  *(_DWORD *)(a1 + 32) = *((_DWORD *)a2 + 8);
  *(_DWORD *)(a1 + 36) = *((_DWORD *)a2 + 9);
  *(_OWORD *)(a1 + 40) = *(_OWORD *)(a2 + 5);
  *(_OWORD *)(a1 + 56) = *(_OWORD *)(a2 + 7);
  *(_OWORD *)(a1 + 72) = *(_OWORD *)(a2 + 9);
  *(_OWORD *)(a1 + 88) = *(_OWORD *)(a2 + 11);
  *(_OWORD *)(a1 + 104) = *(_OWORD *)(a2 + 13);
  *(_OWORD *)(a1 + 120) = *(_OWORD *)(a2 + 15);
  *(_QWORD *)(a1 + 136) = a2[17];
  sub_180011110((_QWORD *)(a1 + 144), a2 + 18);
  sub_180011110((_QWORD *)(a1 + 160), a2 + 20);
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
