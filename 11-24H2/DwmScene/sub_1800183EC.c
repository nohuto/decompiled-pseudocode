/*
 * XREFs of sub_1800183EC @ 0x1800183EC
 * Callers:
 *     sub_180018880 @ 0x180018880 (sub_180018880.c)
 *     sub_18003A648 @ 0x18003A648 (sub_18003A648.c)
 *     sub_18003B698 @ 0x18003B698 (sub_18003B698.c)
 *     sub_180059330 @ 0x180059330 (sub_180059330.c)
 *     sub_18005954C @ 0x18005954C (sub_18005954C.c)
 *     sub_180059750 @ 0x180059750 (sub_180059750.c)
 * Callees:
 *     sub_18001A410 @ 0x18001A410 (sub_18001A410.c)
 */

__int64 __fastcall sub_1800183EC(__int128 *a1, __int64 a2)
{
  __int128 v2; // xmm0
  __int128 v4; // xmm1
  __int128 v5; // xmm2
  __int128 v6; // xmm3
  __int64 result; // rax
  __int128 v8; // [rsp+20h] [rbp-18h] BYREF

  v2 = *a1;
  v4 = a1[1];
  v5 = a1[2];
  v6 = a1[3];
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_QWORD *)a2 = 1065353216LL;
  *(_QWORD *)(a2 + 20) = 1065353216LL;
  *(_QWORD *)(a2 + 40) = 1065353216LL;
  *(_DWORD *)(a2 + 60) = 1065353216;
  *(_DWORD *)(a2 + 16) = 0;
  *(_QWORD *)(a2 + 28) = 0LL;
  *(_DWORD *)(a2 + 36) = 0;
  *(_QWORD *)(a2 + 48) = 0LL;
  *(_DWORD *)(a2 + 56) = 0;
  v8 = 0LL;
  *(double *)&v2 = sub_18001A410(&v8);
  *(_OWORD *)a2 = v2;
  result = a2;
  *(_OWORD *)(a2 + 16) = v4;
  *(_OWORD *)(a2 + 32) = v5;
  *(_OWORD *)(a2 + 48) = v6;
  return result;
}
