/*
 * XREFs of sub_180028B1C @ 0x180028B1C
 * Callers:
 *     sub_180029480 @ 0x180029480 (sub_180029480.c)
 * Callees:
 *     sub_180095664 @ 0x180095664 (sub_180095664.c)
 */

__int64 __fastcall sub_180028B1C(__int64 a1)
{
  __int64 result; // rax

  result = sub_180095664();
  *(_WORD *)(a1 + 184) = 257;
  *(_QWORD *)(a1 + 192) = 1LL;
  return result;
}
