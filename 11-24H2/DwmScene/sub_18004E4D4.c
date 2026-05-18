/*
 * XREFs of sub_18004E4D4 @ 0x18004E4D4
 * Callers:
 *     sub_18004E3E0 @ 0x18004E3E0 (sub_18004E3E0.c)
 *     sub_180060630 @ 0x180060630 (sub_180060630.c)
 * Callees:
 *     sub_18004DD44 @ 0x18004DD44 (sub_18004DD44.c)
 *     sub_18004DE4C @ 0x18004DE4C (sub_18004DE4C.c)
 *     sub_18004E270 @ 0x18004E270 (sub_18004E270.c)
 *     sub_18004E604 @ 0x18004E604 (sub_18004E604.c)
 *     sub_180098728 @ 0x180098728 (sub_180098728.c)
 *     sub_180098964 @ 0x180098964 (sub_180098964.c)
 */

void __fastcall sub_18004E4D4(__int64 a1, __int64 a2)
{
  _DWORD *v2; // rax
  _DWORD *v3; // r8
  __m128 *v4; // r10
  __m128 *v5; // r9
  __int64 v6; // r8
  _DWORD *v7; // rax
  __int64 v8; // r10
  __int64 v9; // r10
  __m128 *v10; // r9
  __m128 *v11; // r10
  __m128 v12; // [rsp+20h] [rbp-B8h] BYREF
  _BYTE v13[168]; // [rsp+30h] [rbp-A8h] BYREF

  v2 = (_DWORD *)sub_180098964(v13, a2, a1 + 256, a2);
  sub_18004DE4C(v3, v2);
  v4[19] = _mm_add_ps(v4[19], *v5);
  v4[20] = _mm_add_ps(v4[20], *v5);
  v4[21] = _mm_add_ps(v4[21], *v5);
  v7 = (_DWORD *)sub_180098728(v13, v6);
  sub_18004DD44((_DWORD *)(v8 + 108), v7);
  sub_18004E604(v9);
  v12 = *v10;
  sub_18004E270(v11, &v12);
}
