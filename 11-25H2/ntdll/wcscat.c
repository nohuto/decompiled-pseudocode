/*
 * XREFs of wcscat @ 0x180129100
 * Callers:
 *     <none>
 * Callees:
 *     wcscpy @ 0x180129140 (wcscpy.c)
 *     wcslen @ 0x1801292B0 (wcslen.c)
 */

wchar_t *__cdecl wcscat(wchar_t *Destination, const wchar_t *Source)
{
  size_t v4; // rax

  v4 = wcslen(Destination);
  wcscpy(&Destination[v4], Source);
  return Destination;
}
