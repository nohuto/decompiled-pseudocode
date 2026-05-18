/*
 * XREFs of sub_1800697C4 @ 0x1800697C4
 * Callers:
 *     sub_1800695F4 @ 0x1800695F4 (sub_1800695F4.c)
 * Callees:
 *     sub_1800695BC @ 0x1800695BC (sub_1800695BC.c)
 *     sub_1800698A0 @ 0x1800698A0 (sub_1800698A0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800697C4(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 i; // rdi

  for ( i = a1; i != a2; i += 80LL )
  {
    sub_1800698A0(a1, a3, i);
    a3 += 80LL;
  }
  sub_1800695BC(a3, a3);
  return a3;
}
