/*
 * XREFs of NdisInitializeString @ 0x140054FD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall NdisInitializeString(PNDIS_STRING Destination, PUCHAR Source)
{
  PUCHAR v2; // rdi
  wchar_t **p_Buffer; // r15
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rax
  unsigned __int16 v8; // ax
  unsigned __int64 Pool2; // rax
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // rax
  __int64 v14; // r9
  PUCHAR v15; // r8
  __m128i v16; // xmm1
  __m128i v17; // xmm2
  __m128i v18; // xmm1
  __m128i v19; // xmm2
  wchar_t *v20; // rcx

  if ( Destination )
  {
    v2 = (PUCHAR)File;
    if ( Source )
      v2 = Source;
    p_Buffer = &Destination->Buffer;
    v5 = 0LL;
    v6 = -1LL;
    *(_DWORD *)&Destination->Length = 0;
    Destination->Buffer = 0LL;
    do
      ++v6;
    while ( v2[v6] );
    v7 = 2 * v6;
    if ( is_mul_ok(v6, 2uLL) && v7 <= 0xFFFD )
    {
      Destination->Length = v7;
      v8 = v7 + 2;
      Destination->MaximumLength = v8;
      Pool2 = ExAllocatePool2(66LL, v8, 1953711182LL);
      *p_Buffer = (wchar_t *)Pool2;
      v10 = Pool2;
      if ( Pool2 )
      {
        v11 = v6 + 1;
        if ( v6 + 1 < 4 )
          goto LABEL_27;
        v12 = Pool2 + 2 * v6;
        if ( Pool2 <= (unsigned __int64)&v2[v6] && v12 >= (unsigned __int64)v2 )
          goto LABEL_27;
        if ( Pool2 <= (unsigned __int64)p_Buffer && v12 >= (unsigned __int64)p_Buffer )
          goto LABEL_27;
        if ( v11 < 0x20 )
          goto LABEL_19;
        v13 = v11 & 0x1F;
        v14 = 32LL;
        v15 = v2 + 16;
        do
        {
          v16 = _mm_loadl_epi64((const __m128i *)v15 - 1);
          v14 += 64LL;
          v17 = _mm_loadl_epi64((const __m128i *)(v15 - 8));
          v15 += 32;
          v5 += 32LL;
          *(__m128i *)(v14 + v10 - 96) = _mm_unpacklo_epi8(v16, (__m128i)0LL);
          v18 = _mm_unpacklo_epi8(_mm_loadl_epi64((const __m128i *)v15 - 2), (__m128i)0LL);
          *(__m128i *)(v14 + v10 - 80) = _mm_unpacklo_epi8(v17, (__m128i)0LL);
          v19 = _mm_unpacklo_epi8(_mm_loadl_epi64((const __m128i *)(v15 - 24)), (__m128i)0LL);
          *(__m128i *)(v14 + v10 - 64) = v18;
          *(__m128i *)(v14 + v10 - 48) = v19;
        }
        while ( v5 <= v6 - v13 );
        if ( v13 >= 4 )
        {
LABEL_19:
          v20 = *p_Buffer;
          do
          {
            *(_QWORD *)&v20[v5] = _mm_unpacklo_epi8(_mm_cvtsi32_si128(*(_DWORD *)&v2[v5]), (__m128i)0LL).m128i_u64[0];
            v5 += 4LL;
          }
          while ( v5 <= v6 - (v11 & 3) );
        }
        if ( v5 <= v6 )
        {
LABEL_27:
          do
          {
            Destination->Buffer[v5] = v2[v5];
            ++v5;
          }
          while ( v5 <= v6 );
        }
      }
      else
      {
        *(_DWORD *)&Destination->Length = 0;
      }
    }
  }
}
