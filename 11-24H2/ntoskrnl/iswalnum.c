/*
 * XREFs of iswalnum @ 0x1404FC390
 * Callers:
 *     PiDrvDbFindSystemFilePathToken @ 0x140734D68 (PiDrvDbFindSystemFilePathToken.c)
 *     IsEncodedAttributeChar @ 0x1407973D4 (IsEncodedAttributeChar.c)
 *     GetAttributeName @ 0x140864C40 (GetAttributeName.c)
 * Callees:
 *     iswctype @ 0x1404FE4F0 (iswctype.c)
 */

int __cdecl iswalnum(wint_t C)
{
  return iswctype(C, 0x107u);
}
