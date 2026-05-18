/*
 * XREFs of sub_180028E14 @ 0x180028E14
 * Callers:
 *     sub_18002938C @ 0x18002938C (sub_18002938C.c)
 *     sub_180029400 @ 0x180029400 (sub_180029400.c)
 *     sub_180029CC0 @ 0x180029CC0 (sub_180029CC0.c)
 *     sub_18002B610 @ 0x18002B610 (sub_18002B610.c)
 *     sub_18002B6D4 @ 0x18002B6D4 (sub_18002B6D4.c)
 *     sub_18006D154 @ 0x18006D154 (sub_18006D154.c)
 *     sub_18006D1E0 @ 0x18006D1E0 (sub_18006D1E0.c)
 * Callees:
 *     sub_1800291FC @ 0x1800291FC (sub_1800291FC.c)
 */

__int64 __fastcall sub_180028E14(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1 + 136;
    do
    {
      sub_1800291FC(v3, v3);
      v3 += 152LL;
      result = v3 - 136;
    }
    while ( v3 - 136 != a2 );
  }
  return result;
}
