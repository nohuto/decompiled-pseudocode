/*
 * XREFs of RtlLengthSecurityDescriptorStrict @ 0x140480680
 * Callers:
 *     CmpGetSecurityDescriptorNodeEx @ 0x14088067C (CmpGetSecurityDescriptorNodeEx.c)
 *     CmpSetSecurityDescriptorInfo @ 0x1409A0064 (CmpSetSecurityDescriptorInfo.c)
 *     CmpTraceSecurityChanging @ 0x1409A08BC (CmpTraceSecurityChanging.c)
 *     CmpFindMatchingDescriptorCell @ 0x1409A0AF4 (CmpFindMatchingDescriptorCell.c)
 * Callees:
 *     SepSecurityDescriptorStrictLength @ 0x1408F06B8 (SepSecurityDescriptorStrictLength.c)
 */

__int64 RtlLengthSecurityDescriptorStrict()
{
  return SepSecurityDescriptorStrictLength();
}
