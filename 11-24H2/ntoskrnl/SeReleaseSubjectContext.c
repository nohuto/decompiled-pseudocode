/*
 * XREFs of SeReleaseSubjectContext @ 0x14084D7E0
 * Callers:
 *     SeReportSecurityEventWithSubCategory @ 0x140348B90 (SeReportSecurityEventWithSubCategory.c)
 *     SeAccessCheckByType @ 0x14035C8A0 (SeAccessCheckByType.c)
 *     NtSetInformationFile @ 0x1403C34C0 (NtSetInformationFile.c)
 *     FsRtlCancelNotify @ 0x1403DB210 (FsRtlCancelNotify.c)
 *     CmQueryLayeredKey @ 0x140462148 (CmQueryLayeredKey.c)
 *     RtlCheckTokenMembershipEx @ 0x140471840 (RtlCheckTokenMembershipEx.c)
 *     IoCheckRedirectionTrustLevel @ 0x14047B300 (IoCheckRedirectionTrustLevel.c)
 *     RtlCheckTokenCapability @ 0x14048DC70 (RtlCheckTokenCapability.c)
 *     ExCpuSetResourceManagerAccessCheck @ 0x1404AA1D4 (ExCpuSetResourceManagerAccessCheck.c)
 *     IoComputeRedirectionTrustLevel @ 0x1404B5410 (IoComputeRedirectionTrustLevel.c)
 *     PspJobDelete @ 0x1404EE9D0 (PspJobDelete.c)
 *     WdipAccessCheck @ 0x14064C074 (WdipAccessCheck.c)
 *     CmpCheckHivePrimaryFileReadWriteAccess @ 0x14066812C (CmpCheckHivePrimaryFileReadWriteAccess.c)
 *     FsRtlpOplockTryPrepForAckTimeout @ 0x14070C450 (FsRtlpOplockTryPrepForAckTimeout.c)
 *     FsRtlNotifyCleanupAll @ 0x14070DB00 (FsRtlNotifyCleanupAll.c)
 *     PnpGetCallerSessionId @ 0x140723328 (PnpGetCallerSessionId.c)
 *     PiAuCheckTokenMembership @ 0x140727EE8 (PiAuCheckTokenMembership.c)
 *     PspIumVerifyParentSd @ 0x14077A8D4 (PspIumVerifyParentSd.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x140790124 (SeAdtRegistryValueChangedAuditAlarm.c)
 *     SeAuditBootConfiguration @ 0x1407906C4 (SeAuditBootConfiguration.c)
 *     SeAuditFipsCryptoSelftests @ 0x140790B70 (SeAuditFipsCryptoSelftests.c)
 *     SeAuditSystemTimeChange @ 0x140790EDC (SeAuditSystemTimeChange.c)
 *     SeAuditTransactionStateChange @ 0x1407910A0 (SeAuditTransactionStateChange.c)
 *     SepAuditAssignPrimaryToken @ 0x140791B78 (SepAuditAssignPrimaryToken.c)
 *     NtDeleteObjectAuditAlarm @ 0x140792710 (NtDeleteObjectAuditAlarm.c)
 *     NtSetUuidSeed @ 0x1407C0E20 (NtSetUuidSeed.c)
 *     NtRenameKey @ 0x1407D04D0 (NtRenameKey.c)
 *     CmUpdateFeatureConfiguration @ 0x1407D5C24 (CmUpdateFeatureConfiguration.c)
 *     CmUpdateFeatureUsageSubscription @ 0x1407D5E8C (CmUpdateFeatureUsageSubscription.c)
 *     EtwpCheckLoggerControlAccess @ 0x140836724 (EtwpCheckLoggerControlAccess.c)
 *     EtwpAccessCheck @ 0x1408383D4 (EtwpAccessCheck.c)
 *     EtwpFindOrCreateGuidEntry @ 0x14083ACCC (EtwpFindOrCreateGuidEntry.c)
 *     EtwpEnableGuid @ 0x14083B040 (EtwpEnableGuid.c)
 *     EtwpRegisterUMProvider @ 0x14083C6F0 (EtwpRegisterUMProvider.c)
 *     CmpDeleteKeyObject @ 0x140847360 (CmpDeleteKeyObject.c)
 *     ObCloseHandleTableEntry @ 0x14084BFA0 (ObCloseHandleTableEntry.c)
 *     SepAdtAuditObjectAccessWithContext @ 0x140851030 (SepAdtAuditObjectAccessWithContext.c)
 *     SepAdtAuditThisEventWithContext @ 0x140852C10 (SepAdtAuditThisEventWithContext.c)
 *     PsOpenProcess @ 0x140854350 (PsOpenProcess.c)
 *     NtCreateEvent @ 0x140856FC0 (NtCreateEvent.c)
 *     RtlpSetSecurityObject @ 0x140858F70 (RtlpSetSecurityObject.c)
 *     PiUEventFreeClientRegistrationContext @ 0x14085C45C (PiUEventFreeClientRegistrationContext.c)
 *     CmpFlushNotify @ 0x14086869C (CmpFlushNotify.c)
 *     NtDeleteKey @ 0x1408697B0 (NtDeleteKey.c)
 *     NtSetValueKey @ 0x14086A810 (NtSetValueKey.c)
 *     CmSetValueKey @ 0x14086B130 (CmSetValueKey.c)
 *     CmQueryKey @ 0x140877890 (CmQueryKey.c)
 *     IopAllocRealFileObject @ 0x14089A9B0 (IopAllocRealFileObject.c)
 *     PspInsertProcess @ 0x1408A7074 (PspInsertProcess.c)
 *     SeAuditProcessCreation @ 0x1408A73CC (SeAuditProcessCreation.c)
 *     NtDeleteWnfStateName @ 0x1408AAC70 (NtDeleteWnfStateName.c)
 *     NtQueryWnfStateData @ 0x1408ABBD0 (NtQueryWnfStateData.c)
 *     ExpNtUpdateWnfStateData @ 0x1408AC580 (ExpNtUpdateWnfStateData.c)
 *     ExpWnfCheckCrossScopeAccess @ 0x1408AE824 (ExpWnfCheckCrossScopeAccess.c)
 *     IoGetDeviceInterfaceAlias @ 0x1408B7090 (IoGetDeviceInterfaceAlias.c)
 *     PiAuDoesClientHaveAccess @ 0x1408BC6A8 (PiAuDoesClientHaveAccess.c)
 *     PiCMValidateDeviceInstance @ 0x1408BE2FC (PiCMValidateDeviceInstance.c)
 *     IopXxxControlFile @ 0x1408C1970 (IopXxxControlFile.c)
 *     IopGetDeviceInterfaces @ 0x1408C8470 (IopGetDeviceInterfaces.c)
 *     PiAuIsLocalSystem @ 0x1408D294C (PiAuIsLocalSystem.c)
 *     PiPnpRtlObjectEventRelease @ 0x1408D2A3C (PiPnpRtlObjectEventRelease.c)
 *     PiDqQueryRelease @ 0x1408D3FB0 (PiDqQueryRelease.c)
 *     PspIsContextAdmin @ 0x1408E917C (PspIsContextAdmin.c)
 *     SeOperationAuditAlarm @ 0x1408F0A50 (SeOperationAuditAlarm.c)
 *     SeSecurityDescriptorChangedAuditAlarm @ 0x1408F1C3C (SeSecurityDescriptorChangedAuditAlarm.c)
 *     SeTokenDefaultDaclChangedAuditAlarm @ 0x1408F2FA8 (SeTokenDefaultDaclChangedAuditAlarm.c)
 *     PiDqOpenUserObjectRegKey @ 0x14090A064 (PiDqOpenUserObjectRegKey.c)
 *     ObpParseSymbolicLinkEx @ 0x14090BD40 (ObpParseSymbolicLinkEx.c)
 *     RtlIsSandboxedToken @ 0x14090C230 (RtlIsSandboxedToken.c)
 *     NtDuplicateToken @ 0x14090F090 (NtDuplicateToken.c)
 *     SeCheckPrivilegedObject @ 0x140913BF4 (SeCheckPrivilegedObject.c)
 *     SepAccessCheckAndAuditAlarm @ 0x14091DB90 (SepAccessCheckAndAuditAlarm.c)
 *     NtOpenObjectAuditAlarm @ 0x140920280 (NtOpenObjectAuditAlarm.c)
 *     NtPrivilegedServiceAuditAlarm @ 0x140920A00 (NtPrivilegedServiceAuditAlarm.c)
 *     NtPrivilegeObjectAuditAlarm @ 0x140920CD0 (NtPrivilegeObjectAuditAlarm.c)
 *     CmpLogHiveFileInaccessible @ 0x1409305F4 (CmpLogHiveFileInaccessible.c)
 *     SepAdtTokenRightAdjusted @ 0x1409383C4 (SepAdtTokenRightAdjusted.c)
 *     SeAuditingWithTokenForSubcategory @ 0x140938740 (SeAuditingWithTokenForSubcategory.c)
 *     ObInitProcess @ 0x14093BD38 (ObInitProcess.c)
 *     NtSetInformationProcess @ 0x140947500 (NtSetInformationProcess.c)
 *     ExCheckFullProcessInformationAccess @ 0x14095F62C (ExCheckFullProcessInformationAccess.c)
 *     sub_140973C40 @ 0x140973C40 (sub_140973C40.c)
 *     NtSetInformationKey @ 0x1409785A0 (NtSetInformationKey.c)
 *     NtDeleteValueKey @ 0x140979A90 (NtDeleteValueKey.c)
 *     CmpPerformUnloadKey @ 0x14097B52C (CmpPerformUnloadKey.c)
 *     MiIsUserQueryVmCallerTrusted @ 0x140987584 (MiIsUserQueryVmCallerTrusted.c)
 *     ObCreateObject @ 0x14098A240 (ObCreateObject.c)
 *     PipProcessStartPhase3 @ 0x14099006C (PipProcessStartPhase3.c)
 *     SepAdtAuditThisEventByCategoryWithContext @ 0x14099E920 (SepAdtAuditThisEventByCategoryWithContext.c)
 *     CmpSetKeySecurity @ 0x14099FAEC (CmpSetKeySecurity.c)
 *     PspSetQuotaLimits @ 0x1409AFD58 (PspSetQuotaLimits.c)
 *     ExpWnfValidatePubSubPreconditions @ 0x1409DF540 (ExpWnfValidatePubSubPreconditions.c)
 *     PiAuVerifyAccessToObject @ 0x1409E29D0 (PiAuVerifyAccessToObject.c)
 *     ExpWnfCheckCallerAccess @ 0x1409E5800 (ExpWnfCheckCallerAccess.c)
 *     FsRtlNotifyFilterChangeDirectory @ 0x140A011F0 (FsRtlNotifyFilterChangeDirectory.c)
 *     FsRtlNotifyFilterChangeDirectoryLite @ 0x140A01C00 (FsRtlNotifyFilterChangeDirectoryLite.c)
 *     FsRtlNotifyCleanup @ 0x140A01F30 (FsRtlNotifyCleanup.c)
 *     ObpVerifyCreatorAccessCheck @ 0x140A09994 (ObpVerifyCreatorAccessCheck.c)
 *     ObpCaptureBoundaryDescriptor @ 0x140A09D98 (ObpCaptureBoundaryDescriptor.c)
 *     ExIsRestrictedCaller @ 0x140A14B1C (ExIsRestrictedCaller.c)
 *     SeIsAppContainerOrIdentifyLevelContext @ 0x140A14EAC (SeIsAppContainerOrIdentifyLevelContext.c)
 *     NtCloseObjectAuditAlarm @ 0x140A152C0 (NtCloseObjectAuditAlarm.c)
 *     AlpcpCheckConnectionSecurity @ 0x140A167F4 (AlpcpCheckConnectionSecurity.c)
 *     PiCMGetDeviceIdList @ 0x140A19E98 (PiCMGetDeviceIdList.c)
 *     ObpGetIntegrityLevel @ 0x140A2A0A0 (ObpGetIntegrityLevel.c)
 *     NtImpersonateAnonymousToken @ 0x140A2F610 (NtImpersonateAnonymousToken.c)
 *     SeAssignPrimaryToken @ 0x140A315A4 (SeAssignPrimaryToken.c)
 *     SepCheckCreateLowBox @ 0x140A6CF24 (SepCheckCreateLowBox.c)
 *     SeAuditPlugAndPlay @ 0x140A6FB84 (SeAuditPlugAndPlay.c)
 *     SeCloseObjectAuditAlarm @ 0x140A76530 (SeCloseObjectAuditAlarm.c)
 *     SeAuditHardLinkCreationWithTransaction @ 0x140A78AA0 (SeAuditHardLinkCreationWithTransaction.c)
 *     PiAuDoesClientHavePrivilege @ 0x140A85868 (PiAuDoesClientHavePrivilege.c)
 *     ExpCheckWakeTimerAccess @ 0x140A96318 (ExpCheckWakeTimerAccess.c)
 *     SeDeleteObjectAuditAlarmWithTransaction @ 0x140A98130 (SeDeleteObjectAuditAlarmWithTransaction.c)
 *     PopBootStatAccessCheck @ 0x140AA80F4 (PopBootStatAccessCheck.c)
 *     SeAuditHandleDuplication @ 0x140AAE150 (SeAuditHandleDuplication.c)
 *     NtSetInformationJobObject @ 0x140ACE760 (NtSetInformationJobObject.c)
 *     SepFilterToken @ 0x140AD2664 (SepFilterToken.c)
 *     NtQueryInformationToken @ 0x140AD3370 (NtQueryInformationToken.c)
 *     NtSetInformationToken @ 0x140AD6C10 (NtSetInformationToken.c)
 *     NtCreateLowBoxToken @ 0x140AD8020 (NtCreateLowBoxToken.c)
 *     ExpGetProcessInformation @ 0x140ADAE00 (ExpGetProcessInformation.c)
 *     VfUtilIsLocalSystem @ 0x140B83404 (VfUtilIsLocalSystem.c)
 *     CmFcInitSystem2 @ 0x140C4A21C (CmFcInitSystem2.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     ObpPushStackInfo @ 0x1403407AC (ObpPushStackInfo.c)
 */

