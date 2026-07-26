/*
 * XREFs of ?ndisSumDataBlock@@YAXPEA_K0@Z @ 0x140166BD0
 * Callers:
 *     ?ndisPcwCollectData@@YAJPEAU_PCW_BUFFER@@@Z @ 0x140166850 (-ndisPcwCollectData@@YAJPEAU_PCW_BUFFER@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisSumDataBlock(char *a1, char *a2)
{
  unsigned __int64 *v3; // rax
  signed __int64 v4; // rdx
  __int64 v5; // rcx
  __m128i v6; // xmm0
  __m128i v7; // xmm1
  __m128i v8; // xmm2
  __m128i v9; // xmm1
  int v10; // eax
  __int64 v11; // rcx
  unsigned __int64 *v12; // rcx
  __int64 v13; // r8

  if ( a1 <= a2 + 296 && a1 + 296 >= a2 )
  {
    v4 = a2 - a1;
    v10 = 0;
    v11 = 0LL;
  }
  else
  {
    v3 = (unsigned __int64 *)(a1 + 16);
    v4 = a2 - a1;
    v5 = 4LL;
    do
    {
      v6 = _mm_loadu_si128((const __m128i *)v3 - 1);
      v7 = _mm_loadu_si128((const __m128i *)((char *)v3 + v4 - 16));
      v8 = _mm_loadu_si128((const __m128i *)((char *)v3 + v4));
      v3 += 8;
      *((__m128i *)v3 - 5) = _mm_add_epi64(v7, v6);
      v9 = _mm_loadu_si128((const __m128i *)((char *)v3 + v4 - 48));
      *((__m128i *)v3 - 4) = _mm_add_epi64(v8, _mm_loadu_si128((const __m128i *)v3 - 4));
      *((__m128i *)v3 - 3) = _mm_add_epi64(v9, _mm_loadu_si128((const __m128i *)v3 - 3));
      *((__m128i *)v3 - 2) = _mm_add_epi64(
                               _mm_loadu_si128((const __m128i *)((char *)v3 + v4 - 32)),
                               _mm_loadu_si128((const __m128i *)v3 - 2));
      --v5;
    }
    while ( v5 );
    v10 = -32;
    v11 = 256LL;
  }
  v12 = (unsigned __int64 *)&a1[v11];
  v13 = (unsigned int)(v10 + 38);
  do
  {
    *v12 += *(unsigned __int64 *)((char *)v12 + v4);
    ++v12;
    --v13;
  }
  while ( v13 );
}
