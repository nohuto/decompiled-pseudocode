/*
 * XREFs of SeAccessCheck @ 0x14035A5B0
 * Callers:
 *     SeComputeCreatorDeniedRights @ 0x140359A70 (SeComputeCreatorDeniedRights.c)
 *     IopCreateSecurityCheck @ 0x14046DA5C (IopCreateSecurityCheck.c)
 *     SeIsSystemContext @ 0x14060908C (SeIsSystemContext.c)
 *     WdipAccessCheck @ 0x14064C074 (WdipAccessCheck.c)
 *     CmpCheckHivePrimaryFileReadWriteAccess @ 0x14066812C (CmpCheckHivePrimaryFileReadWriteAccess.c)
 *     PiAuCheckTokenMembership @ 0x140727EE8 (PiAuCheckTokenMembership.c)
 *     PspCheckJobAccessState @ 0x140777614 (PspCheckJobAccessState.c)
 *     PspIumVerifyParentSd @ 0x14077A8D4 (PspIumVerifyParentSd.c)
 *     NtSetUuidSeed @ 0x1407C0E20 (NtSetUuidSeed.c)
 *     CMFCheckAccess @ 0x1407C1620 (CMFCheckAccess.c)
 *     CmUpdateFeatureConfiguration @ 0x1407D5C24 (CmUpdateFeatureConfiguration.c)
 *     CmUpdateFeatureUsageSubscription @ 0x1407D5E8C (CmUpdateFeatureUsageSubscription.c)
 *     EtwpCheckLoggerControlAccess @ 0x140836724 (EtwpCheckLoggerControlAccess.c)
 *     EtwpAccessCheck @ 0x1408383D4 (EtwpAccessCheck.c)
 *     EtwpFindOrCreateGuidEntry @ 0x14083ACCC (EtwpFindOrCreateGuidEntry.c)
 *     EtwpRegisterUMProvider @ 0x14083C6F0 (EtwpRegisterUMProvider.c)
 *     ObpCreateHandle @ 0x14084DAA0 (ObpCreateHandle.c)
 *     ObpGrantAccess @ 0x140851390 (ObpGrantAccess.c)
 *     CmpCheckKeyBodyAccess @ 0x140851B40 (CmpCheckKeyBodyAccess.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x140852140 (CmpCheckOpenAccessOnKeyBody.c)
 *     CmpCheckCreateAccess @ 0x140867CFC (CmpCheckCreateAccess.c)
 *     ObpCheckTraverseAccess @ 0x140867E80 (ObpCheckTraverseAccess.c)
 *     ObpCheckObjectReference @ 0x14086802C (ObpCheckObjectReference.c)
 *     ObCheckCreateObjectAccess @ 0x1408682F0 (ObCheckCreateObjectAccess.c)
 *     CmpNotifyTriggerCheck @ 0x140868C88 (CmpNotifyTriggerCheck.c)
 *     ObCheckObjectAccess @ 0x14087A740 (ObCheckObjectAccess.c)
 *     IopParseDevice @ 0x14089F880 (IopParseDevice.c)
 *     NtDeleteWnfStateName @ 0x1408AAC70 (NtDeleteWnfStateName.c)
 *     NtQueryWnfStateData @ 0x1408ABBD0 (NtQueryWnfStateData.c)
 *     ExpNtUpdateWnfStateData @ 0x1408AC580 (ExpNtUpdateWnfStateData.c)
 *     ExpWnfCheckCrossScopeAccess @ 0x1408AE824 (ExpWnfCheckCrossScopeAccess.c)
 *     PiAuDoesClientHaveAccess @ 0x1408BC6A8 (PiAuDoesClientHaveAccess.c)
 *     PiCMValidateDeviceInstance @ 0x1408BE2FC (PiCMValidateDeviceInstance.c)
 *     PiPnpRtlApplyMandatoryFilters @ 0x1408D19E0 (PiPnpRtlApplyMandatoryFilters.c)
 *     PiAuIsLocalSystem @ 0x1408D294C (PiAuIsLocalSystem.c)
 *     CmpCheckKeySecurityDescriptorAccess @ 0x14091735C (CmpCheckKeySecurityDescriptorAccess.c)
 *     RtlpNewSecurityObject @ 0x14091A290 (RtlpNewSecurityObject.c)
 *     sub_140973C40 @ 0x140973C40 (sub_140973C40.c)
 *     ExpWnfValidatePubSubPreconditions @ 0x1409DF540 (ExpWnfValidatePubSubPreconditions.c)
 *     PiAuVerifyAccessToObject @ 0x1409E29D0 (PiAuVerifyAccessToObject.c)
 *     ExpWnfCheckCallerAccess @ 0x1409E5800 (ExpWnfCheckCallerAccess.c)
 *     ExIsRestrictedCaller @ 0x140A14B1C (ExIsRestrictedCaller.c)
 *     SeIsAppContainerOrIdentifyLevelContext @ 0x140A14EAC (SeIsAppContainerOrIdentifyLevelContext.c)
 *     AlpcpCheckConnectionSecurity @ 0x140A167F4 (AlpcpCheckConnectionSecurity.c)
 *     PopBootStatAccessCheck @ 0x140AA80F4 (PopBootStatAccessCheck.c)
 *     ExpGetProcessInformation @ 0x140ADAE00 (ExpGetProcessInformation.c)
 *     VfUtilIsLocalSystem @ 0x140B83404 (VfUtilIsLocalSystem.c)
 * Callees:
 *     SeAccessCheckWithHint @ 0x14035A620 (SeAccessCheckWithHint.c)
 */

BOOLEAN __stdcall SeAccessCheck(
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        PSECURITY_SUBJECT_CONTEXT SubjectSecurityContext,
        BOOLEAN SubjectContextLocked,
        ACCESS_MASK DesiredAccess,
        ACCESS_MASK PreviouslyGrantedAccess,
        PPRIVILEGE_SET *Privileges,
        PGENERIC_MAPPING GenericMapping,
        KPROCESSOR_MODE AccessMode,
        PACCESS_MASK GrantedAccess,
        PNTSTATUS AccessStatus)
{
  return SeAccessCheckWithHint(
           (__int64)SecurityDescriptor,
           DesiredAccess,
           PreviouslyGrantedAccess,
           (__int64)Privileges,
           (__int64)GenericMapping,
           AccessMode,
           (__int64)GrantedAccess,
           (__int64)AccessStatus);
}
