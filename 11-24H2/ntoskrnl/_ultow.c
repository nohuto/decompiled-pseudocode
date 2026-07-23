/*
 * XREFs of _ultow @ 0x1404FB670
 * Callers:
 *     AdtpBuildUlongString @ 0x140A98794 (AdtpBuildUlongString.c)
 * Callees:
 *     xtow @ 0x1404FB694 (xtow.c)
 */

wchar_t *__cdecl ultow(unsigned int Value, wchar_t *Dest, int Radix)
{
  xtow(Value, Dest, Radix, 0LL);
  return Dest;
}
