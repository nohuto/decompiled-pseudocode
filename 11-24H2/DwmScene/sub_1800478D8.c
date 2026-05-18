/*
 * XREFs of sub_1800478D8 @ 0x1800478D8
 * Callers:
 *     sub_180047778 @ 0x180047778 (sub_180047778.c)
 *     sub_180047BB0 @ 0x180047BB0 (sub_180047BB0.c)
 * Callees:
 *     sub_180047740 @ 0x180047740 (sub_180047740.c)
 *     sub_180047920 @ 0x180047920 (sub_180047920.c)
 */

__int64 __fastcall sub_1800478D8(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 i; // rbx

  v2 = a2;
  for ( i = a1; v2; --v2 )
  {
    sub_180047920(a1, i);
    i += 88LL;
  }
  sub_180047740(i, i);
  return i;
}
