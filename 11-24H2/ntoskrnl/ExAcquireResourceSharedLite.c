/*
 * XREFs of ExAcquireResourceSharedLite @ 0x140321360
 * Callers:
 *     MiAcquireLoadLock @ 0x1402BBB18 (MiAcquireLoadLock.c)
 *     SepAcquireOrderedReadLocks @ 0x1403232E0 (SepAcquireOrderedReadLocks.c)
 *     IopCreateSecurityCheck @ 0x1403B5AE0 (IopCreateSecurityCheck.c)
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x1403B7650 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     SepFilterCheck @ 0x1403B9AB0 (SepFilterCheck.c)
 *     SepTrustLevelCheck @ 0x1403E33C0 (SepTrustLevelCheck.c)
 *     KeCapturePersistentThreadState @ 0x140420EC0 (KeCapturePersistentThreadState.c)
 *     SeAccessCheckByType @ 0x14042DC70 (SeAccessCheckByType.c)
 *     SeTokenGetNoChildProcessRestricted @ 0x140446A8C (SeTokenGetNoChildProcessRestricted.c)
 *     SepRmAcquireGlobalSaclReadLock @ 0x140458434 (SepRmAcquireGlobalSaclReadLock.c)
 *     SepGetProcUniqueLuidAndIndexFromTokenEx @ 0x140473D20 (SepGetProcUniqueLuidAndIndexFromTokenEx.c)
 *     IoCheckRedirectionTrustLevel @ 0x1404769B0 (IoCheckRedirectionTrustLevel.c)
 *     SeTokenGetRedirectionTrustPolicy @ 0x140487CC0 (SeTokenGetRedirectionTrustPolicy.c)
 *     FsRtlpDedupChangeEventsControlCallbackV2 @ 0x14057EC60 (FsRtlpDedupChangeEventsControlCallbackV2.c)
 *     FsRtlpTieringHeatEventsControlCallbackV2 @ 0x14057F170 (FsRtlpTieringHeatEventsControlCallbackV2.c)
 *     IoFillTriageDumpBuffer @ 0x14058E2EC (IoFillTriageDumpBuffer.c)
 *     SeTokenIsNoChildProcessRestrictionEnforced @ 0x1406069D8 (SeTokenIsNoChildProcessRestrictionEnforced.c)
 *     SepCreateAppContainerToken @ 0x140606A30 (SepCreateAppContainerToken.c)
 *     DifExAcquireResourceSharedLiteWrapper @ 0x14061A300 (DifExAcquireResourceSharedLiteWrapper.c)
 *     FsRtlMdlReadDev @ 0x140707E40 (FsRtlMdlReadDev.c)
 *     FsRtlPrepareMdlWriteDev @ 0x140708070 (FsRtlPrepareMdlWriteDev.c)
 *     PnpShutdownDevices @ 0x140718630 (PnpShutdownDevices.c)
 *     PsSwapProcessWorkingSet @ 0x140774844 (PsSwapProcessWorkingSet.c)
 *     SeSetSessionIdTokenWithLinked @ 0x14078F8C0 (SeSetSessionIdTokenWithLinked.c)
 *     SepIdAssignableAsGroup @ 0x1407924C0 (SepIdAssignableAsGroup.c)
 *     NtMapCMFModule @ 0x1407C42B0 (NtMapCMFModule.c)
 *     ObpCreateHandle @ 0x140849D60 (ObpCreateHandle.c)
 *     ObpGrantAccess @ 0x14084D650 (ObpGrantAccess.c)
 *     CmpCheckKeyBodyAccess @ 0x14084DE00 (CmpCheckKeyBodyAccess.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x14084E400 (CmpCheckOpenAccessOnKeyBody.c)
 *     SepDuplicateToken @ 0x1408527E0 (SepDuplicateToken.c)
 *     RtlpSetSecurityObject @ 0x140855250 (RtlpSetSecurityObject.c)
 *     ExpGetSystemFirmwareTableInformation @ 0x1408590B8 (ExpGetSystemFirmwareTableInformation.c)
 *     PspQueryJobHierarchyAccountingInformation @ 0x14085CE84 (PspQueryJobHierarchyAccountingInformation.c)
 *     PspLockRootJobShared @ 0x14085D1C0 (PspLockRootJobShared.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x14085D4DC (PspEnumJobsAndProcessesInJobHierarchy.c)
 *     PspGetNextChildJob @ 0x14085D730 (PspGetNextChildJob.c)
 *     PspEnforceLimitsJobPostCallback @ 0x14085E4B0 (PspEnforceLimitsJobPostCallback.c)
 *     PspLockJobShared @ 0x14085EE04 (PspLockJobShared.c)
 *     SeLockSubjectContext @ 0x14086C760 (SeLockSubjectContext.c)
 *     IopGetSetSecurityObject @ 0x14087DA20 (IopGetSetSecurityObject.c)
 *     ObCheckObjectAccess @ 0x14087E5F0 (ObCheckObjectAccess.c)
 *     NtQuerySecurityAttributesToken @ 0x14088CC70 (NtQuerySecurityAttributesToken.c)
 *     AlpcpQuerySidToken @ 0x140892064 (AlpcpQuerySidToken.c)
 *     AlpcpExposeTokenAttribute @ 0x1408A0FD0 (AlpcpExposeTokenAttribute.c)
 *     IopParseDevice @ 0x1408A7F20 (IopParseDevice.c)
 *     IopInvalidateVolumesForDevice @ 0x1408AEAB4 (IopInvalidateVolumesForDevice.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x1408B237C (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiDmObjectManagerAcquireSharedLock @ 0x1408B2B9C (PiDmObjectManagerAcquireSharedLock.c)
 *     PipProcessDevNodeTree @ 0x1408B7FE0 (PipProcessDevNodeTree.c)
 *     PpHotSwapGetDevnodeRemovalPolicy @ 0x1408B93F0 (PpHotSwapGetDevnodeRemovalPolicy.c)
 *     PiGetDeviceDepth @ 0x1408B9C2C (PiGetDeviceDepth.c)
 *     PiControlGetPropertyData @ 0x1408BAE00 (PiControlGetPropertyData.c)
 *     PiCMValidateDeviceInstance @ 0x1408BBC4C (PiCMValidateDeviceInstance.c)
 *     PiGetRelatedDevice @ 0x1408BC818 (PiGetRelatedDevice.c)
 *     PiDmGetObject @ 0x1408C95A0 (PiDmGetObject.c)
 *     PiPnpRtlGetCurrentOperation @ 0x1408C9AD0 (PiPnpRtlGetCurrentOperation.c)
 *     PiPnpRtlCacheObjectBaseKey @ 0x1408C9D00 (PiPnpRtlCacheObjectBaseKey.c)
 *     PiPnpRtlDisableRemoveOperationDispatch @ 0x1408CA11C (PiPnpRtlDisableRemoveOperationDispatch.c)
 *     PiPnpRtlObjectActionCallback @ 0x1408CC090 (PiPnpRtlObjectActionCallback.c)
 *     PiControlGetDeviceInterfaceEnabled @ 0x1408CD650 (PiControlGetDeviceInterfaceEnabled.c)
 *     PiDmObjectGetCachedObjectProperty @ 0x1408CDD40 (PiDmObjectGetCachedObjectProperty.c)
 *     PiDmEnumObjectsWithCallback @ 0x1408CE800 (PiDmEnumObjectsWithCallback.c)
 *     IopDeviceInterfaceFilterCallback @ 0x1408CEB60 (IopDeviceInterfaceFilterCallback.c)
 *     PiPnpRtlApplyMandatoryFilters @ 0x1408CF3D0 (PiPnpRtlApplyMandatoryFilters.c)
 *     PiPnpRtlApplyMandatoryDeviceFilters @ 0x1408CF5E0 (PiPnpRtlApplyMandatoryDeviceFilters.c)
 *     PiCMMandatoryFilterCallback @ 0x1408CFBE0 (PiCMMandatoryFilterCallback.c)
 *     PiUEventApplyAdditionalFilters @ 0x1408CFF90 (PiUEventApplyAdditionalFilters.c)
 *     SeQueryUserSidToken @ 0x1408E1C90 (SeQueryUserSidToken.c)
 *     SeQueryInformationToken @ 0x1408E4F90 (SeQueryInformationToken.c)
 *     NtDuplicateToken @ 0x1408E67E0 (NtDuplicateToken.c)
 *     NtSetInformationThread @ 0x1408E8B60 (NtSetInformationThread.c)
 *     PspSetProcessPriorityClass @ 0x1408EB3D4 (PspSetProcessPriorityClass.c)
 *     EtwQueryProcessTelemetryInfo @ 0x1408EF7A4 (EtwQueryProcessTelemetryInfo.c)
 *     PspInsertThread @ 0x1408FBFD4 (PspInsertThread.c)
 *     RtlpNewSecurityObject @ 0x14090DD00 (RtlpNewSecurityObject.c)
 *     PiQueryAndAllocateBootResources @ 0x140978DA8 (PiQueryAndAllocateBootResources.c)
 *     PiQueryResourceRequirements @ 0x1409795E8 (PiQueryResourceRequirements.c)
 *     PipProcessStartPhase3 @ 0x14097B0A4 (PipProcessStartPhase3.c)
 *     PiUpdateDevicePanel @ 0x14097B2F8 (PiUpdateDevicePanel.c)
 *     PnpStartedDeviceNodeDependencyCheck @ 0x14097B724 (PnpStartedDeviceNodeDependencyCheck.c)
 *     IopQueryInterfaceRecurseUp @ 0x14098215C (IopQueryInterfaceRecurseUp.c)
 *     SepFilterToken @ 0x140985C1C (SepFilterToken.c)
 *     EtwpGetSidExtendedHeaderItem @ 0x14098FEE0 (EtwpGetSidExtendedHeaderItem.c)
 *     IoGetLegacyVetoList @ 0x14099F770 (IoGetLegacyVetoList.c)
 *     PopFilterCapabilities @ 0x14099F88C (PopFilterCapabilities.c)
 *     SeQueryServerSiloToken @ 0x1409A0F90 (SeQueryServerSiloToken.c)
 *     PspChargeJobWakeCounter @ 0x1409AECC0 (PspChargeJobWakeCounter.c)
 *     IoOpenDeviceRegistryKey @ 0x1409B6100 (IoOpenDeviceRegistryKey.c)
 *     PnpDelayedRemoveWorker @ 0x1409BABD0 (PnpDelayedRemoveWorker.c)
 *     PnpGetDeviceDependencyList @ 0x1409BBE9C (PnpGetDeviceDependencyList.c)
 *     PnpProcessQueryRemoveAndEject @ 0x1409BBF7C (PnpProcessQueryRemoveAndEject.c)
 *     PnpNewDeviceNodeDependencyCheck @ 0x1409BD0AC (PnpNewDeviceNodeDependencyCheck.c)
 *     PnpAcquireDependencyRelationsLock @ 0x1409BD598 (PnpAcquireDependencyRelationsLock.c)
 *     IopSortRelationListForRemove @ 0x1409BDA40 (IopSortRelationListForRemove.c)
 *     PnpCheckForActiveDependencies @ 0x1409BDBB4 (PnpCheckForActiveDependencies.c)
 *     IopReleaseDeviceResources @ 0x1409BF108 (IopReleaseDeviceResources.c)
 *     PnpProcessDependencyRelations @ 0x1409BF64C (PnpProcessDependencyRelations.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x1409C1C10 (FsRtlAcquireFileForCcFlushEx.c)
 *     PiCreateDeviceInstanceKey @ 0x1409C3F58 (PiCreateDeviceInstanceKey.c)
 *     SeGetTokenControlInformation @ 0x1409CF560 (SeGetTokenControlInformation.c)
 *     SeQuerySessionIdTokenEx @ 0x1409D9400 (SeQuerySessionIdTokenEx.c)
 *     SeQuerySecurityAttributesToken @ 0x1409E61E0 (SeQuerySecurityAttributesToken.c)
 *     SeQuerySessionIdToken @ 0x1409F4CB0 (SeQuerySessionIdToken.c)
 *     PiPnpRtlOperationListAcquireSharedLock @ 0x1409F873C (PiPnpRtlOperationListAcquireSharedLock.c)
 *     PpDevNodeLockTree @ 0x140A05140 (PpDevNodeLockTree.c)
 *     SepAccessCheckAndAuditAlarm @ 0x140A07A00 (SepAccessCheckAndAuditAlarm.c)
 *     AlpcpCheckConnectionSecurity @ 0x140A0F9D4 (AlpcpCheckConnectionSecurity.c)
 *     FsRtlCopyRead @ 0x140A1B070 (FsRtlCopyRead.c)
 *     IopMountVolume @ 0x140A1DB24 (IopMountVolume.c)
 *     SepValidOwnerSubjectContext @ 0x140A22078 (SepValidOwnerSubjectContext.c)
 *     SeIsTokenAssignableToProcess @ 0x140A255F4 (SeIsTokenAssignableToProcess.c)
 *     PspAssignProcessQuotaBlock @ 0x140A2BBE8 (PspAssignProcessQuotaBlock.c)
 *     FsRtlCopyWrite @ 0x140A2FA90 (FsRtlCopyWrite.c)
 *     PiQueryDeviceRelations @ 0x140A3435C (PiQueryDeviceRelations.c)
 *     WmipAcquireSmbiosLockShared @ 0x140A37AC4 (WmipAcquireSmbiosLockShared.c)
 *     PnpDiagRundownRegisterCallback @ 0x140A38EF0 (PnpDiagRundownRegisterCallback.c)
 *     PipForDeviceNodeSubtree @ 0x140A39170 (PipForDeviceNodeSubtree.c)
 *     SepGetLogonSessionAccountInfo @ 0x140A3C49C (SepGetLogonSessionAccountInfo.c)
 *     PspSetProcessAffinitySafe @ 0x140A42004 (PspSetProcessAffinitySafe.c)
 *     PipMakeGloballyUniqueId @ 0x140A4FA70 (PipMakeGloballyUniqueId.c)
 *     IopSetDeviceSecurityDescriptor @ 0x140A524DC (IopSetDeviceSecurityDescriptor.c)
 *     PspValidateJobAffinityState @ 0x140A673AC (PspValidateJobAffinityState.c)
 *     PipGenerateContainerID @ 0x140A69ACC (PipGenerateContainerID.c)
 *     PiProcessNewDeviceNode @ 0x140A76864 (PiProcessNewDeviceNode.c)
 *     PnpSurpriseFailUnsafeDmaDevices @ 0x140A78A28 (PnpSurpriseFailUnsafeDmaDevices.c)
 *     PiQueryPowerRelations @ 0x140A887F8 (PiQueryPowerRelations.c)
 *     PiQueryPowerDependencyRelations @ 0x140A88D80 (PiQueryPowerDependencyRelations.c)
 *     IopWriteAllocatedResourcesToRegistry @ 0x140A89C08 (IopWriteAllocatedResourcesToRegistry.c)
 *     PnpDriverLoadingFailed @ 0x140A9C798 (PnpDriverLoadingFailed.c)
 *     IoLockUnlockPnpDeviceTree @ 0x140A9D5CC (IoLockUnlockPnpDeviceTree.c)
 *     NtQueryInformationToken @ 0x140AD09E0 (NtQueryInformationToken.c)
 *     NtSetInformationToken @ 0x140AD4280 (NtSetInformationToken.c)
 *     NtCreateLowBoxToken @ 0x140AD5A60 (NtCreateLowBoxToken.c)
 *     SepDeReferenceLogonSession @ 0x140AD7224 (SepDeReferenceLogonSession.c)
 *     CmpLockRegistry @ 0x140BBBE60 (CmpLockRegistry.c)
 *     ExpPrmInitialization @ 0x140C42EA4 (ExpPrmInitialization.c)
 *     VslRegisterBootDrivers @ 0x140C65AF8 (VslRegisterBootDrivers.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14022F250 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1402850F0 (KxAcquireSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028EA18 (KiRemoveSystemWorkPriorityKick.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x14031F8C0 (ObfReferenceObjectWithTag.c)
 *     ExpAcquireFastResourceSharedSlow @ 0x1403209F0 (ExpAcquireFastResourceSharedSlow.c)
 *     ExpAcquireResourceSharedLite @ 0x1403217E0 (ExpAcquireResourceSharedLite.c)
 *     ExIsFastResourceHeldExclusive @ 0x140322B90 (ExIsFastResourceHeldExclusive.c)
 *     ExpSaveAbHandle @ 0x140322D70 (ExpSaveAbHandle.c)
 *     KeAbMarkCrossThreadReleasable @ 0x1403BD5FC (KeAbMarkCrossThreadReleasable.c)
 *     ExpAddFastOwnerEntryToThreadList @ 0x140404DF0 (ExpAddFastOwnerEntryToThreadList.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

BOOLEAN __stdcall ExAcquireResourceSharedLite(PERESOURCE Resource, BOOLEAN Wait)
{
  USHORT Flag; // cx
  unsigned __int8 v5; // dl
  char v7; // al
  unsigned int v8; // ebp
  struct _ERESOURCE *v9; // r9
  int v10; // ecx
  unsigned __int64 v11; // r14
  __int64 v12; // rdi
  signed __int32 *v13; // r12
  _BOOL8 v14; // r8
  signed __int64 Flink; // rax
  BOOLEAN v16; // di
  __int64 Pool2; // rsi
  int v18; // r8d
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
    Pool2 = ExAllocatePool2(0x40uLL, 0x28uLL, 0x454F5246u);
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
