/*
 * XREFs of atoi @ 0x1404FDBE0
 * Callers:
 *     MinAsn1DecodeGeneralizedTime @ 0x140827B88 (MinAsn1DecodeGeneralizedTime.c)
 *     MinAsn1DecodeUtcTime @ 0x14082805C (MinAsn1DecodeUtcTime.c)
 *     KiInitializeBootStructures @ 0x140B580C0 (KiInitializeBootStructures.c)
 *     HalpMiscGetParameters @ 0x140C0F650 (HalpMiscGetParameters.c)
 * Callees:
 *     atol @ 0x1404FDC00 (atol.c)
 */

int __cdecl atoi(const char *Str)
{
  return atol(Str);
}
