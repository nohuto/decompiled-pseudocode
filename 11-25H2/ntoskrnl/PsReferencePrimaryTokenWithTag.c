/*
 * XREFs of PsReferencePrimaryTokenWithTag @ 0x14029AE50
 * Callers:
 *     SepReferenceTokenByHandle @ 0x140361130 (SepReferenceTokenByHandle.c)
 *     SeAccessCheckByType @ 0x140363B20 (SeAccessCheckByType.c)
 *     RtlpQueryLowBoxId @ 0x140435C80 (RtlpQueryLowBoxId.c)
 *     FsRtlpOplockGetThreadIntegrityLevel @ 0x1406FFB60 (FsRtlpOplockGetThreadIntegrityLevel.c)
 *     PsCreateMinimalProcess @ 0x140769B14 (PsCreateMinimalProcess.c)
 *     SeAuditProcessExit @ 0x140781A98 (SeAuditProcessExit.c)
 *     CmpCreateRegistryProcessToken @ 0x1407C88A0 (CmpCreateRegistryProcessToken.c)
 *     MiInitializeVsmEnclave @ 0x1407E78EC (MiInitializeVsmEnclave.c)
 *     PfSnCheckModernApp @ 0x140827568 (PfSnCheckModernApp.c)
 *     PopEtGetProcessSidAndPackageIdentity @ 0x14083D388 (PopEtGetProcessSidAndPackageIdentity.c)
 *     ExpWnfQueryCurrentUserSID @ 0x14083E098 (ExpWnfQueryCurrentUserSID.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x140840E80 (CmKeyBodyRemapToVirtualForEnum.c)
 *     SeCaptureSubjectContextEx @ 0x1408436C0 (SeCaptureSubjectContextEx.c)
 *     PsOpenProcess @ 0x1408572E0 (PsOpenProcess.c)
 *     ObOpenObjectByPointer @ 0x140857EB0 (ObOpenObjectByPointer.c)
 *     SeCaptureSubjectContext @ 0x140858670 (SeCaptureSubjectContext.c)
 *     NtAlpcImpersonateClientOfPort @ 0x140859580 (NtAlpcImpersonateClientOfPort.c)
 *     ObOpenObjectByNameEx @ 0x14085B430 (ObOpenObjectByNameEx.c)
 *     ObCreateObjectEx @ 0x14085BE20 (ObCreateObjectEx.c)
 *     EtwpEnableGuid @ 0x14089BB2C (EtwpEnableGuid.c)
 *     ObInsertObjectEx @ 0x1408A05E0 (ObInsertObjectEx.c)
 *     NtOpenThreadTokenEx @ 0x1408A17B0 (NtOpenThreadTokenEx.c)
 *     PsImpersonateClient @ 0x1408A51C0 (PsImpersonateClient.c)
 *     EtwTiLogImpersonateClient @ 0x1408A5C84 (EtwTiLogImpersonateClient.c)
 *     SeCreateClientSecurity @ 0x1408A6230 (SeCreateClientSecurity.c)
 *     SeCreateClientSecurityEx @ 0x1408A64C0 (SeCreateClientSecurityEx.c)
 *     AlpcpGetEffectiveTokenMessage @ 0x1408A6770 (AlpcpGetEffectiveTokenMessage.c)
 *     SepCreateClientSecurityEx @ 0x1408A6AF0 (SepCreateClientSecurityEx.c)
 *     AlpcpExposeTokenAttribute @ 0x1408A82D0 (AlpcpExposeTokenAttribute.c)
 *     PspGetRedirectionTrustPolicy @ 0x1408BA06C (PspGetRedirectionTrustPolicy.c)
 *     NtSetInformationProcess @ 0x1408BA860 (NtSetInformationProcess.c)
 *     EtwQueryProcessTelemetryInfo @ 0x1408BE0D4 (EtwQueryProcessTelemetryInfo.c)
 *     EtwpBuildProcessEvent @ 0x1408BE460 (EtwpBuildProcessEvent.c)
 *     MiCreateSectionCommon @ 0x1408C2964 (MiCreateSectionCommon.c)
 *     PfpPrivSourceEnum @ 0x1408DED60 (PfpPrivSourceEnum.c)
 *     EtwTiLogSyscallUsage @ 0x1408EA178 (EtwTiLogSyscallUsage.c)
 *     PspCombineSecurityDomains @ 0x1408EDED8 (PspCombineSecurityDomains.c)
 *     SeCreateAccessStateEx @ 0x1408F3A90 (SeCreateAccessStateEx.c)
 *     SeAuditProcessCreation @ 0x1408F435C (SeAuditProcessCreation.c)
 *     PspDisablePrimaryTokenExchange @ 0x14090B050 (PspDisablePrimaryTokenExchange.c)
 *     SeCreateAccessState @ 0x1409154F0 (SeCreateAccessState.c)
 *     PspExitLastThread @ 0x14091ECC8 (PspExitLastThread.c)
 *     EtwTraceAppStateChange @ 0x14091FF00 (EtwTraceAppStateChange.c)
 *     PspOneDirectionSecurityDomainCombine @ 0x140920D58 (PspOneDirectionSecurityDomainCombine.c)
 *     EtwpPsProvTraceProcess @ 0x140921388 (EtwpPsProvTraceProcess.c)
 *     EtwpGetSidExtendedHeaderItem @ 0x140925E00 (EtwpGetSidExtendedHeaderItem.c)
 *     EtwpGetPsmKeyExtendedHeaderItem @ 0x1409260EC (EtwpGetPsmKeyExtendedHeaderItem.c)
 *     MmCreateSectionEx @ 0x14093C3AC (MmCreateSectionEx.c)
 *     PsReferenceEffectiveToken @ 0x140969860 (PsReferenceEffectiveToken.c)
 *     PsIsProcessAppContainer @ 0x140969C10 (PsIsProcessAppContainer.c)
 *     ObpSetCurrentProcessDeviceMap @ 0x14097F450 (ObpSetCurrentProcessDeviceMap.c)
 *     SepFilterToken @ 0x140997EFC (SepFilterToken.c)
 *     PsReferencePrimaryToken @ 0x14099C740 (PsReferencePrimaryToken.c)
 *     PspReferenceTokenForNewProcess @ 0x1409BD294 (PspReferenceTokenForNewProcess.c)
 *     PsQueryProcessAttributes @ 0x1409BE6C0 (PsQueryProcessAttributes.c)
 *     AlpcpPortQueryConnectedSidInfo @ 0x1409C2254 (AlpcpPortQueryConnectedSidInfo.c)
 *     PspSetQuotaLimits @ 0x1409C2688 (PspSetQuotaLimits.c)
 *     NtLoadEnclaveData @ 0x1409CAD50 (NtLoadEnclaveData.c)
 *     NtOpenProcessTokenEx @ 0x1409D8850 (NtOpenProcessTokenEx.c)
 *     PspGetNoChildProcessRestrictedPolicy @ 0x140A0902C (PspGetNoChildProcessRestrictedPolicy.c)
 *     PspInitializeProcessSecurity @ 0x140A0C7EC (PspInitializeProcessSecurity.c)
 *     AlpcpCheckConnectionSecurity @ 0x140A0F5F0 (AlpcpCheckConnectionSecurity.c)
 *     MiFindProcessImageHotPatchRecord @ 0x140A1DD10 (MiFindProcessImageHotPatchRecord.c)
 *     NtImpersonateAnonymousToken @ 0x140A29C90 (NtImpersonateAnonymousToken.c)
 *     SeIsTokenAssignableToProcess @ 0x140A2AC34 (SeIsTokenAssignableToProcess.c)
 *     SepIsChildTokenByPointer @ 0x140A2ADEC (SepIsChildTokenByPointer.c)
 *     SepIsSiblingTokenByPointer @ 0x140A2AE88 (SepIsSiblingTokenByPointer.c)
 *     EtwpPsProvProcessEnumCallback @ 0x140A5C6C0 (EtwpPsProvProcessEnumCallback.c)
 *     PspSetRedirectionTrustPolicy @ 0x140A62D9C (PspSetRedirectionTrustPolicy.c)
 *     EtwpAcquireTokenAccessInformation @ 0x140A6A938 (EtwpAcquireTokenAccessInformation.c)
 *     EtwpApplyPackageIdFilter @ 0x140A7C304 (EtwpApplyPackageIdFilter.c)
 *     PspSetNoChildProcessRestrictedPolicy @ 0x140A9616C (PspSetNoChildProcessRestrictedPolicy.c)
 *     ExpGetProcessInformation @ 0x140AD0210 (ExpGetProcessInformation.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x14028BBC0 (KiRemoveSystemWorkPriorityKick.c)
 *     ObpTraceObjectReferenceIfActive @ 0x14029B0E0 (ObpTraceObjectReferenceIfActive.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x14029B2A0 (ObfReferenceObjectWithTag.c)
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 *     KiAbEntryFreeAndEnableInterrupts @ 0x14029BA20 (KiAbEntryFreeAndEnableInterrupts.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

ULONG_PTR __fastcall PsReferencePrimaryTokenWithTag(__int64 a1, ULONG a2)
{
  signed __int64 v4; // r8
  signed __int64 v5; // rax
  ULONG_PTR v6; // rdi
  unsigned int v7; // r8d
  struct _KTHREAD *CurrentThread; // r14
  ULONG_PTR v9; // rsi
  __int64 v10; // rdi
  struct _KTHREAD *v11; // r10
  _KLOCK_ENTRIES *KernelAbEntries; // r8
  unsigned int i; // edx
  _KLOCK_ENTRY *v14; // rcx
  __int64 v16; // rax
  signed __int64 v17; // rax
  signed __int64 v18; // rtt
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v21; // eax
  signed __int32 v22; // ett

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
    v16 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v6 - 48), 0xFuLL);
    if ( v16 <= 0 )
      KeBugCheckEx(0x18u, 0LL, v6, 0x10uLL, v16 + 15);
    _m_prefetchw((const void *)(a1 + 584));
    v17 = *(_QWORD *)(a1 + 584);
    while ( (v17 & 0xF) == 0 && v6 == (v17 & 0xFFFFFFFFFFFFFFF0uLL) )
    {
      v18 = v17;
      v17 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 584), v17 + 15, v17);
      if ( v18 == v17 )
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
    ExfReleasePushLockShared(v9);
  v11 = KeGetCurrentThread();
  _disable();
  KernelAbEntries = v11->KernelAbEntries;
  for ( i = 0; i < KernelAbEntries->EntryCount; ++i )
  {
    v14 = &KernelAbEntries->Entries[i];
    if ( (*(_QWORD *)&v14->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v9 & 0x7FFFFFFFFFFFFFFCLL)
      && v14->AcquiredByte
      && (*(_QWORD *)&v14->LockState.0 & 1) == 0 )
    {
      v14->AcquiredByte = 0;
      KiAbEntryFreeAndEnableInterrupts(v14, v11, v9, 1LL, 0LL);
      goto LABEL_20;
    }
  }
  if ( (*((_DWORD *)&v11->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v11, v9, 0LL, 0LL);
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    _m_prefetchw(SchedulerAssist);
    v21 = *SchedulerAssist;
    do
    {
      v22 = v21;
      v21 = _InterlockedCompareExchange(SchedulerAssist, v21 & 0xFFDFFFFF, v21);
    }
    while ( v22 != v21 );
    if ( (v21 & 0x200000) != 0 )
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  _enable();
LABEL_20:
  KeLeaveCriticalRegionThread(CurrentThread);
  return v6;
}
