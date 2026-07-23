/*
 * XREFs of wcsncat @ 0x1404FD820
 * Callers:
 *     <none>
 * Callees:
 *     wcslen @ 0x1404FD790 (wcslen.c)
 *     wcsnlen @ 0x1404FD950 (wcsnlen.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 */

wchar_t *__cdecl wcsncat(wchar_t *Dest, const wchar_t *Source, size_t Count)
{
  wchar_t *v6; // rdi
  size_t v7; // rbx

  v6 = &Dest[wcslen(Dest)];
  v7 = wcsnlen(Source, Count);
  memmove(v6, Source, v7 * 2);
  v6[v7] = 0;
  return Dest;
}
