/*
 * XREFs of wcsncat @ 0x180125B20
 * Callers:
 *     <none>
 * Callees:
 *     wcslen @ 0x180125A00 (wcslen.c)
 *     wcsnlen @ 0x180125C50 (wcsnlen.c)
 *     memmove @ 0x1801657C0 (memmove.c)
 */

wchar_t *__cdecl wcsncat(wchar_t *Destination, const wchar_t *Source, size_t Count)
{
  wchar_t *v6; // rdi
  size_t v7; // rbx

  v6 = &Destination[wcslen(Destination)];
  v7 = wcsnlen(Source, Count);
  memmove(v6, Source, v7 * 2);
  v6[v7] = 0;
  return Destination;
}
