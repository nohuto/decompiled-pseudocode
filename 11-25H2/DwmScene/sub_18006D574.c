/*
 * XREFs of sub_18006D574 @ 0x18006D574
 * Callers:
 *     sub_18006D3A8 @ 0x18006D3A8 (sub_18006D3A8.c)
 *     sub_1800788C8 @ 0x1800788C8 (sub_1800788C8.c)
 *     sub_180082810 @ 0x180082810 (sub_180082810.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18006D574(_QWORD *a1, unsigned __int64 a2)
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
