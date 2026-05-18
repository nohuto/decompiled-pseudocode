/*
 * XREFs of sub_180020370 @ 0x180020370
 * Callers:
 *     sub_1800206DC @ 0x1800206DC (sub_1800206DC.c)
 * Callees:
 *     sub_1800232E0 @ 0x1800232E0 (sub_1800232E0.c)
 */

__int64 __fastcall sub_180020370(__int64 a1, __int64 *a2)
{
  __int64 v4; // rdx

  v4 = *a2;
  *a2 = 0LL;
  sub_1800232E0(a1, v4);
  return a1;
}
