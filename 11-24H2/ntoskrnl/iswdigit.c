/*
 * XREFs of iswdigit @ 0x1404FEB10
 * Callers:
 *     PfSnParsePrefetchParam @ 0x14096261C (PfSnParsePrefetchParam.c)
 * Callees:
 *     iswctype @ 0x140500C30 (iswctype.c)
 */

int __cdecl iswdigit(wint_t C)
{
  return iswctype(C, 4u);
}
