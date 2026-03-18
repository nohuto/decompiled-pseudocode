/*
 * XREFs of KeResetEvent @ 0x14028EEC0
 * Callers:
 *     MiReleaseNonPagedResources @ 0x14020C57C (MiReleaseNonPagedResources.c)
 *     MiChargeCommit @ 0x140211450 (MiChargeCommit.c)
 *     CcUnmapVacbArray @ 0x14023F290 (CcUnmapVacbArray.c)
 *     ?SmStReadThread@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x14024C420 (-SmStReadThread@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x1402794F0 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x14028C530 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiUnlockProtoPoolPage @ 0x14028CBF0 (MiUnlockProtoPoolPage.c)
 *     MiRemoveLockedPageCharge @ 0x14028D4B0 (MiRemoveLockedPageCharge.c)
 *     MiReturnCommit @ 0x14028EF80 (MiReturnCommit.c)
 *     MiSignalCommitSignals @ 0x14028F200 (MiSignalCommitSignals.c)
 *     CcInsertPrivateVolumeCacheMap @ 0x1402CAF10 (CcInsertPrivateVolumeCacheMap.c)
 *     MiWaitForFreePage @ 0x1402CF708 (MiWaitForFreePage.c)
 *     MiModifiedPageWriter @ 0x1402CF990 (MiModifiedPageWriter.c)
 *     MiUpdateAvailableEventsAtDpc @ 0x1402D19B0 (MiUpdateAvailableEventsAtDpc.c)
 *     MiRebuildLargePagesThread @ 0x14030ACC0 (MiRebuildLargePagesThread.c)
 *     PopPepUpdateConstraints @ 0x1403128A0 (PopPepUpdateConstraints.c)
 *     MiStoreEvictThread @ 0x140365C20 (MiStoreEvictThread.c)
 *     PopFxAllocatePowerIrp @ 0x140378380 (PopFxAllocatePowerIrp.c)
 *     MmReleaseResourceCharge @ 0x14039BBFC (MmReleaseResourceCharge.c)
 *     ?SmStLockVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KPEAT_SM_VIRTUAL_REGION@@PEAXK@Z @ 0x14039BF74 (-SmStLockVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KPEAT_SM_VIRTUAL_REGION@@PEAXK@Z.c)
 *     SmKmStoreHelperCheckWaitCommand @ 0x14039C46C (SmKmStoreHelperCheckWaitCommand.c)
 *     SmKmStoreHelperWaitForCommand @ 0x14039C648 (SmKmStoreHelperWaitForCommand.c)
 *     PopFxIdleWorker @ 0x1403B4B50 (PopFxIdleWorker.c)
 *     MiDereferenceSegmentThread @ 0x1403F7700 (MiDereferenceSegmentThread.c)
 *     IopValidateAndGetWriteParameters @ 0x140400A70 (IopValidateAndGetWriteParameters.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x140403D20 (MiTrimUnusedPageFileRegionsWorker.c)
 *     MiUpdateCommitCounts @ 0x140434D3C (MiUpdateCommitCounts.c)
 *     ?SmCompressCtxBalancerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x140449540 (-SmCompressCtxBalancerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     PopUpdateWatchdogNoWorkersEvent @ 0x140458FA8 (PopUpdateWatchdogNoWorkersEvent.c)
 *     SmKmStoreHelperWorker @ 0x14045D450 (SmKmStoreHelperWorker.c)
 *     PopPowerRequestEvaluatePendingRequestStatus @ 0x14046C0C4 (PopPowerRequestEvaluatePendingRequestStatus.c)
 *     PnpRequestDeviceAction @ 0x14046C968 (PnpRequestDeviceAction.c)
 *     MiSyncCommitSignals @ 0x140470AE4 (MiSyncCommitSignals.c)
 *     MiRetryNonPagedAllocation @ 0x140481470 (MiRetryNonPagedAllocation.c)
 *     MiWaitForAvailablePages @ 0x14048F10C (MiWaitForAvailablePages.c)
 *     PnpLockDeviceActionQueue @ 0x140498EF8 (PnpLockDeviceActionQueue.c)
 *     MmStoreFlushOutstandingEvictions @ 0x1404ACF40 (MmStoreFlushOutstandingEvictions.c)
 *     ExUnregisterCallback @ 0x1404ADD30 (ExUnregisterCallback.c)
 *     PopFxIssueComponentPerfStateChanges @ 0x1404B6EAC (PopFxIssueComponentPerfStateChanges.c)
 *     EtwpCovSampCaptureContextStop @ 0x1404BB96C (EtwpCovSampCaptureContextStop.c)
 *     MiQueueWorkingSetRequest @ 0x1404F62CC (MiQueueWorkingSetRequest.c)
 *     HvlPhase2Initialize @ 0x140582B80 (HvlPhase2Initialize.c)
 *     PopCheckPowerSourceAfterRtcWakeSet @ 0x1405D41D8 (PopCheckPowerSourceAfterRtcWakeSet.c)
 *     PopIdleWakeAssignAccountingToSource @ 0x1405DAA44 (PopIdleWakeAssignAccountingToSource.c)
 *     PdcResetEvent @ 0x140607600 (PdcResetEvent.c)
 *     SmTerminateStoreProcess @ 0x14060CB08 (SmTerminateStoreProcess.c)
 *     DifKeClearEventWrapper @ 0x14062CF80 (DifKeClearEventWrapper.c)
 *     DifKeResetEventWrapper @ 0x1406304D0 (DifKeResetEventWrapper.c)
 *     MiSignalNonPagedPoolWatchers @ 0x140676BB8 (MiSignalNonPagedPoolWatchers.c)
 *     MiDrainCrossPartitionUsage @ 0x14068A0B4 (MiDrainCrossPartitionUsage.c)
 *     sub_140694D80 @ 0x140694D80 (sub_140694D80.c)
 *     WdtpTimerCallback @ 0x14069C470 (WdtpTimerCallback.c)
 *     IoCancelFileOpen @ 0x1406F9E00 (IoCancelFileOpen.c)
 *     sub_1406FA584 @ 0x1406FA584 (sub_1406FA584.c)
 *     DbgkpRemoveErrorPort @ 0x140707938 (DbgkpRemoveErrorPort.c)
 *     IoRegisterFsRegistrationChangeMountAware @ 0x1407144C0 (IoRegisterFsRegistrationChangeMountAware.c)
 *     IoSetInformation @ 0x140714820 (IoSetInformation.c)
 *     PfGenerateTrace @ 0x14074637C (PfGenerateTrace.c)
 *     PfTInitialize @ 0x1407468B4 (PfTInitialize.c)
 *     PopSetSystemAwayMode @ 0x140753DC0 (PopSetSystemAwayMode.c)
 *     PopPowerAggregatorSystemTransitionExitStateHandler @ 0x140759E80 (PopPowerAggregatorSystemTransitionExitStateHandler.c)
 *     PopPowerAdapterQueryStatus @ 0x14075BB40 (PopPowerAdapterQueryStatus.c)
 *     TtmiRetrieveEventFromQueue @ 0x140770A58 (TtmiRetrieveEventFromQueue.c)
 *     EtwpCovSampCaptureWorkerThread @ 0x1407B24B0 (EtwpCovSampCaptureWorkerThread.c)
 *     EtwpStopTrace @ 0x1408325A4 (EtwpStopTrace.c)
 *     EtwpSynchronizeWithLogger @ 0x14083381C (EtwpSynchronizeWithLogger.c)
 *     IopDeleteFile @ 0x140841DB0 (IopDeleteFile.c)
 *     PnpInsertEventInQueue @ 0x1408B3950 (PnpInsertEventInQueue.c)
 *     NtNotifyChangeMultipleKeys @ 0x1408BF750 (NtNotifyChangeMultipleKeys.c)
 *     IopReadFile @ 0x1408C0610 (IopReadFile.c)
 *     IopXxxControlFile @ 0x1408C1970 (IopXxxControlFile.c)
 *     BuildQueryDirectoryIrp @ 0x1408C48F0 (BuildQueryDirectoryIrp.c)
 *     CmUnloadKey @ 0x14092B0F8 (CmUnloadKey.c)
 *     CmpLinkHiveToMaster @ 0x14092C240 (CmpLinkHiveToMaster.c)
 *     IopCancelIrpsInThreadList @ 0x14094A824 (IopCancelIrpsInThreadList.c)
 *     PfTLoggingWorker @ 0x14094E990 (PfTLoggingWorker.c)
 *     IopQueryXxxInformation @ 0x14096A530 (IopQueryXxxInformation.c)
 *     NtResetEvent @ 0x14096BD90 (NtResetEvent.c)
 *     SPCallServerHandleQueryPolicy @ 0x140976EFC (SPCallServerHandleQueryPolicy.c)
 *     sub_140978038 @ 0x140978038 (sub_140978038.c)
 *     CmpLockRegistryFreezeAware @ 0x14097DFD8 (CmpLockRegistryFreezeAware.c)
 *     NtCopyFileChunk @ 0x1409886C0 (NtCopyFileChunk.c)
 *     IopInvalidateVolumesForDevice @ 0x1409A4954 (IopInvalidateVolumesForDevice.c)
 *     NtClearEvent @ 0x1409AAD50 (NtClearEvent.c)
 *     NtLockFile @ 0x1409D2BE0 (NtLockFile.c)
 *     EtwpLogger @ 0x1409D88E0 (EtwpLogger.c)
 *     PopThermalReadCounters @ 0x1409FE178 (PopThermalReadCounters.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x140A0BC30 (NtNotifyChangeDirectoryFileEx.c)
 *     IopMountVolume @ 0x140A29164 (IopMountVolume.c)
 *     NtWaitForDebugEvent @ 0x140A39180 (NtWaitForDebugEvent.c)
 *     WmipCopyFromEventQueues @ 0x140A54ED0 (WmipCopyFromEventQueues.c)
 *     SshpSessionManagerSendControlEventSlimEtl @ 0x140A701D0 (SshpSessionManagerSendControlEventSlimEtl.c)
 *     IopCreateArcName @ 0x140A75840 (IopCreateArcName.c)
 *     PoUnregisterPowerSettingCallback @ 0x140A76B70 (PoUnregisterPowerSettingCallback.c)
 *     RawQueryFsSizeInfo @ 0x140A89C08 (RawQueryFsSizeInfo.c)
 *     IopReadFileScatter @ 0x140A8E968 (IopReadFileScatter.c)
 *     IopWriteFileGather @ 0x140A958BC (IopWriteFileGather.c)
 *     PopFxUpdateVetoMaskWork @ 0x140A9C5C0 (PopFxUpdateVetoMaskWork.c)
 *     IopSendMessageToTrackService @ 0x140AA825C (IopSendMessageToTrackService.c)
 *     ArbArbiterHandler @ 0x140AB47A0 (ArbArbiterHandler.c)
 *     PopCancelIgnoreBatteryStatusChange @ 0x140ABB650 (PopCancelIgnoreBatteryStatusChange.c)
 *     NtSetInformationJobObject @ 0x140ACE760 (NtSetInformationJobObject.c)
 *     IoShutdownSystem @ 0x140B5374C (IoShutdownSystem.c)
 *     IopShutdownBaseFileSystems @ 0x140B539D0 (IopShutdownBaseFileSystems.c)
 *     PfpScenCtxPrefetchWait @ 0x140B5B170 (PfpScenCtxPrefetchWait.c)
 *     PopNewWakeInfo @ 0x140B67F44 (PopNewWakeInfo.c)
 *     PfpScenCtxQueryScenarioInformation @ 0x140B6D840 (PfpScenCtxQueryScenarioInformation.c)
 *     AnFwDisplayFade @ 0x140BB36EC (AnFwDisplayFade.c)
 *     IopGetBootDiskInformation @ 0x140C1D87C (IopGetBootDiskInformation.c)
 *     MiInitializePagedPoolEvents @ 0x140C53EC4 (MiInitializePagedPoolEvents.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 */

LONG __stdcall KeResetEvent(PRKEVENT Event)
{
  unsigned __int8 CurrentIrql; // di
  unsigned int v3; // esi
  LONG SignalState; // esi

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
  v3 = 0;
  if ( _interlockedbittestandset(&Event->Header.Lock, 7u) )
  {
    do
    {
      if ( (++v3 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(Event) )
      {
        HvlNotifyLongSpinWait(v3);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( (Event->Header.LockNV & 0x80u) != 0 || _interlockedbittestandset(&Event->Header.Lock, 7u) );
  }
  SignalState = Event->Header.SignalState;
  Event->Header.SignalState = 0;
  _InterlockedAnd(&Event->Header.Lock, 0xFFFFFF7F);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  return SignalState;
}
