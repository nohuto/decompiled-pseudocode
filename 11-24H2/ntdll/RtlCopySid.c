/*
 * XREFs of RtlCopySid @ 0x1800C0750
 * Callers:
 *     RtlAddMandatoryAce @ 0x1800C05A0 (RtlAddMandatoryAce.c)
 *     RtlpGetDefaultTrustSubjectContext @ 0x1800C0C70 (RtlpGetDefaultTrustSubjectContext.c)
 *     RtlCreateAndSetSD @ 0x1800C5E10 (RtlCreateAndSetSD.c)
 *     RtlAddProcessTrustLabelAce @ 0x180107530 (RtlAddProcessTrustLabelAce.c)
 *     RtlCopySidAndAttributesArray @ 0x180137190 (RtlCopySidAndAttributesArray.c)
 *     RtlAddAccessFilterAce @ 0x180138F00 (RtlAddAccessFilterAce.c)
 *     RtlAddCompoundAce @ 0x1801391B0 (RtlAddCompoundAce.c)
 *     RtlAddResourceAttributeAce @ 0x180139330 (RtlAddResourceAttributeAce.c)
 *     RtlAddScopedPolicyIDAce @ 0x1801396C0 (RtlAddScopedPolicyIDAce.c)
 *     RtlpAddKnownObjectAce @ 0x180139890 (RtlpAddKnownObjectAce.c)
 * Callees:
 *     memmove @ 0x1801657C0 (memmove.c)
 */

NTSTATUS __cdecl RtlCopySid(ULONG DestinationSidLength, PSID DestinationSid, PSID SourceSid)
{
  ULONG v3; // eax

  v3 = 4 * *((unsigned __int8 *)SourceSid + 1) + 8;
  if ( v3 > DestinationSidLength )
    return -1073741789;
  memmove(DestinationSid, SourceSid, v3);
  return 0;
}
