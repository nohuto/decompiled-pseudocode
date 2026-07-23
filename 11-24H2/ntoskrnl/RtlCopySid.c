/*
 * XREFs of RtlCopySid @ 0x1408E7870
 * Callers:
 *     SepCreateTokenEx @ 0x1403E9CAC (SepCreateTokenEx.c)
 *     SeConvertStringSidToSid @ 0x1404B5F90 (SeConvertStringSidToSid.c)
 *     SepGetSidValuesDump @ 0x1406066E0 (SepGetSidValuesDump.c)
 *     RtlAddAccessFilterAce @ 0x14077FAB0 (RtlAddAccessFilterAce.c)
 *     RtlAddResourceAttributeAce @ 0x14077FDD0 (RtlAddResourceAttributeAce.c)
 *     RtlpAddKnownObjectAce @ 0x140780194 (RtlpAddKnownObjectAce.c)
 *     SepCreateSidValuesBlock @ 0x14079303C (SepCreateSidValuesBlock.c)
 *     SepInsertOrReferenceSharedSidEntries @ 0x140794E00 (SepInsertOrReferenceSharedSidEntries.c)
 *     SddlAddAccessFilterAce @ 0x1407967E8 (SddlAddAccessFilterAce.c)
 *     SddlAddProcessTrustLabelAce @ 0x140796A24 (SddlAddProcessTrustLabelAce.c)
 *     SddlAddScopedPolicyIDAce @ 0x140796B84 (SddlAddScopedPolicyIDAce.c)
 *     SepCreateImpersonationTokenDacl @ 0x140852130 (SepCreateImpersonationTokenDacl.c)
 *     RtlAddAccessAllowedAceEx @ 0x140869800 (RtlAddAccessAllowedAceEx.c)
 *     LocalGetAclForString @ 0x140869D60 (LocalGetAclForString.c)
 *     SepCreateClientSecurityEx @ 0x1408A0160 (SepCreateClientSecurityEx.c)
 *     SeQueryInformationToken @ 0x1408E4F90 (SeQueryInformationToken.c)
 *     SepAppendAceToTokenObjectAcl @ 0x1408E6CE0 (SepAppendAceToTokenObjectAcl.c)
 *     PsImpersonateClient @ 0x1408E7A20 (PsImpersonateClient.c)
 *     SeAuditProcessCreation @ 0x1408FD624 (SeAuditProcessCreation.c)
 *     SddlAddMandatoryAce @ 0x140911D60 (SddlAddMandatoryAce.c)
 *     SepAllocateAndInitializeCachedHandleEntry @ 0x140914434 (SepAllocateAndInitializeCachedHandleEntry.c)
 *     SepAdjustGroups @ 0x140986D58 (SepAdjustGroups.c)
 *     PspAssignProcessQuotaBlock @ 0x140A2BBE8 (PspAssignProcessQuotaBlock.c)
 *     SepGetLowBoxNumberEntry @ 0x140A42C4C (SepGetLowBoxNumberEntry.c)
 *     MiLoadHotPatchForUserSid @ 0x140A9AA90 (MiLoadHotPatchForUserSid.c)
 *     MiQueryLoadedPatches @ 0x140AA11D8 (MiQueryLoadedPatches.c)
 *     NtQueryInformationToken @ 0x140AD09E0 (NtQueryInformationToken.c)
 * Callees:
 *     memmove @ 0x1406C0B40 (memmove.c)
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
