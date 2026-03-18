/*
 * XREFs of PsReferencePrimaryTokenWithTag @ 0x14033FFF0
 * Callers:
 *     SepReferenceTokenByHandle @ 0x140359440 (SepReferenceTokenByHandle.c)
 *     SeAccessCheckByType @ 0x14035C8A0 (SeAccessCheckByType.c)
 *     RtlpQueryLowBoxId @ 0x1404322A0 (RtlpQueryLowBoxId.c)
 *     FsRtlpOplockGetThreadIntegrityLevel @ 0x14070BA40 (FsRtlpOplockGetThreadIntegrityLevel.c)
 *     PsCreateMinimalProcess @ 0x1407797C4 (PsCreateMinimalProcess.c)
 *     SeAuditProcessExit @ 0x140790D58 (SeAuditProcessExit.c)
 *     CmpCreateRegistryProcessToken @ 0x1407D8038 (CmpCreateRegistryProcessToken.c)
 *     MiInitializeVsmEnclave @ 0x1407F777C (MiInitializeVsmEnclave.c)
 *     EtwpEnableGuid @ 0x14083B040 (EtwpEnableGuid.c)
 *     SeCreateAccessState @ 0x14083F490 (SeCreateAccessState.c)
 *     SeCaptureSubjectContextEx @ 0x14083FC40 (SeCaptureSubjectContextEx.c)
 *     SeCaptureSubjectContext @ 0x14084D8F0 (SeCaptureSubjectContext.c)
 *     NtOpenProcessTokenEx @ 0x1408541D0 (NtOpenProcessTokenEx.c)
 *     PsOpenProcess @ 0x140854350 (PsOpenProcess.c)
 *     ObOpenObjectByPointer @ 0x140854F10 (ObOpenObjectByPointer.c)
 *     NtOpenThreadTokenEx @ 0x1408553C0 (NtOpenThreadTokenEx.c)
 *     ObInsertObjectEx @ 0x140857620 (ObInsertObjectEx.c)
 *     PsReferenceEffectiveToken @ 0x14085D1B0 (PsReferenceEffectiveToken.c)
 *     PsIsProcessAppContainer @ 0x14085D560 (PsIsProcessAppContainer.c)
 *     SeCreateClientSecurity @ 0x140896720 (SeCreateClientSecurity.c)
 *     NtAlpcImpersonateClientOfPort @ 0x140896970 (NtAlpcImpersonateClientOfPort.c)
 *     SeCreateClientSecurityEx @ 0x1408974A0 (SeCreateClientSecurityEx.c)
 *     AlpcpGetEffectiveTokenMessage @ 0x140897750 (AlpcpGetEffectiveTokenMessage.c)
 *     SepCreateClientSecurityEx @ 0x140897AC0 (SepCreateClientSecurityEx.c)
 *     AlpcpExposeTokenAttribute @ 0x140898930 (AlpcpExposeTokenAttribute.c)
 *     ObOpenObjectByNameEx @ 0x14089BB40 (ObOpenObjectByNameEx.c)
 *     ObCreateObjectEx @ 0x14089C4F0 (ObCreateObjectEx.c)
 *     SeCreateAccessStateEx @ 0x1408A64E0 (SeCreateAccessStateEx.c)
 *     SeAuditProcessCreation @ 0x1408A73CC (SeAuditProcessCreation.c)
 *     NtLoadEnclaveData @ 0x1408D9D70 (NtLoadEnclaveData.c)
 *     PfpPrivSourceEnum @ 0x1408EE170 (PfpPrivSourceEnum.c)
 *     PspDisablePrimaryTokenExchange @ 0x1408FEB00 (PspDisablePrimaryTokenExchange.c)
 *     PopEtGetProcessSidAndPackageIdentity @ 0x14090910C (PopEtGetProcessSidAndPackageIdentity.c)
 *     ExpWnfQueryCurrentUserSID @ 0x140909E2C (ExpWnfQueryCurrentUserSID.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x14090CE40 (CmKeyBodyRemapToVirtualForEnum.c)
 *     PsImpersonateClient @ 0x1409102D0 (PsImpersonateClient.c)
 *     EtwTiLogImpersonateClient @ 0x140910DC8 (EtwTiLogImpersonateClient.c)
 *     EtwpGetSidExtendedHeaderItem @ 0x1409227D0 (EtwpGetSidExtendedHeaderItem.c)
 *     EtwpGetPsmKeyExtendedHeaderItem @ 0x140922ACC (EtwpGetPsmKeyExtendedHeaderItem.c)
 *     EtwTiLogSyscallUsage @ 0x140934948 (EtwTiLogSyscallUsage.c)
 *     PspExitLastThread @ 0x1409374F0 (PspExitLastThread.c)
 *     EtwpPsProvProcessEnumCallback @ 0x14093A830 (EtwpPsProvProcessEnumCallback.c)
 *     MmCreateSectionEx @ 0x140940C6C (MmCreateSectionEx.c)
 *     PspCombineSecurityDomains @ 0x14094706C (PspCombineSecurityDomains.c)
 *     NtSetInformationProcess @ 0x140947500 (NtSetInformationProcess.c)
 *     EtwQueryProcessTelemetryInfo @ 0x14094B234 (EtwQueryProcessTelemetryInfo.c)
 *     EtwpBuildProcessEvent @ 0x14094B5C0 (EtwpBuildProcessEvent.c)
 *     EtwTraceAppStateChange @ 0x14094C00C (EtwTraceAppStateChange.c)
 *     EtwpPsProvTraceProcess @ 0x14094D000 (EtwpPsProvTraceProcess.c)
 *     PspOneDirectionSecurityDomainCombine @ 0x14094DFD4 (PspOneDirectionSecurityDomainCombine.c)
 *     PfSnCheckModernApp @ 0x140961CE8 (PfSnCheckModernApp.c)
 *     MiCreateSectionCommon @ 0x14096B594 (MiCreateSectionCommon.c)
 *     ObpSetCurrentProcessDeviceMap @ 0x140985458 (ObpSetCurrentProcessDeviceMap.c)
 *     PsReferencePrimaryToken @ 0x14099FAD0 (PsReferencePrimaryToken.c)
 *     AlpcpPortQueryConnectedSidInfo @ 0x1409AB3F4 (AlpcpPortQueryConnectedSidInfo.c)
 *     PspSetQuotaLimits @ 0x1409AFD58 (PspSetQuotaLimits.c)
 *     PsQueryProcessAttributes @ 0x1409D67A0 (PsQueryProcessAttributes.c)
 *     PspGetNoChildProcessRestrictedPolicy @ 0x140A03CD8 (PspGetNoChildProcessRestrictedPolicy.c)
 *     AlpcpCheckConnectionSecurity @ 0x140A167F4 (AlpcpCheckConnectionSecurity.c)
 *     PspReferenceTokenForNewProcess @ 0x140A1B954 (PspReferenceTokenForNewProcess.c)
 *     NtImpersonateAnonymousToken @ 0x140A2F610 (NtImpersonateAnonymousToken.c)
 *     PspInitializeProcessSecurity @ 0x140A30A28 (PspInitializeProcessSecurity.c)
 *     SeIsTokenAssignableToProcess @ 0x140A31678 (SeIsTokenAssignableToProcess.c)
 *     SepIsChildTokenByPointer @ 0x140A31830 (SepIsChildTokenByPointer.c)
 *     SepIsSiblingTokenByPointer @ 0x140A318CC (SepIsSiblingTokenByPointer.c)
 *     MiFindProcessImageHotPatchRecord @ 0x140A326F0 (MiFindProcessImageHotPatchRecord.c)
 *     PspGetRedirectionTrustPolicy @ 0x140A5EBB8 (PspGetRedirectionTrustPolicy.c)
 *     PspSetRedirectionTrustPolicy @ 0x140A65014 (PspSetRedirectionTrustPolicy.c)
 *     EtwpAcquireTokenAccessInformation @ 0x140A6CE48 (EtwpAcquireTokenAccessInformation.c)
 *     EtwpApplyPackageIdFilter @ 0x140A7F91C (EtwpApplyPackageIdFilter.c)
 *     ExpCheckWakeTimerAccess @ 0x140A96318 (ExpCheckWakeTimerAccess.c)
 *     PspSetNoChildProcessRestrictedPolicy @ 0x140A9BC5C (PspSetNoChildProcessRestrictedPolicy.c)
 *     SepFilterToken @ 0x140AD2664 (SepFilterToken.c)
 *     ExpGetProcessInformation @ 0x140ADAE00 (ExpGetProcessInformation.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402595A0 (KeLeaveCriticalRegionThread.c)
 *     KiAbEntryFreeAndEnableInterrupts @ 0x14025CDA0 (KiAbEntryFreeAndEnableInterrupts.c)
 *     ExfReleasePushLockShared @ 0x14025DE00 (ExfReleasePushLockShared.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14025E408 (KiRemoveSystemWorkPriorityKick.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x1403403E0 (ObfReferenceObjectWithTag.c)
 *     ObpTraceObjectReferenceIfActive @ 0x140340450 (ObpTraceObjectReferenceIfActive.c)
 *     ExfAcquirePushLockSharedEx @ 0x14034050C (ExfAcquirePushLockSharedEx.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 */

