/*
 * XREFs of __std_count_trivial_1 @ 0x18000B090
 * Callers:
 *     sub_180085180 @ 0x180085180 (sub_180085180.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall _std_count_trivial_1(const __m128i *a1, const __m128i *a2, char a3)
{
  signed __int64 v5; // r10
  __int64 v8; // r9
  unsigned __int64 v9; // rdx
  const __m128i *v14; // r8
  unsigned __int64 v17; // r10
  __m128i v18; // xmm1
  const __m128i *v19; // r8
  __m128i v20; // xmm1
  __m128i v21; // xmm1
  __m128i v22; // xmm0
  __int64 v23; // rdx

  v5 = (char *)a2 - (char *)a1;
  _EDI = a3;
  v8 = 0LL;
  v9 = ((char *)a2 - (char *)a1) & 0xFFFFFFFFFFFFFFE0uLL;
  if ( v9 && (dword_1801C3B44 & 0x20) != 0 )
  {
    __asm
    {
      vmovd   xmm2, edi
      vpxor   xmm0, xmm0, xmm0
      vpshufb xmm2, xmm2, xmm0
      vinsertf128 ymm2, ymm2, xmm2, 1
    }
    v14 = (const __m128i *)((char *)a1 + v9);
    do
    {
      __asm
      {
        vpcmpeqb ymm1, ymm2, ymmword ptr [rcx]
        vpmovmskb eax, ymm1
      }
      a1 += 2;
      v8 += __popcnt(_EAX);
    }
    while ( a1 != v14 );
    v5 &= 0x1Fu;
    __asm { vzeroupper }
  }
  v17 = v5 & 0xFFFFFFFFFFFFFFF0uLL;
  if ( v17 && (dword_1801C3B44 & 4) != 0 )
  {
    v18 = _mm_cvtsi32_si128(_EDI);
    v19 = (const __m128i *)((char *)a1 + v17);
    v20 = _mm_unpacklo_epi8(v18, v18);
    v21 = _mm_shuffle_epi32(_mm_unpacklo_epi16(v20, v20), 0);
    do
    {
      v22 = _mm_loadu_si128(a1++);
      v8 += __popcnt(_mm_movemask_epi8(_mm_cmpeq_epi8(v22, v21)));
    }
    while ( a1 != v19 );
  }
  for ( ; a1 != a2; v8 = v23 )
  {
    v23 = v8 + 1;
    if ( a1->m128i_i8[0] != (_BYTE)_EDI )
      v23 = v8;
    a1 = (const __m128i *)((char *)a1 + 1);
  }
  return v8;
}
