/*
 * XREFs of sub_1800374FC @ 0x1800374FC
 * Callers:
 *     sub_180049230 @ 0x180049230 (sub_180049230.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800374FC(__int64 a1, const __m128i *a2)
{
  __int64 v2; // r8
  __m128 v3; // xmm2
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 96);
  v3 = (__m128)_mm_loadu_si128(a2);
  result = (unsigned int)_mm_movemask_ps(_mm_cmpneq_ps(*(__m128 *)(v2 + 14516), v3));
  if ( (_DWORD)result )
  {
    *(_DWORD *)(v2 + 14516) = v3.m128_i32[0];
    *(_DWORD *)(v2 + 14528) = _mm_shuffle_ps(v3, v3, 255).m128_u32[0];
    *(_DWORD *)(v2 + 14520) = _mm_shuffle_ps(v3, v3, 85).m128_u32[0];
    *(_DWORD *)(v2 + 14524) = _mm_shuffle_ps(v3, v3, 170).m128_u32[0];
    *(_BYTE *)(v2 + 14533) = 1;
  }
  return result;
}