ULONG_PTR __fastcall PsReferencePrimaryTokenWithTag(__int64 a1, ULONG a2)
{
  signed __int64 v4; // r8
  signed __int64 v5; // rax
  ULONG_PTR v6; // rbx
  unsigned int v7; // r8d
  struct _KTHREAD *CurrentThread; // r14
  ULONG_PTR v9; // rsi
  __int64 v10; // rbx
  __int64 v11; // rax
  signed __int64 v12; // rax
  signed __int64 v13; // rtt
  __int64 v14; // rcx
  unsigned int i; // edx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v19; // eax
  signed __int32 v20; // ett
  struct _KTHREAD *v21; // r10
  _KLOCK_ENTRIES *KernelAbEntries; // r8

  _m_prefetchw((const void *)(a1 + 584));
  v4 = *(_QWORD *)(a1 + 584);
  if ( (v4 & 0xF) != 0 )
  {
    do
    {
      v5 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 584), v4 - 1, v4);
      if ( v4 == v5 )
        break;
      v4 = v5;
    }
    while ( (v5 & 0xF) != 0 );
  }
  v6 = v4 & 0xFFFFFFFFFFFFFFF0uLL;
  v7 = v4 & 0xF;
  if ( v7 > 1 )
    goto LABEL_5;
  if ( v7 )
  {
    v11 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v6 - 48), 0xFuLL);
    if ( v11 <= 0 )
      KeBugCheckEx(0x18u, 0LL, v6, 0x10uLL, v11 + 15);
    _m_prefetchw((const void *)(a1 + 584));
    v12 = *(_QWORD *)(a1 + 584);
    while ( (v12 & 0xF) == 0 && v6 == (v12 & 0xFFFFFFFFFFFFFFF0uLL) )
    {
      v13 = v12;
      v12 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 584), v12 + 15, v12);
      if ( v13 == v12 )
        goto LABEL_5;
    }
    _InterlockedAdd64((volatile signed __int64 *)(v6 - 48), 0xFFFFFFFFFFFFFFF1uLL);
