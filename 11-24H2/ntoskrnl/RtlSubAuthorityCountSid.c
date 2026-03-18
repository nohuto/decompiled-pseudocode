/*
 * XREFs of RtlSubAuthorityCountSid @ 0x1404600D0
 * Callers:
 *     RtlReplaceSidInSd @ 0x140780E60 (RtlReplaceSidInSd.c)
 *     LookupSidInTable @ 0x140866BD0 (LookupSidInTable.c)
 *     RtlpValidateSidBuffer @ 0x1408670C8 (RtlpValidateSidBuffer.c)
 *     RtlEnumerateBoundaryDescriptorEntries @ 0x140867130 (RtlEnumerateBoundaryDescriptorEntries.c)
 *     SeQueryMandatoryLabel @ 0x1408696DC (SeQueryMandatoryLabel.c)
 *     RtlGetAppContainerSidType @ 0x1408F2D70 (RtlGetAppContainerSidType.c)
 *     SeQueryInformationToken @ 0x14090D870 (SeQueryInformationToken.c)
 *     RtlIsElevatedRid @ 0x1409B2C30 (RtlIsElevatedRid.c)
 *     SepCheckCapabilities @ 0x140A8CD3C (SepCheckCapabilities.c)
 *     NtQueryInformationToken @ 0x140AD3370 (NtQueryInformationToken.c)
 *     NtSetInformationToken @ 0x140AD6C10 (NtSetInformationToken.c)
 *     NtCreateLowBoxToken @ 0x140AD8020 (NtCreateLowBoxToken.c)
 * Callees:
 *     <none>
 */

PUCHAR __stdcall RtlSubAuthorityCountSid(PSID Sid)
{
  return (PUCHAR)Sid + 1;
}
