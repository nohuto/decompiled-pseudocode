/*
 * XREFs of sub_18001120C @ 0x18001120C
 * Callers:
 *     sub_180010F24 @ 0x180010F24 (sub_180010F24.c)
 *     sub_18001B294 @ 0x18001B294 (sub_18001B294.c)
 *     sub_18003A648 @ 0x18003A648 (sub_18003A648.c)
 *     sub_1800614FC @ 0x1800614FC (sub_1800614FC.c)
 *     sub_180063434 @ 0x180063434 (sub_180063434.c)
 *     sub_180065E60 @ 0x180065E60 (sub_180065E60.c)
 *     sub_180066E54 @ 0x180066E54 (sub_180066E54.c)
 *     sub_180088C60 @ 0x180088C60 (sub_180088C60.c)
 *     sub_18008B3F0 @ 0x18008B3F0 (sub_18008B3F0.c)
 *     sub_18009193C @ 0x18009193C (sub_18009193C.c)
 * Callees:
 *     <none>
 */

float __fastcall sub_18001120C(float a1, float a2, float a3)
{
  float v3; // xmm0_4

  v3 = fmaxf(a1, a2);
  return fminf(v3, a3);
}
