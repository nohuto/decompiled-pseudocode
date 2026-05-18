/*
 * XREFs of sub_180047778 @ 0x180047778
 * Callers:
 *     sub_180047618 @ 0x180047618 (sub_180047618.c)
 *     sub_180047A50 @ 0x180047A50 (sub_180047A50.c)
 * Callees:
 *     sub_1800475E0 @ 0x1800475E0 (sub_1800475E0.c)
 *     sub_1800477C0 @ 0x1800477C0 (sub_1800477C0.c)
 */

__int64 __fastcall sub_180047778(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 i; // rbx

  v2 = a2;
  for ( i = a1; v2; --v2 )
  {
    sub_1800477C0(a1, i);
    i += 88LL;
  }
  sub_1800475E0(i, i);
  return i;
}
