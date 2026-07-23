/*
 * XREFs of RtlValidSid @ 0x14086B530
 * Callers:
 *     AdtpPackageParameters @ 0x140448568 (AdtpPackageParameters.c)
 *     SepValidateCAPID @ 0x1404F697C (SepValidateCAPID.c)
 *     IopCheckGetQuotaBufferValidity @ 0x14070F794 (IopCheckGetQuotaBufferValidity.c)
 *     IoCheckQuotaBufferValidity @ 0x140711790 (IoCheckQuotaBufferValidity.c)
 *     NtQueryQuotaInformationFile @ 0x1407157A0 (NtQueryQuotaInformationFile.c)
 *     PiAuCheckClientInteractive @ 0x1407259B4 (PiAuCheckClientInteractive.c)
 *     RtlAddAccessFilterAce @ 0x14077FAB0 (RtlAddAccessFilterAce.c)
 *     RtlAddResourceAttributeAce @ 0x14077FDD0 (RtlAddResourceAttributeAce.c)
 *     RtlpAddKnownObjectAce @ 0x140780194 (RtlpAddKnownObjectAce.c)
 *     SepReadSingleCap @ 0x140795E74 (SepReadSingleCap.c)
 *     SddlAddAccessFilterAce @ 0x1407967E8 (SddlAddAccessFilterAce.c)
 *     SddlAddProcessTrustLabelAce @ 0x140796A24 (SddlAddProcessTrustLabelAce.c)
 *     SddlAddScopedPolicyIDAce @ 0x140796B84 (SddlAddScopedPolicyIDAce.c)
 *     ExpInitFullProcessSecurityInfo @ 0x1407B4EC0 (ExpInitFullProcessSecurityInfo.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x140820DEC (_PnpGetEnumSecurityDescriptor.c)
 *     DrvDbGetSecurityDescriptor @ 0x140824610 (DrvDbGetSecurityDescriptor.c)
 *     SeCaptureSid @ 0x140869508 (SeCaptureSid.c)
 *     RtlFormatCurrentUserKeyPath @ 0x140869650 (RtlFormatCurrentUserKeyPath.c)
 *     RtlLengthSidAsUnicodeString @ 0x1408697A0 (RtlLengthSidAsUnicodeString.c)
 *     RtlAddAccessAllowedAceEx @ 0x140869800 (RtlAddAccessAllowedAceEx.c)
 *     RtlConvertSidToUnicodeString @ 0x140869960 (RtlConvertSidToUnicodeString.c)
 *     LocalGetAclForString @ 0x140869D60 (LocalGetAclForString.c)
 *     RtlpValidateSidBuffer @ 0x14086B55C (RtlpValidateSidBuffer.c)
 *     RtlEnumerateBoundaryDescriptorEntries @ 0x14086B5C0 (RtlEnumerateBoundaryDescriptorEntries.c)
 *     RtlValidSecurityDescriptor @ 0x14086BB60 (RtlValidSecurityDescriptor.c)
 *     RtlAddProcessTrustLabelAce @ 0x140911760 (RtlAddProcessTrustLabelAce.c)
 *     SddlAddMandatoryAce @ 0x140911D60 (SddlAddMandatoryAce.c)
 *     SeCaptureSidAndAttributesArray @ 0x140985730 (SeCaptureSidAndAttributesArray.c)
 *     _CmGetRegKeySecurityDescriptor @ 0x140A66A24 (_CmGetRegKeySecurityDescriptor.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x140A73678 (_PnpGetPropertiesSecurityDescriptor.c)
 *     NtManageHotPatch @ 0x140AE9BD0 (NtManageHotPatch.c)
 *     PiAuCreateStandardSecurityObject @ 0x140C26530 (PiAuCreateStandardSecurityObject.c)
 *     PiAuCreateUserSids @ 0x140C26A4C (PiAuCreateUserSids.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall RtlValidSid(PSID Sid)
{
  return (unsigned __int64)Sid > 0x7FFFFFFF0000LL && (*(_BYTE *)Sid & 0xF) == 1 && *((_BYTE *)Sid + 1) <= 0xFu;
}
