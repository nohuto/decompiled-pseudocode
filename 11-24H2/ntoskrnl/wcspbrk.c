/*
 * XREFs of wcspbrk @ 0x140500920
 * Callers:
 *     RtlpMuiRegLoadLicInformation @ 0x1404BF62C (RtlpMuiRegLoadLicInformation.c)
 *     IoRegisterDeviceInterface @ 0x1408B2B20 (IoRegisterDeviceInterface.c)
 *     PoThermalCounterSetCallback @ 0x1409FDF10 (PoThermalCounterSetCallback.c)
 * Callees:
 *     wcschr @ 0x1404FFD90 (wcschr.c)
 */

wchar_t *__cdecl wcspbrk(const wchar_t *Str, const wchar_t *Control)
{
  wchar_t v2; // ax
  const wchar_t *i; // rbx

  v2 = *Str;
  for ( i = Str; ; v2 = *i )
  {
    if ( !v2 )
      return 0LL;
    if ( wcschr(Control, v2) )
      break;
    ++i;
  }
  return (wchar_t *)i;
}