LABEL_5:
    ObpTraceObjectReferenceIfActive(v6 - 48, 1LL, a2);
    if ( v6 )
      return v6;
  }
  CurrentThread = KeGetCurrentThread();
  v9 = a1 + 456;
  --CurrentThread->KernelApcDisable;
  v10 = KeAbPreAcquire(a1 + 456, 0LL, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 456), 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(a1 + 456, 0LL, v10, a1 + 456);
  if ( v10 )
    *(_BYTE *)(v10 + 10) = 1;
  v6 = *(_QWORD *)(a1 + 584) & 0xFFFFFFFFFFFFFFF0uLL;
  if ( v6 )
    ObfReferenceObjectWithTag((PVOID)(*(_QWORD *)(a1 + 584) & 0xFFFFFFFFFFFFFFF0uLL), a2);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v9, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(a1 + 456));
  v21 = KeGetCurrentThread();
  _disable();
  KernelAbEntries = v21->KernelAbEntries;
  for ( i = 0; i < KernelAbEntries->EntryCount; ++i )
  {
    v14 = (__int64)&KernelAbEntries->Entries[i];
    if ( (*(_QWORD *)v14 & 0x7FFFFFFFFFFFFFFCLL) == (v9 & 0x7FFFFFFFFFFFFFFCLL)
      && *(_BYTE *)(v14 + 10)
      && (*(_QWORD *)v14 & 1) == 0 )
    {
      *(_BYTE *)(v14 + 10) = 0;
      KiAbEntryFreeAndEnableInterrupts(v14, (ULONG_PTR)v21, v9, 1, 0LL);
      goto LABEL_31;
    }
  }
  if ( (*((_DWORD *)&v21->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v21, v9, 0LL, 0LL);
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    _m_prefetchw(SchedulerAssist);
    v19 = *SchedulerAssist;
    do
    {
      v20 = v19;
      v19 = _InterlockedCompareExchange(SchedulerAssist, v19 & 0xFFDFFFFF, v19);
    }
    while ( v20 != v19 );
    if ( (v19 & 0x200000) != 0 )
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  _enable();
LABEL_31:
  KeLeaveCriticalRegionThread();
  return v6;
}
