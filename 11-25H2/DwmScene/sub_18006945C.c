/*
 * XREFs of sub_18006945C @ 0x18006945C
 * Callers:
 *     sub_1800693BC @ 0x1800693BC (sub_1800693BC.c)
 *     sub_180069494 @ 0x180069494 (sub_180069494.c)
 *     sub_180069664 @ 0x180069664 (sub_180069664.c)
 *     sub_18006983C @ 0x18006983C (sub_18006983C.c)
 *     sub_180069C18 @ 0x180069C18 (sub_180069C18.c)
 *     sub_180069CB8 @ 0x180069CB8 (sub_180069CB8.c)
 * Callees:
 *     sub_18008C960 @ 0x18008C960 (sub_18008C960.c)
 */

__int64 __fastcall sub_18006945C(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      result = sub_18008C960(v3);
      v3 += 80LL;
    }
    while ( v3 != a2 );
  }
  return result;
}
