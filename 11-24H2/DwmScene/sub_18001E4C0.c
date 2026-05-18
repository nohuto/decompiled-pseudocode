/*
 * XREFs of sub_18001E4C0 @ 0x18001E4C0
 * Callers:
 *     sub_180050D78 @ 0x180050D78 (sub_180050D78.c)
 *     sub_1800542C0 @ 0x1800542C0 (sub_1800542C0.c)
 *     sub_180054654 @ 0x180054654 (sub_180054654.c)
 *     sub_1800CF404 @ 0x1800CF404 (sub_1800CF404.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18001E4C0(_QWORD *a1, unsigned __int64 a2)
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
