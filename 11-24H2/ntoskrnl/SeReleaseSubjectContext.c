/*
 * XREFs of SeReleaseSubjectContext @ 0x140849AA0
 * Callers:
 *     NtSetInformationFile @ 0x1403B2080 (NtSetInformationFile.c)
 *     ExCpuSetResourceManagerAccessCheck @ 0x1403B5184 (ExCpuSetResourceManagerAccessCheck.c)
 *     RtlCheckTokenCapability @ 0x1403B5260 (RtlCheckTokenCapability.c)
 *     RtlCheckTokenMembershipEx @ 0x1403B5770 (RtlCheckTokenMembershipEx.c)
 *     SeReportSecurityEventWithSubCategory @ 0x1403C25D0 (SeReportSecurityEventWithSubCategory.c)
 *     FsRtlCancelNotify @ 0x1403CC4E0 (FsRtlCancelNotify.c)
 *     SeAccessCheckByType @ 0x14042DC70 (SeAccessCheckByType.c)
 *     CmQueryLayeredKey @ 0x140457758 (CmQueryLayeredKey.c)
 *     IoCheckRedirectionTrustLevel @ 0x1404769B0 (IoCheckRedirectionTrustLevel.c)
 *     IoComputeRedirectionTrustLevel @ 0x1404AFCB0 (IoComputeRedirectionTrustLevel.c)
 *     PspJobDelete @ 0x1404E6110 (PspJobDelete.c)
 *     SepCreateAppContainerToken @ 0x140606A30 (SepCreateAppContainerToken.c)
 *     WdipAccessCheck @ 0x14064A634 (WdipAccessCheck.c)
 *     CmpCheckHivePrimaryFileReadWriteAccess @ 0x140666A1C (CmpCheckHivePrimaryFileReadWriteAccess.c)
 *     FsRtlpOplockTryPrepForAckTimeout @ 0x140709FE4 (FsRtlpOplockTryPrepForAckTimeout.c)
 *     FsRtlNotifyCleanupAll @ 0x14070B6A0 (FsRtlNotifyCleanupAll.c)
 *     PnpGetCallerSessionId @ 0x140720EB8 (PnpGetCallerSessionId.c)
 *     PiAuCheckTokenMembership @ 0x140725A78 (PiAuCheckTokenMembership.c)
 *     PspIumVerifyParentSd @ 0x14077A784 (PspIumVerifyParentSd.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x1407900F4 (SeAdtRegistryValueChangedAuditAlarm.c)
 *     SeAuditBootConfiguration @ 0x140790694 (SeAuditBootConfiguration.c)
 *     SeAuditFipsCryptoSelftests @ 0x140790B40 (SeAuditFipsCryptoSelftests.c)
 *     SeAuditSystemTimeChange @ 0x140790EAC (SeAuditSystemTimeChange.c)
 *     SeAuditTransactionStateChange @ 0x140791070 (SeAuditTransactionStateChange.c)
 *     SepAuditAssignPrimaryToken @ 0x140791B48 (SepAuditAssignPrimaryToken.c)
 *     NtDeleteObjectAuditAlarm @ 0x1407926E0 (NtDeleteObjectAuditAlarm.c)
 *     SepCheckCreateAppContainer @ 0x140792ECC (SepCheckCreateAppContainer.c)
 *     NtSetUuidSeed @ 0x1407C1270 (NtSetUuidSeed.c)
 *     NtRenameKey @ 0x1407D09C0 (NtRenameKey.c)
 *     CmUpdateFeatureConfiguration @ 0x1407D6120 (CmUpdateFeatureConfiguration.c)
 *     CmUpdateFeatureUsageSubscription @ 0x1407D6388 (CmUpdateFeatureUsageSubscription.c)
 *     CmpSetKeySecurity @ 0x140830A20 (CmpSetKeySecurity.c)
 *     EtwpIsRegEntryAllowed @ 0x140832F04 (EtwpIsRegEntryAllowed.c)
 *     EtwpAccessCheck @ 0x14083669C (EtwpAccessCheck.c)
 *     EtwpCheckLoggerControlAccess @ 0x1408375F4 (EtwpCheckLoggerControlAccess.c)
 *     EtwpFindOrCreateGuidEntry @ 0x14083866C (EtwpFindOrCreateGuidEntry.c)
 *     EtwpRegisterUMProvider @ 0x140838D50 (EtwpRegisterUMProvider.c)
 *     CmpDeleteKeyObject @ 0x140843620 (CmpDeleteKeyObject.c)
 *     ObCloseHandleTableEntry @ 0x140848260 (ObCloseHandleTableEntry.c)
 *     SepAdtAuditObjectAccessWithContext @ 0x14084D2F0 (SepAdtAuditObjectAccessWithContext.c)
 *     SepAdtAuditThisEventWithContext @ 0x14084EED0 (SepAdtAuditThisEventWithContext.c)
 *     PsOpenProcess @ 0x140850610 (PsOpenProcess.c)
 *     NtCreateEvent @ 0x1408532A0 (NtCreateEvent.c)
 *     RtlpSetSecurityObject @ 0x140855250 (RtlpSetSecurityObject.c)
 *     PiUEventFreeClientRegistrationContext @ 0x1408581CC (PiUEventFreeClientRegistrationContext.c)
 *     PspIsContextAdmin @ 0x14085A9A4 (PspIsContextAdmin.c)
 *     SeOperationAuditAlarm @ 0x140862250 (SeOperationAuditAlarm.c)
 *     SeTokenDefaultDaclChangedAuditAlarm @ 0x14086395C (SeTokenDefaultDaclChangedAuditAlarm.c)
 *     SeDeleteObjectAuditAlarmWithTransaction @ 0x140863C20 (SeDeleteObjectAuditAlarmWithTransaction.c)
 *     SeAuditHandleDuplication @ 0x140863C90 (SeAuditHandleDuplication.c)
 *     CmpFlushNotify @ 0x14086C98C (CmpFlushNotify.c)
 *     NtDeleteKey @ 0x14086DAE0 (NtDeleteKey.c)
 *     NtSetValueKey @ 0x14086EB40 (NtSetValueKey.c)
 *     CmSetValueKey @ 0x14086F460 (CmSetValueKey.c)
 *     CmQueryKey @ 0x14087BBC0 (CmQueryKey.c)
 *     IopAllocRealFileObject @ 0x1408A3050 (IopAllocRealFileObject.c)
 *     IoGetDeviceInterfaceAlias @ 0x1408B4A00 (IoGetDeviceInterfaceAlias.c)
 *     PiAuDoesClientHaveAccess @ 0x1408B9FF8 (PiAuDoesClientHaveAccess.c)
 *     PiCMValidateDeviceInstance @ 0x1408BBC4C (PiCMValidateDeviceInstance.c)
 *     IopXxxControlFile @ 0x1408BF330 (IopXxxControlFile.c)
 *     IopGetDeviceInterfaces @ 0x1408C5EA0 (IopGetDeviceInterfaces.c)
 *     PiAuIsLocalSystem @ 0x1408D033C (PiAuIsLocalSystem.c)
 *     PiPnpRtlObjectEventRelease @ 0x1408D042C (PiPnpRtlObjectEventRelease.c)
 *     PiDqQueryRelease @ 0x1408D19A0 (PiDqQueryRelease.c)
 *     PiDqOpenUserObjectRegKey @ 0x1408E1780 (PiDqOpenUserObjectRegKey.c)
 *     ObpParseSymbolicLinkEx @ 0x1408E3460 (ObpParseSymbolicLinkEx.c)
 *     RtlIsSandboxedToken @ 0x1408E3950 (RtlIsSandboxedToken.c)
 *     NtDuplicateToken @ 0x1408E67E0 (NtDuplicateToken.c)
 *     SeCheckPrivilegedObject @ 0x1408EB21C (SeCheckPrivilegedObject.c)
 *     NtSetInformationProcess @ 0x1408EBA70 (NtSetInformationProcess.c)
 *     SepAdtTokenRightAdjusted @ 0x1408F2A90 (SepAdtTokenRightAdjusted.c)
 *     SeAuditingWithTokenForSubcategory @ 0x1408F2E10 (SeAuditingWithTokenForSubcategory.c)
 *     PspInsertProcess @ 0x1408FD2CC (PspInsertProcess.c)
 *     SeAuditProcessCreation @ 0x1408FD624 (SeAuditProcessCreation.c)
 *     NtDeleteWnfStateName @ 0x140900ED0 (NtDeleteWnfStateName.c)
 *     NtQueryWnfStateData @ 0x140901E30 (NtQueryWnfStateData.c)
 *     ExpNtUpdateWnfStateData @ 0x1409027E0 (ExpNtUpdateWnfStateData.c)
 *     ExpWnfCheckCrossScopeAccess @ 0x140904A84 (ExpWnfCheckCrossScopeAccess.c)
 *     NtOpenObjectAuditAlarm @ 0x140911F00 (NtOpenObjectAuditAlarm.c)
 *     SeSecurityDescriptorChangedAuditAlarm @ 0x140912CF0 (SeSecurityDescriptorChangedAuditAlarm.c)
 *     NtPrivilegedServiceAuditAlarm @ 0x1409134B0 (NtPrivilegedServiceAuditAlarm.c)
 *     NtPrivilegeObjectAuditAlarm @ 0x140913820 (NtPrivilegeObjectAuditAlarm.c)
 *     CmpLogHiveFileInaccessible @ 0x140932734 (CmpLogHiveFileInaccessible.c)
 *     ExCheckFullProcessInformationAccess @ 0x1409470EC (ExCheckFullProcessInformationAccess.c)
 *     ObInitProcess @ 0x14094D010 (ObInitProcess.c)
 *     sub_14095C450 @ 0x14095C450 (sub_14095C450.c)
 *     NtSetInformationKey @ 0x140960DB0 (NtSetInformationKey.c)
 *     NtDeleteValueKey @ 0x1409622A0 (NtDeleteValueKey.c)
 *     CmpPerformUnloadKey @ 0x140963D3C (CmpPerformUnloadKey.c)
 *     MiIsUserQueryVmCallerTrusted @ 0x14096FD94 (MiIsUserQueryVmCallerTrusted.c)
 *     ObCreateObject @ 0x140973930 (ObCreateObject.c)
 *     PipProcessStartPhase3 @ 0x14097B0A4 (PipProcessStartPhase3.c)
 *     SepFilterToken @ 0x140985C1C (SepFilterToken.c)
 *     SepAdtAuditThisEventByCategoryWithContext @ 0x1409875D0 (SepAdtAuditThisEventByCategoryWithContext.c)
 *     PspSetQuotaLimits @ 0x140999A58 (PspSetQuotaLimits.c)
 *     ExpWnfValidatePubSubPreconditions @ 0x1409D92F0 (ExpWnfValidatePubSubPreconditions.c)
 *     PiAuVerifyAccessToObject @ 0x1409DCD30 (PiAuVerifyAccessToObject.c)
 *     ExpWnfCheckCallerAccess @ 0x1409E0090 (ExpWnfCheckCallerAccess.c)
 *     FsRtlNotifyFilterChangeDirectory @ 0x1409FE1C0 (FsRtlNotifyFilterChangeDirectory.c)
 *     FsRtlNotifyFilterChangeDirectoryLite @ 0x1409FEBD0 (FsRtlNotifyFilterChangeDirectoryLite.c)
 *     FsRtlNotifyCleanup @ 0x1409FEF00 (FsRtlNotifyCleanup.c)
 *     ObpVerifyCreatorAccessCheck @ 0x140A05EC4 (ObpVerifyCreatorAccessCheck.c)
 *     ObpCaptureBoundaryDescriptor @ 0x140A062C8 (ObpCaptureBoundaryDescriptor.c)
 *     SepAccessCheckAndAuditAlarm @ 0x140A07A00 (SepAccessCheckAndAuditAlarm.c)
 *     ExIsRestrictedCaller @ 0x140A0DA38 (ExIsRestrictedCaller.c)
 *     SeIsAppContainerOrIdentifyLevelContext @ 0x140A0DCC4 (SeIsAppContainerOrIdentifyLevelContext.c)
 *     NtCloseObjectAuditAlarm @ 0x140A0E0E0 (NtCloseObjectAuditAlarm.c)
 *     AlpcpCheckConnectionSecurity @ 0x140A0F9D4 (AlpcpCheckConnectionSecurity.c)
 *     PiCMGetDeviceIdList @ 0x140A15D5C (PiCMGetDeviceIdList.c)
 *     ObpGetIntegrityLevel @ 0x140A1EA60 (ObpGetIntegrityLevel.c)
 *     NtImpersonateAnonymousToken @ 0x140A24050 (NtImpersonateAnonymousToken.c)
 *     SeAssignPrimaryToken @ 0x140A4A3CC (SeAssignPrimaryToken.c)
 *     SeAuditPlugAndPlay @ 0x140A69008 (SeAuditPlugAndPlay.c)
 *     SeCloseObjectAuditAlarm @ 0x140A70650 (SeCloseObjectAuditAlarm.c)
 *     SeAuditHardLinkCreationWithTransaction @ 0x140A72DA0 (SeAuditHardLinkCreationWithTransaction.c)
 *     PiAuDoesClientHavePrivilege @ 0x140A803A8 (PiAuDoesClientHavePrivilege.c)
 *     ExpCheckWakeTimerAccess @ 0x140A92B48 (ExpCheckWakeTimerAccess.c)
 *     PopBootStatAccessCheck @ 0x140AA31F4 (PopBootStatAccessCheck.c)
 *     NtSetInformationJobObject @ 0x140ACC7F0 (NtSetInformationJobObject.c)
 *     NtQueryInformationToken @ 0x140AD09E0 (NtQueryInformationToken.c)
 *     NtSetInformationToken @ 0x140AD4280 (NtSetInformationToken.c)
 *     NtCreateLowBoxToken @ 0x140AD5A60 (NtCreateLowBoxToken.c)
 *     ExpGetProcessInformation @ 0x140ADC640 (ExpGetProcessInformation.c)
 *     VfUtilIsLocalSystem @ 0x140B85404 (VfUtilIsLocalSystem.c)
 *     CmFcInitSystem2 @ 0x140C4C3B8 (CmFcInitSystem2.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ObpPushStackInfo @ 0x14031FC8C (ObpPushStackInfo.c)
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
