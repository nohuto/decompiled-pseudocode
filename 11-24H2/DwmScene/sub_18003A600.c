/*
 * XREFs of sub_18003A600 @ 0x18003A600
 * Callers:
 *     sub_18003A508 @ 0x18003A508 (sub_18003A508.c)
 * Callees:
 *     sub_18001A410 @ 0x18001A410 (sub_18001A410.c)
 */

void __fastcall sub_18003A600(_OWORD *a1, __int64 a2)
{
  __int128 v3; // xmm1
  __int128 v4; // xmm2
  __int128 v5; // xmm3
  __m128 v6; // [rsp+20h] [rbp-18h] BYREF

  v3 = a1[1];
  v4 = a1[2];
  v5 = a1[3];
  v6 = 0LL;
  *(__m128 *)a2 = sub_18001A410(&v6, *(double *)&v3, *(double *)&v4, *(double *)&v5);
  *(_OWORD *)(a2 + 16) = v3;
  *(_OWORD *)(a2 + 32) = v4;
  *(_OWORD *)(a2 + 48) = v5;
}
