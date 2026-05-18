/*
 * XREFs of sub_180023BC8 @ 0x180023BC8
 * Callers:
 *     sub_18002381C @ 0x18002381C (sub_18002381C.c)
 * Callees:
 *     sub_1800237E4 @ 0x1800237E4 (sub_1800237E4.c)
 *     sub_180023C6C @ 0x180023C6C (sub_180023C6C.c)
 */

__int64 __fastcall sub_180023BC8(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 i; // rdi

  for ( i = a1; i != a2; i += 64LL )
  {
    sub_180023C6C(a1, a3, i);
    a3 += 64LL;
  }
  sub_1800237E4(a3, a3);
  return a3;
}
