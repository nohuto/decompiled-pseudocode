/*
 * XREFs of wcscpy @ 0x180129140
 * Callers:
 *     wcscat @ 0x180129100 (wcscat.c)
 * Callees:
 *     wcslen @ 0x1801292B0 (wcslen.c)
 *     memmove @ 0x180168980 (memmove.c)
 */

wchar_t *__cdecl wcscpy(wchar_t *Destination, const wchar_t *Source)
{
  size_t v4; // rax

  v4 = wcslen(Source);
  memmove(Destination, Source, 2 * v4 + 2);
  return Destination;
}
