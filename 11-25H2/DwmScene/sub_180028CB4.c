/*
 * XREFs of sub_180028CB4 @ 0x180028CB4
 * Callers:
 *     sub_18002922C @ 0x18002922C (sub_18002922C.c)
 *     sub_1800292A0 @ 0x1800292A0 (sub_1800292A0.c)
 *     sub_180029B60 @ 0x180029B60 (sub_180029B60.c)
 *     sub_18002B4B0 @ 0x18002B4B0 (sub_18002B4B0.c)
 *     sub_18002B574 @ 0x18002B574 (sub_18002B574.c)
 *     sub_18006CFF4 @ 0x18006CFF4 (sub_18006CFF4.c)
 *     sub_18006D080 @ 0x18006D080 (sub_18006D080.c)
 * Callees:
 *     sub_18002909C @ 0x18002909C (sub_18002909C.c)
 */

__int64 __fastcall sub_180028CB4(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1 + 136;
    do
    {
      sub_18002909C(v3, v3);
      v3 += 152LL;
      result = v3 - 136;
    }
    while ( v3 - 136 != a2 );
  }
  return result;
}
