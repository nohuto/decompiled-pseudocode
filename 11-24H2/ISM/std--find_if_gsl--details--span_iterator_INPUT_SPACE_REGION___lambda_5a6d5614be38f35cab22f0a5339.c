/*
 * XREFs of std::find_if_gsl::details::span_iterator_INPUT_SPACE_REGION___lambda_5a6d5614be38f35cab22f0a533907b2a___ @ 0x180134A74
 * Callers:
 *     ?ConfigureVirtualTouchpad@VirtualTouchpadControllerProxy@@AEAAXXZ @ 0x180134E04 (-ConfigureVirtualTouchpad@VirtualTouchpadControllerProxy@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

__m128i *__fastcall std::find_if_gsl::details::span_iterator_INPUT_SPACE_REGION___lambda_5a6d5614be38f35cab22f0a533907b2a___(
        unsigned __int64 a1,
        __m128i *a2,
        __m128i *a3,
        POINT *a4)
{
  __m128i *v7; // rbp
  const RECT *i; // rdi
  __m128i *result; // rax
  __int64 v10; // xmm1_8

  v7 = (__m128i *)a1;
  if ( a2->m128i_i64[0] != a3->m128i_i64[0]
    || (a1 = _mm_srli_si128(*a2, 8).m128i_u64[0], a1 != _mm_srli_si128(*a3, 8).m128i_u64[0])
    || a2[1].m128i_i64[0] > (unsigned __int64)a3[1].m128i_i64[0] )
  {
    _o_terminate(a1);
    __debugbreak();
    JUMPOUT(0x180134B57LL);
  }
  for ( i = (const RECT *)a2[1].m128i_i64[0];
        i != (const RECT *)a3[1].m128i_i64[0] && !PtInRect(i, *a4);
        i = (const RECT *)((char *)i + 200) )
  {
    ;
  }
  a2[1].m128i_i64[0] = (__int64)i;
  result = v7;
  v10 = a2[1].m128i_i64[0];
  *v7 = *a2;
  v7[1].m128i_i64[0] = v10;
  return result;
}
