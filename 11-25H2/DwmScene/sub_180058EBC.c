/*
 * XREFs of sub_180058EBC @ 0x180058EBC
 * Callers:
 *     sub_180056CE0 @ 0x180056CE0 (sub_180056CE0.c)
 *     sub_1800591D0 @ 0x1800591D0 (sub_1800591D0.c)
 *     sub_180062584 @ 0x180062584 (sub_180062584.c)
 *     sub_180065D00 @ 0x180065D00 (sub_180065D00.c)
 *     sub_180066CF4 @ 0x180066CF4 (sub_180066CF4.c)
 *     sub_180087A18 @ 0x180087A18 (sub_180087A18.c)
 * Callees:
 *     sub_1800574A0 @ 0x1800574A0 (sub_1800574A0.c)
 *     sub_180058728 @ 0x180058728 (sub_180058728.c)
 */

__int64 __fastcall sub_180058EBC(__int64 a1)
{
  __int64 result; // rax
  unsigned __int64 v3; // xmm4_8
  unsigned __int64 v4; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v5; // [rsp+28h] [rbp-20h]
  unsigned __int64 v6; // [rsp+2Ch] [rbp-1Ch]
  unsigned int v7; // [rsp+34h] [rbp-14h]

  if ( *(_BYTE *)(a1 + 336) && *(_BYTE *)(a1 + 1612) )
  {
    result = sub_1800574A0(a1, (__int64)&v4);
    v3 = _mm_sub_ps(_mm_movelh_ps((__m128)v6, (__m128)v7), _mm_movelh_ps((__m128)v4, (__m128)v5)).m128_u64[0];
    v4 = v3;
    if ( *((float *)&v3 + 1) != 0.0 )
    {
      result = sub_180058728(a1, *(float *)&v4 / *((float *)&v3 + 1));
      *(_BYTE *)(a1 + 1612) = 0;
    }
  }
  return result;
}
