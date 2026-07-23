/*
 * XREFs of RtlValidSid @ 0x1800194A0
 * Callers:
 *     RtlAddAccessAllowedAceEx @ 0x180018110 (RtlAddAccessAllowedAceEx.c)
 *     RtlLengthSidAsUnicodeString @ 0x1800189D0 (RtlLengthSidAsUnicodeString.c)
 *     RtlFormatCurrentUserKeyPath @ 0x180018C40 (RtlFormatCurrentUserKeyPath.c)
 *     RtlAddAccessAllowedAce @ 0x180018E20 (RtlAddAccessAllowedAce.c)
 *     RtlpAddKnownAce @ 0x180018F50 (RtlpAddKnownAce.c)
 *     RtlConvertSidToUnicodeString @ 0x1800190C0 (RtlConvertSidToUnicodeString.c)
 *     RtlValidSecurityDescriptor @ 0x180019910 (RtlValidSecurityDescriptor.c)
 *     RtlCheckTokenMembershipEx @ 0x180019CF0 (RtlCheckTokenMembershipEx.c)
 *     RtlCheckTokenCapability @ 0x18001C110 (RtlCheckTokenCapability.c)
 *     RtlpSetSecurityObject @ 0x1800BEAF0 (RtlpSetSecurityObject.c)
 *     RtlAddMandatoryAce @ 0x1800C05A0 (RtlAddMandatoryAce.c)
 *     RtlAddSIDToBoundaryDescriptorEx @ 0x1800DF398 (RtlAddSIDToBoundaryDescriptorEx.c)
 *     RtlpValidateSidBuffer @ 0x1800DF5D8 (RtlpValidateSidBuffer.c)
 *     EvtIntReportEventWorker @ 0x1800EE760 (EvtIntReportEventWorker.c)
 *     RtlAddProcessTrustLabelAce @ 0x180107530 (RtlAddProcessTrustLabelAce.c)
 *     RtlAddAccessFilterAce @ 0x180138F00 (RtlAddAccessFilterAce.c)
 *     RtlAddCompoundAce @ 0x1801391B0 (RtlAddCompoundAce.c)
 *     RtlAddResourceAttributeAce @ 0x180139330 (RtlAddResourceAttributeAce.c)
 *     RtlAddScopedPolicyIDAce @ 0x1801396C0 (RtlAddScopedPolicyIDAce.c)
 *     RtlpAddKnownObjectAce @ 0x180139890 (RtlpAddKnownObjectAce.c)
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlValidSid(PSID Sid)
{
  return Sid && (*(_BYTE *)Sid & 0xF) == 1 && *((_BYTE *)Sid + 1) <= 0xFu;
}
