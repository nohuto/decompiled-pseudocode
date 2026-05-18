/*
 * XREFs of sub_18001832C @ 0x18001832C
 * Callers:
 *     sub_1800187C0 @ 0x1800187C0 (sub_1800187C0.c)
 *     sub_18003A4E8 @ 0x18003A4E8 (sub_18003A4E8.c)
 *     sub_18003B538 @ 0x18003B538 (sub_18003B538.c)
 *     sub_1800591D0 @ 0x1800591D0 (sub_1800591D0.c)
 *     sub_1800593EC @ 0x1800593EC (sub_1800593EC.c)
 *     sub_1800595F0 @ 0x1800595F0 (sub_1800595F0.c)
 * Callees:
 *     sub_18001A350 @ 0x18001A350 (sub_18001A350.c)
 */

__int64 __fastcall sub_18001832C(__int128 *a1, __int64 a2)
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
  *(double *)&v2 = sub_18001A350(&v8);
  *(_OWORD *)a2 = v2;
  result = a2;
  *(_OWORD *)(a2 + 16) = v4;
  *(_OWORD *)(a2 + 32) = v5;
  *(_OWORD *)(a2 + 48) = v6;
  return result;
}
