/*
 * XREFs of sub_180045A5C @ 0x180045A5C
 * Callers:
 *     sub_180045180 @ 0x180045180 (sub_180045180.c)
 *     sub_1800459D0 @ 0x1800459D0 (sub_1800459D0.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_180045A5C(_QWORD *a1, _QWORD *a2)
{
  *a2 = a1[18];
  a2[1] = a1[22];
  a2[2] = a1[20];
  a2[3] = a1[24];
  a2[4] = a1[26];
  a2[5] = a1[28];
  a2[6] = a1[30];
  a2[7] = a1[32];
  a2[8] = a1[34];
  return a2;
}
