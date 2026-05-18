/*
 * XREFs of sub_180028A64 @ 0x180028A64
 * Callers:
 *     sub_18002867C @ 0x18002867C (sub_18002867C.c)
 *     sub_1800287FC @ 0x1800287FC (sub_1800287FC.c)
 *     sub_180028890 @ 0x180028890 (sub_180028890.c)
 *     sub_18002894C @ 0x18002894C (sub_18002894C.c)
 *     sub_180028A24 @ 0x180028A24 (sub_180028A24.c)
 * Callees:
 *     sub_1800285D8 @ 0x1800285D8 (sub_1800285D8.c)
 *     sub_180028774 @ 0x180028774 (sub_180028774.c)
 */

bool __fastcall sub_180028A64(__int64 a1, char a2)
{
  __int64 *v2; // rbx
  __int64 v4; // [rsp+40h] [rbp+18h] BYREF

  v2 = sub_1800285D8(a1, &v4, a2);
  return *v2 != sub_180028774()[1];
}
