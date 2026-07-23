/*
 * XREFs of wcsspn @ 0x1404FDB00
 * Callers:
 *     <none>
 * Callees:
 *     wcschr @ 0x1404FD650 (wcschr.c)
 */

size_t __cdecl wcsspn(const wchar_t *Str, const wchar_t *Control)
{
  wchar_t v2; // ax
  const wchar_t *v5; // rbx

  v2 = *Str;
  v5 = Str;
  while ( v2 && wcschr(Control, v2) )
    v2 = *++v5;
  return v5 - Str;
}
