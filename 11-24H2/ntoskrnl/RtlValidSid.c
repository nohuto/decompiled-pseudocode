/*
 * XREFs of RtlValidSid @ 0x140866F20
 * Callers:
 *     AdtpPackageParameters @ 0x1404534B8 (AdtpPackageParameters.c)
 *     SepValidateCAPID @ 0x1404F909C (SepValidateCAPID.c)
 *     IopCheckGetQuotaBufferValidity @ 0x140711C04 (IopCheckGetQuotaBufferValidity.c)
 *     IoCheckQuotaBufferValidity @ 0x140713C00 (IoCheckQuotaBufferValidity.c)
 *     NtQueryQuotaInformationFile @ 0x140717C10 (NtQueryQuotaInformationFile.c)
 *     PiAuCheckClientInteractive @ 0x140727E24 (PiAuCheckClientInteractive.c)
 *     RtlAddAccessFilterAce @ 0x14077FB80 (RtlAddAccessFilterAce.c)
 *     RtlAddResourceAttributeAce @ 0x14077FEA0 (RtlAddResourceAttributeAce.c)
 *     RtlpAddKnownObjectAce @ 0x140780264 (RtlpAddKnownObjectAce.c)
 *     SepReadSingleCap @ 0x140795D64 (SepReadSingleCap.c)
 *     SddlAddAccessFilterAce @ 0x1407966D8 (SddlAddAccessFilterAce.c)
 *     SddlAddProcessTrustLabelAce @ 0x140796914 (SddlAddProcessTrustLabelAce.c)
 *     SddlAddScopedPolicyIDAce @ 0x140796A74 (SddlAddScopedPolicyIDAce.c)
 *     ExpInitFullProcessSecurityInfo @ 0x1407B4A70 (ExpInitFullProcessSecurityInfo.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x1408206AC (_PnpGetEnumSecurityDescriptor.c)
 *     DrvDbGetSecurityDescriptor @ 0x140823ED0 (DrvDbGetSecurityDescriptor.c)
 *     SeCaptureSid @ 0x140864EF8 (SeCaptureSid.c)
 *     RtlFormatCurrentUserKeyPath @ 0x140865040 (RtlFormatCurrentUserKeyPath.c)
 *     RtlLengthSidAsUnicodeString @ 0x140865190 (RtlLengthSidAsUnicodeString.c)
 *     RtlAddAccessAllowedAceEx @ 0x1408651F0 (RtlAddAccessAllowedAceEx.c)
 *     RtlConvertSidToUnicodeString @ 0x140865350 (RtlConvertSidToUnicodeString.c)
 *     LocalGetAclForString @ 0x140865750 (LocalGetAclForString.c)
 *     RtlAddProcessTrustLabelAce @ 0x140866F50 (RtlAddProcessTrustLabelAce.c)
 *     RtlpValidateSidBuffer @ 0x1408670C8 (RtlpValidateSidBuffer.c)
 *     RtlEnumerateBoundaryDescriptorEntries @ 0x140867130 (RtlEnumerateBoundaryDescriptorEntries.c)
 *     SddlAddMandatoryAce @ 0x1408674D8 (SddlAddMandatoryAce.c)
 *     RtlValidSecurityDescriptor @ 0x140867870 (RtlValidSecurityDescriptor.c)
 *     SeCaptureSidAndAttributesArray @ 0x140936600 (SeCaptureSidAndAttributesArray.c)
 *     _CmGetRegKeySecurityDescriptor @ 0x140A6D364 (_CmGetRegKeySecurityDescriptor.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x140A79378 (_PnpGetPropertiesSecurityDescriptor.c)
 *     NtManageHotPatch @ 0x140AE7000 (NtManageHotPatch.c)
 *     PiAuCreateStandardSecurityObject @ 0x140C24500 (PiAuCreateStandardSecurityObject.c)
 *     PiAuCreateUserSids @ 0x140C24A1C (PiAuCreateUserSids.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall RtlValidSid(PSID Sid)
{
  return (unsigned __int64)Sid > 0x7FFFFFFF0000LL && (*(_BYTE *)Sid & 0xF) == 1 && *((_BYTE *)Sid + 1) <= 0xFu;
}
