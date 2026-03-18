/*
 * XREFs of RtlValidSid @ 0x140918DF0
 * Callers:
 *     AdtpPackageParameters @ 0x140451F80 (AdtpPackageParameters.c)
 *     SepValidateCAPID @ 0x1404F69D8 (SepValidateCAPID.c)
 *     IopCheckGetQuotaBufferValidity @ 0x140705B04 (IopCheckGetQuotaBufferValidity.c)
 *     IoCheckQuotaBufferValidity @ 0x140707B00 (IoCheckQuotaBufferValidity.c)
 *     NtQueryQuotaInformationFile @ 0x14070BB10 (NtQueryQuotaInformationFile.c)
 *     PiAuCheckClientInteractive @ 0x14071BEA4 (PiAuCheckClientInteractive.c)
 *     RtlAddAccessFilterAce @ 0x140770930 (RtlAddAccessFilterAce.c)
 *     RtlAddResourceAttributeAce @ 0x140770C50 (RtlAddResourceAttributeAce.c)
 *     RtlpAddKnownObjectAce @ 0x140771014 (RtlpAddKnownObjectAce.c)
 *     SepReadSingleCap @ 0x140786994 (SepReadSingleCap.c)
 *     SddlAddAccessFilterAce @ 0x140787308 (SddlAddAccessFilterAce.c)
 *     SddlAddProcessTrustLabelAce @ 0x140787544 (SddlAddProcessTrustLabelAce.c)
 *     SddlAddScopedPolicyIDAce @ 0x1407876A4 (SddlAddScopedPolicyIDAce.c)
 *     ExpInitFullProcessSecurityInfo @ 0x1407A56A0 (ExpInitFullProcessSecurityInfo.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x1408107AC (_PnpGetEnumSecurityDescriptor.c)
 *     DrvDbGetSecurityDescriptor @ 0x1408140A8 (DrvDbGetSecurityDescriptor.c)
 *     SeCaptureSidAndAttributesArray @ 0x1408A38E0 (SeCaptureSidAndAttributesArray.c)
 *     SeCaptureSid @ 0x140916DC8 (SeCaptureSid.c)
 *     RtlFormatCurrentUserKeyPath @ 0x140916F10 (RtlFormatCurrentUserKeyPath.c)
 *     RtlLengthSidAsUnicodeString @ 0x140917060 (RtlLengthSidAsUnicodeString.c)
 *     RtlAddAccessAllowedAceEx @ 0x1409170C0 (RtlAddAccessAllowedAceEx.c)
 *     RtlConvertSidToUnicodeString @ 0x140917220 (RtlConvertSidToUnicodeString.c)
 *     LocalGetAclForString @ 0x140917620 (LocalGetAclForString.c)
 *     RtlAddProcessTrustLabelAce @ 0x140918E20 (RtlAddProcessTrustLabelAce.c)
 *     RtlpValidateSidBuffer @ 0x140918F98 (RtlpValidateSidBuffer.c)
 *     RtlEnumerateBoundaryDescriptorEntries @ 0x140919000 (RtlEnumerateBoundaryDescriptorEntries.c)
 *     SddlAddMandatoryAce @ 0x1409193A8 (SddlAddMandatoryAce.c)
 *     RtlValidSecurityDescriptor @ 0x140919740 (RtlValidSecurityDescriptor.c)
 *     NtManageHotPatch @ 0x140A1D5D0 (NtManageHotPatch.c)
 *     _CmGetRegKeySecurityDescriptor @ 0x140A6AB54 (_CmGetRegKeySecurityDescriptor.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x140A77500 (_PnpGetPropertiesSecurityDescriptor.c)
 *     PiAuCreateStandardSecurityObject @ 0x140C13470 (PiAuCreateStandardSecurityObject.c)
 *     PiAuCreateUserSids @ 0x140C1398C (PiAuCreateUserSids.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall RtlValidSid(PSID Sid)
{
  return (unsigned __int64)Sid > 0x7FFFFFFF0000LL && (*(_BYTE *)Sid & 0xF) == 1 && *((_BYTE *)Sid + 1) <= 0xFu;
}
