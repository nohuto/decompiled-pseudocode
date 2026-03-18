/*
 * XREFs of _wtol @ 0x1404FE730
 * Callers:
 *     _wtoi @ 0x1404FE710 (_wtoi.c)
 *     PfSnParsePrefetchParam @ 0x14096261C (PfSnParsePrefetchParam.c)
 * Callees:
 *     wcstolX @ 0x140500794 (wcstolX.c)
 */

int __cdecl wtol(const wchar_t *Str)
{
  if ( Str )
    return wcstolX(Str, 0LL, 10LL, 1LL);
  else
    return 0;
}
