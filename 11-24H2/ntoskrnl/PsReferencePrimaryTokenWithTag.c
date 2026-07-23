/*
 * XREFs of PsReferencePrimaryTokenWithTag @ 0x14031F4D0
 * Callers:
 *     SepReferenceTokenByHandle @ 0x1403E36B0 (SepReferenceTokenByHandle.c)
 *     RtlpQueryLowBoxId @ 0x1404247E0 (RtlpQueryLowBoxId.c)
 *     FsRtlpOplockGetThreadIntegrityLevel @ 0x1407095D4 (FsRtlpOplockGetThreadIntegrityLevel.c)
 *     PsCreateMinimalProcess @ 0x1407798C4 (PsCreateMinimalProcess.c)
 *     SeAuditProcessExit @ 0x140790D28 (SeAuditProcessExit.c)
 *     CmpCreateRegistryProcessToken @ 0x1407D858C (CmpCreateRegistryProcessToken.c)
 *     MiInitializeVsmEnclave @ 0x1407F7EF0 (MiInitializeVsmEnclave.c)
 *     EtwpIsRegEntryAllowed @ 0x140832F04 (EtwpIsRegEntryAllowed.c)
 *     SeCreateAccessState @ 0x14083B750 (SeCreateAccessState.c)
 *     SeCaptureSubjectContextEx @ 0x14083BF00 (SeCaptureSubjectContextEx.c)
 *     SeCaptureSubjectContext @ 0x140849BB0 (SeCaptureSubjectContext.c)
 *     NtOpenProcessTokenEx @ 0x140850490 (NtOpenProcessTokenEx.c)
 *     PsOpenProcess @ 0x140850610 (PsOpenProcess.c)
 *     ObOpenObjectByPointer @ 0x1408511D0 (ObOpenObjectByPointer.c)
 *     NtOpenThreadTokenEx @ 0x140851680 (NtOpenThreadTokenEx.c)
 *     ObInsertObjectEx @ 0x140853900 (ObInsertObjectEx.c)
 *     PsReferenceEffectiveToken @ 0x140858F20 (PsReferenceEffectiveToken.c)
 *     PsIsProcessAppContainer @ 0x1408592D0 (PsIsProcessAppContainer.c)
 *     PfpPrivSourceEnum @ 0x14085F9A0 (PfpPrivSourceEnum.c)
 *     SeCreateClientSecurity @ 0x14089EDC0 (SeCreateClientSecurity.c)
 *     NtAlpcImpersonateClientOfPort @ 0x14089F010 (NtAlpcImpersonateClientOfPort.c)
 *     SeCreateClientSecurityEx @ 0x14089FB40 (SeCreateClientSecurityEx.c)
 *     AlpcpGetEffectiveTokenMessage @ 0x14089FDF0 (AlpcpGetEffectiveTokenMessage.c)
 *     SepCreateClientSecurityEx @ 0x1408A0160 (SepCreateClientSecurityEx.c)
 *     AlpcpExposeTokenAttribute @ 0x1408A0FD0 (AlpcpExposeTokenAttribute.c)
 *     ObOpenObjectByNameEx @ 0x1408A41E0 (ObOpenObjectByNameEx.c)
 *     ObCreateObjectEx @ 0x1408A4B90 (ObCreateObjectEx.c)
 *     PspCombineSecurityDomains @ 0x1408AB200 (PspCombineSecurityDomains.c)
 *     PopEtGetProcessSidAndPackageIdentity @ 0x1408E082C (PopEtGetProcessSidAndPackageIdentity.c)
 *     ExpWnfQueryCurrentUserSID @ 0x1408E154C (ExpWnfQueryCurrentUserSID.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1408E4560 (CmKeyBodyRemapToVirtualForEnum.c)
 *     PsImpersonateClient @ 0x1408E7A20 (PsImpersonateClient.c)
 *     EtwTiLogImpersonateClient @ 0x1408E8518 (EtwTiLogImpersonateClient.c)
 *     PspGetRedirectionTrustPolicy @ 0x1408EB35C (PspGetRedirectionTrustPolicy.c)
 *     NtSetInformationProcess @ 0x1408EBA70 (NtSetInformationProcess.c)
 *     EtwQueryProcessTelemetryInfo @ 0x1408EF7A4 (EtwQueryProcessTelemetryInfo.c)
 *     EtwpBuildProcessEvent @ 0x1408EFB30 (EtwpBuildProcessEvent.c)
 *     EtwTraceAppStateChange @ 0x1408F057C (EtwTraceAppStateChange.c)
 *     EtwpPsProvTraceProcess @ 0x1408F1570 (EtwpPsProvTraceProcess.c)
 *     PspOneDirectionSecurityDomainCombine @ 0x1408F2544 (PspOneDirectionSecurityDomainCombine.c)
 *     PspExitLastThread @ 0x1408F27B8 (PspExitLastThread.c)
 *     EtwTiLogSyscallUsage @ 0x1408F7468 (EtwTiLogSyscallUsage.c)
 *     SeCreateAccessStateEx @ 0x1408FCAF0 (SeCreateAccessStateEx.c)
 *     SeAuditProcessCreation @ 0x1408FD624 (SeAuditProcessCreation.c)
 *     PspDisablePrimaryTokenExchange @ 0x1409213E0 (PspDisablePrimaryTokenExchange.c)
 *     PfSnCheckModernApp @ 0x1409497A8 (PfSnCheckModernApp.c)
 *     MiCreateSectionCommon @ 0x140954024 (MiCreateSectionCommon.c)
 *     ObpSetCurrentProcessDeviceMap @ 0x14096DC68 (ObpSetCurrentProcessDeviceMap.c)
 *     SepFilterToken @ 0x140985C1C (SepFilterToken.c)
 *     PsReferencePrimaryToken @ 0x140988280 (PsReferencePrimaryToken.c)
 *     MmCreateSectionEx @ 0x14098AECC (MmCreateSectionEx.c)
 *     EtwpGetSidExtendedHeaderItem @ 0x14098FEE0 (EtwpGetSidExtendedHeaderItem.c)
 *     AlpcpPortQueryConnectedSidInfo @ 0x1409950F4 (AlpcpPortQueryConnectedSidInfo.c)
 *     PspSetQuotaLimits @ 0x140999A58 (PspSetQuotaLimits.c)
 *     PsQueryProcessAttributes @ 0x1409C65D0 (PsQueryProcessAttributes.c)
 *     PspReferenceTokenForNewProcess @ 0x1409F9EC4 (PspReferenceTokenForNewProcess.c)
 *     PspGetNoChildProcessRestrictedPolicy @ 0x140A00208 (PspGetNoChildProcessRestrictedPolicy.c)
 *     AlpcpCheckConnectionSecurity @ 0x140A0F9D4 (AlpcpCheckConnectionSecurity.c)
 *     NtImpersonateAnonymousToken @ 0x140A24050 (NtImpersonateAnonymousToken.c)
 *     SeIsTokenAssignableToProcess @ 0x140A255F4 (SeIsTokenAssignableToProcess.c)
 *     SepIsChildTokenByPointer @ 0x140A257AC (SepIsChildTokenByPointer.c)
 *     SepIsSiblingTokenByPointer @ 0x140A25848 (SepIsSiblingTokenByPointer.c)
 *     MiFindProcessImageHotPatchRecord @ 0x140A26708 (MiFindProcessImageHotPatchRecord.c)
 *     NtLoadEnclaveData @ 0x140A29800 (NtLoadEnclaveData.c)
 *     EtwpEnableGuid @ 0x140A3EA20 (EtwpEnableGuid.c)
 *     EtwpPsProvProcessEnumCallback @ 0x140A56950 (EtwpPsProvProcessEnumCallback.c)
 *     PspSetRedirectionTrustPolicy @ 0x140A5D7E4 (PspSetRedirectionTrustPolicy.c)
 *     EtwpApplyPackageIdFilter @ 0x140A7975C (EtwpApplyPackageIdFilter.c)
 *     ExpCheckWakeTimerAccess @ 0x140A92B48 (ExpCheckWakeTimerAccess.c)
 *     PspSetNoChildProcessRestrictedPolicy @ 0x140A971CC (PspSetNoChildProcessRestrictedPolicy.c)
 *     EtwpGetPsmKeyExtendedHeaderItem @ 0x140AA71D0 (EtwpGetPsmKeyExtendedHeaderItem.c)
 *     PspInitializeProcessSecurity @ 0x140ACAA98 (PspInitializeProcessSecurity.c)
 *     ExpGetProcessInformation @ 0x140ADC640 (ExpGetProcessInformation.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140289BB0 (KeLeaveCriticalRegionThread.c)
 *     KiAbEntryFreeAndEnableInterrupts @ 0x14028D3B0 (KiAbEntryFreeAndEnableInterrupts.c)
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028EA18 (KiRemoveSystemWorkPriorityKick.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x14031F8C0 (ObfReferenceObjectWithTag.c)
 *     ObpTraceObjectReferenceIfActive @ 0x14031F930 (ObpTraceObjectReferenceIfActive.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
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
      KiAbEntryFreeAndEnableInterrupts(v14, (ULONG_PTR)v21, v9, 1LL, 0LL);
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
