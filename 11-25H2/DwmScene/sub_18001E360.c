/*
 * XREFs of sub_18001E360 @ 0x18001E360
 * Callers:
 *     sub_180050C18 @ 0x180050C18 (sub_180050C18.c)
 *     sub_180054160 @ 0x180054160 (sub_180054160.c)
 *     sub_1800544F4 @ 0x1800544F4 (sub_1800544F4.c)
 *     sub_1800CF2A4 @ 0x1800CF2A4 (sub_1800CF2A4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18001E360(_QWORD *a1, unsigned __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v3; // r8
  unsigned __int64 v4; // r9

  result = 0x7FFFFFFFFFFFFFFLL;
  v3 = (__int64)(a1[2] - *a1) >> 5;
  v4 = v3 >> 1;
  if ( v3 <= 0x7FFFFFFFFFFFFFFLL - (v3 >> 1) )
  {
    result = v4 + v3;
    if ( v4 + v3 < a2 )
      return a2;
  }
  return result;
}
