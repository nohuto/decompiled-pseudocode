/*
 * XREFs of _ui64toa @ 0x18011FE30
 * Callers:
 *     <none>
 * Callees:
 *     x64toa @ 0x18011FE70 (x64toa.c)
 */

char *__cdecl ui64toa(unsigned __int64 Value, char *Buffer, int Radix)
{
  x64toa(Value, Buffer, Radix, 0LL);
  return Buffer;
}
