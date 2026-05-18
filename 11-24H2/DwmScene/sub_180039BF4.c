/*
 * XREFs of sub_180039BF4 @ 0x180039BF4
 * Callers:
 *     sub_18003A914 @ 0x18003A914 (sub_18003A914.c)
 * Callees:
 *     sub_18003BEBC @ 0x18003BEBC (sub_18003BEBC.c)
 */

char __fastcall sub_180039BF4(__int64 a1, __int64 a2, _OWORD *a3, __int64 a4)
{
  char result; // al
  __m128 v8; // xmm0
  __m128 v9; // xmm1
  __m128 v10; // [rsp+20h] [rbp-38h] BYREF
  __int128 v11; // [rsp+30h] [rbp-28h] BYREF
  __m128 v12; // [rsp+40h] [rbp-18h] BYREF

  v10 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  result = sub_18003BEBC(&v10, &v11, &v12);
  if ( result )
  {
    v8 = v10;
    result = 1;
    v9 = v12;
    *(_QWORD *)a2 = v10.m128_u64[0];
    *(_DWORD *)(a2 + 8) = _mm_shuffle_ps(v8, v8, 170).m128_u32[0];
    *a3 = v11;
    *(_QWORD *)a4 = v9.m128_u64[0];
    *(_DWORD *)(a4 + 8) = _mm_shuffle_ps(v9, v9, 170).m128_u32[0];
  }
  return result;
}
