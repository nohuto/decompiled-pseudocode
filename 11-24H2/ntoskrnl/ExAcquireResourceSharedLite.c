/*
 * XREFs of ExAcquireResourceSharedLite @ 0x140341E80
 * Callers:
 *     KeCapturePersistentThreadState @ 0x140262B20 (KeCapturePersistentThreadState.c)
 *     MiAcquireLoadLock @ 0x1402C6F98 (MiAcquireLoadLock.c)
 *     SepAcquireOrderedReadLocks @ 0x140343E00 (SepAcquireOrderedReadLocks.c)
 *     SepTrustLevelCheck @ 0x140357F50 (SepTrustLevelCheck.c)
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x140358240 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     SepFilterCheck @ 0x14035B6A0 (SepFilterCheck.c)
 *     SeAccessCheckByType @ 0x14035C8A0 (SeAccessCheckByType.c)
 *     SeTokenGetNoChildProcessRestricted @ 0x1404519E0 (SeTokenGetNoChildProcessRestricted.c)
 *     SepRmAcquireGlobalSaclReadLock @ 0x140462E24 (SepRmAcquireGlobalSaclReadLock.c)
 *     IopCreateSecurityCheck @ 0x14046DA5C (IopCreateSecurityCheck.c)
 *     SepGetProcUniqueLuidAndIndexFromTokenEx @ 0x140477780 (SepGetProcUniqueLuidAndIndexFromTokenEx.c)
 *     IoCheckRedirectionTrustLevel @ 0x14047B300 (IoCheckRedirectionTrustLevel.c)
 *     SeTokenGetRedirectionTrustPolicy @ 0x14048CFA0 (SeTokenGetRedirectionTrustPolicy.c)
 *     FsRtlpDedupChangeEventsControlCallbackV2 @ 0x1405818E0 (FsRtlpDedupChangeEventsControlCallbackV2.c)
 *     FsRtlpTieringHeatEventsControlCallbackV2 @ 0x140581DF0 (FsRtlpTieringHeatEventsControlCallbackV2.c)
 *     IoFillTriageDumpBuffer @ 0x1405912CC (IoFillTriageDumpBuffer.c)
 *     SeTokenIsNoChildProcessRestrictionEnforced @ 0x140609118 (SeTokenIsNoChildProcessRestrictionEnforced.c)
 *     DifExAcquireResourceSharedLiteWrapper @ 0x14061BD40 (DifExAcquireResourceSharedLiteWrapper.c)
 *     FsRtlMdlReadDev @ 0x14070A280 (FsRtlMdlReadDev.c)
 *     FsRtlPrepareMdlWriteDev @ 0x14070A4B0 (FsRtlPrepareMdlWriteDev.c)
 *     PnpShutdownDevices @ 0x14071AAA0 (PnpShutdownDevices.c)
 *     PsSwapProcessWorkingSet @ 0x140774624 (PsSwapProcessWorkingSet.c)
 *     SeSetSessionIdTokenWithLinked @ 0x14078F8F0 (SeSetSessionIdTokenWithLinked.c)
 *     SepIdAssignableAsGroup @ 0x1407924F0 (SepIdAssignableAsGroup.c)
 *     NtMapCMFModule @ 0x1407C3080 (NtMapCMFModule.c)
 *     ObpCreateHandle @ 0x14084DAA0 (ObpCreateHandle.c)
 *     ObpGrantAccess @ 0x140851390 (ObpGrantAccess.c)
 *     CmpCheckKeyBodyAccess @ 0x140851B40 (CmpCheckKeyBodyAccess.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x140852140 (CmpCheckOpenAccessOnKeyBody.c)
 *     SepDuplicateToken @ 0x140856520 (SepDuplicateToken.c)
 *     RtlpSetSecurityObject @ 0x140858F70 (RtlpSetSecurityObject.c)
 *     ExpGetSystemFirmwareTableInformation @ 0x14085D348 (ExpGetSystemFirmwareTableInformation.c)
 *     SeLockSubjectContext @ 0x140868470 (SeLockSubjectContext.c)
 *     IopGetSetSecurityObject @ 0x1408796F0 (IopGetSetSecurityObject.c)
 *     ObCheckObjectAccess @ 0x14087A740 (ObCheckObjectAccess.c)
 *     NtQuerySecurityAttributesToken @ 0x140888DC0 (NtQuerySecurityAttributesToken.c)
 *     PspChargeJobWakeCounter @ 0x14088E1A0 (PspChargeJobWakeCounter.c)
 *     AlpcpExposeTokenAttribute @ 0x140898930 (AlpcpExposeTokenAttribute.c)
 *     IopParseDevice @ 0x14089F880 (IopParseDevice.c)
 *     PspInsertThread @ 0x1408A59BC (PspInsertThread.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x1408B4A8C (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiDmObjectManagerAcquireSharedLock @ 0x1408B52AC (PiDmObjectManagerAcquireSharedLock.c)
 *     PipProcessDevNodeTree @ 0x1408BA630 (PipProcessDevNodeTree.c)
 *     PpHotSwapGetDevnodeRemovalPolicy @ 0x1408BBA94 (PpHotSwapGetDevnodeRemovalPolicy.c)
 *     PiGetDeviceDepth @ 0x1408BC2DC (PiGetDeviceDepth.c)
 *     PiControlGetPropertyData @ 0x1408BD4B0 (PiControlGetPropertyData.c)
 *     PiCMValidateDeviceInstance @ 0x1408BE2FC (PiCMValidateDeviceInstance.c)
 *     PiGetRelatedDevice @ 0x1408BEE58 (PiGetRelatedDevice.c)
 *     PiDmGetObject @ 0x1408CBB70 (PiDmGetObject.c)
 *     PiPnpRtlGetCurrentOperation @ 0x1408CC0A0 (PiPnpRtlGetCurrentOperation.c)
 *     PiPnpRtlCacheObjectBaseKey @ 0x1408CC2D0 (PiPnpRtlCacheObjectBaseKey.c)
 *     PiPnpRtlDisableRemoveOperationDispatch @ 0x1408CC6EC (PiPnpRtlDisableRemoveOperationDispatch.c)
 *     PiPnpRtlObjectActionCallback @ 0x1408CE6A0 (PiPnpRtlObjectActionCallback.c)
 *     PiControlGetDeviceInterfaceEnabled @ 0x1408CFC60 (PiControlGetDeviceInterfaceEnabled.c)
 *     PiDmObjectGetCachedObjectProperty @ 0x1408D0350 (PiDmObjectGetCachedObjectProperty.c)
 *     PiDmEnumObjectsWithCallback @ 0x1408D0E10 (PiDmEnumObjectsWithCallback.c)
 *     IopDeviceInterfaceFilterCallback @ 0x1408D1170 (IopDeviceInterfaceFilterCallback.c)
 *     PiPnpRtlApplyMandatoryFilters @ 0x1408D19E0 (PiPnpRtlApplyMandatoryFilters.c)
 *     PiPnpRtlApplyMandatoryDeviceFilters @ 0x1408D1BF0 (PiPnpRtlApplyMandatoryDeviceFilters.c)
 *     PiCMMandatoryFilterCallback @ 0x1408D21F0 (PiCMMandatoryFilterCallback.c)
 *     PiUEventApplyAdditionalFilters @ 0x1408D25A0 (PiUEventApplyAdditionalFilters.c)
 *     PspQueryJobHierarchyAccountingInformation @ 0x1408EB654 (PspQueryJobHierarchyAccountingInformation.c)
 *     PspLockRootJobShared @ 0x1408EB990 (PspLockRootJobShared.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x1408EBCAC (PspEnumJobsAndProcessesInJobHierarchy.c)
 *     PspGetNextChildJob @ 0x1408EBF00 (PspGetNextChildJob.c)
 *     PspEnforceLimitsJobPostCallback @ 0x1408ECC80 (PspEnforceLimitsJobPostCallback.c)
 *     PspLockJobShared @ 0x1408ED5D4 (PspLockJobShared.c)
 *     SeQueryUserSidToken @ 0x14090A570 (SeQueryUserSidToken.c)
 *     SeQueryInformationToken @ 0x14090D870 (SeQueryInformationToken.c)
 *     NtDuplicateToken @ 0x14090F090 (NtDuplicateToken.c)
 *     NtSetInformationThread @ 0x140911410 (NtSetInformationThread.c)
 *     PspSetProcessPriorityClass @ 0x140913B0C (PspSetProcessPriorityClass.c)
 *     RtlpNewSecurityObject @ 0x14091A290 (RtlpNewSecurityObject.c)
 *     SepAccessCheckAndAuditAlarm @ 0x14091DB90 (SepAccessCheckAndAuditAlarm.c)
 *     EtwpGetSidExtendedHeaderItem @ 0x1409227D0 (EtwpGetSidExtendedHeaderItem.c)
 *     AlpcpQuerySidToken @ 0x14093D974 (AlpcpQuerySidToken.c)
 *     EtwQueryProcessTelemetryInfo @ 0x14094B234 (EtwQueryProcessTelemetryInfo.c)
 *     PiQueryAndAllocateBootResources @ 0x14098DD70 (PiQueryAndAllocateBootResources.c)
 *     PiQueryResourceRequirements @ 0x14098E5B0 (PiQueryResourceRequirements.c)
 *     PipProcessStartPhase3 @ 0x14099006C (PipProcessStartPhase3.c)
 *     PiUpdateDevicePanel @ 0x1409902C0 (PiUpdateDevicePanel.c)
 *     PnpStartedDeviceNodeDependencyCheck @ 0x1409906E4 (PnpStartedDeviceNodeDependencyCheck.c)
 *     IopInvalidateVolumesForDevice @ 0x1409A4954 (IopInvalidateVolumesForDevice.c)
 *     IoGetLegacyVetoList @ 0x1409B9120 (IoGetLegacyVetoList.c)
 *     PopFilterCapabilities @ 0x1409B923C (PopFilterCapabilities.c)
 *     SeQueryServerSiloToken @ 0x1409BA940 (SeQueryServerSiloToken.c)
 *     IopQueryInterfaceRecurseUp @ 0x1409C43A8 (IopQueryInterfaceRecurseUp.c)
 *     PnpDelayedRemoveWorker @ 0x1409C6B60 (PnpDelayedRemoveWorker.c)
 *     IoOpenDeviceRegistryKey @ 0x1409CAEC0 (IoOpenDeviceRegistryKey.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x1409D1DE0 (FsRtlAcquireFileForCcFlushEx.c)
 *     PiCreateDeviceInstanceKey @ 0x1409D4128 (PiCreateDeviceInstanceKey.c)
 *     SeGetTokenControlInformation @ 0x1409D7510 (SeGetTokenControlInformation.c)
 *     SeQuerySessionIdTokenEx @ 0x1409DF650 (SeQuerySessionIdTokenEx.c)
 *     SeQuerySecurityAttributesToken @ 0x1409ECEB0 (SeQuerySecurityAttributesToken.c)
 *     SeQuerySessionIdToken @ 0x1409FBF70 (SeQuerySessionIdToken.c)
 *     PiPnpRtlOperationListAcquireSharedLock @ 0x1409FF7F4 (PiPnpRtlOperationListAcquireSharedLock.c)
 *     PpDevNodeLockTree @ 0x140A08C10 (PpDevNodeLockTree.c)
 *     PnpGetDeviceDependencyList @ 0x140A0DA98 (PnpGetDeviceDependencyList.c)
 *     PnpProcessQueryRemoveAndEject @ 0x140A0DB78 (PnpProcessQueryRemoveAndEject.c)
 *     PnpNewDeviceNodeDependencyCheck @ 0x140A0ECA8 (PnpNewDeviceNodeDependencyCheck.c)
 *     PnpAcquireDependencyRelationsLock @ 0x140A0F188 (PnpAcquireDependencyRelationsLock.c)
 *     IopSortRelationListForRemove @ 0x140A0F630 (IopSortRelationListForRemove.c)
 *     PnpCheckForActiveDependencies @ 0x140A0F7A4 (PnpCheckForActiveDependencies.c)
 *     IopReleaseDeviceResources @ 0x140A10CF8 (IopReleaseDeviceResources.c)
 *     PnpProcessDependencyRelations @ 0x140A1123C (PnpProcessDependencyRelations.c)
 *     AlpcpCheckConnectionSecurity @ 0x140A167F4 (AlpcpCheckConnectionSecurity.c)
 *     FsRtlCopyRead @ 0x140A265F0 (FsRtlCopyRead.c)
 *     IopMountVolume @ 0x140A29164 (IopMountVolume.c)
 *     SepValidOwnerSubjectContext @ 0x140A2D638 (SepValidOwnerSubjectContext.c)
 *     SeIsTokenAssignableToProcess @ 0x140A31678 (SeIsTokenAssignableToProcess.c)
 *     PspAssignProcessQuotaBlock @ 0x140A36D98 (PspAssignProcessQuotaBlock.c)
 *     FsRtlCopyWrite @ 0x140A3A470 (FsRtlCopyWrite.c)
 *     PiQueryDeviceRelations @ 0x140A3E9EC (PiQueryDeviceRelations.c)
 *     WmipAcquireSmbiosLockShared @ 0x140A421E4 (WmipAcquireSmbiosLockShared.c)
 *     PnpDiagRundownRegisterCallback @ 0x140A43660 (PnpDiagRundownRegisterCallback.c)
 *     PipForDeviceNodeSubtree @ 0x140A438E0 (PipForDeviceNodeSubtree.c)
 *     SepGetLogonSessionAccountInfo @ 0x140A466DC (SepGetLogonSessionAccountInfo.c)
 *     PspSetProcessAffinitySafe @ 0x140A4B2A4 (PspSetProcessAffinitySafe.c)
 *     PipMakeGloballyUniqueId @ 0x140A582C0 (PipMakeGloballyUniqueId.c)
 *     IopSetDeviceSecurityDescriptor @ 0x140A5AC1C (IopSetDeviceSecurityDescriptor.c)
 *     PspValidateJobAffinityState @ 0x140A6DEAC (PspValidateJobAffinityState.c)
 *     PipGenerateContainerID @ 0x140A7063C (PipGenerateContainerID.c)
 *     PiProcessNewDeviceNode @ 0x140A7C564 (PiProcessNewDeviceNode.c)
 *     PnpSurpriseFailUnsafeDmaDevices @ 0x140A7F278 (PnpSurpriseFailUnsafeDmaDevices.c)
 *     PiQueryPowerRelations @ 0x140A8C2C8 (PiQueryPowerRelations.c)
 *     PiQueryPowerDependencyRelations @ 0x140A8C850 (PiQueryPowerDependencyRelations.c)
 *     IopWriteAllocatedResourcesToRegistry @ 0x140A8D634 (IopWriteAllocatedResourcesToRegistry.c)
 *     PnpDriverLoadingFailed @ 0x140AA1408 (PnpDriverLoadingFailed.c)
 *     IoLockUnlockPnpDeviceTree @ 0x140AA223C (IoLockUnlockPnpDeviceTree.c)
 *     SepFilterToken @ 0x140AD2664 (SepFilterToken.c)
 *     NtQueryInformationToken @ 0x140AD3370 (NtQueryInformationToken.c)
 *     NtSetInformationToken @ 0x140AD6C10 (NtSetInformationToken.c)
 *     NtCreateLowBoxToken @ 0x140AD8020 (NtCreateLowBoxToken.c)
 *     SepDeReferenceLogonSession @ 0x140AD8BA4 (SepDeReferenceLogonSession.c)
 *     CmpLockRegistry @ 0x140BB9E60 (CmpLockRegistry.c)
 *     ExpPrmInitialization @ 0x140C40D54 (ExpPrmInitialization.c)
 *     VslRegisterBootDrivers @ 0x140C6397C (VslRegisterBootDrivers.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140254AE0 (KxAcquireSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14025E408 (KiRemoveSystemWorkPriorityKick.c)
 *     KxReleaseSpinLock @ 0x140279CC0 (KxReleaseSpinLock.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x1403403E0 (ObfReferenceObjectWithTag.c)
 *     ExpAcquireFastResourceSharedSlow @ 0x140341510 (ExpAcquireFastResourceSharedSlow.c)
 *     ExpAcquireResourceSharedLite @ 0x140342300 (ExpAcquireResourceSharedLite.c)
 *     ExIsFastResourceHeldExclusive @ 0x1403436B0 (ExIsFastResourceHeldExclusive.c)
 *     ExpSaveAbHandle @ 0x140343890 (ExpSaveAbHandle.c)
 *     KeAbMarkCrossThreadReleasable @ 0x1403DD90C (KeAbMarkCrossThreadReleasable.c)
 *     ExpAddFastOwnerEntryToThreadList @ 0x14040C760 (ExpAddFastOwnerEntryToThreadList.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

BOOLEAN __stdcall ExAcquireResourceSharedLite(PERESOURCE Resource, BOOLEAN Wait)
{
  USHORT Flag; // cx
  unsigned __int8 v5; // dl
  char v7; // al
  char v8; // bp
  struct _ERESOURCE *v9; // r9
  int v10; // ecx
  unsigned __int64 v11; // r14
  __int64 v12; // rdi
  signed __int32 *v13; // r12
  _BOOL8 v14; // r8
  signed __int64 Flink; // rax
  BOOLEAN v16; // di
  __int64 Pool2; // rsi
  char v18; // r8
  struct _KTHREAD *v19; // rcx
  USHORT v20; // r9
  int v21; // r15d
  unsigned __int8 v22; // al
  unsigned __int8 v23; // dl
  struct _KTHREAD *v24; // rcx
  ULONG_PTR v25; // r9
  struct _LIST_ENTRY *v26; // rtt
  char v27; // r13
  int v28; // r15d
  int v29; // ebp
  int v30; // r13d
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v33; // eax
  signed __int32 v34; // ett
  __int64 v35; // r8
  unsigned __int8 CurrentIrql; // cl
  struct _KTHREAD *CurrentThread; // r8

  Flag = Resource->Flag;
  v5 = (Wait == 0) + 1;
  if ( (Flag & 0x41) == 1 )
    KeBugCheckEx(0x1C6u, 0xFuLL, (ULONG_PTR)Resource, 0LL, 0LL);
  if ( (Flag & 1) == 0 )
    return ExpAcquireResourceSharedLite(Resource, Wait);
  CurrentIrql = KeGetCurrentIrql();
  CurrentThread = KeGetCurrentThread();
  if ( CurrentIrql > v5 )
    KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, v5, 0LL);
  if ( CurrentIrql >= 2u && (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
LABEL_36:
    KeBugCheckEx(0x1C6u, 5uLL, 0LL, 0LL, 0LL);
  if ( (CurrentThread->ApcState.InProgressFlags & 2) != 0 )
LABEL_30:
    KeBugCheckEx(0x1C6u, 6uLL, 0LL, 0LL, 0LL);
  if ( !CurrentIrql && (CurrentThread->MiscFlags & 0x400) == 0 && !CurrentThread->WaitBlock[3].SpareLong )
    goto LABEL_34;
  do
    Pool2 = ExAllocatePool2(0x40uLL);
  while ( !Pool2 );
  *(_OWORD *)Pool2 = 0LL;
  *(_OWORD *)(Pool2 + 16) = 0LL;
  *(_QWORD *)(Pool2 + 32) = 0LL;
  v18 = 2;
  v19 = KeGetCurrentThread();
  *(_BYTE *)(Pool2 + 37) |= 1u;
  *(_QWORD *)(Pool2 + 16) = v19;
  if ( Wait )
    v18 = 10;
  v20 = Resource->Flag;
  v21 = v18 & 0x10;
  v22 = ((v18 & 8) == 0) + 1;
  if ( (v20 & 1) == 0 )
    KeBugCheckEx(0x1C6u, 3uLL, (ULONG_PTR)Resource, 0LL, 0LL);
  v23 = KeGetCurrentIrql();
  v24 = KeGetCurrentThread();
  if ( v23 > v22 )
    KeBugCheckEx(0x1C6u, 0LL, v23, v22, 0LL);
  if ( v23 >= 2u && (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
    goto LABEL_36;
  if ( (v20 & 8) == 0 && (v24->ApcState.InProgressFlags & 2) != 0 )
    goto LABEL_30;
  if ( !v23 && (v24->MiscFlags & 0x400) == 0 && !v24->WaitBlock[3].SpareLong )
LABEL_34:
    KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
  v25 = *(_QWORD *)(Pool2 + 16) & 0xFFFFFFFFFFFFFFFEuLL;
  if ( (struct _KTHREAD *)v25 != v24 )
    KeBugCheckEx(0x1C6u, 9uLL, Pool2, v25, 0LL);
  v7 = *(_BYTE *)(Pool2 + 37);
  v8 = v18;
  if ( (v7 & 2) == 0 )
  {
    v9 = *(struct _ERESOURCE **)(Pool2 + 24);
    if ( v9 )
    {
      if ( v9 != Resource )
        KeBugCheckEx(0x1C6u, 2uLL, Pool2, (ULONG_PTR)v9, 0LL);
    }
  }
  v10 = *(_DWORD *)(Pool2 + 32);
  if ( !v10 || (v7 & 4) != 0 )
  {
    v11 = (unsigned __int64)KeGetCurrentThread();
    v12 = 0LL;
    v13 = 0LL;
    v14 = (v18 & 8) == 0;
    if ( !*(_BYTE *)(Pool2 + 36) )
      v13 = (signed __int32 *)KeAbPreAcquire((__int64)Resource, 0LL);
    while ( 1 )
    {
      _m_prefetchw(Resource);
      Flink = (signed __int64)Resource->SystemResourcesList.Flink;
      if ( ((__int64)Resource->SystemResourcesList.Flink & 1) != 0 || (Flink & 2) != 0 )
        break;
      v26 = Resource->SystemResourcesList.Flink;
      if ( v26 == (struct _LIST_ENTRY *)_InterlockedCompareExchange64(
                                          (volatile signed __int64 *)Resource,
                                          Flink ^ (Flink ^ (Flink + 4)) & 0xFFFFFFFFFFFFFFFCuLL,
                                          Flink) )
      {
        v27 = 3;
        if ( v21 )
          v27 = 15;
        v28 = v27 & 2;
        v29 = v27 & 4;
        v30 = v27 & 8;
        if ( (ULONG *)Pool2 != &Resource->ActiveEntries )
          *(_QWORD *)(Pool2 + 24) = Resource;
        *(_DWORD *)(Pool2 + 32) = 1;
        LOBYTE(v14) = 1;
        LOBYTE(v12) = v29 != 0;
        *(_QWORD *)(Pool2 + 16) = v11 | v12;
        ExpSaveAbHandle(Pool2, v13, v14);
        if ( v28 )
          _disable();
        if ( v29 )
        {
          KxAcquireSpinLock((PKSPIN_LOCK)(v11 + 1736));
          LOBYTE(v35) = 1;
          ExpAddFastOwnerEntryToThreadList(v11, Resource, v35, Pool2);
          KxReleaseSpinLock((volatile signed __int64 *)(v11 + 1736));
        }
        else
        {
          ExpAddFastOwnerEntryToThreadList(v11, Resource, 0LL, Pool2);
        }
        if ( v28 )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
          if ( SchedulerAssist )
          {
            _m_prefetchw(SchedulerAssist);
            v33 = *SchedulerAssist;
            do
            {
              v34 = v33;
              v33 = _InterlockedCompareExchange(SchedulerAssist, v33 & 0xFFDFFFFF, v33);
            }
            while ( v34 != v33 );
            if ( (v33 & 0x200000) != 0 )
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
          _enable();
        }
        if ( v29 )
        {
          if ( v30 )
          {
            if ( v13 )
              KeAbMarkCrossThreadReleasable(Resource, v13);
          }
          ObfReferenceObjectWithTag((PVOID)v11, 0x746C6644u);
        }
        v16 = 1;
        goto LABEL_13;
      }
    }
    v16 = ExpAcquireFastResourceSharedSlow((struct _KPRCB *)Resource, Pool2, v13, v11, v8);
    if ( !v16 )
      goto LABEL_14;
  }
  else
  {
    v16 = 1;
    *(_DWORD *)(Pool2 + 32) = v10 + 1;
  }
LABEL_13:
  if ( (unsigned __int8)ExIsFastResourceHeldExclusive((ULONG_PTR)Resource) )
LABEL_14:
    ExFreePoolWithTag((PVOID)Pool2, 0);
  return v16;
}
