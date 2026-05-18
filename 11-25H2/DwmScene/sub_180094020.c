/*
 * XREFs of sub_180094020 @ 0x180094020
 * Callers:
 *     sub_1800940E0 @ 0x1800940E0 (sub_1800940E0.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_180094020(float *a1, float *a2)
{
  return *a1 != *a2 || a1[1] != a2[1] || a1[2] != a2[2] || a1[3] != a2[3] || a1[4] != a2[4] || a1[5] != a2[5];
}
