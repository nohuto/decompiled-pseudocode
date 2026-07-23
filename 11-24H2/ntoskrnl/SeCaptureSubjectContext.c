/*
 * XREFs of SeCaptureSubjectContext @ 0x140849BB0
 * Callers:
 *     RtlCheckTokenCapability @ 0x1403B5260 (RtlCheckTokenCapability.c)
 *     RtlCheckTokenMembershipEx @ 0x1403B5770 (RtlCheckTokenMembershipEx.c)
 *     SeReportSecurityEventWithSubCategory @ 0x1403C25D0 (SeReportSecurityEventWithSubCategory.c)
 *     SeAccessCheckByType @ 0x14042DC70 (SeAccessCheckByType.c)
 *     IoCheckRedirectionTrustLevel @ 0x1404769B0 (IoCheckRedirectionTrustLevel.c)
 *     IoComputeRedirectionTrustLevel @ 0x1404AFCB0 (IoComputeRedirectionTrustLevel.c)
 *     SepCreateAppContainerToken @ 0x140606A30 (SepCreateAppContainerToken.c)
 *     WdipAccessCheck @ 0x14064A634 (WdipAccessCheck.c)
 *     CmpCheckHivePrimaryFileReadWriteAccess @ 0x140666A1C (CmpCheckHivePrimaryFileReadWriteAccess.c)
 *     FsRtlpOplockTryPrepForAckTimeout @ 0x140709FE4 (FsRtlpOplockTryPrepForAckTimeout.c)
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
 *     EtwpAccessCheck @ 0x14083669C (EtwpAccessCheck.c)
 *     EtwpCheckLoggerControlAccess @ 0x1408375F4 (EtwpCheckLoggerControlAccess.c)
 *     EtwpFindOrCreateGuidEntry @ 0x14083866C (EtwpFindOrCreateGuidEntry.c)
 *     EtwpRegisterUMProvider @ 0x140838D50 (EtwpRegisterUMProvider.c)
 *     ObCloseHandleTableEntry @ 0x140848260 (ObCloseHandleTableEntry.c)
 *     SepAdtAuditObjectAccessWithContext @ 0x14084D2F0 (SepAdtAuditObjectAccessWithContext.c)
 *     SepAdtAuditThisEventWithContext @ 0x14084EED0 (SepAdtAuditThisEventWithContext.c)
 *     SeSinglePrivilegeCheck @ 0x140850150 (SeSinglePrivilegeCheck.c)
 *     PsOpenProcess @ 0x140850610 (PsOpenProcess.c)
 *     NtCreateEvent @ 0x1408532A0 (NtCreateEvent.c)
 *     RtlpSetSecurityObject @ 0x140855250 (RtlpSetSecurityObject.c)
 *     PiUEventHandleRegistration @ 0x140857A2C (PiUEventHandleRegistration.c)
 *     PspIsContextAdmin @ 0x14085A9A4 (PspIsContextAdmin.c)
 *     SeOperationAuditAlarm @ 0x140862250 (SeOperationAuditAlarm.c)
 *     SeTokenDefaultDaclChangedAuditAlarm @ 0x14086395C (SeTokenDefaultDaclChangedAuditAlarm.c)
 *     SeDeleteObjectAuditAlarmWithTransaction @ 0x140863C20 (SeDeleteObjectAuditAlarmWithTransaction.c)
 *     SeAuditHandleDuplication @ 0x140863C90 (SeAuditHandleDuplication.c)
 *     NtDeleteKey @ 0x14086DAE0 (NtDeleteKey.c)
 *     NtSetValueKey @ 0x14086EB40 (NtSetValueKey.c)
 *     CmSetValueKey @ 0x14086F460 (CmSetValueKey.c)
 *     IopAllocRealFileObject @ 0x1408A3050 (IopAllocRealFileObject.c)
 *     IoGetDeviceInterfaceAlias @ 0x1408B4A00 (IoGetDeviceInterfaceAlias.c)
 *     PiPnpRtlObjectEventWorker @ 0x1408B76F0 (PiPnpRtlObjectEventWorker.c)
 *     PiAuDoesClientHaveAccess @ 0x1408B9FF8 (PiAuDoesClientHaveAccess.c)
 *     PiCMValidateDeviceInstance @ 0x1408BBC4C (PiCMValidateDeviceInstance.c)
 *     IopGetDeviceInterfaces @ 0x1408C5EA0 (IopGetDeviceInterfaces.c)
 *     PiAuIsLocalSystem @ 0x1408D033C (PiAuIsLocalSystem.c)
 *     PiDqOpenUserObjectRegKey @ 0x1408E1780 (PiDqOpenUserObjectRegKey.c)
 *     ObpParseSymbolicLinkEx @ 0x1408E3460 (ObpParseSymbolicLinkEx.c)
 *     RtlIsSandboxedToken @ 0x1408E3950 (RtlIsSandboxedToken.c)
 *     NtDuplicateToken @ 0x1408E67E0 (NtDuplicateToken.c)
 *     SeCheckPrivilegedObject @ 0x1408EB21C (SeCheckPrivilegedObject.c)
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
 *     ObInitProcess @ 0x14094D010 (ObInitProcess.c)
 *     sub_14095C450 @ 0x14095C450 (sub_14095C450.c)
 *     NtSetInformationKey @ 0x140960DB0 (NtSetInformationKey.c)
 *     NtDeleteValueKey @ 0x1409622A0 (NtDeleteValueKey.c)
 *     ObCreateObject @ 0x140973930 (ObCreateObject.c)
 *     PipProcessStartPhase3 @ 0x14097B0A4 (PipProcessStartPhase3.c)
 *     SepFilterToken @ 0x140985C1C (SepFilterToken.c)
 *     SepAdtAuditThisEventByCategoryWithContext @ 0x1409875D0 (SepAdtAuditThisEventByCategoryWithContext.c)
 *     PspSinglePrivCheck @ 0x140999F7C (PspSinglePrivCheck.c)
 *     ExpWnfValidatePubSubPreconditions @ 0x1409D92F0 (ExpWnfValidatePubSubPreconditions.c)
 *     PiAuVerifyAccessToObject @ 0x1409DCD30 (PiAuVerifyAccessToObject.c)
 *     ExpWnfCheckCallerAccess @ 0x1409E0090 (ExpWnfCheckCallerAccess.c)
 *     PiDqQueryCreate @ 0x1409F21D8 (PiDqQueryCreate.c)
 *     SepAccessCheckAndAuditAlarm @ 0x140A07A00 (SepAccessCheckAndAuditAlarm.c)
 *     ExIsRestrictedCaller @ 0x140A0DA38 (ExIsRestrictedCaller.c)
 *     SeIsAppContainerOrIdentifyLevelContext @ 0x140A0DCC4 (SeIsAppContainerOrIdentifyLevelContext.c)
 *     NtCloseObjectAuditAlarm @ 0x140A0E0E0 (NtCloseObjectAuditAlarm.c)
 *     PiCMGetDeviceIdList @ 0x140A15D5C (PiCMGetDeviceIdList.c)
 *     ObpGetIntegrityLevel @ 0x140A1EA60 (ObpGetIntegrityLevel.c)
 *     NtImpersonateAnonymousToken @ 0x140A24050 (NtImpersonateAnonymousToken.c)
 *     SeAssignPrimaryToken @ 0x140A4A3CC (SeAssignPrimaryToken.c)
 *     SeAuditPlugAndPlay @ 0x140A69008 (SeAuditPlugAndPlay.c)
 *     SeCloseObjectAuditAlarm @ 0x140A70650 (SeCloseObjectAuditAlarm.c)
 *     SeAuditHardLinkCreationWithTransaction @ 0x140A72DA0 (SeAuditHardLinkCreationWithTransaction.c)
 *     PiAuDoesClientHavePrivilege @ 0x140A803A8 (PiAuDoesClientHavePrivilege.c)
 *     PopBootStatAccessCheck @ 0x140AA31F4 (PopBootStatAccessCheck.c)
 *     NtQueryInformationToken @ 0x140AD09E0 (NtQueryInformationToken.c)
 *     NtSetInformationToken @ 0x140AD4280 (NtSetInformationToken.c)
 *     NtCreateLowBoxToken @ 0x140AD5A60 (NtCreateLowBoxToken.c)
 *     ExpGetProcessInformation @ 0x140ADC640 (ExpGetProcessInformation.c)
 *     CmpNotifyChangeKey @ 0x140AE6344 (CmpNotifyChangeKey.c)
 *     WmipInitializeSecurity @ 0x140C3EEC0 (WmipInitializeSecurity.c)
 *     CmFcInitSystem2 @ 0x140C4C3B8 (CmFcInitSystem2.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140289BB0 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     PsReferencePrimaryTokenWithTag @ 0x14031F4D0 (PsReferencePrimaryTokenWithTag.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x14031F8C0 (ObfReferenceObjectWithTag.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 */

void __stdcall SeCaptureSubjectContext(PSECURITY_SUBJECT_CONTEXT SubjectContext)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 Process; // rsi
  void *v4; // rcx
  _QWORD *v5; // rax
  struct _KTHREAD *v6; // r15
  char *v7; // rbp
  void *v8; // rbp

  CurrentThread = KeGetCurrentThread();
  Process = (__int64)CurrentThread->ApcState.Process;
  SubjectContext->ProcessAuditId = *(PVOID *)(Process + 464);
  if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0 )
  {
    v6 = KeGetCurrentThread();
    --v6->KernelApcDisable;
    v7 = (char *)KeAbPreAcquire((__int64)&CurrentThread[1].WaitBlockList, 0LL);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CurrentThread[1].WaitBlockList, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(
        (signed __int64 *)&CurrentThread[1].WaitBlockList,
        0,
        v7,
        (__int64)&CurrentThread[1].WaitBlockList);
    if ( v7 )
      v7[10] = 1;
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
    KeLeaveCriticalRegionThread();
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
