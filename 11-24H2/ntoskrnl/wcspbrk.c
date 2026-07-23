/*
 * XREFs of wcspbrk @ 0x1404FE1E0
 * Callers:
 *     RtlpMuiRegLoadLicInformation @ 0x1404BAB5C (RtlpMuiRegLoadLicInformation.c)
 *     IoRegisterDeviceInterface @ 0x1408B0410 (IoRegisterDeviceInterface.c)
 *     PoThermalCounterSetCallback @ 0x1409F7180 (PoThermalCounterSetCallback.c)
 * Callees:
 *     wcschr @ 0x1404FD650 (wcschr.c)
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
