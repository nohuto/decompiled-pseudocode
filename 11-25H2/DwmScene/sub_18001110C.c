/*
 * XREFs of sub_18001110C @ 0x18001110C
 * Callers:
 *     sub_180010E24 @ 0x180010E24 (sub_180010E24.c)
 *     sub_18001B134 @ 0x18001B134 (sub_18001B134.c)
 *     sub_18003A4E8 @ 0x18003A4E8 (sub_18003A4E8.c)
 *     sub_18006139C @ 0x18006139C (sub_18006139C.c)
 *     sub_1800632D4 @ 0x1800632D4 (sub_1800632D4.c)
 *     sub_180065D00 @ 0x180065D00 (sub_180065D00.c)
 *     sub_180066CF4 @ 0x180066CF4 (sub_180066CF4.c)
 *     sub_180088B00 @ 0x180088B00 (sub_180088B00.c)
 *     sub_18008B290 @ 0x18008B290 (sub_18008B290.c)
 *     sub_1800917DC @ 0x1800917DC (sub_1800917DC.c)
 * Callees:
 *     <none>
 */

float __fastcall sub_18001110C(float a1, float a2, float a3)
{
  float v3; // xmm0_4

  v3 = fmaxf(a1, a2);
  return fminf(v3, a3);
}
