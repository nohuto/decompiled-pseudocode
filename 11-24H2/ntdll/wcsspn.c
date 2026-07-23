/*
 * XREFs of wcsspn @ 0x180125F40
 * Callers:
 *     <none>
 * Callees:
 *     wcschr @ 0x1801258D0 (wcschr.c)
 */

size_t __cdecl wcsspn(const wchar_t *String, const wchar_t *Control)
{
  wchar_t v2; // ax
  const wchar_t *v5; // rbx

  v2 = *String;
  v5 = String;
  while ( v2 && wcschr(Control, v2) )
    v2 = *++v5;
  return v5 - String;
}
