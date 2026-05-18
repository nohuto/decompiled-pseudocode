/*
 * XREFs of sub_180012654 @ 0x180012654
 * Callers:
 *     sub_180012A40 @ 0x180012A40 (sub_180012A40.c)
 *     sub_180014E20 @ 0x180014E20 (sub_180014E20.c)
 *     sub_1800396E0 @ 0x1800396E0 (sub_1800396E0.c)
 *     sub_180039D9C @ 0x180039D9C (sub_180039D9C.c)
 *     sub_180039F68 @ 0x180039F68 (sub_180039F68.c)
 *     sub_18003A064 @ 0x18003A064 (sub_18003A064.c)
 *     sub_18003A170 @ 0x18003A170 (sub_18003A170.c)
 *     sub_18003A3E0 @ 0x18003A3E0 (sub_18003A3E0.c)
 *     sub_18003A578 @ 0x18003A578 (sub_18003A578.c)
 *     sub_18003B094 @ 0x18003B094 (sub_18003B094.c)
 *     sub_18003B698 @ 0x18003B698 (sub_18003B698.c)
 *     sub_18003B7CC @ 0x18003B7CC (sub_18003B7CC.c)
 *     sub_18003BAF0 @ 0x18003BAF0 (sub_18003BAF0.c)
 *     sub_18003EE4C @ 0x18003EE4C (sub_18003EE4C.c)
 *     sub_18008C130 @ 0x18008C130 (sub_18008C130.c)
 * Callees:
 *     sub_180011C04 @ 0x180011C04 (sub_180011C04.c)
 *     sub_18003BE3C @ 0x18003BE3C (sub_18003BE3C.c)
 */

_QWORD *__fastcall sub_180012654(__int64 a1, _QWORD *a2)
{
  sub_18003BE3C();
  sub_180011C04(a1 + 56, a2);
  return a2;
}
