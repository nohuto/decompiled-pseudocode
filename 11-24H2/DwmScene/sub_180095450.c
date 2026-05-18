/*
 * XREFs of sub_180095450 @ 0x180095450
 * Callers:
 *     sub_180094F2C @ 0x180094F2C (sub_180094F2C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180095450(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r8
  __int64 result; // rax
  unsigned __int64 v4; // r9

  v2 = 0x6DB6DB6DB6DB6DB7LL * ((__int64)(a1[2] - *a1) >> 3);
  result = 0x492492492492492LL;
  v4 = v2 >> 1;
  if ( v2 <= 0x492492492492492LL - (v2 >> 1) )
  {
    result = v4 + v2;
    if ( v4 + v2 < a2 )
      return a2;
  }
  return result;
}
