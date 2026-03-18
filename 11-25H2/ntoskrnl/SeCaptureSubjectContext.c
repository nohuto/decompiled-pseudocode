/*
 * XREFs of SeCaptureSubjectContext @ 0x140858670
 * Callers:
 *     SeAccessCheckByType @ 0x140363B20 (SeAccessCheckByType.c)
 *     SeReportSecurityEventWithSubCategory @ 0x1403D6510 (SeReportSecurityEventWithSubCategory.c)
 *     RtlCheckTokenMembershipEx @ 0x140472DB0 (RtlCheckTokenMembershipEx.c)
 *     IoCheckRedirectionTrustLevel @ 0x14047A880 (IoCheckRedirectionTrustLevel.c)
 *     RtlCheckTokenCapability @ 0x14048E220 (RtlCheckTokenCapability.c)
 *     IoComputeRedirectionTrustLevel @ 0x1404B5970 (IoComputeRedirectionTrustLevel.c)
 *     WdipAccessCheck @ 0x1406400B4 (WdipAccessCheck.c)
 *     CmpCheckHivePrimaryFileReadWriteAccess @ 0x14065C6B4 (CmpCheckHivePrimaryFileReadWriteAccess.c)
 *     FsRtlpOplockTryPrepForAckTimeout @ 0x140700570 (FsRtlpOplockTryPrepForAckTimeout.c)
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
 *     PipProcessStartPhase3 @ 0x1408333C4 (PipProcessStartPhase3.c)
 *     PiPnpRtlObjectEventWorker @ 0x140836F20 (PiPnpRtlObjectEventWorker.c)
 *     PiDqQueryCreate @ 0x1408379A8 (PiDqQueryCreate.c)
 *     PiDqOpenUserObjectRegKey @ 0x14083E2D0 (PiDqOpenUserObjectRegKey.c)
 *     ObpParseSymbolicLinkEx @ 0x14083FD90 (ObpParseSymbolicLinkEx.c)
 *     RtlIsSandboxedToken @ 0x140840280 (RtlIsSandboxedToken.c)
 *     ObCloseHandleTableEntry @ 0x1408501F0 (ObCloseHandleTableEntry.c)
 *     SepAdtAuditObjectAccessWithContext @ 0x140854E70 (SepAdtAuditObjectAccessWithContext.c)
 *     SepAdtAuditThisEventWithContext @ 0x140856980 (SepAdtAuditThisEventWithContext.c)
 *     PsOpenProcess @ 0x1408572E0 (PsOpenProcess.c)
 *     SeSinglePrivilegeCheck @ 0x140858330 (SeSinglePrivilegeCheck.c)
 *     ObCreateObject @ 0x140858920 (ObCreateObject.c)
 *     IopAllocRealFileObject @ 0x14085A290 (IopAllocRealFileObject.c)
 *     SeIsAppContainerOrIdentifyLevelContext @ 0x140861F50 (SeIsAppContainerOrIdentifyLevelContext.c)
 *     NtSetInformationKey @ 0x140862E30 (NtSetInformationKey.c)
 *     NtSetValueKey @ 0x140869680 (NtSetValueKey.c)
 *     CmSetValueKey @ 0x140869F98 (CmSetValueKey.c)
 *     NtDeleteValueKey @ 0x14086CE00 (NtDeleteValueKey.c)
 *     EtwpCheckLoggerControlAccess @ 0x1408970A0 (EtwpCheckLoggerControlAccess.c)
 *     EtwpAccessCheck @ 0x140898E74 (EtwpAccessCheck.c)
 *     EtwpFindOrCreateGuidEntry @ 0x14089B79C (EtwpFindOrCreateGuidEntry.c)
 *     EtwpRegisterUMProvider @ 0x14089D2F0 (EtwpRegisterUMProvider.c)
 *     NtCreateEvent @ 0x14089FF70 (NtCreateEvent.c)
 *     NtDuplicateToken @ 0x1408A3EE0 (NtDuplicateToken.c)
 *     SeCheckPrivilegedObject @ 0x1408BA228 (SeCheckPrivilegedObject.c)
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
 *     CmpNotifyChangeKey @ 0x1409391FC (CmpNotifyChangeKey.c)
 *     IoGetDeviceInterfaceAlias @ 0x140956090 (IoGetDeviceInterfaceAlias.c)
 *     IopGetDeviceInterfaces @ 0x1409572B8 (IopGetDeviceInterfaces.c)
 *     PiAuDoesClientHaveAccess @ 0x14095D51C (PiAuDoesClientHaveAccess.c)
 *     PiAuDoesClientHavePrivilege @ 0x14095EC5C (PiAuDoesClientHavePrivilege.c)
 *     PiCMGetDeviceIdList @ 0x14095ED28 (PiCMGetDeviceIdList.c)
 *     PiUEventHandleRegistration @ 0x14096747C (PiUEventHandleRegistration.c)
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
 *     PspSinglePrivCheck @ 0x1409C2BAC (PspSinglePrivCheck.c)
 *     ExpWnfValidatePubSubPreconditions @ 0x1409E2CC0 (ExpWnfValidatePubSubPreconditions.c)
 *     PiAuVerifyAccessToObject @ 0x1409E3C20 (PiAuVerifyAccessToObject.c)
 *     ExpWnfCheckCallerAccess @ 0x140A01000 (ExpWnfCheckCallerAccess.c)
 *     NtDeleteKey @ 0x140A0A070 (NtDeleteKey.c)
 *     ExIsRestrictedCaller @ 0x140A0AFF8 (ExIsRestrictedCaller.c)
 *     NtCloseObjectAuditAlarm @ 0x140A0BC10 (NtCloseObjectAuditAlarm.c)
 *     SeAssignPrimaryToken @ 0x140A0E1E4 (SeAssignPrimaryToken.c)
 *     ObpGetIntegrityLevel @ 0x140A20560 (ObpGetIntegrityLevel.c)
 *     NtImpersonateAnonymousToken @ 0x140A29C90 (NtImpersonateAnonymousToken.c)
 *     SepCheckCreateLowBox @ 0x140A6B954 (SepCheckCreateLowBox.c)
 *     SeAuditPlugAndPlay @ 0x140A6D96C (SeAuditPlugAndPlay.c)
 *     SeAuditHardLinkCreationWithTransaction @ 0x140A76E10 (SeAuditHardLinkCreationWithTransaction.c)
 *     PopBootStatAccessCheck @ 0x140AA30E4 (PopBootStatAccessCheck.c)
 *     NtQueryInformationToken @ 0x140AC8E20 (NtQueryInformationToken.c)
 *     ExpGetProcessInformation @ 0x140AD0210 (ExpGetProcessInformation.c)
 *     WmipInitializeSecurity @ 0x140C2BA90 (WmipInitializeSecurity.c)
 *     CmFcInitSystem2 @ 0x140C38F20 (CmFcInitSystem2.c)
 * Callees:
 *     PsReferencePrimaryTokenWithTag @ 0x14029AE50 (PsReferencePrimaryTokenWithTag.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x14029B2A0 (ObfReferenceObjectWithTag.c)
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 */

