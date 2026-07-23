/*
 * XREFs of wcspbrk @ 0x180125E20
 * Callers:
 *     RtlpMuiRegLoadLicInformation @ 0x1800CC41C (RtlpMuiRegLoadLicInformation.c)
 * Callees:
 *     wcschr @ 0x1801258D0 (wcschr.c)
 */

wchar_t *__cdecl wcspbrk(const wchar_t *String, const wchar_t *Control)
{
  wchar_t v2; // ax
  const wchar_t *i; // rbx

  v2 = *String;
  for ( i = String; ; v2 = *i )
  {
    if ( !v2 )
      return 0LL;
    if ( wcschr(Control, v2) )
      break;
    ++i;
  }
  return (wchar_t *)i;
}
