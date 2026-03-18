/*
 * XREFs of RtlCopySid @ 0x1408A5010
 * Callers:
 *     SepCreateTokenEx @ 0x14036B744 (SepCreateTokenEx.c)
 *     SeConvertStringSidToSid @ 0x1404BBDB0 (SeConvertStringSidToSid.c)
 *     SepGetSidValuesDump @ 0x1405FC9DC (SepGetSidValuesDump.c)
 *     RtlAddAccessFilterAce @ 0x140770930 (RtlAddAccessFilterAce.c)
 *     RtlAddResourceAttributeAce @ 0x140770C50 (RtlAddResourceAttributeAce.c)
 *     RtlpAddKnownObjectAce @ 0x140771014 (RtlpAddKnownObjectAce.c)
 *     SepCreateSidValuesBlock @ 0x140783B4C (SepCreateSidValuesBlock.c)
 *     SepInsertOrReferenceSharedSidEntries @ 0x1407859A8 (SepInsertOrReferenceSharedSidEntries.c)
 *     SddlAddAccessFilterAce @ 0x140787308 (SddlAddAccessFilterAce.c)
 *     SddlAddProcessTrustLabelAce @ 0x140787544 (SddlAddProcessTrustLabelAce.c)
 *     SddlAddScopedPolicyIDAce @ 0x1407876A4 (SddlAddScopedPolicyIDAce.c)
 *     SeQueryInformationToken @ 0x1408418A0 (SeQueryInformationToken.c)
 *     SepCreateImpersonationTokenDacl @ 0x1408A2270 (SepCreateImpersonationTokenDacl.c)
 *     SepAppendAceToTokenObjectAcl @ 0x1408A43D0 (SepAppendAceToTokenObjectAcl.c)
 *     PsImpersonateClient @ 0x1408A51C0 (PsImpersonateClient.c)
 *     SepCreateClientSecurityEx @ 0x1408A6AF0 (SepCreateClientSecurityEx.c)
 *     SeAuditProcessCreation @ 0x1408F435C (SeAuditProcessCreation.c)
 *     RtlAddAccessAllowedAceEx @ 0x1409170C0 (RtlAddAccessAllowedAceEx.c)
 *     LocalGetAclForString @ 0x140917620 (LocalGetAclForString.c)
 *     SddlAddMandatoryAce @ 0x1409193A8 (SddlAddMandatoryAce.c)
 *     SepAllocateAndInitializeCachedHandleEntry @ 0x1409841A4 (SepAllocateAndInitializeCachedHandleEntry.c)
 *     SepAdjustGroups @ 0x140996A10 (SepAdjustGroups.c)
 *     SepGetLowBoxNumberEntry @ 0x140A0DE40 (SepGetLowBoxNumberEntry.c)
 *     PspAssignProcessQuotaBlock @ 0x140A30EE8 (PspAssignProcessQuotaBlock.c)
 *     MiLoadHotPatchForUserSid @ 0x140A98B50 (MiLoadHotPatchForUserSid.c)
 *     MiQueryLoadedPatches @ 0x140AA1218 (MiQueryLoadedPatches.c)
 *     NtQueryInformationToken @ 0x140AC8E20 (NtQueryInformationToken.c)
 * Callees:
 *     memmove @ 0x1406B4940 (memmove.c)
 */

NTSTATUS __stdcall RtlCopySid(ULONG DestinationSidLength, PSID DestinationSid, PSID SourceSid)
{
  ULONG v3; // eax

  v3 = 4 * *((unsigned __int8 *)SourceSid + 1) + 8;
  if ( v3 > DestinationSidLength )
    return -1073741789;
  memmove(DestinationSid, SourceSid, v3);
  return 0;
}
