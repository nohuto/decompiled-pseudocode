/*
 * XREFs of iswdigit @ 0x1404FC3D0
 * Callers:
 *     PfSnParsePrefetchParam @ 0x14094A0DC (PfSnParsePrefetchParam.c)
 * Callees:
 *     iswctype @ 0x1404FE4F0 (iswctype.c)
 */

int __cdecl iswdigit(wint_t C)
{
  return iswctype(C, 4u);
}
