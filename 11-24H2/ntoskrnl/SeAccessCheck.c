/*
 * XREFs of SeAccessCheck @ 0x1403B6900
 * Callers:
 *     IopCreateSecurityCheck @ 0x1403B5AE0 (IopCreateSecurityCheck.c)
 *     SeComputeCreatorDeniedRights @ 0x1403B5DC0 (SeComputeCreatorDeniedRights.c)
 *     SeIsSystemContext @ 0x14060694C (SeIsSystemContext.c)
 *     WdipAccessCheck @ 0x14064A634 (WdipAccessCheck.c)
 *     CmpCheckHivePrimaryFileReadWriteAccess @ 0x140666A1C (CmpCheckHivePrimaryFileReadWriteAccess.c)
 *     PiAuCheckTokenMembership @ 0x140725A78 (PiAuCheckTokenMembership.c)
 *     PspCheckJobAccessState @ 0x140777834 (PspCheckJobAccessState.c)
 *     PspIumVerifyParentSd @ 0x14077A784 (PspIumVerifyParentSd.c)
 *     NtSetUuidSeed @ 0x1407C1270 (NtSetUuidSeed.c)
 *     CMFCheckAccess @ 0x1407C2854 (CMFCheckAccess.c)
 *     CmUpdateFeatureConfiguration @ 0x1407D6120 (CmUpdateFeatureConfiguration.c)
 *     CmUpdateFeatureUsageSubscription @ 0x1407D6388 (CmUpdateFeatureUsageSubscription.c)
 *     EtwpAccessCheck @ 0x14083669C (EtwpAccessCheck.c)
 *     EtwpCheckLoggerControlAccess @ 0x1408375F4 (EtwpCheckLoggerControlAccess.c)
 *     EtwpFindOrCreateGuidEntry @ 0x14083866C (EtwpFindOrCreateGuidEntry.c)
 *     EtwpRegisterUMProvider @ 0x140838D50 (EtwpRegisterUMProvider.c)
 *     ObpCreateHandle @ 0x140849D60 (ObpCreateHandle.c)
 *     ObpGrantAccess @ 0x14084D650 (ObpGrantAccess.c)
 *     CmpCheckKeyBodyAccess @ 0x14084DE00 (CmpCheckKeyBodyAccess.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x14084E400 (CmpCheckOpenAccessOnKeyBody.c)
 *     CmpCheckCreateAccess @ 0x14086BFEC (CmpCheckCreateAccess.c)
 *     ObpCheckTraverseAccess @ 0x14086C170 (ObpCheckTraverseAccess.c)
 *     ObpCheckObjectReference @ 0x14086C31C (ObpCheckObjectReference.c)
 *     ObCheckCreateObjectAccess @ 0x14086C5E0 (ObCheckCreateObjectAccess.c)
 *     CmpNotifyTriggerCheck @ 0x14086CF78 (CmpNotifyTriggerCheck.c)
 *     ObCheckObjectAccess @ 0x14087E5F0 (ObCheckObjectAccess.c)
 *     IopParseDevice @ 0x1408A7F20 (IopParseDevice.c)
 *     PiAuDoesClientHaveAccess @ 0x1408B9FF8 (PiAuDoesClientHaveAccess.c)
 *     PiCMValidateDeviceInstance @ 0x1408BBC4C (PiCMValidateDeviceInstance.c)
 *     PiPnpRtlApplyMandatoryFilters @ 0x1408CF3D0 (PiPnpRtlApplyMandatoryFilters.c)
 *     PiAuIsLocalSystem @ 0x1408D033C (PiAuIsLocalSystem.c)
 *     NtDeleteWnfStateName @ 0x140900ED0 (NtDeleteWnfStateName.c)
 *     NtQueryWnfStateData @ 0x140901E30 (NtQueryWnfStateData.c)
 *     ExpNtUpdateWnfStateData @ 0x1409027E0 (ExpNtUpdateWnfStateData.c)
 *     ExpWnfCheckCrossScopeAccess @ 0x140904A84 (ExpWnfCheckCrossScopeAccess.c)
 *     CmpCheckKeySecurityDescriptorAccess @ 0x14090ADCC (CmpCheckKeySecurityDescriptorAccess.c)
 *     RtlpNewSecurityObject @ 0x14090DD00 (RtlpNewSecurityObject.c)
 *     sub_14095C450 @ 0x14095C450 (sub_14095C450.c)
 *     ExpWnfValidatePubSubPreconditions @ 0x1409D92F0 (ExpWnfValidatePubSubPreconditions.c)
 *     PiAuVerifyAccessToObject @ 0x1409DCD30 (PiAuVerifyAccessToObject.c)
 *     ExpWnfCheckCallerAccess @ 0x1409E0090 (ExpWnfCheckCallerAccess.c)
 *     ExIsRestrictedCaller @ 0x140A0DA38 (ExIsRestrictedCaller.c)
 *     SeIsAppContainerOrIdentifyLevelContext @ 0x140A0DCC4 (SeIsAppContainerOrIdentifyLevelContext.c)
 *     AlpcpCheckConnectionSecurity @ 0x140A0F9D4 (AlpcpCheckConnectionSecurity.c)
 *     PopBootStatAccessCheck @ 0x140AA31F4 (PopBootStatAccessCheck.c)
 *     ExpGetProcessInformation @ 0x140ADC640 (ExpGetProcessInformation.c)
 *     VfUtilIsLocalSystem @ 0x140B85404 (VfUtilIsLocalSystem.c)
 * Callees:
 *     SeAccessCheckWithHint @ 0x1403B6970 (SeAccessCheckWithHint.c)
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
  return SeAccessCheckWithHint(SecurityDescriptor, 0LL, SubjectSecurityContext);
}
