/*
 * XREFs of sub_18005901C @ 0x18005901C
 * Callers:
 *     sub_180056E40 @ 0x180056E40 (sub_180056E40.c)
 *     sub_180059330 @ 0x180059330 (sub_180059330.c)
 *     sub_1800626E4 @ 0x1800626E4 (sub_1800626E4.c)
 *     sub_180065E60 @ 0x180065E60 (sub_180065E60.c)
 *     sub_180066E54 @ 0x180066E54 (sub_180066E54.c)
 *     sub_180087B78 @ 0x180087B78 (sub_180087B78.c)
 * Callees:
 *     sub_180057600 @ 0x180057600 (sub_180057600.c)
 *     sub_180058888 @ 0x180058888 (sub_180058888.c)
 */

__int64 __fastcall sub_18005901C(__int64 a1)
{
  __int64 result; // rax
  unsigned __int64 v3; // xmm4_8
  unsigned __int64 v4; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v5; // [rsp+28h] [rbp-20h]
  unsigned __int64 v6; // [rsp+2Ch] [rbp-1Ch]
  unsigned int v7; // [rsp+34h] [rbp-14h]

  if ( *(_BYTE *)(a1 + 336) && *(_BYTE *)(a1 + 1612) )
  {
    result = sub_180057600(a1, (__int64)&v4);
    v3 = _mm_sub_ps(_mm_movelh_ps((__m128)v6, (__m128)v7), _mm_movelh_ps((__m128)v4, (__m128)v5)).m128_u64[0];
    v4 = v3;
    if ( *((float *)&v3 + 1) != 0.0 )
    {
      result = sub_180058888(a1, *(float *)&v4 / *((float *)&v3 + 1));
      *(_BYTE *)(a1 + 1612) = 0;
    }
  }
  return result;
}
