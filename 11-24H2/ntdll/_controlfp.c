/*
 * XREFs of _controlfp @ 0x180128140
 * Callers:
 *     atan @ 0x180121540 (atan.c)
 *     atan2 @ 0x1801217B0 (atan2.c)
 *     cos @ 0x1801222A0 (cos.c)
 *     sin @ 0x180122630 (sin.c)
 *     tan @ 0x180125230 (tan.c)
 * Callees:
 *     <none>
 */

unsigned int __cdecl controlfp(unsigned int NewValue, unsigned int Mask)
{
  return control87(NewValue, Mask & 0xFFF7FFFF);
}
