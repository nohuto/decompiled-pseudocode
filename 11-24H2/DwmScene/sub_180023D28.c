/*
 * XREFs of sub_180023D28 @ 0x180023D28
 * Callers:
 *     sub_18002397C @ 0x18002397C (sub_18002397C.c)
 * Callees:
 *     sub_180023944 @ 0x180023944 (sub_180023944.c)
 *     sub_180023DCC @ 0x180023DCC (sub_180023DCC.c)
 */

__int64 __fastcall sub_180023D28(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 i; // rdi

  for ( i = a1; i != a2; i += 64LL )
  {
    sub_180023DCC(a1, a3, i);
    a3 += 64LL;
  }
  sub_180023944(a3, a3);
  return a3;
}
