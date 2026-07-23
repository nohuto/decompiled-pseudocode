/*
 * XREFs of RtlLengthSecurityDescriptorStrict @ 0x14047B1E0
 * Callers:
 *     CmpSetSecurityDescriptorInfo @ 0x140830F98 (CmpSetSecurityDescriptorInfo.c)
 *     CmpTraceSecurityChanging @ 0x1408317FC (CmpTraceSecurityChanging.c)
 *     CmpFindMatchingDescriptorCell @ 0x140831A34 (CmpFindMatchingDescriptorCell.c)
 *     CmpGetSecurityDescriptorNodeEx @ 0x14088452C (CmpGetSecurityDescriptorNodeEx.c)
 * Callees:
 *     SepSecurityDescriptorStrictLength @ 0x140861EB8 (SepSecurityDescriptorStrictLength.c)
 */

__int64 RtlLengthSecurityDescriptorStrict()
{
  return SepSecurityDescriptorStrictLength();
}
