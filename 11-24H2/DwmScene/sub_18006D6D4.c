/*
 * XREFs of sub_18006D6D4 @ 0x18006D6D4
 * Callers:
 *     sub_18006D508 @ 0x18006D508 (sub_18006D508.c)
 *     sub_180078A28 @ 0x180078A28 (sub_180078A28.c)
 *     sub_180082970 @ 0x180082970 (sub_180082970.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18006D6D4(_QWORD *a1, unsigned __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v3; // r8
  unsigned __int64 v4; // r9

  result = 0x1FFFFFFFFFFFFFFFLL;
  v3 = (__int64)(a1[2] - *a1) >> 3;
  v4 = v3 >> 1;
  if ( v3 <= 0x1FFFFFFFFFFFFFFFLL - (v3 >> 1) )
  {
    result = v4 + v3;
    if ( v4 + v3 < a2 )
      return a2;
  }
  return result;
}
