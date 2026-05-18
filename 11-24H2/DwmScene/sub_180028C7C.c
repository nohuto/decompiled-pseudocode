/*
 * XREFs of sub_180028C7C @ 0x180028C7C
 * Callers:
 *     sub_1800295E0 @ 0x1800295E0 (sub_1800295E0.c)
 * Callees:
 *     sub_1800957C4 @ 0x1800957C4 (sub_1800957C4.c)
 */

__int64 __fastcall sub_180028C7C(__int64 a1)
{
  __int64 result; // rax

  result = sub_1800957C4();
  *(_WORD *)(a1 + 184) = 257;
  *(_QWORD *)(a1 + 192) = 1LL;
  return result;
}
