/*
 * XREFs of atoi @ 0x1404FB4A0
 * Callers:
 *     MinAsn1DecodeGeneralizedTime @ 0x140828358 (MinAsn1DecodeGeneralizedTime.c)
 *     MinAsn1DecodeUtcTime @ 0x14082882C (MinAsn1DecodeUtcTime.c)
 *     KiInitializeBootStructures @ 0x140B5A140 (KiInitializeBootStructures.c)
 *     HalpMiscGetParameters @ 0x140C11650 (HalpMiscGetParameters.c)
 * Callees:
 *     atol @ 0x1404FB4C0 (atol.c)
 */

int __cdecl atoi(const char *Str)
{
  return atol(Str);
}
