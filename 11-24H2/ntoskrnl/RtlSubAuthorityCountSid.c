/*
 * XREFs of RtlSubAuthorityCountSid @ 0x140454FB0
 * Callers:
 *     RtlReplaceSidInSd @ 0x140780D90 (RtlReplaceSidInSd.c)
 *     LookupSidInTable @ 0x14086B1E0 (LookupSidInTable.c)
 *     RtlpValidateSidBuffer @ 0x14086B55C (RtlpValidateSidBuffer.c)
 *     RtlEnumerateBoundaryDescriptorEntries @ 0x14086B5C0 (RtlEnumerateBoundaryDescriptorEntries.c)
 *     SeQueryMandatoryLabel @ 0x14086DA0C (SeQueryMandatoryLabel.c)
 *     SeQueryInformationToken @ 0x1408E4F90 (SeQueryInformationToken.c)
 *     RtlGetAppContainerSidType @ 0x1409143B0 (RtlGetAppContainerSidType.c)
 *     RtlIsElevatedRid @ 0x1409A9FC0 (RtlIsElevatedRid.c)
 *     SepCheckCapabilities @ 0x140A8926C (SepCheckCapabilities.c)
 *     NtQueryInformationToken @ 0x140AD09E0 (NtQueryInformationToken.c)
 *     NtSetInformationToken @ 0x140AD4280 (NtSetInformationToken.c)
 *     NtCreateLowBoxToken @ 0x140AD5A60 (NtCreateLowBoxToken.c)
 *     SeSubProcessToken @ 0x140AD660C (SeSubProcessToken.c)
 * Callees:
 *     <none>
 */

PUCHAR __stdcall RtlSubAuthorityCountSid(PSID Sid)
{
  return (PUCHAR)Sid + 1;
}
