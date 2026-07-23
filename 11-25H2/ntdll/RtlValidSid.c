/*
 * XREFs of RtlValidSid @ 0x18005FCD0
 * Callers:
 *     RtlAddAccessAllowedAceEx @ 0x18005E800 (RtlAddAccessAllowedAceEx.c)
 *     RtlLengthSidAsUnicodeString @ 0x18005F160 (RtlLengthSidAsUnicodeString.c)
 *     RtlFormatCurrentUserKeyPath @ 0x18005F470 (RtlFormatCurrentUserKeyPath.c)
 *     RtlAddAccessAllowedAce @ 0x18005F650 (RtlAddAccessAllowedAce.c)
 *     RtlpAddKnownAce @ 0x18005F780 (RtlpAddKnownAce.c)
 *     RtlConvertSidToUnicodeString @ 0x18005F8F0 (RtlConvertSidToUnicodeString.c)
 *     RtlValidSecurityDescriptor @ 0x18005FFD0 (RtlValidSecurityDescriptor.c)
 *     RtlCheckTokenMembershipEx @ 0x1800601A0 (RtlCheckTokenMembershipEx.c)
 *     RtlAddSIDToBoundaryDescriptorEx @ 0x1800608DC (RtlAddSIDToBoundaryDescriptorEx.c)
 *     RtlAddMandatoryAce @ 0x180060B20 (RtlAddMandatoryAce.c)
 *     RtlpValidateSidBuffer @ 0x180060D10 (RtlpValidateSidBuffer.c)
 *     RtlCheckTokenCapability @ 0x18008F880 (RtlCheckTokenCapability.c)
 *     RtlAddProcessTrustLabelAce @ 0x1800E68E0 (RtlAddProcessTrustLabelAce.c)
 *     RtlpSetSecurityObject @ 0x1800E6AA0 (RtlpSetSecurityObject.c)
 *     EvtIntReportEventWorker @ 0x1800F5D70 (EvtIntReportEventWorker.c)
 *     RtlAddAccessFilterAce @ 0x18013C440 (RtlAddAccessFilterAce.c)
 *     RtlAddCompoundAce @ 0x18013C6F0 (RtlAddCompoundAce.c)
 *     RtlAddResourceAttributeAce @ 0x18013C870 (RtlAddResourceAttributeAce.c)
 *     RtlAddScopedPolicyIDAce @ 0x18013CC00 (RtlAddScopedPolicyIDAce.c)
 *     RtlpAddKnownObjectAce @ 0x18013CDD0 (RtlpAddKnownObjectAce.c)
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlValidSid(PSID Sid)
{
  return Sid && (*(_BYTE *)Sid & 0xF) == 1 && *((_BYTE *)Sid + 1) <= 0xFu;
}
