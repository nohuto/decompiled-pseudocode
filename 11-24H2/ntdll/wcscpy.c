/*
 * XREFs of wcscpy @ 0x180127660
 * Callers:
 *     wcscat @ 0x180127620 (wcscat.c)
 * Callees:
 *     wcslen @ 0x1801277D0 (wcslen.c)
 *     memmove @ 0x180167400 (memmove.c)
 */

wchar_t *__cdecl wcscpy(wchar_t *Destination, const wchar_t *Source)
{
  size_t v4; // rax

  v4 = wcslen(Source);
  memmove(Destination, Source, 2 * v4 + 2);
  return Destination;
}
