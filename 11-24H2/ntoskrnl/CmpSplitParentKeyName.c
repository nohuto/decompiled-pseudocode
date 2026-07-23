/*
 * XREFs of CmpSplitParentKeyName @ 0x140BBBD74
 * Callers:
 *     CmpDoReDoCreateKey @ 0x1407E71A4 (CmpDoReDoCreateKey.c)
 *     CmpDoReOpenTransKey @ 0x1407E74C4 (CmpDoReOpenTransKey.c)
 *     CmLoadAppKey @ 0x14092FCDC (CmLoadAppKey.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpSplitParentKeyName(__m128i *a1, __m128i *a2, __m128i *a3)
{
  __int64 result; // rax
  __m128i v6; // xmm0
  __m128i v7; // xmm1
  int v8; // edx
  __int16 v9; // cx
  bool v10; // zf
  __m128i v11; // [rsp+0h] [rbp-28h]
  __m128i i; // [rsp+10h] [rbp-18h]

  if ( !a1->m128i_i16[0] )
  {
    v6 = 0LL;
LABEL_3:
    v7 = 0LL;
    goto LABEL_4;
  }
  v7 = *a1;
  result = (unsigned int)_mm_cvtsi128_si32(*a1);
  v11 = *a1;
  v8 = ((unsigned __int16)result >> 1) - 1;
  for ( i = *a1; v8 >= 0; --v8 )
  {
    result = v8;
    if ( *(_WORD *)(i.m128i_i64[1] + 2LL * v8) == 92 )
      break;
  }
  if ( v8 < 0 )
  {
    v6 = 0LL;
  }
  else
  {
    v9 = 2 * v8;
    if ( 2 * (_WORD)v8 )
    {
      i.m128i_i16[1] = 2 * v8;
      i.m128i_i16[0] = 2 * v8;
      v6 = i;
    }
    else
    {
      v6 = 0LL;
    }
    v10 = -2 - v9 + v11.m128i_i16[0] == 0;
    v11.m128i_i16[0] += -2 - v9;
    v11.m128i_i16[1] = v11.m128i_i16[0];
    result = a1->m128i_i64[1];
    if ( v10 )
      goto LABEL_3;
    v11.m128i_i64[1] = result + 2LL * (v8 + 1);
    v7 = v11;
  }
LABEL_4:
  if ( a2 )
    *a2 = v6;
  if ( a3 )
    *a3 = v7;
  return result;
}
