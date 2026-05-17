/*
 * XREFs of RtlCopySid @ 0x1800C8B90
 * Callers:
 *     RtlAddMandatoryAce @ 0x1800C89E0 (RtlAddMandatoryAce.c)
 *     RtlpGetDefaultTrustSubjectContext @ 0x1800C90B0 (RtlpGetDefaultTrustSubjectContext.c)
 *     RtlCreateAndSetSD @ 0x1800CE250 (RtlCreateAndSetSD.c)
 *     RtlAddProcessTrustLabelAce @ 0x18010C7F0 (RtlAddProcessTrustLabelAce.c)
 *     RtlCopySidAndAttributesArray @ 0x180138F60 (RtlCopySidAndAttributesArray.c)
 *     RtlAddAccessFilterAce @ 0x18013ACD0 (RtlAddAccessFilterAce.c)
 *     RtlAddCompoundAce @ 0x18013AF80 (RtlAddCompoundAce.c)
 *     RtlAddResourceAttributeAce @ 0x18013B100 (RtlAddResourceAttributeAce.c)
 *     RtlAddScopedPolicyIDAce @ 0x18013B490 (RtlAddScopedPolicyIDAce.c)
 *     RtlpAddKnownObjectAce @ 0x18013B660 (RtlpAddKnownObjectAce.c)
 * Callees:
 *     memmove @ 0x180167400 (memmove.c)
 */

__int64 __fastcall RtlCopySid(unsigned int a1, void *a2, unsigned __int8 *a3)
{
  unsigned int v3; // eax

  v3 = 4 * a3[1] + 8;
  if ( v3 > a1 )
    return 3221225507LL;
  memmove(a2, a3, v3);
  return 0LL;
}
