/*
 * XREFs of sub_18000AEB0 @ 0x18000AEB0
 * Callers:
 *     sub_18000B270 @ 0x18000B270 (sub_18000B270.c)
 * Callees:
 *     <none>
 */

const __m128i *__fastcall sub_18000AEB0(const __m128i *a1, const __m128i *a2, unsigned __int8 a3)
{
  unsigned __int64 v4; // rdx
  const __m128i *v6; // r9
  __int64 v7; // r10
  const __m128i *v8; // rdi
  __m128i v9; // xmm2
  __m128i si128; // xmm6
  const __m128i *v11; // rdx
  __m128i v12; // xmm3
  __m128i v13; // xmm4
  __m128i v14; // xmm5
  __m128i i; // xmm2
  __m128i v16; // xmm1
  __m128i v17; // xmm1
  __m128i v18; // xmm0
  __int64 v19; // rdx
  __int64 v20; // xmm0_8
  __m128i v21; // xmm0
  __m128i v22; // xmm0
  int v23; // r8d
  __m128i v24; // xmm1
  unsigned __int64 v25; // rdx
  unsigned __int64 v26; // xmm0_8
  __int64 v27; // rax
  unsigned __int64 j; // rax
  unsigned __int64 v30; // rdx
  __m128i v31; // [rsp+0h] [rbp-28h]

  v4 = (char *)a2 - (char *)a1;
  v6 = a1;
  v7 = 0x7FFFFFFFFFFFFFFFLL;
  v8 = a1;
  if ( v4 >= 0x10 && (dword_1801C3B44 & 4) != 0 )
  {
    v9 = _mm_loadu_si128(a1);
    si128 = _mm_load_si128((const __m128i *)&xmmword_1800F7B40);
    v11 = (const __m128i *)((char *)a1 + (v4 & 0xFFFFFFFFFFFFFFF0uLL));
    v12 = 0LL;
    ++a1;
    v13 = si128;
    v14 = _mm_loadu_si128(&xmmword_1800F7B20[a3]);
    for ( i = _mm_sub_epi64(v9, v14); a1 != v11; i = _mm_blendv_epi8(i, v17, v18) )
    {
      v16 = _mm_loadu_si128(a1++);
      v17 = _mm_sub_epi64(v16, v14);
      v18 = _mm_cmpgt_epi64(i, v17);
      v12 = _mm_blendv_epi8(v12, v13, v18);
      v13 = _mm_add_epi64(v13, si128);
    }
    v19 = i.m128i_i64[0];
    v20 = _mm_srli_si128(i, 8).m128i_u64[0];
    if ( v20 < i.m128i_i64[0] )
      v19 = v20;
    v21 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v19, (__m128i)(unsigned __int64)v19);
    if ( v21.m128i_i64[0] != 0x7FFFFFFFFFFFFFFFLL )
    {
      v7 = v21.m128i_i64[0];
      v22 = _mm_cmpeq_epi64(v21, i);
      v23 = _mm_movemask_epi8(v22);
      v24 = _mm_blendv_epi8(_mm_load_si128((const __m128i *)&xmmword_1800F7B50), v12, v22);
      v25 = v24.m128i_i64[0];
      v26 = _mm_srli_si128(v24, 8).m128i_u64[0];
      v31 = v12;
      if ( v26 < v24.m128i_i64[0] )
        v25 = v26;
      _BitScanForward(
        (unsigned int *)&v25,
        v23 & _mm_movemask_epi8(_mm_cmpeq_epi64(_mm_unpacklo_epi64((__m128i)v25, (__m128i)v25), v24)));
      v6 = (const __m128i *)((char *)&v8[v31.m128i_i64[(unsigned __int64)(unsigned int)v25 >> 3]] + (unsigned int)v25);
    }
  }
  if ( !a3 )
  {
    for ( j = v7 + 0x8000000000000000uLL; a1 != a2; j = v30 )
    {
      v30 = a1->m128i_i64[0];
      if ( a1->m128i_i64[0] < j )
        v6 = a1;
      a1 = (const __m128i *)((char *)a1 + 8);
      if ( v30 >= j )
        v30 = j;
    }
    return v6;
  }
  if ( a1 == a2 )
    return v6;
  do
  {
    v27 = a1->m128i_i64[0];
    if ( a1->m128i_i64[0] < v7 )
      v6 = a1;
    a1 = (const __m128i *)((char *)a1 + 8);
    if ( v27 >= v7 )
      v27 = v7;
    v7 = v27;
  }
  while ( a1 != a2 );
  return v6;
}
