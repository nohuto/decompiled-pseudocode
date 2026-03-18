/*
 * XREFs of _ultow @ 0x1404FDDB0
 * Callers:
 *     AdtpBuildUlongString @ 0x140A9D224 (AdtpBuildUlongString.c)
 * Callees:
 *     xtow @ 0x1404FDDD4 (xtow.c)
 */

wchar_t *__cdecl ultow(unsigned int Value, wchar_t *Dest, int Radix)
{
  xtow(Value, Dest, Radix, 0LL);
  return Dest;
}
