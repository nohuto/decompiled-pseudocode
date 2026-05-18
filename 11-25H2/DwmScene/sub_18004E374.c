/*
 * XREFs of sub_18004E374 @ 0x18004E374
 * Callers:
 *     sub_18004E280 @ 0x18004E280 (sub_18004E280.c)
 *     sub_1800604D0 @ 0x1800604D0 (sub_1800604D0.c)
 * Callees:
 *     sub_18004DBE4 @ 0x18004DBE4 (sub_18004DBE4.c)
 *     sub_18004DCEC @ 0x18004DCEC (sub_18004DCEC.c)
 *     sub_18004E110 @ 0x18004E110 (sub_18004E110.c)
 *     sub_18004E4A4 @ 0x18004E4A4 (sub_18004E4A4.c)
 *     sub_1800985C8 @ 0x1800985C8 (sub_1800985C8.c)
 *     sub_180098804 @ 0x180098804 (sub_180098804.c)
 */

void __fastcall sub_18004E374(__int64 a1, __int64 a2)
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

  v2 = (_DWORD *)sub_180098804(v13, a2, a1 + 256, a2);
  sub_18004DCEC(v3, v2);
  v4[19] = _mm_add_ps(v4[19], *v5);
  v4[20] = _mm_add_ps(v4[20], *v5);
  v4[21] = _mm_add_ps(v4[21], *v5);
  v7 = (_DWORD *)sub_1800985C8(v13, v6);
  sub_18004DBE4((_DWORD *)(v8 + 108), v7);
  sub_18004E4A4(v9);
  v12 = *v10;
  sub_18004E110(v11, &v12);
}
