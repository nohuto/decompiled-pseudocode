/*
 * XREFs of slide_hash @ 0x180152DA8
 * Callers:
 *     fill_window @ 0x1801526B0 (fill_window.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall slide_hash(__int64 a1)
{
  __int64 v1; // r9
  __m128i *v2; // r8
  __m128i *v3; // rdx
  __m128i v4; // xmm1
  __int64 result; // rax
  __m128i v6; // xmm1
  __m128i *v7; // rcx
  __m128i *v8; // rcx

  v1 = *(unsigned int *)(a1 + 148);
  v2 = *(__m128i **)(a1 + 184);
  v3 = *(__m128i **)(a1 + 176);
  v4 = _mm_cvtsi32_si128((__int16)v1);
  result = *(unsigned int *)(a1 + 196);
  v6 = _mm_shuffle_epi32(_mm_unpacklo_epi16(v4, v4), 0);
  v7 = (__m128i *)((char *)v2 + 2 * result);
  while ( v2 != v7 )
  {
    *v2 = _mm_subs_epu16(_mm_loadu_si128(v2), v6);
    ++v2;
  }
  v8 = (__m128i *)((char *)v3 + 2 * v1);
  while ( v3 != v8 )
  {
    *v3 = _mm_subs_epu16(_mm_loadu_si128(v3), v6);
    ++v3;
  }
  return result;
}
