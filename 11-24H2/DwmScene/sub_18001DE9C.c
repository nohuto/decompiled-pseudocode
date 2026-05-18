/*
 * XREFs of sub_18001DE9C @ 0x18001DE9C
 * Callers:
 *     sub_180054654 @ 0x180054654 (sub_180054654.c)
 *     sub_1800CF404 @ 0x1800CF404 (sub_1800CF404.c)
 *     sub_1800D1480 @ 0x1800D1480 (sub_1800D1480.c)
 * Callees:
 *     sub_18001D8FC @ 0x18001D8FC (sub_18001D8FC.c)
 *     sub_18001DEE0 @ 0x18001DEE0 (sub_18001DEE0.c)
 */

__int64 __fastcall sub_18001DE9C(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r8
  __int64 i; // r9
  __int64 v6; // r8

  v4 = a1;
  for ( i = a2; v4 != i; v4 = v6 + 32 )
  {
    sub_18001DEE0(a1, a3, v4, i);
    a3 += 32LL;
  }
  sub_18001D8FC(a3, a3);
  return a3;
}
