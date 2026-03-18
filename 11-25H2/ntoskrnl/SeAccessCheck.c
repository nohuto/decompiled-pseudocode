/*
 * XREFs of SeAccessCheck @ 0x1403624F0
 * Callers:
 *     SeComputeCreatorDeniedRights @ 0x140361760 (SeComputeCreatorDeniedRights.c)
 *     IopCreateSecurityCheck @ 0x14046F3F0 (IopCreateSecurityCheck.c)
 *     SeIsSystemContext @ 0x1405FCBFC (SeIsSystemContext.c)
 *     WdipAccessCheck @ 0x1406400B4 (WdipAccessCheck.c)
 *     CmpCheckHivePrimaryFileReadWriteAccess @ 0x14065C6B4 (CmpCheckHivePrimaryFileReadWriteAccess.c)
 *     PiAuCheckTokenMembership @ 0x14071BF68 (PiAuCheckTokenMembership.c)
 *     PspCheckJobAccessState @ 0x140767B94 (PspCheckJobAccessState.c)
 *     PspIumVerifyParentSd @ 0x14076AD34 (PspIumVerifyParentSd.c)
 *     NtSetUuidSeed @ 0x1407B1650 (NtSetUuidSeed.c)
 *     CMFCheckAccess @ 0x1407B3114 (CMFCheckAccess.c)
 *     CmUpdateFeatureConfiguration @ 0x1407C64D0 (CmUpdateFeatureConfiguration.c)
 *     CmUpdateFeatureUsageSubscription @ 0x1407C6738 (CmUpdateFeatureUsageSubscription.c)
 *     ObpCreateHandle @ 0x1408518D0 (ObpCreateHandle.c)
 *     ObpGrantAccess @ 0x1408551F0 (ObpGrantAccess.c)
 *     CmpCheckKeyBodyAccess @ 0x1408559A0 (CmpCheckKeyBodyAccess.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x140855F70 (CmpCheckOpenAccessOnKeyBody.c)
 *     IopParseDevice @ 0x14085F1F0 (IopParseDevice.c)
 *     SeIsAppContainerOrIdentifyLevelContext @ 0x140861F50 (SeIsAppContainerOrIdentifyLevelContext.c)
 *     ObCheckObjectAccess @ 0x14086E090 (ObCheckObjectAccess.c)
 *     CmpNotifyTriggerCheck @ 0x14086FE0C (CmpNotifyTriggerCheck.c)
 *     EtwpCheckLoggerControlAccess @ 0x1408970A0 (EtwpCheckLoggerControlAccess.c)
 *     EtwpAccessCheck @ 0x140898E74 (EtwpAccessCheck.c)
 *     EtwpFindOrCreateGuidEntry @ 0x14089B79C (EtwpFindOrCreateGuidEntry.c)
 *     EtwpRegisterUMProvider @ 0x14089D2F0 (EtwpRegisterUMProvider.c)
 *     PiPnpRtlApplyMandatoryFilters @ 0x1408CF3B0 (PiPnpRtlApplyMandatoryFilters.c)
 *     PiUEventApplyAdditionalFilters @ 0x1408CFF70 (PiUEventApplyAdditionalFilters.c)
 *     PiAuIsLocalSystem @ 0x1408D042C (PiAuIsLocalSystem.c)
 *     NtDeleteWnfStateName @ 0x1408E24D0 (NtDeleteWnfStateName.c)
 *     NtQueryWnfStateData @ 0x1408E34F0 (NtQueryWnfStateData.c)
 *     ExpNtUpdateWnfStateData @ 0x1408E4380 (ExpNtUpdateWnfStateData.c)
 *     ExpWnfCheckCrossScopeAccess @ 0x1408E6080 (ExpWnfCheckCrossScopeAccess.c)
 *     CmpCheckKeySecurityDescriptorAccess @ 0x1408F4150 (CmpCheckKeySecurityDescriptorAccess.c)
 *     CmpCheckCreateAccess @ 0x140914774 (CmpCheckCreateAccess.c)
 *     ObpCheckTraverseAccess @ 0x14091495C (ObpCheckTraverseAccess.c)
 *     ObpCheckObjectReference @ 0x1409156D0 (ObpCheckObjectReference.c)
 *     ObCheckCreateObjectAccess @ 0x140915F70 (ObCheckCreateObjectAccess.c)
 *     RtlpNewSecurityObject @ 0x140927AA0 (RtlpNewSecurityObject.c)
 *     PiCMValidateDeviceInstance @ 0x140933E98 (PiCMValidateDeviceInstance.c)
 *     PiAuDoesClientHaveAccess @ 0x14095D51C (PiAuDoesClientHaveAccess.c)
 *     sub_140979E70 @ 0x140979E70 (sub_140979E70.c)
 *     ExpWnfValidatePubSubPreconditions @ 0x1409E2CC0 (ExpWnfValidatePubSubPreconditions.c)
 *     PiAuVerifyAccessToObject @ 0x1409E3C20 (PiAuVerifyAccessToObject.c)
 *     ExpWnfCheckCallerAccess @ 0x140A01000 (ExpWnfCheckCallerAccess.c)
 *     ExIsRestrictedCaller @ 0x140A0AFF8 (ExIsRestrictedCaller.c)
 *     AlpcpCheckConnectionSecurity @ 0x140A0F5F0 (AlpcpCheckConnectionSecurity.c)
 *     PopBootStatAccessCheck @ 0x140AA30E4 (PopBootStatAccessCheck.c)
 *     ExpGetProcessInformation @ 0x140AD0210 (ExpGetProcessInformation.c)
 *     VfUtilIsLocalSystem @ 0x140B73424 (VfUtilIsLocalSystem.c)
 * Callees:
 *     SeAccessCheckWithHint @ 0x140362560 (SeAccessCheckWithHint.c)
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
