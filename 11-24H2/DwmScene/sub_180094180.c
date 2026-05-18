/*
 * XREFs of sub_180094180 @ 0x180094180
 * Callers:
 *     sub_180094240 @ 0x180094240 (sub_180094240.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_180094180(float *a1, float *a2)
{
  return *a1 != *a2 || a1[1] != a2[1] || a1[2] != a2[2] || a1[3] != a2[3] || a1[4] != a2[4] || a1[5] != a2[5];
}
