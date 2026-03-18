/*
 * XREFs of KeResetEvent @ 0x140329C10
 * Callers:
 *     MmReleaseResourceCharge @ 0x14020C540 (MmReleaseResourceCharge.c)
 *     ?SmStLockVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KPEAT_SM_VIRTUAL_REGION@@PEAXK@Z @ 0x14020C8C4 (-SmStLockVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KPEAT_SM_VIRTUAL_REGION@@PEAXK@Z.c)
 *     SmKmStoreHelperCheckWaitCommand @ 0x14020CDBC (SmKmStoreHelperCheckWaitCommand.c)
 *     SmKmStoreHelperWaitForCommand @ 0x14020CF98 (SmKmStoreHelperWaitForCommand.c)
 *     MiReleaseNonPagedResources @ 0x14021133C (MiReleaseNonPagedResources.c)
 *     MiChargeCommit @ 0x14022E7B0 (MiChargeCommit.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140234CD0 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiUnlockProtoPoolPage @ 0x1402353A0 (MiUnlockProtoPoolPage.c)
 *     MiRemoveLockedPageCharge @ 0x140235C40 (MiRemoveLockedPageCharge.c)
 *     CcUnmapVacbArray @ 0x1402C3F10 (CcUnmapVacbArray.c)
 *     IopValidateAndGetWriteParameters @ 0x1402D3880 (IopValidateAndGetWriteParameters.c)
 *     MiSignalCommitSignals @ 0x140329790 (MiSignalCommitSignals.c)
 *     MiReturnCommit @ 0x140329900 (MiReturnCommit.c)
 *     PopFxIdleWorker @ 0x14034964C (PopFxIdleWorker.c)
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x140349F10 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     PopPepUpdateConstraints @ 0x140357F10 (PopPepUpdateConstraints.c)
 *     PopFxAllocatePowerIrp @ 0x140358D10 (PopFxAllocatePowerIrp.c)
 *     MiStoreEvictThread @ 0x14036EC70 (MiStoreEvictThread.c)
 *     ?SmCompressCtxBalancerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x140393600 (-SmCompressCtxBalancerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     CcInsertPrivateVolumeCacheMap @ 0x1403A92B4 (CcInsertPrivateVolumeCacheMap.c)
 *     MiWaitForAvailablePages @ 0x1403BEAEC (MiWaitForAvailablePages.c)
 *     MiUpdateAvailableEventsAtDpc @ 0x1403BEBFC (MiUpdateAvailableEventsAtDpc.c)
 *     MiWaitForFreePage @ 0x1403BFC64 (MiWaitForFreePage.c)
 *     MiModifiedPageWriter @ 0x1403BFEE0 (MiModifiedPageWriter.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x1403DB700 (MiTrimUnusedPageFileRegionsWorker.c)
 *     MiUpdateCommitCounts @ 0x140438D34 (MiUpdateCommitCounts.c)
 *     ?SmStReadThread@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x140456650 (-SmStReadThread@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     PopUpdateWatchdogNoWorkersEvent @ 0x14045831C (PopUpdateWatchdogNoWorkersEvent.c)
 *     MiDereferenceSegmentThread @ 0x140458D80 (MiDereferenceSegmentThread.c)
 *     SmKmStoreHelperWorker @ 0x14045E110 (SmKmStoreHelperWorker.c)
 *     PopPowerRequestEvaluatePendingRequestStatus @ 0x14046D734 (PopPowerRequestEvaluatePendingRequestStatus.c)
 *     PnpRequestDeviceAction @ 0x14046E128 (PnpRequestDeviceAction.c)
 *     MiRebuildLargePagesThread @ 0x140475C40 (MiRebuildLargePagesThread.c)
 *     MiSyncCommitSignals @ 0x1404786C0 (MiSyncCommitSignals.c)
 *     MiRetryNonPagedAllocation @ 0x1404807B0 (MiRetryNonPagedAllocation.c)
 *     PnpLockDeviceActionQueue @ 0x140499094 (PnpLockDeviceActionQueue.c)
 *     MmStoreFlushOutstandingEvictions @ 0x1404ABBC4 (MmStoreFlushOutstandingEvictions.c)
 *     ExUnregisterCallback @ 0x1404AC6F0 (ExUnregisterCallback.c)
 *     PopFxIssueComponentPerfStateChanges @ 0x1404B75D8 (PopFxIssueComponentPerfStateChanges.c)
 *     EtwpCovSampCaptureContextStop @ 0x1404BC80C (EtwpCovSampCaptureContextStop.c)
 *     MiQueueWorkingSetRequest @ 0x1404F3A78 (MiQueueWorkingSetRequest.c)
 *     HvlPhase2Initialize @ 0x14057F3D0 (HvlPhase2Initialize.c)
 *     PopCheckPowerSourceAfterRtcWakeSet @ 0x1405CF7C8 (PopCheckPowerSourceAfterRtcWakeSet.c)
 *     PopIdleWakeAssignAccountingToSource @ 0x1405D5FCC (PopIdleWakeAssignAccountingToSource.c)
 *     PdcResetEvent @ 0x1405FB2C0 (PdcResetEvent.c)
 *     SmTerminateStoreProcess @ 0x140600ADC (SmTerminateStoreProcess.c)
 *     DifKeClearEventWrapper @ 0x140620FC0 (DifKeClearEventWrapper.c)
 *     DifKeResetEventWrapper @ 0x140624510 (DifKeResetEventWrapper.c)
 *     MiSignalNonPagedPoolWatchers @ 0x14066B270 (MiSignalNonPagedPoolWatchers.c)
 *     MiDrainCrossPartitionUsage @ 0x14067E824 (MiDrainCrossPartitionUsage.c)
 *     sub_140689930 @ 0x140689930 (sub_140689930.c)
 *     WdtpTimerCallback @ 0x1406910D0 (WdtpTimerCallback.c)
 *     IoCancelFileOpen @ 0x1406EE040 (IoCancelFileOpen.c)
 *     sub_1406EE700 @ 0x1406EE700 (sub_1406EE700.c)
 *     DbgkpRemoveErrorPort @ 0x1406FBA58 (DbgkpRemoveErrorPort.c)
 *     IoRegisterFsRegistrationChangeMountAware @ 0x1407083C0 (IoRegisterFsRegistrationChangeMountAware.c)
 *     IoSetInformation @ 0x140708720 (IoSetInformation.c)
 *     PfGenerateTrace @ 0x14073A35C (PfGenerateTrace.c)
 *     PfTInitialize @ 0x14073A894 (PfTInitialize.c)
 *     PopSetSystemAwayMode @ 0x140747CD0 (PopSetSystemAwayMode.c)
 *     PopPowerAggregatorSystemTransitionExitStateHandler @ 0x14074DA30 (PopPowerAggregatorSystemTransitionExitStateHandler.c)
 *     TtmiRetrieveEventFromQueue @ 0x140761098 (TtmiRetrieveEventFromQueue.c)
 *     EtwpCovSampCaptureWorkerThread @ 0x1407A30E0 (EtwpCovSampCaptureWorkerThread.c)
 *     IopDeleteFile @ 0x140844B30 (IopDeleteFile.c)
 *     CmUnloadKey @ 0x1408644F8 (CmUnloadKey.c)
 *     CmpLockRegistryFreezeAware @ 0x140884780 (CmpLockRegistryFreezeAware.c)
 *     EtwpStopTrace @ 0x140892F28 (EtwpStopTrace.c)
 *     EtwpSynchronizeWithLogger @ 0x1408942B8 (EtwpSynchronizeWithLogger.c)
 *     IopCancelIrpsInThreadList @ 0x1408BDA64 (IopCancelIrpsInThreadList.c)
 *     IopQueryXxxInformation @ 0x1408C1900 (IopQueryXxxInformation.c)
 *     NtResetEvent @ 0x1408C3160 (NtResetEvent.c)
 *     IopXxxControlFile @ 0x1408C3AD0 (IopXxxControlFile.c)
 *     BuildQueryDirectoryIrp @ 0x1408C6A20 (BuildQueryDirectoryIrp.c)
 *     CmpLinkHiveToMaster @ 0x140911D30 (CmpLinkHiveToMaster.c)
 *     PfTLoggingWorker @ 0x140922920 (PfTLoggingWorker.c)
 *     IopReadFile @ 0x140935F80 (IopReadFile.c)
 *     NtNotifyChangeMultipleKeys @ 0x140937870 (NtNotifyChangeMultipleKeys.c)
 *     PnpInsertEventInQueue @ 0x14096A57C (PnpInsertEventInQueue.c)
 *     NtCopyFileChunk @ 0x140970910 (NtCopyFileChunk.c)
 *     SPCallServerHandleQueryPolicy @ 0x14097D124 (SPCallServerHandleQueryPolicy.c)
 *     sub_14097E278 @ 0x14097E278 (sub_14097E278.c)
 *     NtLockFile @ 0x1409869D0 (NtLockFile.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x14098A4B0 (NtNotifyChangeDirectoryFileEx.c)
 *     EtwpLogger @ 0x14098FA20 (EtwpLogger.c)
 *     IopInvalidateVolumesForDevice @ 0x1409A05FC (IopInvalidateVolumesForDevice.c)
 *     NtClearEvent @ 0x1409A7B00 (NtClearEvent.c)
 *     PopThermalReadCounters @ 0x1409FC328 (PopThermalReadCounters.c)
 *     IopMountVolume @ 0x140A1F624 (IopMountVolume.c)
 *     NtWaitForDebugEvent @ 0x140A33F40 (NtWaitForDebugEvent.c)
 *     WmipCopyFromEventQueues @ 0x140A50E14 (WmipCopyFromEventQueues.c)
 *     SshpSessionManagerSendControlEventSlimEtl @ 0x140A6DFC0 (SshpSessionManagerSendControlEventSlimEtl.c)
 *     IopCreateArcName @ 0x140A73568 (IopCreateArcName.c)
 *     PoUnregisterPowerSettingCallback @ 0x140A74AA0 (PoUnregisterPowerSettingCallback.c)
 *     RawQueryFsSizeInfo @ 0x140A84E18 (RawQueryFsSizeInfo.c)
 *     IopReadFileScatter @ 0x140A89998 (IopReadFileScatter.c)
 *     IopWriteFileGather @ 0x140A9170C (IopWriteFileGather.c)
 *     PopFxUpdateVetoMaskWork @ 0x140A966B0 (PopFxUpdateVetoMaskWork.c)
 *     IopSendMessageToTrackService @ 0x140AA324C (IopSendMessageToTrackService.c)
 *     ArbArbiterHandler @ 0x140AAF7B0 (ArbArbiterHandler.c)
 *     PopCancelIgnoreBatteryStatusChange @ 0x140AB7310 (PopCancelIgnoreBatteryStatusChange.c)
 *     NtSetInformationJobObject @ 0x140AC4C00 (NtSetInformationJobObject.c)
 *     IoShutdownSystem @ 0x140B4374C (IoShutdownSystem.c)
 *     IopShutdownBaseFileSystems @ 0x140B439D0 (IopShutdownBaseFileSystems.c)
 *     PfpScenCtxPrefetchWait @ 0x140B4B200 (PfpScenCtxPrefetchWait.c)
 *     PopNewWakeInfo @ 0x140B58114 (PopNewWakeInfo.c)
 *     PfpScenCtxQueryScenarioInformation @ 0x140B5E790 (PfpScenCtxQueryScenarioInformation.c)
 *     AnFwDisplayFade @ 0x140BA36EC (AnFwDisplayFade.c)
 *     IopGetBootDiskInformation @ 0x140C0C6AC (IopGetBootDiskInformation.c)
 *     MiInitializePagedPoolEvents @ 0x140C42C94 (MiInitializePagedPoolEvents.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

LONG __stdcall KeResetEvent(PRKEVENT Event)
{
  unsigned __int8 CurrentIrql; // di
  unsigned int v3; // esi
  LONG SignalState; // esi

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql);
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
