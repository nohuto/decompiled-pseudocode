/*
 * XREFs of sub_1800475E0 @ 0x1800475E0
 * Callers:
 *     sub_1800474A4 @ 0x1800474A4 (sub_1800474A4.c)
 *     sub_180047618 @ 0x180047618 (sub_180047618.c)
 *     sub_180047730 @ 0x180047730 (sub_180047730.c)
 *     sub_180047778 @ 0x180047778 (sub_180047778.c)
 *     sub_180047A50 @ 0x180047A50 (sub_180047A50.c)
 *     sub_180047BC4 @ 0x180047BC4 (sub_180047BC4.c)
 *     sub_180047C7C @ 0x180047C7C (sub_180047C7C.c)
 *     sub_180049900 @ 0x180049900 (sub_180049900.c)
 *     sub_180049AC8 @ 0x180049AC8 (sub_180049AC8.c)
 * Callees:
 *     sub_180047C20 @ 0x180047C20 (sub_180047C20.c)
 */

__int64 __fastcall sub_1800475E0(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      result = sub_180047C20(v3);
      v3 += 88LL;
    }
    while ( v3 != a2 );
  }
  return result;
}
