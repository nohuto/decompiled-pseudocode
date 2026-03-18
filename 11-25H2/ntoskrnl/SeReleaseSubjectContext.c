/*
 * XREFs of SeReleaseSubjectContext @ 0x140858810
 * Callers:
 *     NtSetInformationFile @ 0x1402A04A0 (NtSetInformationFile.c)
 *     SeAccessCheckByType @ 0x140363B20 (SeAccessCheckByType.c)
 *     SeReportSecurityEventWithSubCategory @ 0x1403D6510 (SeReportSecurityEventWithSubCategory.c)
 *     FsRtlCancelNotify @ 0x1403EE140 (FsRtlCancelNotify.c)
 *     CmQueryLayeredKey @ 0x140462ABC (CmQueryLayeredKey.c)
 *     RtlCheckTokenMembershipEx @ 0x140472DB0 (RtlCheckTokenMembershipEx.c)
 *     IoCheckRedirectionTrustLevel @ 0x14047A880 (IoCheckRedirectionTrustLevel.c)
 *     RtlCheckTokenCapability @ 0x14048E220 (RtlCheckTokenCapability.c)
 *     ExCpuSetResourceManagerAccessCheck @ 0x1404A9208 (ExCpuSetResourceManagerAccessCheck.c)
 *     IoComputeRedirectionTrustLevel @ 0x1404B5970 (IoComputeRedirectionTrustLevel.c)
 *     PspJobDelete @ 0x1404EB860 (PspJobDelete.c)
 *     WdipAccessCheck @ 0x1406400B4 (WdipAccessCheck.c)
 *     CmpCheckHivePrimaryFileReadWriteAccess @ 0x14065C6B4 (CmpCheckHivePrimaryFileReadWriteAccess.c)
 *     FsRtlpOplockTryPrepForAckTimeout @ 0x140700570 (FsRtlpOplockTryPrepForAckTimeout.c)
 *     FsRtlNotifyCleanupAll @ 0x140701C20 (FsRtlNotifyCleanupAll.c)
 *     PnpGetCallerSessionId @ 0x140717228 (PnpGetCallerSessionId.c)
 *     PiAuCheckTokenMembership @ 0x14071BF68 (PiAuCheckTokenMembership.c)
 *     PspIumVerifyParentSd @ 0x14076AD34 (PspIumVerifyParentSd.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x140780E64 (SeAdtRegistryValueChangedAuditAlarm.c)
 *     SeAuditBootConfiguration @ 0x140781404 (SeAuditBootConfiguration.c)
 *     SeAuditFipsCryptoSelftests @ 0x1407818B0 (SeAuditFipsCryptoSelftests.c)
 *     SeAuditSystemTimeChange @ 0x140781C1C (SeAuditSystemTimeChange.c)
 *     SeAuditTransactionStateChange @ 0x140781DE0 (SeAuditTransactionStateChange.c)
 *     SepAuditAssignPrimaryToken @ 0x1407828B8 (SepAuditAssignPrimaryToken.c)
 *     NtDeleteObjectAuditAlarm @ 0x140783450 (NtDeleteObjectAuditAlarm.c)
 *     NtSetUuidSeed @ 0x1407B1650 (NtSetUuidSeed.c)
 *     NtRenameKey @ 0x1407C0DC0 (NtRenameKey.c)
 *     CmUpdateFeatureConfiguration @ 0x1407C64D0 (CmUpdateFeatureConfiguration.c)
 *     CmUpdateFeatureUsageSubscription @ 0x1407C6738 (CmUpdateFeatureUsageSubscription.c)
 *     ExCheckFullProcessInformationAccess @ 0x140824EB8 (ExCheckFullProcessInformationAccess.c)
 *     PipProcessStartPhase3 @ 0x1408333C4 (PipProcessStartPhase3.c)
 *     PiPnpRtlObjectEventRelease @ 0x140838F9C (PiPnpRtlObjectEventRelease.c)
 *     PiDqQueryRelease @ 0x140839334 (PiDqQueryRelease.c)
 *     PiDqOpenUserObjectRegKey @ 0x14083E2D0 (PiDqOpenUserObjectRegKey.c)
 *     ObpParseSymbolicLinkEx @ 0x14083FD90 (ObpParseSymbolicLinkEx.c)
 *     RtlIsSandboxedToken @ 0x140840280 (RtlIsSandboxedToken.c)
 *     CmpDeleteKeyObject @ 0x14084B6B0 (CmpDeleteKeyObject.c)
 *     ObCloseHandleTableEntry @ 0x1408501F0 (ObCloseHandleTableEntry.c)
 *     SepAdtAuditObjectAccessWithContext @ 0x140854E70 (SepAdtAuditObjectAccessWithContext.c)
 *     SepAdtAuditThisEventWithContext @ 0x140856980 (SepAdtAuditThisEventWithContext.c)
 *     PsOpenProcess @ 0x1408572E0 (PsOpenProcess.c)
 *     ObCreateObject @ 0x140858920 (ObCreateObject.c)
 *     IopAllocRealFileObject @ 0x14085A290 (IopAllocRealFileObject.c)
 *     SeIsAppContainerOrIdentifyLevelContext @ 0x140861F50 (SeIsAppContainerOrIdentifyLevelContext.c)
 *     NtSetInformationKey @ 0x140862E30 (NtSetInformationKey.c)
 *     CmpPerformUnloadKey @ 0x140864C24 (CmpPerformUnloadKey.c)
 *     NtSetValueKey @ 0x140869680 (NtSetValueKey.c)
 *     CmSetValueKey @ 0x140869F98 (CmSetValueKey.c)
 *     NtDeleteValueKey @ 0x14086CE00 (NtDeleteValueKey.c)
 *     CmpFlushNotify @ 0x14086E7CC (CmpFlushNotify.c)
 *     CmQueryKey @ 0x14087AC40 (CmQueryKey.c)
 *     EtwpCheckLoggerControlAccess @ 0x1408970A0 (EtwpCheckLoggerControlAccess.c)
 *     EtwpAccessCheck @ 0x140898E74 (EtwpAccessCheck.c)
 *     EtwpFindOrCreateGuidEntry @ 0x14089B79C (EtwpFindOrCreateGuidEntry.c)
 *     EtwpEnableGuid @ 0x14089BB2C (EtwpEnableGuid.c)
 *     EtwpRegisterUMProvider @ 0x14089D2F0 (EtwpRegisterUMProvider.c)
 *     NtCreateEvent @ 0x14089FF70 (NtCreateEvent.c)
 *     NtDuplicateToken @ 0x1408A3EE0 (NtDuplicateToken.c)
 *     SeCheckPrivilegedObject @ 0x1408BA228 (SeCheckPrivilegedObject.c)
 *     NtSetInformationProcess @ 0x1408BA860 (NtSetInformationProcess.c)
 *     IopXxxControlFile @ 0x1408C3AD0 (IopXxxControlFile.c)
 *     PiUEventApplyAdditionalFilters @ 0x1408CFF70 (PiUEventApplyAdditionalFilters.c)
 *     PiAuIsLocalSystem @ 0x1408D042C (PiAuIsLocalSystem.c)
 *     PspIsContextAdmin @ 0x1408D9DA4 (PspIsContextAdmin.c)
 *     NtDeleteWnfStateName @ 0x1408E24D0 (NtDeleteWnfStateName.c)
 *     NtQueryWnfStateData @ 0x1408E34F0 (NtQueryWnfStateData.c)
 *     ExpNtUpdateWnfStateData @ 0x1408E4380 (ExpNtUpdateWnfStateData.c)
 *     ExpWnfCheckCrossScopeAccess @ 0x1408E6080 (ExpWnfCheckCrossScopeAccess.c)
 *     PspInsertProcess @ 0x1408F3D10 (PspInsertProcess.c)
 *     SeAuditProcessCreation @ 0x1408F435C (SeAuditProcessCreation.c)
 *     CmpLogHiveFileInaccessible @ 0x14091005C (CmpLogHiveFileInaccessible.c)
 *     RtlpSetSecurityObject @ 0x14091A030 (RtlpSetSecurityObject.c)
 *     SepAccessCheckAndAuditAlarm @ 0x14092B360 (SepAccessCheckAndAuditAlarm.c)
 *     NtOpenObjectAuditAlarm @ 0x14092DA70 (NtOpenObjectAuditAlarm.c)
 *     NtPrivilegedServiceAuditAlarm @ 0x14092E1E0 (NtPrivilegedServiceAuditAlarm.c)
 *     NtPrivilegeObjectAuditAlarm @ 0x14092E4B0 (NtPrivilegeObjectAuditAlarm.c)
 *     PiCMValidateDeviceInstance @ 0x140933E98 (PiCMValidateDeviceInstance.c)
 *     SepAdtTokenRightAdjusted @ 0x140936BA8 (SepAdtTokenRightAdjusted.c)
 *     SeAuditingWithTokenForSubcategory @ 0x140936F00 (SeAuditingWithTokenForSubcategory.c)
 *     IoGetDeviceInterfaceAlias @ 0x140956090 (IoGetDeviceInterfaceAlias.c)
 *     IopGetDeviceInterfaces @ 0x1409572B8 (IopGetDeviceInterfaces.c)
 *     PiAuDoesClientHaveAccess @ 0x14095D51C (PiAuDoesClientHaveAccess.c)
 *     PiAuDoesClientHavePrivilege @ 0x14095EC5C (PiAuDoesClientHavePrivilege.c)
 *     PiCMGetDeviceIdList @ 0x14095ED28 (PiCMGetDeviceIdList.c)
 *     PiUEventFreeClientRegistrationContext @ 0x140967C20 (PiUEventFreeClientRegistrationContext.c)
 *     ObInitProcess @ 0x1409716EC (ObInitProcess.c)
 *     CmpSetKeySecurity @ 0x140977054 (CmpSetKeySecurity.c)
 *     sub_140979E70 @ 0x140979E70 (sub_140979E70.c)
 *     SeDeleteObjectAuditAlarmWithTransaction @ 0x140982C20 (SeDeleteObjectAuditAlarmWithTransaction.c)
 *     SeTokenDefaultDaclChangedAuditAlarm @ 0x140982C90 (SeTokenDefaultDaclChangedAuditAlarm.c)
 *     SeSecurityDescriptorChangedAuditAlarm @ 0x140982FF4 (SeSecurityDescriptorChangedAuditAlarm.c)
 *     SeOperationAuditAlarm @ 0x1409842A0 (SeOperationAuditAlarm.c)
 *     SeCloseObjectAuditAlarm @ 0x140985BD0 (SeCloseObjectAuditAlarm.c)
 *     SeAuditHandleDuplication @ 0x140985E58 (SeAuditHandleDuplication.c)
 *     SepFilterToken @ 0x140997EFC (SepFilterToken.c)
 *     SepAdtAuditThisEventByCategoryWithContext @ 0x14099C480 (SepAdtAuditThisEventByCategoryWithContext.c)
 *     PspSetQuotaLimits @ 0x1409C2688 (PspSetQuotaLimits.c)
 *     MiIsUserQueryVmCallerTrusted @ 0x1409D1878 (MiIsUserQueryVmCallerTrusted.c)
 *     ExpWnfValidatePubSubPreconditions @ 0x1409E2CC0 (ExpWnfValidatePubSubPreconditions.c)
 *     PiAuVerifyAccessToObject @ 0x1409E3C20 (PiAuVerifyAccessToObject.c)
 *     ExpWnfCheckCallerAccess @ 0x140A01000 (ExpWnfCheckCallerAccess.c)
 *     FsRtlNotifyFilterChangeDirectory @ 0x140A02D50 (FsRtlNotifyFilterChangeDirectory.c)
 *     FsRtlNotifyFilterChangeDirectoryLite @ 0x140A03770 (FsRtlNotifyFilterChangeDirectoryLite.c)
 *     FsRtlNotifyCleanup @ 0x140A03AA0 (FsRtlNotifyCleanup.c)
 *     ObpVerifyCreatorAccessCheck @ 0x140A06724 (ObpVerifyCreatorAccessCheck.c)
 *     ObpCaptureBoundaryDescriptor @ 0x140A06B28 (ObpCaptureBoundaryDescriptor.c)
 *     NtDeleteKey @ 0x140A0A070 (NtDeleteKey.c)
 *     ExIsRestrictedCaller @ 0x140A0AFF8 (ExIsRestrictedCaller.c)
 *     NtCloseObjectAuditAlarm @ 0x140A0BC10 (NtCloseObjectAuditAlarm.c)
 *     SeAssignPrimaryToken @ 0x140A0E1E4 (SeAssignPrimaryToken.c)
 *     AlpcpCheckConnectionSecurity @ 0x140A0F5F0 (AlpcpCheckConnectionSecurity.c)
 *     ObpGetIntegrityLevel @ 0x140A20560 (ObpGetIntegrityLevel.c)
 *     NtImpersonateAnonymousToken @ 0x140A29C90 (NtImpersonateAnonymousToken.c)
 *     SepCheckCreateLowBox @ 0x140A6B954 (SepCheckCreateLowBox.c)
 *     SeAuditPlugAndPlay @ 0x140A6D96C (SeAuditPlugAndPlay.c)
 *     SeAuditHardLinkCreationWithTransaction @ 0x140A76E10 (SeAuditHardLinkCreationWithTransaction.c)
 *     ExpCheckWakeTimerAccess @ 0x140A95FE8 (ExpCheckWakeTimerAccess.c)
 *     PopBootStatAccessCheck @ 0x140AA30E4 (PopBootStatAccessCheck.c)
 *     NtSetInformationJobObject @ 0x140AC4C00 (NtSetInformationJobObject.c)
 *     NtQueryInformationToken @ 0x140AC8E20 (NtQueryInformationToken.c)
 *     ExpGetProcessInformation @ 0x140AD0210 (ExpGetProcessInformation.c)
 *     VfUtilIsLocalSystem @ 0x140B73424 (VfUtilIsLocalSystem.c)
 *     CmFcInitSystem2 @ 0x140C38F20 (CmFcInitSystem2.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     ObpPushStackInfo @ 0x14029C310 (ObpPushStackInfo.c)
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
