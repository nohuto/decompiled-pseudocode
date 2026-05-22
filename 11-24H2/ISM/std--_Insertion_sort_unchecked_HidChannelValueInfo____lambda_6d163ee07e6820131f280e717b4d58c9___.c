/*
 * XREFs of std::_Insertion_sort_unchecked_HidChannelValueInfo____lambda_6d163ee07e6820131f280e717b4d58c9___ @ 0x1800E88D8
 * Callers:
 *     std::_Sort_unchecked_HidChannelValueInfo____lambda_6d163ee07e6820131f280e717b4d58c9___ @ 0x1800E9638 (std--_Sort_unchecked_HidChannelValueInfo____lambda_6d163ee07e6820131f280e717b4d58c9___.c)
 * Callees:
 *     memmove_0 @ 0x1801CF1A8 (memmove_0.c)
 */

__m128i *__fastcall std::_Insertion_sort_unchecked_HidChannelValueInfo____lambda_6d163ee07e6820131f280e717b4d58c9___(
        __m128i *Src,
        __m128i *a2)
{
  __int8 *v4; // rbp
  __int8 *v5; // rbx
  char *v6; // rcx
  __m128i v7; // xmm2
  __m128i v8; // xmm3
  __int64 v9; // xmm4_8
  unsigned int v10; // edx
  char *i; // rax
  __m128i v13; // [rsp+20h] [rbp-48h]
  __m128i v14; // [rsp+30h] [rbp-38h]
  __int64 v15; // [rsp+70h] [rbp+8h]

  if ( Src != a2 )
  {
    v4 = &Src[4].m128i_i8[8];
    v5 = &Src[4].m128i_i8[8];
    if ( &Src[4].m128i_u64[1] != (unsigned __int64 *)a2 )
    {
      do
      {
        v6 = v5;
        v7 = *((__m128i *)v5 + 2);
        v8 = *((__m128i *)v5 + 3);
        v9 = *((_QWORD *)v5 + 8);
        v10 = _mm_cvtsi128_si32(*(__m128i *)v5);
        v13 = *(__m128i *)v5;
        v14 = *((__m128i *)v5 + 1);
        v15 = v9;
        if ( v10 >= Src->m128i_i32[0] )
        {
          for ( i = v5; ; v6 = i )
          {
            i -= 72;
            if ( v10 >= *(_DWORD *)i )
              break;
            *(_OWORD *)v6 = *(_OWORD *)i;
            *((_OWORD *)v6 + 1) = *((_OWORD *)i + 1);
            *((_OWORD *)v6 + 2) = *((_OWORD *)i + 2);
            *((_OWORD *)v6 + 3) = *((_OWORD *)i + 3);
            *((_QWORD *)v6 + 8) = *((_QWORD *)i + 8);
          }
          *(__m128i *)v6 = v13;
          *((__m128i *)v6 + 1) = v14;
          *((__m128i *)v6 + 2) = v7;
          *((__m128i *)v6 + 3) = v8;
          *((_QWORD *)v6 + 8) = v9;
        }
        else
        {
          memmove_0(v4, Src, v5 - (__int8 *)Src);
          *Src = v13;
          Src[1] = v14;
          Src[2] = v7;
          Src[3] = v8;
          Src[4].m128i_i64[0] = v15;
        }
        v5 += 72;
      }
      while ( v5 != (__int8 *)a2 );
    }
  }
  return a2;
}
