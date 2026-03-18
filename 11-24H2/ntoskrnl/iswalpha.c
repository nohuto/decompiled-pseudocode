/*
 * XREFs of iswalpha @ 0x1404FEAEC
 * Callers:
 *     PiDrvDbFindSystemFilePathToken @ 0x140736E38 (PiDrvDbFindSystemFilePathToken.c)
 * Callees:
 *     iswctype @ 0x140500C30 (iswctype.c)
 */

int __cdecl iswalpha(wint_t C)
{
  return iswctype(C, 0x103u);
}