void __stdcall SeReleaseSubjectContext(PSECURITY_SUBJECT_CONTEXT SubjectContext)
{
  signed __int64 v2; // r8
  _KPROCESS *Process; // rdx
  signed __int64 ActiveProcessors; // rax
  signed __int64 v5; // rtt
  PACCESS_TOKEN ClientToken; // rcx
  _QWORD *PrimaryToken; // rax

  if ( SeTokenLeakTracking )
  {
    PrimaryToken = SubjectContext->PrimaryToken;
    if ( PrimaryToken )
    {
      _InterlockedDecrement((volatile signed __int32 *)(PrimaryToken[143] + 284LL));
      if ( SubjectContext->PrimaryToken == (PACCESS_TOKEN)SepTokenLeakToken )
        __debugbreak();
    }
    if ( SubjectContext->ClientToken )
    {
      _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)SubjectContext->ClientToken + 143) + 284LL));
      if ( SubjectContext->ClientToken == (PACCESS_TOKEN)SepTokenLeakToken )
        __debugbreak();
    }
  }
  v2 = (signed __int64)SubjectContext->PrimaryToken;
  Process = KeGetCurrentThread()->ApcState.Process;
  _m_prefetchw(&Process[1].ActiveProcessors);
  ActiveProcessors = (signed __int64)Process[1].ActiveProcessors;
  do
  {
    if ( (v2 ^ (unsigned __int64)ActiveProcessors) >= 0xF )
    {
      ObfDereferenceObjectWithTag((PVOID)v2, 0x75536553u);
      goto LABEL_7;
    }
    v5 = ActiveProcessors;
    ActiveProcessors = _InterlockedCompareExchange64(
                         (volatile signed __int64 *)&Process[1].ActiveProcessors,
                         ActiveProcessors + 1,
                         ActiveProcessors);
  }
  while ( v5 != ActiveProcessors );
  if ( ObpTraceFlags )
    ObpPushStackInfo(v2 - 48, 0, 1u, 0x75536553u);
LABEL_7:
  ClientToken = SubjectContext->ClientToken;
  SubjectContext->PrimaryToken = 0LL;
  if ( ClientToken )
    ObfDereferenceObjectWithTag(ClientToken, 0x75536553u);
  SubjectContext->ClientToken = 0LL;
}
