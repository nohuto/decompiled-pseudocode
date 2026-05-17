/*
 * XREFs of _controlfp @ 0x180129F10
 * Callers:
 *     atan @ 0x180123310 (atan.c)
 *     atan2 @ 0x180123580 (atan2.c)
 *     cos @ 0x180124070 (cos.c)
 *     sin @ 0x180124400 (sin.c)
 *     tan @ 0x180127000 (tan.c)
 * Callees:
 *     <none>
 */

unsigned int __cdecl controlfp(unsigned int NewValue, unsigned int Mask)
{
  return control87(NewValue, Mask & 0xFFF7FFFF);
}
