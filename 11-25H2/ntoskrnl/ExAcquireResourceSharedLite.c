/*
 * XREFs of ExAcquireResourceSharedLite @ 0x140295130
 * Callers:
 *     SepRmAcquireGlobalSaclReadLock @ 0x1402053DC (SepRmAcquireGlobalSaclReadLock.c)
 *     SeTokenGetNoChildProcessRestricted @ 0x140206E6C (SeTokenGetNoChildProcessRestricted.c)
 *     SepAcquireOrderedReadLocks @ 0x140293230 (SepAcquireOrderedReadLocks.c)
 *     KeCapturePersistentThreadState @ 0x1402AA100 (KeCapturePersistentThreadState.c)
 *     SepTrustLevelCheck @ 0x14035FC50 (SepTrustLevelCheck.c)
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x14035FF40 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     SepFilterCheck @ 0x140363580 (SepFilterCheck.c)
 *     SeAccessCheckByType @ 0x140363B20 (SeAccessCheckByType.c)
 *     SepCanTokenMatchAllPackageSid @ 0x1403678D0 (SepCanTokenMatchAllPackageSid.c)
 *     MiAcquireLoadLock @ 0x14036DF38 (MiAcquireLoadLock.c)
 *     IopCreateSecurityCheck @ 0x14046F3F0 (IopCreateSecurityCheck.c)
 *     SepGetProcUniqueLuidAndIndexFromTokenEx @ 0x140477B20 (SepGetProcUniqueLuidAndIndexFromTokenEx.c)
 *     IoCheckRedirectionTrustLevel @ 0x14047A880 (IoCheckRedirectionTrustLevel.c)
 *     SeTokenGetRedirectionTrustPolicy @ 0x14048DA00 (SeTokenGetRedirectionTrustPolicy.c)
 *     FsRtlpDedupChangeEventsControlCallbackV2 @ 0x14057E130 (FsRtlpDedupChangeEventsControlCallbackV2.c)
 *     FsRtlpTieringHeatEventsControlCallbackV2 @ 0x14057E640 (FsRtlpTieringHeatEventsControlCallbackV2.c)
 *     IoFillTriageDumpBuffer @ 0x14058DA9C (IoFillTriageDumpBuffer.c)
 *     SeTokenIsNoChildProcessRestrictionEnforced @ 0x1405FCC88 (SeTokenIsNoChildProcessRestrictionEnforced.c)
 *     DifExAcquireResourceSharedLiteWrapper @ 0x14060FD80 (DifExAcquireResourceSharedLiteWrapper.c)
 *     FsRtlMdlReadDev @ 0x1406FE3A0 (FsRtlMdlReadDev.c)
 *     FsRtlPrepareMdlWriteDev @ 0x1406FE5D0 (FsRtlPrepareMdlWriteDev.c)
 *     PnpShutdownDevices @ 0x14070E9A0 (PnpShutdownDevices.c)
 *     PsSwapProcessWorkingSet @ 0x140764C54 (PsSwapProcessWorkingSet.c)
 *     SeSetSessionIdTokenWithLinked @ 0x140780630 (SeSetSessionIdTokenWithLinked.c)
 *     SepIdAssignableAsGroup @ 0x140783230 (SepIdAssignableAsGroup.c)
 *     NtMapCMFModule @ 0x1407B4B70 (NtMapCMFModule.c)
 *     PiProcessNewDeviceNode @ 0x14082CE68 (PiProcessNewDeviceNode.c)
 *     PnpDelayedRemoveWorker @ 0x14082EE10 (PnpDelayedRemoveWorker.c)
 *     PnpProcessDependencyRelations @ 0x14082F9A8 (PnpProcessDependencyRelations.c)
 *     PnpProcessQueryRemoveAndEject @ 0x14082FB18 (PnpProcessQueryRemoveAndEject.c)
 *     PnpNewDeviceNodeDependencyCheck @ 0x140830FBC (PnpNewDeviceNodeDependencyCheck.c)
 *     PiQueryAndAllocateBootResources @ 0x140831F94 (PiQueryAndAllocateBootResources.c)
 *     PnpStartedDeviceNodeDependencyCheck @ 0x14083216C (PnpStartedDeviceNodeDependencyCheck.c)
 *     IopSortRelationListForRemove @ 0x140832318 (IopSortRelationListForRemove.c)
 *     PnpCheckForActiveDependencies @ 0x14083248C (PnpCheckForActiveDependencies.c)
 *     PnpAcquireDependencyRelationsLock @ 0x1408325D8 (PnpAcquireDependencyRelationsLock.c)
 *     PipProcessStartPhase3 @ 0x1408333C4 (PipProcessStartPhase3.c)
 *     PiUpdateDevicePanel @ 0x140833618 (PiUpdateDevicePanel.c)
 *     PiControlGetPropertyData @ 0x140834060 (PiControlGetPropertyData.c)
 *     PpHotSwapGetDevnodeRemovalPolicy @ 0x140834EE0 (PpHotSwapGetDevnodeRemovalPolicy.c)
 *     PipProcessDevNodeTree @ 0x1408355F8 (PipProcessDevNodeTree.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x140839434 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     SeQueryUserSidToken @ 0x14083E7E0 (SeQueryUserSidToken.c)
 *     SeQueryInformationToken @ 0x1408418A0 (SeQueryInformationToken.c)
 *     ObpCreateHandle @ 0x1408518D0 (ObpCreateHandle.c)
 *     ObpGrantAccess @ 0x1408551F0 (ObpGrantAccess.c)
 *     CmpCheckKeyBodyAccess @ 0x1408559A0 (CmpCheckKeyBodyAccess.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x140855F70 (CmpCheckOpenAccessOnKeyBody.c)
 *     IopParseDevice @ 0x14085F1F0 (IopParseDevice.c)
 *     NtQuerySecurityAttributesToken @ 0x140867840 (NtQuerySecurityAttributesToken.c)
 *     ObCheckObjectAccess @ 0x14086E090 (ObCheckObjectAccess.c)
 *     IopGetSetSecurityObject @ 0x14086F330 (IopGetSetSecurityObject.c)
 *     SepDuplicateToken @ 0x1408A2910 (SepDuplicateToken.c)
 *     NtDuplicateToken @ 0x1408A3EE0 (NtDuplicateToken.c)
 *     AlpcpExposeTokenAttribute @ 0x1408A82D0 (AlpcpExposeTokenAttribute.c)
 *     PspChargeJobWakeCounter @ 0x1408B3740 (PspChargeJobWakeCounter.c)
 *     NtSetInformationThread @ 0x1408B7970 (NtSetInformationThread.c)
 *     PspSetProcessPriorityClass @ 0x1408BA140 (PspSetProcessPriorityClass.c)
 *     EtwQueryProcessTelemetryInfo @ 0x1408BE0D4 (EtwQueryProcessTelemetryInfo.c)
 *     PiPnpRtlObjectActionCallback @ 0x1408CBF70 (PiPnpRtlObjectActionCallback.c)
 *     PiDmEnumObjectsWithCallback @ 0x1408CCFCC (PiDmEnumObjectsWithCallback.c)
 *     PiControlGetDeviceInterfaceEnabled @ 0x1408CD7B0 (PiControlGetDeviceInterfaceEnabled.c)
 *     PiDmObjectGetCachedObjectProperty @ 0x1408CDEA0 (PiDmObjectGetCachedObjectProperty.c)
 *     IopDeviceInterfaceFilterCallback @ 0x1408CEAE0 (IopDeviceInterfaceFilterCallback.c)
 *     PiPnpRtlApplyMandatoryFilters @ 0x1408CF3B0 (PiPnpRtlApplyMandatoryFilters.c)
 *     PiPnpRtlApplyMandatoryDeviceFilters @ 0x1408CF5C0 (PiPnpRtlApplyMandatoryDeviceFilters.c)
 *     PiCMMandatoryFilterCallback @ 0x1408CFBC0 (PiCMMandatoryFilterCallback.c)
 *     PiUEventApplyAdditionalFilters @ 0x1408CFF70 (PiUEventApplyAdditionalFilters.c)
 *     PiPnpRtlGetCurrentOperation @ 0x1408D0940 (PiPnpRtlGetCurrentOperation.c)
 *     PiPnpRtlCacheObjectBaseKey @ 0x1408D0B70 (PiPnpRtlCacheObjectBaseKey.c)
 *     PiPnpRtlDisableRemoveOperationDispatch @ 0x1408D0F84 (PiPnpRtlDisableRemoveOperationDispatch.c)
 *     PiDmGetObject @ 0x1408D1680 (PiDmGetObject.c)
 *     PspQueryJobHierarchyAccountingInformation @ 0x1408DC284 (PspQueryJobHierarchyAccountingInformation.c)
 *     PspLockRootJobShared @ 0x1408DC5C0 (PspLockRootJobShared.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x1408DC8DC (PspEnumJobsAndProcessesInJobHierarchy.c)
 *     PspGetNextChildJob @ 0x1408DCB30 (PspGetNextChildJob.c)
 *     PspEnforceLimitsJobPostCallback @ 0x1408DD910 (PspEnforceLimitsJobPostCallback.c)
 *     PspLockJobShared @ 0x1408DE264 (PspLockJobShared.c)
 *     PspInsertThread @ 0x1408F1D7C (PspInsertThread.c)
 *     SeLockSubjectContext @ 0x1409163C0 (SeLockSubjectContext.c)
 *     RtlpSetSecurityObject @ 0x14091A030 (RtlpSetSecurityObject.c)
 *     SepValidOwnerSubjectContext @ 0x14091C194 (SepValidOwnerSubjectContext.c)
 *     EtwpGetSidExtendedHeaderItem @ 0x140925E00 (EtwpGetSidExtendedHeaderItem.c)
 *     RtlpNewSecurityObject @ 0x140927AA0 (RtlpNewSecurityObject.c)
 *     SepAccessCheckAndAuditAlarm @ 0x14092B360 (SepAccessCheckAndAuditAlarm.c)
 *     PiCMValidateDeviceInstance @ 0x140933E98 (PiCMValidateDeviceInstance.c)
 *     PiGetRelatedDevice @ 0x1409349F8 (PiGetRelatedDevice.c)
 *     PiDmObjectManagerAcquireSharedLock @ 0x140968D50 (PiDmObjectManagerAcquireSharedLock.c)
 *     ExpGetSystemFirmwareTableInformation @ 0x1409699F8 (ExpGetSystemFirmwareTableInformation.c)
 *     SepFilterToken @ 0x140997EFC (SepFilterToken.c)
 *     IopInvalidateVolumesForDevice @ 0x1409A05FC (IopInvalidateVolumesForDevice.c)
 *     IopReleaseDeviceResources @ 0x1409A0C90 (IopReleaseDeviceResources.c)
 *     SepDeReferenceLogonSession @ 0x1409A78B8 (SepDeReferenceLogonSession.c)
 *     IoOpenDeviceRegistryKey @ 0x1409B2B40 (IoOpenDeviceRegistryKey.c)
 *     SeQueryServerSiloToken @ 0x1409BB180 (SeQueryServerSiloToken.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x1409CEE20 (FsRtlAcquireFileForCcFlushEx.c)
 *     SeGetTokenControlInformation @ 0x1409D8610 (SeGetTokenControlInformation.c)
 *     SeQuerySessionIdTokenEx @ 0x1409E0750 (SeQuerySessionIdTokenEx.c)
 *     SeQuerySecurityAttributesToken @ 0x1409F23F0 (SeQuerySecurityAttributesToken.c)
 *     SeQuerySessionIdToken @ 0x1409FF180 (SeQuerySessionIdToken.c)
 *     PiPnpRtlOperationListAcquireSharedLock @ 0x140A01294 (PiPnpRtlOperationListAcquireSharedLock.c)
 *     PpDevNodeLockTree @ 0x140A060F0 (PpDevNodeLockTree.c)
 *     AlpcpQuerySidToken @ 0x140A0A644 (AlpcpQuerySidToken.c)
 *     AlpcpCheckConnectionSecurity @ 0x140A0F5F0 (AlpcpCheckConnectionSecurity.c)
 *     IoGetLegacyVetoList @ 0x140A10B20 (IoGetLegacyVetoList.c)
 *     PopFilterCapabilities @ 0x140A10C3C (PopFilterCapabilities.c)
 *     FsRtlCopyRead @ 0x140A1D340 (FsRtlCopyRead.c)
 *     IopMountVolume @ 0x140A1F624 (IopMountVolume.c)
 *     SeIsTokenAssignableToProcess @ 0x140A2AC34 (SeIsTokenAssignableToProcess.c)
 *     PspAssignProcessQuotaBlock @ 0x140A30EE8 (PspAssignProcessQuotaBlock.c)
 *     FsRtlCopyWrite @ 0x140A34DE0 (FsRtlCopyWrite.c)
 *     PiQueryDeviceRelations @ 0x140A3A63C (PiQueryDeviceRelations.c)
 *     WmipAcquireSmbiosLockShared @ 0x140A3D324 (WmipAcquireSmbiosLockShared.c)
 *     PnpDiagRundownRegisterCallback @ 0x140A3E170 (PnpDiagRundownRegisterCallback.c)
 *     PipForDeviceNodeSubtree @ 0x140A3E3F0 (PipForDeviceNodeSubtree.c)
 *     PiGetDeviceDepth @ 0x140A46520 (PiGetDeviceDepth.c)
 *     SepGetLogonSessionAccountInfo @ 0x140A4671C (SepGetLogonSessionAccountInfo.c)
 *     PspSetProcessAffinitySafe @ 0x140A48864 (PspSetProcessAffinitySafe.c)
 *     PipMakeGloballyUniqueId @ 0x140A5491C (PipMakeGloballyUniqueId.c)
 *     IopSetDeviceSecurityDescriptor @ 0x140A573D4 (IopSetDeviceSecurityDescriptor.c)
 *     PiQueryResourceRequirements @ 0x140A64274 (PiQueryResourceRequirements.c)
 *     PspValidateJobAffinityState @ 0x140A6C688 (PspValidateJobAffinityState.c)
 *     PipGenerateContainerID @ 0x140A6E420 (PipGenerateContainerID.c)
 *     PnpGetDeviceDependencyList @ 0x140A7A000 (PnpGetDeviceDependencyList.c)
 *     PnpSurpriseFailUnsafeDmaDevices @ 0x140A7BD60 (PnpSurpriseFailUnsafeDmaDevices.c)
 *     PiQueryPowerRelations @ 0x140A872C8 (PiQueryPowerRelations.c)
 *     PiQueryPowerDependencyRelations @ 0x140A87850 (PiQueryPowerDependencyRelations.c)
 *     IopWriteAllocatedResourcesToRegistry @ 0x140A886D8 (IopWriteAllocatedResourcesToRegistry.c)
 *     IopQueryInterfaceRecurseUp @ 0x140A95844 (IopQueryInterfaceRecurseUp.c)
 *     PnpDriverLoadingFailed @ 0x140A9BB78 (PnpDriverLoadingFailed.c)
 *     IoLockUnlockPnpDeviceTree @ 0x140A9C8DC (IoLockUnlockPnpDeviceTree.c)
 *     NtQueryInformationToken @ 0x140AC8E20 (NtQueryInformationToken.c)
 *     NtSetInformationToken @ 0x140ACC810 (NtSetInformationToken.c)
 *     CmpLockRegistry @ 0x140BA9570 (CmpLockRegistry.c)
 *     ExpPrmInitialization @ 0x140C2FA44 (ExpPrmInitialization.c)
 *     VslRegisterBootDrivers @ 0x140C52668 (VslRegisterBootDrivers.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140253560 (KxAcquireSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028BBC0 (KiRemoveSystemWorkPriorityKick.c)
 *     KeAbMarkCrossThreadReleasable @ 0x140292FF0 (KeAbMarkCrossThreadReleasable.c)
 *     ExpAddFastOwnerEntryToThreadList @ 0x140293050 (ExpAddFastOwnerEntryToThreadList.c)
 *     ExpSaveAbHandle @ 0x140294300 (ExpSaveAbHandle.c)
 *     ExIsFastResourceHeldExclusive @ 0x1402944B0 (ExIsFastResourceHeldExclusive.c)
 *     ExpAcquireFastResourceSharedSlow @ 0x140294850 (ExpAcquireFastResourceSharedSlow.c)
 *     ExpAcquireResourceSharedLite @ 0x1402955C0 (ExpAcquireResourceSharedLite.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x14029B2A0 (ObfReferenceObjectWithTag.c)
 *     KxReleaseSpinLock @ 0x14034A6E0 (KxReleaseSpinLock.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

BOOLEAN __stdcall ExAcquireResourceSharedLite(PERESOURCE Resource, BOOLEAN Wait)
{
  USHORT Flag; // cx
  unsigned __int8 v5; // dl
  char v7; // al
  char v8; // bp
  struct _ERESOURCE *v9; // r9
  int v10; // ecx
  __int64 v11; // r14
  __int64 v12; // rdi
  __int64 *v13; // r12
  signed __int64 Flink; // rax
  BOOLEAN v15; // di
  __int64 Pool2; // rsi
  char v17; // r8
  struct _KTHREAD *v18; // rcx
  USHORT v19; // r9
  int v20; // r15d
  unsigned __int8 v21; // al
  unsigned __int8 v22; // dl
  struct _KTHREAD *v23; // rcx
  ULONG_PTR v24; // r9
  struct _LIST_ENTRY *v25; // rtt
  char v26; // r13
  int v27; // r15d
  int v28; // ebp
  int v29; // r13d
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v32; // eax
  signed __int32 v33; // ett
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
LABEL_38:
    KeBugCheckEx(0x1C6u, 5uLL, 0LL, 0LL, 0LL);
  if ( (CurrentThread->ApcState.InProgressFlags & 2) != 0 )
LABEL_29:
    KeBugCheckEx(0x1C6u, 6uLL, 0LL, 0LL, 0LL);
  if ( !CurrentIrql && (CurrentThread->MiscFlags & 0x400) == 0 && !CurrentThread->WaitBlock[3].SpareLong )
    goto LABEL_34;
  do
    Pool2 = ExAllocatePool2(0x40uLL);
  while ( !Pool2 );
  *(_OWORD *)Pool2 = 0LL;
  *(_OWORD *)(Pool2 + 16) = 0LL;
  *(_QWORD *)(Pool2 + 32) = 0LL;
  v17 = 2;
  v18 = KeGetCurrentThread();
  *(_BYTE *)(Pool2 + 37) |= 1u;
  *(_QWORD *)(Pool2 + 16) = v18;
  if ( Wait )
    v17 = 10;
  v19 = Resource->Flag;
  v20 = v17 & 0x10;
  v21 = ((v17 & 8) == 0) + 1;
  if ( (v19 & 1) == 0 )
    KeBugCheckEx(0x1C6u, 3uLL, (ULONG_PTR)Resource, 0LL, 0LL);
  v22 = KeGetCurrentIrql();
  v23 = KeGetCurrentThread();
  if ( v22 > v21 )
    KeBugCheckEx(0x1C6u, 0LL, v22, v21, 0LL);
  if ( v22 >= 2u && (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
    goto LABEL_38;
  if ( (v19 & 8) == 0 && (v23->ApcState.InProgressFlags & 2) != 0 )
    goto LABEL_29;
  if ( !v22 && (v23->MiscFlags & 0x400) == 0 && !v23->WaitBlock[3].SpareLong )
LABEL_34:
    KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
  v24 = *(_QWORD *)(Pool2 + 16) & 0xFFFFFFFFFFFFFFFEuLL;
  if ( (struct _KTHREAD *)v24 != v23 )
    KeBugCheckEx(0x1C6u, 9uLL, Pool2, v24, 0LL);
  v7 = *(_BYTE *)(Pool2 + 37);
  v8 = v17;
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
    v11 = (__int64)KeGetCurrentThread();
    v12 = 0LL;
    v13 = 0LL;
    if ( !*(_BYTE *)(Pool2 + 36) )
      v13 = (__int64 *)KeAbPreAcquire(Resource, 0LL, (v17 & 8) == 0);
    while ( 1 )
    {
      _m_prefetchw(Resource);
      Flink = (signed __int64)Resource->SystemResourcesList.Flink;
      if ( ((__int64)Resource->SystemResourcesList.Flink & 1) != 0 || (Flink & 2) != 0 )
        break;
      v25 = Resource->SystemResourcesList.Flink;
      if ( v25 == (struct _LIST_ENTRY *)_InterlockedCompareExchange64(
                                          (volatile signed __int64 *)Resource,
                                          Flink ^ (Flink ^ (Flink + 4)) & 0xFFFFFFFFFFFFFFFCuLL,
                                          Flink) )
      {
        v26 = 3;
        if ( v20 )
          v26 = 15;
        v27 = v26 & 2;
        v28 = v26 & 4;
        v29 = v26 & 8;
        if ( (ULONG *)Pool2 != &Resource->ActiveEntries )
          *(_QWORD *)(Pool2 + 24) = Resource;
        *(_DWORD *)(Pool2 + 32) = 1;
        LOBYTE(v12) = v28 != 0;
        *(_QWORD *)(Pool2 + 16) = v11 | v12;
        ExpSaveAbHandle(Pool2, (__int64)v13, 1);
        if ( v27 )
          _disable();
        if ( v28 )
        {
          KxAcquireSpinLock((PKSPIN_LOCK)(v11 + 1736));
          ExpAddFastOwnerEntryToThreadList(v11, (__int64)Resource, 1, (_QWORD *)Pool2);
          KxReleaseSpinLock(v11 + 1736);
        }
        else
        {
          ExpAddFastOwnerEntryToThreadList(v11, (__int64)Resource, 0, (_QWORD *)Pool2);
        }
        if ( v27 )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
          if ( SchedulerAssist )
          {
            _m_prefetchw(SchedulerAssist);
            v32 = *SchedulerAssist;
            do
            {
              v33 = v32;
              v32 = _InterlockedCompareExchange(SchedulerAssist, v32 & 0xFFDFFFFF, v32);
            }
            while ( v33 != v32 );
            if ( (v32 & 0x200000) != 0 )
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
          _enable();
        }
        if ( v28 )
        {
          if ( v29 )
          {
            if ( v13 )
              KeAbMarkCrossThreadReleasable((__int64)Resource, v13);
          }
          ObfReferenceObjectWithTag((PVOID)v11, 0x746C6644u);
        }
        v15 = 1;
        goto LABEL_13;
      }
    }
    v15 = ExpAcquireFastResourceSharedSlow((struct _KPRCB *)Resource, Pool2, (signed __int32 *)v13, (_QWORD *)v11, v8);
    if ( !v15 )
      goto LABEL_14;
  }
  else
  {
    v15 = 1;
    *(_DWORD *)(Pool2 + 32) = v10 + 1;
  }
LABEL_13:
  if ( ExIsFastResourceHeldExclusive((ULONG_PTR)Resource) )
LABEL_14:
    ExFreePoolWithTag((PVOID)Pool2, 0);
  return v15;
}
