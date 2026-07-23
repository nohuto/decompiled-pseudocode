/*
 * XREFs of KeResetEvent @ 0x14029EAC0
 * Callers:
 *     CcUnmapVacbArray @ 0x1402073E0 (CcUnmapVacbArray.c)
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x14022EA80 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     MiWaitForFreePage @ 0x140260F64 (MiWaitForFreePage.c)
 *     MiUpdateAvailableEventsAtDpc @ 0x140261834 (MiUpdateAvailableEventsAtDpc.c)
 *     MiWaitForAvailablePages @ 0x1402618C0 (MiWaitForAvailablePages.c)
 *     ?SmStReadThread@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x14027CA30 (-SmStReadThread@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x14029C130 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiUnlockProtoPoolPage @ 0x14029C7F0 (MiUnlockProtoPoolPage.c)
 *     MiRemoveLockedPageCharge @ 0x14029D0B0 (MiRemoveLockedPageCharge.c)
 *     MiReturnCommit @ 0x14029EB80 (MiReturnCommit.c)
 *     MiSignalCommitSignals @ 0x14029EE00 (MiSignalCommitSignals.c)
 *     PopUpdateWatchdogNoWorkersEvent @ 0x1402BC7E4 (PopUpdateWatchdogNoWorkersEvent.c)
 *     PopFxAllocatePowerIrp @ 0x1402E6A5C (PopFxAllocatePowerIrp.c)
 *     MmReleaseResourceCharge @ 0x1402F8EFC (MmReleaseResourceCharge.c)
 *     ?SmStLockVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KPEAT_SM_VIRTUAL_REGION@@PEAXK@Z @ 0x1402F9274 (-SmStLockVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KPEAT_SM_VIRTUAL_REGION@@PEAXK@Z.c)
 *     SmKmStoreHelperCheckWaitCommand @ 0x1402F976C (SmKmStoreHelperCheckWaitCommand.c)
 *     SmKmStoreHelperWaitForCommand @ 0x1402F9948 (SmKmStoreHelperWaitForCommand.c)
 *     MiRebuildLargePagesThread @ 0x140314BA0 (MiRebuildLargePagesThread.c)
 *     MiReleaseNonPagedResources @ 0x1403358DC (MiReleaseNonPagedResources.c)
 *     MiChargeCommit @ 0x14033A7B0 (MiChargeCommit.c)
 *     ?SmCompressCtxBalancerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x1403763F0 (-SmCompressCtxBalancerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     PopPepUpdateConstraints @ 0x1403A750C (PopPepUpdateConstraints.c)
 *     PopFxIdleWorker @ 0x1403A9020 (PopFxIdleWorker.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x1403C5F70 (MiTrimUnusedPageFileRegionsWorker.c)
 *     MiDereferenceSegmentThread @ 0x1403ED670 (MiDereferenceSegmentThread.c)
 *     IopValidateAndGetWriteParameters @ 0x1403FB3F0 (IopValidateAndGetWriteParameters.c)
 *     MiUpdateCommitCounts @ 0x140427C9C (MiUpdateCommitCounts.c)
 *     CcInsertPrivateVolumeCacheMap @ 0x140430768 (CcInsertPrivateVolumeCacheMap.c)
 *     SmKmStoreHelperWorker @ 0x140452510 (SmKmStoreHelperWorker.c)
 *     PopPowerRequestEvaluatePendingRequestStatus @ 0x140464D44 (PopPowerRequestEvaluatePendingRequestStatus.c)
 *     PnpRequestDeviceAction @ 0x140467508 (PnpRequestDeviceAction.c)
 *     MiSyncCommitSignals @ 0x14046B194 (MiSyncCommitSignals.c)
 *     MiModifiedPageWriter @ 0x14046F7B0 (MiModifiedPageWriter.c)
 *     MiStoreEvictThread @ 0x140476E20 (MiStoreEvictThread.c)
 *     MiRetryNonPagedAllocation @ 0x14047C730 (MiRetryNonPagedAllocation.c)
 *     PnpLockDeviceActionQueue @ 0x1404937D8 (PnpLockDeviceActionQueue.c)
 *     MmStoreFlushOutstandingEvictions @ 0x1404A7624 (MmStoreFlushOutstandingEvictions.c)
 *     ExUnregisterCallback @ 0x1404A8640 (ExUnregisterCallback.c)
 *     PopFxIssueComponentPerfStateChanges @ 0x1404B168C (PopFxIssueComponentPerfStateChanges.c)
 *     EtwpCovSampCaptureContextStop @ 0x1404B687C (EtwpCovSampCaptureContextStop.c)
 *     MiQueueWorkingSetRequest @ 0x1404F3BCC (MiQueueWorkingSetRequest.c)
 *     HvlPhase2Initialize @ 0x14057FF00 (HvlPhase2Initialize.c)
 *     PopCheckPowerSourceAfterRtcWakeSet @ 0x1405D1998 (PopCheckPowerSourceAfterRtcWakeSet.c)
 *     PopIdleWakeAssignAccountingToSource @ 0x1405D7D64 (PopIdleWakeAssignAccountingToSource.c)
 *     PdcResetEvent @ 0x140604C08 (PdcResetEvent.c)
 *     SmTerminateStoreProcess @ 0x14060B0C8 (SmTerminateStoreProcess.c)
 *     DifKeClearEventWrapper @ 0x14062B540 (DifKeClearEventWrapper.c)
 *     DifKeResetEventWrapper @ 0x14062EA90 (DifKeResetEventWrapper.c)
 *     MiSignalNonPagedPoolWatchers @ 0x140677D88 (MiSignalNonPagedPoolWatchers.c)
 *     MiDrainCrossPartitionUsage @ 0x14068B1E4 (MiDrainCrossPartitionUsage.c)
 *     sub_140695E50 @ 0x140695E50 (sub_140695E50.c)
 *     WdtpTimerCallback @ 0x14069D4F0 (WdtpTimerCallback.c)
 *     IoCancelFileOpen @ 0x1406F7A40 (IoCancelFileOpen.c)
 *     sub_1406F81C4 @ 0x1406F81C4 (sub_1406F81C4.c)
 *     DbgkpRemoveErrorPort @ 0x1407054F8 (DbgkpRemoveErrorPort.c)
 *     IoRegisterFsRegistrationChangeMountAware @ 0x140712050 (IoRegisterFsRegistrationChangeMountAware.c)
 *     IoSetInformation @ 0x1407123B0 (IoSetInformation.c)
 *     PfGenerateTrace @ 0x14074466C (PfGenerateTrace.c)
 *     PfTInitialize @ 0x140744BA4 (PfTInitialize.c)
 *     PopSetSystemAwayMode @ 0x1407520E0 (PopSetSystemAwayMode.c)
 *     PopPowerAggregatorSystemTransitionExitStateHandler @ 0x1407582D0 (PopPowerAggregatorSystemTransitionExitStateHandler.c)
 *     PopPowerAdapterQueryStatus @ 0x14075A84C (PopPowerAdapterQueryStatus.c)
 *     TtmiRetrieveEventFromQueue @ 0x140770C78 (TtmiRetrieveEventFromQueue.c)
 *     EtwpCovSampCaptureWorkerThread @ 0x1407B2900 (EtwpCovSampCaptureWorkerThread.c)
 *     IopDeleteFile @ 0x14083E070 (IopDeleteFile.c)
 *     IopInvalidateVolumesForDevice @ 0x1408AEAB4 (IopInvalidateVolumesForDevice.c)
 *     PnpInsertEventInQueue @ 0x1408B1240 (PnpInsertEventInQueue.c)
 *     NtNotifyChangeMultipleKeys @ 0x1408BD110 (NtNotifyChangeMultipleKeys.c)
 *     IopReadFile @ 0x1408BDFD0 (IopReadFile.c)
 *     IopXxxControlFile @ 0x1408BF330 (IopXxxControlFile.c)
 *     BuildQueryDirectoryIrp @ 0x1408C22B0 (BuildQueryDirectoryIrp.c)
 *     IopCancelIrpsInThreadList @ 0x1408EED94 (IopCancelIrpsInThreadList.c)
 *     CmUnloadKey @ 0x14092D238 (CmUnloadKey.c)
 *     CmpLinkHiveToMaster @ 0x14092E380 (CmpLinkHiveToMaster.c)
 *     IopQueryXxxInformation @ 0x140952FC0 (IopQueryXxxInformation.c)
 *     NtResetEvent @ 0x1409547F0 (NtResetEvent.c)
 *     SPCallServerHandleQueryPolicy @ 0x14095F70C (SPCallServerHandleQueryPolicy.c)
 *     sub_140960848 @ 0x140960848 (sub_140960848.c)
 *     CmpLockRegistryFreezeAware @ 0x1409667E8 (CmpLockRegistryFreezeAware.c)
 *     PfTLoggingWorker @ 0x140970EA0 (PfTLoggingWorker.c)
 *     NtClearEvent @ 0x140994580 (NtClearEvent.c)
 *     NtLockFile @ 0x1409C2A10 (NtLockFile.c)
 *     EtwpStopTrace @ 0x1409D2184 (EtwpStopTrace.c)
 *     EtwpSynchronizeWithLogger @ 0x1409D2650 (EtwpSynchronizeWithLogger.c)
 *     EtwpLogger @ 0x1409D33F0 (EtwpLogger.c)
 *     PopThermalReadCounters @ 0x1409F73E8 (PopThermalReadCounters.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x140A0AE70 (NtNotifyChangeDirectoryFileEx.c)
 *     IopMountVolume @ 0x140A1DB24 (IopMountVolume.c)
 *     NtWaitForDebugEvent @ 0x140A2E240 (NtWaitForDebugEvent.c)
 *     WmipCopyFromEventQueues @ 0x140A4CE20 (WmipCopyFromEventQueues.c)
 *     SshpSessionManagerSendControlEventSlimEtl @ 0x140A69660 (SshpSessionManagerSendControlEventSlimEtl.c)
 *     IopCreateArcName @ 0x140A6FCE0 (IopCreateArcName.c)
 *     PoUnregisterPowerSettingCallback @ 0x140A70C90 (PoUnregisterPowerSettingCallback.c)
 *     RawQueryFsSizeInfo @ 0x140A86008 (RawQueryFsSizeInfo.c)
 *     IopReadFileScatter @ 0x140A8AFD8 (IopReadFileScatter.c)
 *     IopWriteFileGather @ 0x140A920EC (IopWriteFileGather.c)
 *     PopFxUpdateVetoMaskWork @ 0x140A97B30 (PopFxUpdateVetoMaskWork.c)
 *     IopSendMessageToTrackService @ 0x140AA335C (IopSendMessageToTrackService.c)
 *     ArbArbiterHandler @ 0x140AAF710 (ArbArbiterHandler.c)
 *     PopCancelIgnoreBatteryStatusChange @ 0x140AB6670 (PopCancelIgnoreBatteryStatusChange.c)
 *     NtCopyFileChunk @ 0x140ABE950 (NtCopyFileChunk.c)
 *     NtSetInformationJobObject @ 0x140ACC7F0 (NtSetInformationJobObject.c)
 *     IoShutdownSystem @ 0x140B5579C (IoShutdownSystem.c)
 *     IopShutdownBaseFileSystems @ 0x140B55A20 (IopShutdownBaseFileSystems.c)
 *     PfpScenCtxPrefetchWait @ 0x140B5D1E0 (PfpScenCtxPrefetchWait.c)
 *     PopNewWakeInfo @ 0x140B6A084 (PopNewWakeInfo.c)
 *     PfpScenCtxQueryScenarioInformation @ 0x140B6F0E0 (PfpScenCtxQueryScenarioInformation.c)
 *     AnFwDisplayFade @ 0x140BB56EC (AnFwDisplayFade.c)
 *     IopGetBootDiskInformation @ 0x140C1F8BC (IopGetBootDiskInformation.c)
 *     MiInitializePagedPoolEvents @ 0x140C56054 (MiInitializePagedPoolEvents.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

LONG __stdcall KeResetEvent(PRKEVENT Event)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // r9
  unsigned __int8 CurrentIrql; // di
  unsigned int v6; // esi
  LONG SignalState; // esi

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
  v6 = 0;
  if ( _interlockedbittestandset(&Event->Header.Lock, 7u) )
  {
    do
    {
      if ( (++v6 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(Event, v1, v2, v3) )
      {
        HvlNotifyLongSpinWait(v6);
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
