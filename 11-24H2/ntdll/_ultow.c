/*
 * XREFs of _ultow @ 0x18011FFE0
 * Callers:
 *     <none>
 * Callees:
 *     xtow @ 0x180120098 (xtow.c)
 */

wchar_t *__cdecl ultow(unsigned int Value, wchar_t *Buffer, int Radix)
{
  xtow(Value, Buffer, Radix, 0LL);
  return Buffer;
}
