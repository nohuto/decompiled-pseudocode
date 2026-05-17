/*
 * XREFs of RtlValidSid @ 0x180039220
 * Callers:
 *     RtlAddSIDToBoundaryDescriptorEx @ 0x1800011F0 (RtlAddSIDToBoundaryDescriptorEx.c)
 *     RtlpValidateSidBuffer @ 0x180001428 (RtlpValidateSidBuffer.c)
 *     RtlAddAccessAllowedAceEx @ 0x180037E90 (RtlAddAccessAllowedAceEx.c)
 *     RtlLengthSidAsUnicodeString @ 0x180038750 (RtlLengthSidAsUnicodeString.c)
 *     RtlFormatCurrentUserKeyPath @ 0x1800389C0 (RtlFormatCurrentUserKeyPath.c)
 *     RtlAddAccessAllowedAce @ 0x180038BA0 (RtlAddAccessAllowedAce.c)
 *     RtlpAddKnownAce @ 0x180038CD0 (RtlpAddKnownAce.c)
 *     RtlConvertSidToUnicodeString @ 0x180038E40 (RtlConvertSidToUnicodeString.c)
 *     RtlValidSecurityDescriptor @ 0x180039690 (RtlValidSecurityDescriptor.c)
 *     RtlCheckTokenMembershipEx @ 0x180039A70 (RtlCheckTokenMembershipEx.c)
 *     RtlCheckTokenCapability @ 0x18003BE90 (RtlCheckTokenCapability.c)
 *     RtlpSetSecurityObject @ 0x1800C6F30 (RtlpSetSecurityObject.c)
 *     RtlAddMandatoryAce @ 0x1800C89E0 (RtlAddMandatoryAce.c)
 *     EvtIntReportEventWorker @ 0x1800F4050 (EvtIntReportEventWorker.c)
 *     RtlAddProcessTrustLabelAce @ 0x18010C7F0 (RtlAddProcessTrustLabelAce.c)
 *     RtlAddAccessFilterAce @ 0x18013ACD0 (RtlAddAccessFilterAce.c)
 *     RtlAddCompoundAce @ 0x18013AF80 (RtlAddCompoundAce.c)
 *     RtlAddResourceAttributeAce @ 0x18013B100 (RtlAddResourceAttributeAce.c)
 *     RtlAddScopedPolicyIDAce @ 0x18013B490 (RtlAddScopedPolicyIDAce.c)
 *     RtlpAddKnownObjectAce @ 0x18013B660 (RtlpAddKnownObjectAce.c)
 * Callees:
 *     <none>
 */

bool __fastcall RtlValidSid(_BYTE *a1)
{
  return a1 && (*a1 & 0xF) == 1 && a1[1] <= 0xFu;
}
