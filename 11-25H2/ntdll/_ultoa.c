/*
 * XREFs of _ultoa @ 0x180123700
 * Callers:
 *     <none>
 * Callees:
 *     xtoa @ 0x18012379C (xtoa.c)
 */

char *__cdecl ultoa(unsigned int Value, char *Buffer, int Radix)
{
  xtoa(Value, Buffer, Radix, 0LL);
  return Buffer;
}
