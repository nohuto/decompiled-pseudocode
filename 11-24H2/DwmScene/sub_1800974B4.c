/*
 * XREFs of sub_1800974B4 @ 0x1800974B4
 * Callers:
 *     sub_180097544 @ 0x180097544 (sub_180097544.c)
 *     sub_180097BD0 @ 0x180097BD0 (sub_180097BD0.c)
 * Callees:
 *     sub_180097468 @ 0x180097468 (sub_180097468.c)
 */

__int64 __fastcall sub_1800974B4(__int64 a1, __int64 a2)
{
  *(_QWORD *)a1 = *(_QWORD *)a2;
  *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(a2 + 24);
  *(_OWORD *)(a1 + 32) = *(_OWORD *)(a2 + 32);
  *(_OWORD *)(a1 + 48) = *(_OWORD *)(a2 + 48);
  *(_OWORD *)(a1 + 64) = *(_OWORD *)(a2 + 64);
  *(_OWORD *)(a1 + 80) = *(_OWORD *)(a2 + 80);
  *(_OWORD *)(a1 + 96) = *(_OWORD *)(a2 + 96);
  *(_QWORD *)(a1 + 112) = *(_QWORD *)(a2 + 112);
  *(_BYTE *)(a1 + 120) = *(_BYTE *)(a2 + 120);
  *(_QWORD *)(a1 + 128) = *(_QWORD *)(a2 + 128);
  sub_180097468((__int64 *)(a1 + 136), (__int64 *)(a2 + 136));
  return a1;
}
