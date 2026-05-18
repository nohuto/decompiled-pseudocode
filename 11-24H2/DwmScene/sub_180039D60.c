/*
 * XREFs of sub_180039D60 @ 0x180039D60
 * Callers:
 *     sub_180039D9C @ 0x180039D9C (sub_180039D9C.c)
 *     sub_18003ACB4 @ 0x18003ACB4 (sub_18003ACB4.c)
 * Callees:
 *     sub_180011C04 @ 0x180011C04 (sub_180011C04.c)
 *     sub_18003BE3C @ 0x18003BE3C (sub_18003BE3C.c)
 */

_QWORD *__fastcall sub_180039D60(__int64 a1, _QWORD *a2)
{
  sub_18003BE3C(a1);
  sub_180011C04(a1 + 128, a2);
  return a2;
}
