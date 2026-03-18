/*
 * XREFs of RtlSubAuthorityCountSid @ 0x140461BC0
 * Callers:
 *     RtlReplaceSidInSd @ 0x140771C10 (RtlReplaceSidInSd.c)
 *     SeQueryInformationToken @ 0x1408418A0 (SeQueryInformationToken.c)
 *     SeQueryMandatoryLabel @ 0x140903F5C (SeQueryMandatoryLabel.c)
 *     LookupSidInTable @ 0x140918AA0 (LookupSidInTable.c)
 *     RtlpValidateSidBuffer @ 0x140918F98 (RtlpValidateSidBuffer.c)
 *     RtlEnumerateBoundaryDescriptorEntries @ 0x140919000 (RtlEnumerateBoundaryDescriptorEntries.c)
 *     RtlGetAppContainerSidType @ 0x140984120 (RtlGetAppContainerSidType.c)
 *     RtlIsElevatedRid @ 0x1409994B0 (RtlIsElevatedRid.c)
 *     SepCheckCapabilities @ 0x140A87D3C (SepCheckCapabilities.c)
 *     NtQueryInformationToken @ 0x140AC8E20 (NtQueryInformationToken.c)
 *     NtSetInformationToken @ 0x140ACC810 (NtSetInformationToken.c)
 * Callees:
 *     <none>
 */

PUCHAR __stdcall RtlSubAuthorityCountSid(PSID Sid)
{
  return (PUCHAR)Sid + 1;
}
