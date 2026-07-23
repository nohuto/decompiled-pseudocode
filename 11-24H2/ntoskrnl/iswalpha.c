/*
 * XREFs of iswalpha @ 0x1404FC3AC
 * Callers:
 *     PiDrvDbFindSystemFilePathToken @ 0x140734D68 (PiDrvDbFindSystemFilePathToken.c)
 * Callees:
 *     iswctype @ 0x1404FE4F0 (iswctype.c)
 */

int __cdecl iswalpha(wint_t C)
{
  return iswctype(C, 0x103u);
}