void __stdcall SeCaptureSubjectContext(PSECURITY_SUBJECT_CONTEXT SubjectContext)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 Process; // rsi
  void *v4; // rcx
  _QWORD *v5; // rax
  struct _KTHREAD *v6; // r15
  __int64 *v7; // rbp
  void *v8; // rbp

  CurrentThread = KeGetCurrentThread();
  Process = (__int64)CurrentThread->ApcState.Process;
  SubjectContext->ProcessAuditId = *(PVOID *)(Process + 464);
  if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0 )
  {
    v6 = KeGetCurrentThread();
    --v6->KernelApcDisable;
    v7 = KeAbPreAcquire((__int64)&CurrentThread[1].WaitBlockList, 0LL);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CurrentThread[1].WaitBlockList, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(
        (signed __int64 *)&CurrentThread[1].WaitBlockList,
        0,
        v7,
        (unsigned __int64)&CurrentThread[1].WaitBlockList);
    if ( v7 )
      *((_BYTE *)v7 + 10) = 1;
    if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0 )
    {
      v8 = (void *)(*(_QWORD *)((char *)&CurrentThread[1].116 + 4) & 0xFFFFFFFFFFFFFFF8uLL);
      ObfReferenceObjectWithTag(v8, 0x75536553u);
      SubjectContext->ImpersonationLevel = *((_DWORD *)&CurrentThread[1].0 + 1) & 3;
    }
    else
    {
      v8 = 0LL;
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CurrentThread[1].WaitBlockList, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&CurrentThread[1].WaitBlockList);
    KeAbPostRelease((ULONG_PTR)&CurrentThread[1].WaitBlockList);
    KeLeaveCriticalRegionThread((__int64)v6);
    v4 = v8;
  }
  else
  {
    v4 = 0LL;
  }
  SubjectContext->ClientToken = v4;
  v5 = (_QWORD *)PsReferencePrimaryTokenWithTag(Process, 0x75536553u);
  SubjectContext->PrimaryToken = v5;
  if ( SeTokenLeakTracking )
  {
    if ( v5 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v5[143] + 284LL));
      if ( SubjectContext->PrimaryToken == (PACCESS_TOKEN)SepTokenLeakToken )
        __debugbreak();
    }
    if ( SubjectContext->ClientToken )
    {
      _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)SubjectContext->ClientToken + 143) + 284LL));
      if ( SubjectContext->ClientToken == (PACCESS_TOKEN)SepTokenLeakToken )
        __debugbreak();
    }
  }
}
