/*
 * XREFs of RtlLengthSecurityDescriptorStrict @ 0x14047F924
 * Callers:
 *     CmpGetSecurityDescriptorNodeEx @ 0x140976170 (CmpGetSecurityDescriptorNodeEx.c)
 *     CmpFindMatchingDescriptorCell @ 0x1409763A4 (CmpFindMatchingDescriptorCell.c)
 *     CmpSetSecurityDescriptorInfo @ 0x1409765B8 (CmpSetSecurityDescriptorInfo.c)
 *     CmpTraceSecurityChanging @ 0x140976E1C (CmpTraceSecurityChanging.c)
 * Callees:
 *     SepSecurityDescriptorStrictLength @ 0x140984DB8 (SepSecurityDescriptorStrictLength.c)
 */

__int64 RtlLengthSecurityDescriptorStrict()
{
  return SepSecurityDescriptorStrictLength();
}
