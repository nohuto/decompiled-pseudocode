/*
 * XREFs of sub_1800237E4 @ 0x1800237E4
 * Callers:
 *     sub_18002381C @ 0x18002381C (sub_18002381C.c)
 *     sub_180023BC8 @ 0x180023BC8 (sub_180023BC8.c)
 *     sub_180024570 @ 0x180024570 (sub_180024570.c)
 *     sub_180024714 @ 0x180024714 (sub_180024714.c)
 *     sub_180025820 @ 0x180025820 (sub_180025820.c)
 *     sub_180029C48 @ 0x180029C48 (sub_180029C48.c)
 * Callees:
 *     sub_180012408 @ 0x180012408 (sub_180012408.c)
 */

__int64 __fastcall sub_1800237E4(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      result = sub_180012408(v3, a2);
      v3 += 64LL;
    }
    while ( v3 != a2 );
  }
  return result;
}
