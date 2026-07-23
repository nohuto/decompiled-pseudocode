/*
 * XREFs of _wtol @ 0x1404FBFF0
 * Callers:
 *     _wtoi @ 0x1404FBFD0 (_wtoi.c)
 *     PfSnParsePrefetchParam @ 0x14094A0DC (PfSnParsePrefetchParam.c)
 * Callees:
 *     wcstolX @ 0x1404FE054 (wcstolX.c)
 */

int __cdecl wtol(const wchar_t *Str)
{
  if ( Str )
    return wcstolX(Str, 0LL, 10LL, 1LL);
  else
    return 0;
}
