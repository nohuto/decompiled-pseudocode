/*
 * XREFs of iswalnum @ 0x1404FEAD0
 * Callers:
 *     PiDrvDbFindSystemFilePathToken @ 0x140736E38 (PiDrvDbFindSystemFilePathToken.c)
 *     IsEncodedAttributeChar @ 0x1407972C4 (IsEncodedAttributeChar.c)
 *     GetAttributeName @ 0x140860634 (GetAttributeName.c)
 * Callees:
 *     iswctype @ 0x140500C30 (iswctype.c)
 */

int __cdecl iswalnum(wint_t C)
{
  return iswctype(C, 0x107u);
}
