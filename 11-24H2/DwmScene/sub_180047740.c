/*
 * XREFs of sub_180047740 @ 0x180047740
 * Callers:
 *     sub_180047604 @ 0x180047604 (sub_180047604.c)
 *     sub_180047778 @ 0x180047778 (sub_180047778.c)
 *     sub_180047890 @ 0x180047890 (sub_180047890.c)
 *     sub_1800478D8 @ 0x1800478D8 (sub_1800478D8.c)
 *     sub_180047BB0 @ 0x180047BB0 (sub_180047BB0.c)
 *     sub_180047D24 @ 0x180047D24 (sub_180047D24.c)
 *     sub_180047DDC @ 0x180047DDC (sub_180047DDC.c)
 *     sub_180049A60 @ 0x180049A60 (sub_180049A60.c)
 *     sub_180049C28 @ 0x180049C28 (sub_180049C28.c)
 * Callees:
 *     sub_180047D80 @ 0x180047D80 (sub_180047D80.c)
 */

__int64 __fastcall sub_180047740(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      result = sub_180047D80(v3);
      v3 += 88LL;
    }
    while ( v3 != a2 );
  }
  return result;
}
