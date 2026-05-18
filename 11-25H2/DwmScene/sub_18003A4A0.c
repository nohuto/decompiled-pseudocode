/*
 * XREFs of sub_18003A4A0 @ 0x18003A4A0
 * Callers:
 *     sub_18003A3A8 @ 0x18003A3A8 (sub_18003A3A8.c)
 * Callees:
 *     sub_18001A350 @ 0x18001A350 (sub_18001A350.c)
 */

void __fastcall sub_18003A4A0(_OWORD *a1, __int64 a2)
{
  __int128 v3; // xmm1
  __int128 v4; // xmm2
  __int128 v5; // xmm3
  __m128 v6; // [rsp+20h] [rbp-18h] BYREF

  v3 = a1[1];
  v4 = a1[2];
  v5 = a1[3];
  v6 = 0LL;
  *(__m128 *)a2 = sub_18001A350(&v6, *(double *)&v3, *(double *)&v4, *(double *)&v5);
  *(_OWORD *)(a2 + 16) = v3;
  *(_OWORD *)(a2 + 32) = v4;
  *(_OWORD *)(a2 + 48) = v5;
}
