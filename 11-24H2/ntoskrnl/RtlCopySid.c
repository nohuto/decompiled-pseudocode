/*
 * XREFs of RtlCopySid @ 0x140910120
 * Callers:
 *     SepCreateTokenEx @ 0x1403645F4 (SepCreateTokenEx.c)
 *     SeConvertStringSidToSid @ 0x1404BB0F0 (SeConvertStringSidToSid.c)
 *     SepGetSidValuesDump @ 0x140608E6C (SepGetSidValuesDump.c)
 *     RtlAddAccessFilterAce @ 0x14077FB80 (RtlAddAccessFilterAce.c)
 *     RtlAddResourceAttributeAce @ 0x14077FEA0 (RtlAddResourceAttributeAce.c)
 *     RtlpAddKnownObjectAce @ 0x140780264 (RtlpAddKnownObjectAce.c)
 *     SepCreateSidValuesBlock @ 0x140792F9C (SepCreateSidValuesBlock.c)
 *     SepInsertOrReferenceSharedSidEntries @ 0x140794D78 (SepInsertOrReferenceSharedSidEntries.c)
 *     SddlAddAccessFilterAce @ 0x1407966D8 (SddlAddAccessFilterAce.c)
 *     SddlAddProcessTrustLabelAce @ 0x140796914 (SddlAddProcessTrustLabelAce.c)
 *     SddlAddScopedPolicyIDAce @ 0x140796A74 (SddlAddScopedPolicyIDAce.c)
 *     SepCreateImpersonationTokenDacl @ 0x140855E70 (SepCreateImpersonationTokenDacl.c)
 *     RtlAddAccessAllowedAceEx @ 0x1408651F0 (RtlAddAccessAllowedAceEx.c)
 *     LocalGetAclForString @ 0x140865750 (LocalGetAclForString.c)
 *     SddlAddMandatoryAce @ 0x1408674D8 (SddlAddMandatoryAce.c)
 *     SepCreateClientSecurityEx @ 0x140897AC0 (SepCreateClientSecurityEx.c)
 *     SeAuditProcessCreation @ 0x1408A73CC (SeAuditProcessCreation.c)
 *     SepAllocateAndInitializeCachedHandleEntry @ 0x1408F2DF4 (SepAllocateAndInitializeCachedHandleEntry.c)
 *     SeQueryInformationToken @ 0x14090D870 (SeQueryInformationToken.c)
 *     SepAppendAceToTokenObjectAcl @ 0x14090F590 (SepAppendAceToTokenObjectAcl.c)
 *     PsImpersonateClient @ 0x1409102D0 (PsImpersonateClient.c)
 *     SepAdjustGroups @ 0x140A36948 (SepAdjustGroups.c)
 *     PspAssignProcessQuotaBlock @ 0x140A36D98 (PspAssignProcessQuotaBlock.c)
 *     SepGetLowBoxNumberEntry @ 0x140A4BEEC (SepGetLowBoxNumberEntry.c)
 *     MiLoadHotPatchForUserSid @ 0x140A9F6C0 (MiLoadHotPatchForUserSid.c)
 *     MiQueryLoadedPatches @ 0x140AA6168 (MiQueryLoadedPatches.c)
 *     NtQueryInformationToken @ 0x140AD3370 (NtQueryInformationToken.c)
 * Callees:
 *     memmove @ 0x1406BFC40 (memmove.c)
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
