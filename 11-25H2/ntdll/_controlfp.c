/*
 * XREFs of _controlfp @ 0x18012B9F0
 * Callers:
 *     atan @ 0x180124DF0 (atan.c)
 *     atan2 @ 0x180125060 (atan2.c)
 *     cos @ 0x180125B50 (cos.c)
 *     sin @ 0x180125EE0 (sin.c)
 *     tan @ 0x180128AE0 (tan.c)
 * Callees:
 *     <none>
 */

unsigned int __cdecl controlfp(unsigned int NewValue, unsigned int Mask)
{
  return control87(NewValue, Mask & 0xFFF7FFFF);
}
