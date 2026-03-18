/*
 * XREFs of ExAcquireResourceExclusiveLite @ 0x1402769C0
 * Callers:
 *     CcPinFileData @ 0x140272D30 (CcPinFileData.c)
 *     ExEnterCriticalRegionAndAcquireResourceExclusive @ 0x140276980 (ExEnterCriticalRegionAndAcquireResourceExclusive.c)
 *     MiAcquireLoadLock @ 0x1402C6F98 (MiAcquireLoadLock.c)
 *     SepQueueWorkItem @ 0x140349B84 (SepQueueWorkItem.c)
 *     SepRmCallLsa @ 0x14034A120 (SepRmCallLsa.c)
 *     SepDesktopAppxSubProcessToken @ 0x140355ABC (SepDesktopAppxSubProcessToken.c)
 *     SepInternalSetSecurityAttributesToken @ 0x1403571CC (SepInternalSetSecurityAttributesToken.c)
 *     FsRtlAcquireFileForModWriteEx @ 0x140372ABC (FsRtlAcquireFileForModWriteEx.c)
 *     PnpUnregisterPlugPlayNotification @ 0x14046F240 (PnpUnregisterPlugPlayNotification.c)
 *     CcUnpinRepinnedBcb @ 0x140494980 (CcUnpinRepinnedBcb.c)
 *     SeTokenSetRedirectionTrustPolicy @ 0x14049759C (SeTokenSetRedirectionTrustPolicy.c)
 *     PfResourceExclusiveAcquire @ 0x14049EF58 (PfResourceExclusiveAcquire.c)
 *     SeTokenSetNoChildProcessRestricted @ 0x1404B93F4 (SeTokenSetNoChildProcessRestricted.c)
 *     PiDmaGuardQueueRemoveEntry @ 0x1404BD344 (PiDmaGuardQueueRemoveEntry.c)
 *     CcAcquireByteRangeForWrite @ 0x1404DC470 (CcAcquireByteRangeForWrite.c)
 *     IoCaptureLiveDump @ 0x1404E6068 (IoCaptureLiveDump.c)
 *     IoConfigureCrashDump @ 0x140590DB4 (IoConfigureCrashDump.c)
 *     IoUpdateDumpPhysicalRanges @ 0x140592538 (IoUpdateDumpPhysicalRanges.c)
 *     IoSetDeferredLiveDumpFileHandle @ 0x140597B68 (IoSetDeferredLiveDumpFileHandle.c)
 *     PiDrvDbUnloadNodeWaitWorkerCallback @ 0x1405A9910 (PiDrvDbUnloadNodeWaitWorkerCallback.c)
 *     RtlpAllocateHeap @ 0x1405EA9AC (RtlpAllocateHeap.c)
 *     RtlpFreeHeap @ 0x1405ECA10 (RtlpFreeHeap.c)
 *     RtlpSetupExtendedBlock @ 0x1405ED758 (RtlpSetupExtendedBlock.c)
 *     SeSetSecurityAttributesTokenEx @ 0x1406092E0 (SeSetSecurityAttributesTokenEx.c)
 *     DifExAcquireResourceExclusiveLiteWrapper @ 0x14061BBD0 (DifExAcquireResourceExclusiveLiteWrapper.c)
 *     ExEnterPriorityRegionAndAcquireResourceExclusive @ 0x140656DA0 (ExEnterPriorityRegionAndAcquireResourceExclusive.c)
 *     TtmpAcquireSessionLock @ 0x1406F73C8 (TtmpAcquireSessionLock.c)
 *     FsRtlPrepareMdlWriteDev @ 0x14070A4B0 (FsRtlPrepareMdlWriteDev.c)
 *     FsRtlDedupChangeUninit @ 0x14070CAB0 (FsRtlDedupChangeUninit.c)
 *     FsRtlpDedupChangeRegisterVolume @ 0x14070CCE0 (FsRtlpDedupChangeRegisterVolume.c)
 *     FsRtlpHeatRegisterVolume @ 0x14070D6DC (FsRtlpHeatRegisterVolume.c)
 *     FsRtlpHeatUnregisterVolume @ 0x14070D880 (FsRtlpHeatUnregisterVolume.c)
 *     IoInitializeCrashDump @ 0x140710A68 (IoInitializeCrashDump.c)
 *     IopBootLogToFile @ 0x140711A34 (IopBootLogToFile.c)
 *     IopCopyBootLogRegistryToFile @ 0x140711E7C (IopCopyBootLogRegistryToFile.c)
 *     IopInitializeBootLogging @ 0x140712428 (IopInitializeBootLogging.c)
 *     IoEnumerateRegisteredFiltersList @ 0x140714080 (IoEnumerateRegisteredFiltersList.c)
 *     IoRegisterFileSystem @ 0x1407142F0 (IoRegisterFileSystem.c)
 *     IoRegisterFsRegistrationChangeMountAware @ 0x1407144C0 (IoRegisterFsRegistrationChangeMountAware.c)
 *     IoUnregisterFileSystem @ 0x140714D40 (IoUnregisterFileSystem.c)
 *     IoUnregisterFsRegistrationChange @ 0x140714E00 (IoUnregisterFsRegistrationChange.c)
 *     IoReportDetectedDevice @ 0x14071C850 (IoReportDetectedDevice.c)
 *     IoReportRootDevice @ 0x14071D300 (IoReportRootDevice.c)
 *     PiGetDeviceRegistryProperty @ 0x14071EC28 (PiGetDeviceRegistryProperty.c)
 *     PnpNotifyHwProfileChange @ 0x140720684 (PnpNotifyHwProfileChange.c)
 *     PnpNotifyTargetDeviceChangeNotifyEntry @ 0x1407208D4 (PnpNotifyTargetDeviceChangeNotifyEntry.c)
 *     PpReleaseBootDDB @ 0x140724EC4 (PpReleaseBootDDB.c)
 *     PpDevCfgProcessDevices @ 0x14072D090 (PpDevCfgProcessDevices.c)
 *     PiCMDeleteDeviceWorker @ 0x1407310F0 (PiCMDeleteDeviceWorker.c)
 *     PiCMGenerateDeviceInstance @ 0x14073136C (PiCMGenerateDeviceInstance.c)
 *     PipKsrNotifyDrivers @ 0x14073423C (PipKsrNotifyDrivers.c)
 *     PiInitializeDevice @ 0x140734A0C (PiInitializeDevice.c)
 *     PiDmaGuardQueueInsertEntry @ 0x14073A3A0 (PiDmaGuardQueueInsertEntry.c)
 *     TtmiResetInactivityTimer @ 0x14076FA90 (TtmiResetInactivityTimer.c)
 *     TtmpWnfInactivityTimeoutCallback @ 0x140770730 (TtmpWnfInactivityTimeoutCallback.c)
 *     TtmpAcquireQueueLock @ 0x140770CE8 (TtmpAcquireQueueLock.c)
 *     PspSetIoPriorityLimitJobTree @ 0x140777DA4 (PspSetIoPriorityLimitJobTree.c)
 *     PspSetJobMemoryPartition @ 0x140777E54 (PspSetJobMemoryPartition.c)
 *     PspSetPagePriorityLimitJobTree @ 0x1407784F0 (PspSetPagePriorityLimitJobTree.c)
 *     RtlZeroHeap @ 0x140783280 (RtlZeroHeap.c)
 *     SeSetPrivateNameSpaceToken @ 0x14078F838 (SeSetPrivateNameSpaceToken.c)
 *     SepSetServerSiloToken @ 0x14078FC08 (SepSetServerSiloToken.c)
 *     SeExchangePrimaryToken @ 0x140792C9C (SeExchangePrimaryToken.c)
 *     SepAddTokenLogonSession @ 0x140793570 (SepAddTokenLogonSession.c)
 *     SepDeleteUnreferencedLogonSessionsInSilo @ 0x140793668 (SepDeleteUnreferencedLogonSessionsInSilo.c)
 *     SepMakeLogonSessionsSiblings @ 0x140793804 (SepMakeLogonSessionsSiblings.c)
 *     SepRemoveTokenLogonSession @ 0x140793A58 (SepRemoveTokenLogonSession.c)
 *     SepRmGlobalSaclSetWrkr @ 0x1407947B0 (SepRmGlobalSaclSetWrkr.c)
 *     WmiAcquireSmbiosLockExclusive @ 0x1407A4014 (WmiAcquireSmbiosLockExclusive.c)
 *     ExpRegisterFirmwareTableInformationHandler @ 0x1407B5650 (ExpRegisterFirmwareTableInformationHandler.c)
 *     NtFlushInstallUILanguage @ 0x1407C2F70 (NtFlushInstallUILanguage.c)
 *     NtMapCMFModule @ 0x1407C3080 (NtMapCMFModule.c)
 *     _PnpCtxCloseMachine @ 0x1408171F0 (_PnpCtxCloseMachine.c)
 *     DrvDbSetDriverDatabaseMappedProperty @ 0x1408226F4 (DrvDbSetDriverDatabaseMappedProperty.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x14085CCAC (PspAllocateAndQueryNotificationChannel.c)
 *     PspLockRootJobExclusive @ 0x14085D130 (PspLockRootJobExclusive.c)
 *     PspSetJobIoRateControl @ 0x14085E618 (PspSetJobIoRateControl.c)
 *     PspLockJobConditionally @ 0x14085E94C (PspLockJobConditionally.c)
 *     PspFreezeJobTree @ 0x14085EA8C (PspFreezeJobTree.c)
 *     IopGetSetSecurityObject @ 0x1408796F0 (IopGetSetSecurityObject.c)
 *     CmpLockRegistryExclusive @ 0x14087DD80 (CmpLockRegistryExclusive.c)
 *     PspRemoveProcessFromJobChain @ 0x1408A9078 (PspRemoveProcessFromJobChain.c)
 *     IopDoDeferredSetInterfaceState @ 0x1408B24D0 (IopDoDeferredSetInterfaceState.c)
 *     IopRegisterDeviceInterface @ 0x1408B3B2C (IopRegisterDeviceInterface.c)
 *     IoSetDeviceInterfaceState @ 0x1408B40B0 (IoSetDeviceInterfaceState.c)
 *     PiDmObjectManagerAcquireExclusiveLock @ 0x1408B5444 (PiDmObjectManagerAcquireExclusiveLock.c)
 *     IoGetDeviceInterfaceAlias @ 0x1408B7090 (IoGetDeviceInterfaceAlias.c)
 *     PiPnpRtlSetObjectProperty @ 0x1408B84A0 (PiPnpRtlSetObjectProperty.c)
 *     PiSwLock @ 0x1408B9494 (PiSwLock.c)
 *     PiPnpRtlObjectEventWorker @ 0x1408B9D40 (PiPnpRtlObjectEventWorker.c)
 *     PipProcessDevNodeTree @ 0x1408BA630 (PipProcessDevNodeTree.c)
 *     IopGetDeviceInterfaces @ 0x1408C8470 (IopGetDeviceInterfaces.c)
 *     PiPnpRtlOperationListAcquireExclusiveLock @ 0x1408CC29C (PiPnpRtlOperationListAcquireExclusiveLock.c)
 *     PiDqObjectManagerServiceActionQueue @ 0x1408D2DD0 (PiDqObjectManagerServiceActionQueue.c)
 *     PspLockJobsAndProcessExclusive @ 0x1408E705C (PspLockJobsAndProcessExclusive.c)
 *     PspGetMemoryPartitionFromJobList @ 0x1408E7594 (PspGetMemoryPartitionFromJobList.c)
 *     PspLockJobChain @ 0x1408E76DC (PspLockJobChain.c)
 *     PspApplyWorkingSetLimitsToProcess @ 0x1408E7AC0 (PspApplyWorkingSetLimitsToProcess.c)
 *     PspSetEnergyTrackingStateJobTree @ 0x1408EA030 (PspSetEnergyTrackingStateJobTree.c)
 *     PspSendProcessNotificationToJobChain @ 0x1408EA780 (PspSendProcessNotificationToJobChain.c)
 *     PspLockJobExclusive @ 0x1408EB430 (PspLockJobExclusive.c)
 *     PspCallJobHierarchyCallbacks @ 0x1408EBFF8 (PspCallJobHierarchyCallbacks.c)
 *     PspEnforceLimitsJobPostCallback @ 0x1408ECC80 (PspEnforceLimitsJobPostCallback.c)
 *     _CmGetDeviceSoftwareKeyPath @ 0x1409095F0 (_CmGetDeviceSoftwareKeyPath.c)
 *     DrvDbReleaseDatabaseNodeBaseKey @ 0x1409251C8 (DrvDbReleaseDatabaseNodeBaseKey.c)
 *     DrvDbAcquireDatabaseNodeBaseKey @ 0x140925270 (DrvDbAcquireDatabaseNodeBaseKey.c)
 *     DrvDbOpenObjectRegKey @ 0x1409254F0 (DrvDbOpenObjectRegKey.c)
 *     PiDrvDbNodeActionCallback @ 0x140925E10 (PiDrvDbNodeActionCallback.c)
 *     PiDrvDbLoadNode @ 0x140925F40 (PiDrvDbLoadNode.c)
 *     NtAdjustPrivilegesToken @ 0x1409377D0 (NtAdjustPrivilegesToken.c)
 *     FsRtlAcquireFileExclusiveCommon @ 0x140942350 (FsRtlAcquireFileExclusiveCommon.c)
 *     PiPnpRtlSetDeviceRegProperty @ 0x14099B5CC (PiPnpRtlSetDeviceRegProperty.c)
 *     PspSetQuotaLimits @ 0x1409AFD58 (PspSetQuotaLimits.c)
 *     PopAdaptiveGetBootIsUnattended @ 0x1409B9E70 (PopAdaptiveGetBootIsUnattended.c)
 *     PopIsLockConsoleTimeoutActive @ 0x1409BA32C (PopIsLockConsoleTimeoutActive.c)
 *     PopSetDisplayStatus @ 0x1409BA3E8 (PopSetDisplayStatus.c)
 *     PopAdaptiveGetBootTargetSystemState @ 0x1409BA4D8 (PopAdaptiveGetBootTargetSystemState.c)
 *     PopUserPresenceHostStateChange @ 0x1409BA7C8 (PopUserPresenceHostStateChange.c)
 *     PopAdaptiveGetBootIsSystemInitiated @ 0x1409BB16C (PopAdaptiveGetBootIsSystemInitiated.c)
 *     PopAdaptiveGetSessionState @ 0x1409BB2A4 (PopAdaptiveGetSessionState.c)
 *     PnpDelayedRemoveWorker @ 0x1409C6B60 (PnpDelayedRemoveWorker.c)
 *     PpCheckInDriverDatabase @ 0x1409C7E2C (PpCheckInDriverDatabase.c)
 *     IopLoadDriver @ 0x1409C90C0 (IopLoadDriver.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x1409D1DE0 (FsRtlAcquireFileForCcFlushEx.c)
 *     IoRegisterPlugPlayNotification @ 0x1409ED860 (IoRegisterPlugPlayNotification.c)
 *     PnpNotifyDeviceClassChange @ 0x1409EE72C (PnpNotifyDeviceClassChange.c)
 *     PnpNotifyTargetDeviceChange @ 0x1409EEAA0 (PnpNotifyTargetDeviceChange.c)
 *     PiDcHandleCustomDeviceEvent @ 0x1409EEF24 (PiDcHandleCustomDeviceEvent.c)
 *     NtCreateTimer @ 0x1409F7110 (NtCreateTimer.c)
 *     LockRMLog @ 0x140A05A38 (LockRMLog.c)
 *     PpDevNodeLockTree @ 0x140A08C10 (PpDevNodeLockTree.c)
 *     PpDeviceRegistration @ 0x140A0CB38 (PpDeviceRegistration.c)
 *     PnpProcessQueryRemoveAndEject @ 0x140A0DB78 (PnpProcessQueryRemoveAndEject.c)
 *     PnpQueuePendingSurpriseRemoval @ 0x140A0E9B4 (PnpQueuePendingSurpriseRemoval.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x140A0EDE0 (PnpUnlinkDeviceRemovalRelations.c)
 *     PnpAcquireDependencyRelationsLock @ 0x140A0F188 (PnpAcquireDependencyRelationsLock.c)
 *     PnpDisableDeviceInterfaces @ 0x140A10ED8 (PnpDisableDeviceInterfaces.c)
 *     NtGetMUIRegistryInfo @ 0x140A215C0 (NtGetMUIRegistryInfo.c)
 *     SepCreateLogonSessionTrack @ 0x140A22BDC (SepCreateLogonSessionTrack.c)
 *     PopAcquireAdaptiveLock @ 0x140A30168 (PopAcquireAdaptiveLock.c)
 *     SepReferenceLogonSessionSilo @ 0x140A31B44 (SepReferenceLogonSessionSilo.c)
 *     NtAdjustGroupsToken @ 0x140A36530 (NtAdjustGroupsToken.c)
 *     FsRtlCopyWrite @ 0x140A3A470 (FsRtlCopyWrite.c)
 *     SeSetMandatoryPolicyToken @ 0x140A4A5C4 (SeSetMandatoryPolicyToken.c)
 *     SepUpdateLogonSessionTrack @ 0x140A4BA84 (SepUpdateLogonSessionTrack.c)
 *     SeSetSessionIdToken @ 0x140A50448 (SeSetSessionIdToken.c)
 *     SepRmCommandServerThread @ 0x140A52820 (SepRmCommandServerThread.c)
 *     PspSetBackgroundJobTree @ 0x140A58988 (PspSetBackgroundJobTree.c)
 *     IopSetDeviceSecurityDescriptor @ 0x140A5AC1C (IopSetDeviceSecurityDescriptor.c)
 *     IopGetRootDevices @ 0x140A624B8 (IopGetRootDevices.c)
 *     SepDeleteLogonSessionTrack @ 0x140A64520 (SepDeleteLogonSessionTrack.c)
 *     AdtpBuildAccessesString @ 0x140A729FC (AdtpBuildAccessesString.c)
 *     IopBootLog @ 0x140A785F8 (IopBootLog.c)
 *     PiProcessNewDeviceNode @ 0x140A7C564 (PiProcessNewDeviceNode.c)
 *     PnpSurpriseFailUnsafeDmaDevices @ 0x140A7F278 (PnpSurpriseFailUnsafeDmaDevices.c)
 *     PnpChainDereferenceComplete @ 0x140A878A4 (PnpChainDereferenceComplete.c)
 *     DrvDbOpenDriverDatabaseRegKey @ 0x140A88D94 (DrvDbOpenDriverDatabaseRegKey.c)
 *     SeSetVirtualizationToken @ 0x140A8A728 (SeSetVirtualizationToken.c)
 *     PiDrvDbUnloadNodeWorkerCallback @ 0x140A965B0 (PiDrvDbUnloadNodeWorkerCallback.c)
 *     PiDmaGuardQueueFlush @ 0x140AA2610 (PiDmaGuardQueueFlush.c)
 *     SeMarkLogonSessionForTerminationNotificationEx @ 0x140AA7260 (SeMarkLogonSessionForTerminationNotificationEx.c)
 *     PnpDeleteDeviceInterfaces @ 0x140AA7668 (PnpDeleteDeviceInterfaces.c)
 *     IoOpenDeviceInterfaceRegistryKey @ 0x140AADBF0 (IoOpenDeviceInterfaceRegistryKey.c)
 *     PiCMCreateDevice @ 0x140AB4970 (PiCMCreateDevice.c)
 *     SepBlockAccessForLogonSession @ 0x140ABBB60 (SepBlockAccessForLogonSession.c)
 *     PnpGetDeviceInstanceRegistryValue @ 0x140ABC880 (PnpGetDeviceInstanceRegistryValue.c)
 *     PiCMUnregisterDeviceInterface @ 0x140AC00A8 (PiCMUnregisterDeviceInterface.c)
 *     NtSetInformationJobObject @ 0x140ACE760 (NtSetInformationJobObject.c)
 *     NtSetInformationToken @ 0x140AD6C10 (NtSetInformationToken.c)
 *     NtCreateLowBoxToken @ 0x140AD8020 (NtCreateLowBoxToken.c)
 *     SepDeReferenceLogonSession @ 0x140AD8BA4 (SepDeReferenceLogonSession.c)
 *     IoShutdownSystem @ 0x140B5374C (IoShutdownSystem.c)
 *     PopAcquirePolicyLock @ 0x140B67CB0 (PopAcquirePolicyLock.c)
 *     IopInitCrashDumpRegCallback @ 0x140C1CA50 (IopInitCrashDumpRegCallback.c)
 *     PipResetMatchingFilteredDevices @ 0x140C22040 (PipResetMatchingFilteredDevices.c)
 * Callees:
 *     PsBoostThreadIoEx @ 0x14024DD90 (PsBoostThreadIoEx.c)
 *     KiAbThreadInsertList @ 0x14024E470 (KiAbThreadInsertList.c)
 *     KiAbQueueAutoBoostDpc @ 0x140253AF0 (KiAbQueueAutoBoostDpc.c)
 *     KxAcquireSpinLock @ 0x140254AE0 (KxAcquireSpinLock.c)
 *     KeAbPostReleaseEx @ 0x14025CCE0 (KeAbPostReleaseEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14025E408 (KiRemoveSystemWorkPriorityKick.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140275CD0 (KeReleaseInStackQueuedSpinLock.c)
 *     EtwpGetTrackingLockSlotForThread @ 0x140277718 (EtwpGetTrackingLockSlotForThread.c)
 *     ExpWaitForResource @ 0x140277840 (ExpWaitForResource.c)
 *     ExpApplyPriorityBoost @ 0x140277A10 (ExpApplyPriorityBoost.c)
 *     PsBoostThreadOutstandingIoQoS @ 0x1402788E0 (PsBoostThreadOutstandingIoQoS.c)
 *     IoBoostThreadIoPriority @ 0x140278D90 (IoBoostThreadIoPriority.c)
 *     KxReleaseSpinLock @ 0x140279CC0 (KxReleaseSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x1402D6990 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402D85F0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KeWakeAddressAll @ 0x140321AA0 (KeWakeAddressAll.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140321C90 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KxWaitForLockChainValid @ 0x140321D40 (KxWaitForLockChainValid.c)
 *     KiHaltOnAddressWakeEntireList @ 0x140321D94 (KiHaltOnAddressWakeEntireList.c)
 *     KeDisableInterrupts @ 0x140321E80 (KeDisableInterrupts.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x1403403E0 (ObfReferenceObjectWithTag.c)
 *     ExpAcquireFastResourceExclusiveSlow @ 0x1403DD330 (ExpAcquireFastResourceExclusiveSlow.c)
 *     KeAbMarkCrossThreadReleasable @ 0x1403DD90C (KeAbMarkCrossThreadReleasable.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 */

BOOLEAN __stdcall ExAcquireResourceExclusiveLite(PERESOURCE Resource, BOOLEAN Wait)
{
  __int64 v2; // r8
  __int64 v3; // r9
  USHORT Flag; // cx
  __int64 v7; // rsi
  struct _KTHREAD *CurrentThread; // r13
  bool v9; // r15
  KSPIN_LOCK *p_SpinLock; // rdi
  unsigned __int8 CurrentIrql; // r14
  __int64 v12; // rdx
  BOOLEAN v13; // r12
  ULONG v14; // eax
  unsigned __int64 OldIrql; // rdi
  struct _KPRCB *CurrentPrcb; // r15
  unsigned __int64 v17; // rdi
  unsigned __int8 GroupIndex; // al
  __int16 Group; // r13
  __int64 TrackingLockSlotForThread; // rax
  int v21; // ecx
  __int64 Next; // rax
  unsigned __int64 *volatile Lock; // rcx
  char v25; // di
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rcx
  struct _KPRCB *v29; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v31; // eax
  signed __int32 v32; // ett
  _QWORD *ExclusiveWaiters; // rax
  PVOID *v34; // rcx
  ULONG v35; // edi
  ULONG v36; // edi
  struct _KPRCB *v37; // rsi
  ULONG ContentionCount; // r15d
  __int16 v39; // ax
  __int64 v40; // rax
  unsigned __int64 v41; // r14
  struct _KPRCB *v42; // r14
  unsigned __int64 v43; // r12
  __int16 v44; // cx
  __int64 v45; // rax
  int v46; // ecx
  struct _KTHREAD *v47; // r8
  int v48; // edx
  int v49; // ecx
  unsigned __int64 v50; // rax
  int v51; // eax
  int v52; // r9d
  int v53; // edx
  USHORT v54; // ax
  int v55; // edx
  int v56; // ecx
  unsigned __int64 v57; // rax
  int v58; // eax
  int v59; // r12d
  ULONG_PTR v60; // rax
  ERESOURCE_THREAD OwnerThread; // rax
  OWNER_ENTRY *p_OwnerEntry; // rdi
  POWNER_ENTRY OwnerTable; // rdi
  unsigned __int64 v64; // rcx
  unsigned __int64 v65; // rdx
  POWNER_ENTRY v66; // r9
  struct _KPRCB *v67; // r15
  unsigned __int64 v68; // rdi
  __int16 v69; // r13
  unsigned __int8 v70; // r12
  __int64 v71; // rax
  __int64 v72; // rax
  unsigned __int64 *volatile v73; // rdx
  OWNER_ENTRY *v74; // r8
  ULONG_PTR v75; // rax
  unsigned __int64 v76; // rdi
  char v77; // r12
  char v78; // al
  int v79; // r15d
  unsigned __int8 v80; // al
  unsigned __int8 v81; // dl
  struct _KTHREAD *v82; // r8
  ULONG_PTR v83; // rdx
  signed __int64 v84; // rax
  ULONG *p_ActiveEntries; // r13
  char v86; // al
  ULONG **v87; // rax
  _QWORD *v88; // rcx
  struct _KPRCB *v89; // rcx
  signed __int32 *v90; // r8
  signed __int32 v91; // eax
  signed __int32 v92; // ett
  unsigned __int8 v93; // dl
  struct _KTHREAD *v94; // r9
  signed __int32 v95[6]; // [rsp+8h] [rbp-A9h] BYREF
  PVOID SystemArgument1; // [rsp+38h] [rbp-79h]
  unsigned __int8 v97; // [rsp+40h] [rbp-71h]
  ULONG_PTR v98; // [rsp+48h] [rbp-69h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-61h] BYREF
  PVOID v100; // [rsp+68h] [rbp-49h] BYREF
  PVOID *v101; // [rsp+70h] [rbp-41h]
  struct _KTHREAD *v102; // [rsp+78h] [rbp-39h]
  __int64 v103; // [rsp+80h] [rbp-31h]
  _QWORD v104[3]; // [rsp+88h] [rbp-29h] BYREF
  struct _KLOCK_QUEUE_HANDLE v105; // [rsp+A0h] [rbp-11h] BYREF
  __int128 v106; // [rsp+B8h] [rbp+7h]
  __int128 v107; // [rsp+C8h] [rbp+17h]
  __int128 v108; // [rsp+D8h] [rbp+27h]
  _UNKNOWN *retaddr; // [rsp+110h] [rbp+5Fh]

  Flag = Resource->Flag;
  LOBYTE(v2) = (Wait == 0) + 1;
  v7 = 0LL;
  if ( (Flag & 0x41) == 1 )
    KeBugCheckEx(0x1C6u, 0xFuLL, (ULONG_PTR)Resource, 0LL, 0LL);
  if ( (Flag & 1) == 0 )
  {
    v101 = 0LL;
    *(_QWORD *)&LockHandle.OldIrql = 0LL;
    BYTE3(v103) = 0;
    CurrentThread = KeGetCurrentThread();
    v9 = (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0;
    __incgsdword(0x9078u);
    p_SpinLock = &Resource->SpinLock;
    LockHandle.LockQueue.Lock = &Resource->SpinLock;
    LockHandle.LockQueue.Next = 0LL;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
    LockHandle.OldIrql = CurrentIrql;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      v12 = _InterlockedExchange64((volatile __int64 *)p_SpinLock, (__int64)&LockHandle);
      if ( v12 )
        KxWaitForLockOwnerShip(&LockHandle);
    }
    else
    {
      KiAcquireQueuedSpinLockInstrumented(&LockHandle, &Resource->SpinLock);
    }
    if ( !Resource->ActiveEntries )
    {
      Resource->OwnerEntry.OwnerThread = (ERESOURCE_THREAD)CurrentThread;
      Resource->ActiveCount = 1;
      Resource->Flag |= 0x80u;
      v13 = 1;
      v14 = Resource->OwnerEntry.TableSize & 7;
      Resource->ActiveEntries = 1;
      Resource->OwnerEntry.TableSize = v14 | 8;
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 && !PopHibernateInProgress )
      {
        KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
LABEL_12:
        OldIrql = LockHandle.OldIrql;
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), LockHandle.OldIrql);
        __writecr8(OldIrql);
        __incgsdword(0x907Cu);
        __incgsdword(0x9064u);
        if ( v9 )
        {
          LODWORD(v98) = Resource->ContentionCount;
          LODWORD(SystemArgument1) = 0;
          CurrentPrcb = KeGetCurrentPrcb();
          v17 = __rdtsc();
          GroupIndex = CurrentPrcb->GroupIndex;
          Group = CurrentPrcb->Group;
          ++CurrentPrcb->SynchCounters.ExEtwSynchTrackingNotificationsCount;
          LOWORD(SystemArgument1) = Group;
          v97 = GroupIndex;
          BYTE2(SystemArgument1) = GroupIndex;
          TrackingLockSlotForThread = EtwpGetTrackingLockSlotForThread(Resource, 0x10000LL);
          if ( TrackingLockSlotForThread )
          {
            ++CurrentPrcb->SynchCounters.ExEtwSynchTrackingNotificationsAccountedCount;
            v21 = *(_DWORD *)(TrackingLockSlotForThread + 32);
            *(_QWORD *)(TrackingLockSlotForThread + 8) = v17;
            if ( v21 == 4 )
            {
              if ( *(_WORD *)(TrackingLockSlotForThread + 24) == Group
                && *(_BYTE *)(TrackingLockSlotForThread + 26) == v97 )
              {
                *(_QWORD *)TrackingLockSlotForThread = v17 - *(_QWORD *)TrackingLockSlotForThread;
              }
              else
              {
                *(_QWORD *)TrackingLockSlotForThread = 1LL;
              }
            }
            else
            {
              *(_QWORD *)TrackingLockSlotForThread = 0LL;
            }
            *(_DWORD *)(TrackingLockSlotForThread + 24) = (_DWORD)SystemArgument1;
            *(_DWORD *)(TrackingLockSlotForThread + 44) = v98;
            *(_DWORD *)(TrackingLockSlotForThread + 32) = 1;
            *(_DWORD *)(TrackingLockSlotForThread + 36) = 1;
          }
        }
        return v13;
      }
      _m_prefetchw(&LockHandle);
      Next = (__int64)LockHandle.LockQueue.Next;
      if ( !LockHandle.LockQueue.Next )
      {
        if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                             (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                             0LL,
                                             (signed __int64)&LockHandle) == &LockHandle )
          goto LABEL_12;
        Next = KxWaitForLockChainValid(&LockHandle);
      }
      LockHandle.LockQueue.Next = 0LL;
      Lock = LockHandle.LockQueue.Lock;
      if ( (((unsigned __int8)Lock ^ (unsigned __int8)_InterlockedExchange64(
                                                        (volatile __int64 *)(Next + 8),
                                                        (__int64)LockHandle.LockQueue.Lock)) & 4) != 0 )
      {
        _InterlockedOr(v95, 0);
        v25 = KeDisableInterrupts(Lock, v12, ((unsigned __int64)(Next + 8) >> 5) & 0x7F);
        KiHaltOnAddressWakeEntireList(v28, _InterlockedExchange64((volatile __int64 *)(v27 + 8 * v26), 0LL));
        if ( v25 )
        {
          v29 = KeGetCurrentPrcb();
          SchedulerAssist = (signed __int32 *)v29->SchedulerAssist;
          if ( SchedulerAssist )
          {
            _m_prefetchw(SchedulerAssist);
            v31 = *SchedulerAssist;
            do
            {
              v32 = v31;
              v31 = _InterlockedCompareExchange(SchedulerAssist, v31 & 0xFFDFFFFF, v31);
            }
            while ( v32 != v31 );
            if ( (v31 & 0x200000) != 0 )
              KiRemoveSystemWorkPriorityKick((__int64)v29);
          }
          _enable();
        }
      }
      goto LABEL_12;
    }
    if ( (Resource->ReservedLowFlags & 0x80u) != 0
      && (struct _KTHREAD *)Resource->OwnerEntry.OwnerThread == CurrentThread )
    {
      v35 = (Resource->OwnerEntry.TableSize + 8) ^ ((unsigned __int8)(Resource->OwnerEntry.TableSize + 8) ^ (unsigned __int8)*(_DWORD *)&Resource->OwnerEntry.0) & 7;
      Resource->OwnerEntry.TableSize = v35;
      v36 = v35 >> 3;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      __incgsdword(0x9080u);
      __incgsdword(0x9064u);
      if ( v9 )
      {
        v37 = KeGetCurrentPrcb();
        ContentionCount = Resource->ContentionCount;
        BYTE3(SystemArgument1) = 0;
        v39 = v37->Group;
        ++v37->SynchCounters.ExEtwSynchTrackingNotificationsCount;
        LOWORD(SystemArgument1) = v39;
        BYTE2(SystemArgument1) = v37->GroupIndex;
        v40 = EtwpGetTrackingLockSlotForThread(Resource, 0x10000LL);
        if ( v40 )
        {
          ++v37->SynchCounters.ExEtwSynchTrackingNotificationsAccountedCount;
          if ( *(_DWORD *)(v40 + 32) )
          {
            if ( *(_DWORD *)(v40 + 36) < v36 )
              *(_DWORD *)(v40 + 36) = v36;
          }
          else
          {
            *(_QWORD *)v40 = 1LL;
            *(_QWORD *)(v40 + 8) = 2LL;
            *(_DWORD *)(v40 + 24) = (_DWORD)SystemArgument1;
            *(_DWORD *)(v40 + 36) = v36;
            *(_DWORD *)(v40 + 44) = ContentionCount;
          }
          *(_DWORD *)(v40 + 32) = 1;
        }
      }
      return 1;
    }
    if ( !Wait )
    {
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      __incgsdword(0x9088u);
      return 0;
    }
    ++Resource->NumberOfExclusiveWaiters;
    v104[1] = v104;
    v104[0] = v104;
    ExclusiveWaiters = Resource->ExclusiveWaiters;
    v100 = 0LL;
    v101 = 0LL;
    v103 = 393217LL;
    v102 = CurrentThread;
    v104[2] = 0LL;
    if ( ExclusiveWaiters )
    {
      v34 = (PVOID *)ExclusiveWaiters[1];
      if ( *v34 != ExclusiveWaiters )
        goto LABEL_43;
      v101 = (PVOID *)ExclusiveWaiters[1];
      v100 = ExclusiveWaiters;
      *v34 = &v100;
      ExclusiveWaiters[1] = &v100;
    }
    else
    {
      v101 = &v100;
      v100 = &v100;
      Resource->ExclusiveWaiters = &v100;
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 && !PopHibernateInProgress )
    {
      KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
LABEL_54:
      v41 = LockHandle.OldIrql;
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), LockHandle.OldIrql);
      __writecr8(v41);
      __incgsdword(0x9084u);
      if ( v9 )
      {
        v106 = 0LL;
        v107 = 0LL;
        v108 = 0LL;
        v42 = KeGetCurrentPrcb();
        BYTE3(SystemArgument1) = 0;
        v43 = __rdtsc();
        v44 = v42->Group;
        ++v42->SynchCounters.ExEtwSynchTrackingNotificationsCount;
        LOWORD(SystemArgument1) = v44;
        BYTE2(SystemArgument1) = v42->GroupIndex;
        v45 = EtwpGetTrackingLockSlotForThread(Resource, 0x10000LL);
        if ( v45 )
        {
          ++v42->SynchCounters.ExEtwSynchTrackingNotificationsAccountedCount;
          v46 = (int)SystemArgument1;
          *(_DWORD *)(v45 + 32) = 4;
          *(_QWORD *)v45 = v43;
          *(_DWORD *)(v45 + 24) = v46;
        }
      }
      v47 = KeGetCurrentThread();
      v48 = 0;
      v49 = (*((_DWORD *)&v47[1].SwapListEntry + 2) >> 9) & 7;
      v50 = v47->Process[1].Padding[3];
      if ( v50 )
      {
        v51 = *(_DWORD *)(v50 + 1084);
        if ( v49 >= v51 )
          v49 = v51;
      }
      if ( (v49 < 2 && v47 == KeGetCurrentThread() && LODWORD(v47[1].Timer.TimerListEntry.Flink) || v49 > 1)
        && (Resource->ReservedLowFlags & 4) == 0 )
      {
        v48 = 4;
      }
      v52 = v48 | 2;
      if ( (Resource->ReservedLowFlags & 2) != 0 )
        v52 = v48;
      v53 = v52 | 0xFF00;
      if ( v47->Priority <= (int)Resource->WaiterPriority )
        v53 = v52;
      if ( v53 )
        ExpApplyPriorityBoost(Resource);
      ExpWaitForResource(Resource, &v100, 66084LL);
      v54 = Resource->Flag;
      memset(&v105, 0, sizeof(v105));
      if ( (v54 & 8) == 0 )
      {
        v55 = 0;
        if ( (v54 & 4) != 0 )
        {
          v56 = (*((_DWORD *)&CurrentThread[1].SwapListEntry + 2) >> 9) & 7;
          v57 = CurrentThread->Process[1].Padding[3];
          if ( v57 )
          {
            v58 = *(_DWORD *)(v57 + 1084);
            if ( v56 >= v58 )
              v56 = v58;
          }
          if ( v56 < 2 )
            v55 = 4;
        }
        v59 = v55 | 2;
        if ( (Resource->ReservedLowFlags & 2) == 0 )
          v59 = v55;
        if ( v59 )
        {
          v105.LockQueue.Lock = &Resource->SpinLock;
          v105.LockQueue.Next = 0LL;
          v60 = KeGetCurrentIrql();
          v98 = v60;
          __writecr8(2uLL);
          if ( KiIrqlFlags )
          {
            KiRaiseIrqlProcessIrqlFlags((unsigned __int8)v60, 2LL);
            LOBYTE(v60) = v98;
          }
          v105.OldIrql = v60;
          if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
          {
            if ( _InterlockedExchange64((volatile __int64 *)p_SpinLock, (__int64)&v105) )
              KxWaitForLockOwnerShip(&v105);
          }
          else
          {
            KiAcquireQueuedSpinLockInstrumented(&v105, &Resource->SpinLock);
          }
          OwnerThread = Resource->OwnerEntry.OwnerThread;
          p_OwnerEntry = &Resource->OwnerEntry;
          if ( (struct _KTHREAD *)OwnerThread != CurrentThread )
          {
            OwnerTable = Resource->OwnerTable;
            v64 = OwnerThread != 0;
            v65 = Resource->ActiveEntries + (unsigned __int64)Resource->NumberOfSharedWaiters;
            v66 = OwnerTable;
            if ( OwnerTable && (v74 = &OwnerTable[OwnerTable->TableSize], p_OwnerEntry = OwnerTable + 1, v64 < v65) )
            {
              while ( (struct _KTHREAD *)p_OwnerEntry->OwnerThread != CurrentThread )
              {
                if ( !p_OwnerEntry->OwnerThread || (++v64, v64 != v65) )
                {
                  if ( ++p_OwnerEntry != v74 )
                    continue;
                }
                goto LABEL_89;
              }
              KeGetCurrentThread()->ResourceIndex = p_OwnerEntry - v66;
            }
            else
            {
LABEL_89:
              p_OwnerEntry = 0LL;
            }
          }
          if ( (v59 & 4) != 0 )
          {
            if ( (p_OwnerEntry->TableSize & 1) != 0 )
            {
              v59 &= ~4u;
            }
            else
            {
              PsBoostThreadIoEx((__int64)CurrentThread, 0, 0LL, 0LL);
              p_OwnerEntry->TableSize |= 1u;
            }
          }
          if ( (v59 & 2) != 0 )
          {
            if ( (p_OwnerEntry->TableSize & 4) != 0 )
            {
              v59 &= ~2u;
            }
            else
            {
              if ( _InterlockedIncrement((volatile signed __int32 *)&CurrentThread[1].Timer.TimerListEntry.Flink + 1) == 1
                && CurrentThread->AbWaitEntryCount )
              {
                v75 = KeGetCurrentIrql();
                v98 = v75;
                __writecr8(2uLL);
                if ( KiIrqlFlags )
                  KiRaiseIrqlProcessIrqlFlags((unsigned __int8)v75, 2LL);
                SystemArgument1 = KeGetCurrentPrcb();
                if ( (unsigned int)KiAbThreadInsertList(
                                     (__int64)CurrentThread,
                                     (_QWORD *)SystemArgument1 + 4655,
                                     &CurrentThread->PropagateBoostsEntry.Next) )
                  KiAbQueueAutoBoostDpc((struct _KDPC *)SystemArgument1);
                if ( KiIrqlFlags )
                  KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v98);
                __writecr8((unsigned __int8)v98);
              }
              p_OwnerEntry->TableSize |= 4u;
            }
          }
          KeReleaseInStackQueuedSpinLock(&v105);
          if ( v59 )
          {
            if ( (v59 & 4) != 0 )
              IoBoostThreadIoPriority(CurrentThread, 2LL, 0LL);
            if ( (v59 & 2) != 0 )
              PsBoostThreadOutstandingIoQoS(CurrentThread);
          }
        }
      }
      __incgsdword(0x907Cu);
      __incgsdword(0x9064u);
      if ( v9 )
      {
        LODWORD(v98) = Resource->ContentionCount;
        LODWORD(SystemArgument1) = 0;
        v67 = KeGetCurrentPrcb();
        v68 = __rdtsc();
        v69 = v67->Group;
        v70 = v67->GroupIndex;
        ++v67->SynchCounters.ExEtwSynchTrackingNotificationsCount;
        LOWORD(SystemArgument1) = v69;
        BYTE2(SystemArgument1) = v70;
        v71 = EtwpGetTrackingLockSlotForThread(Resource, 0x10000LL);
        if ( v71 )
        {
          ++v67->SynchCounters.ExEtwSynchTrackingNotificationsAccountedCount;
          *(_QWORD *)(v71 + 8) = v68;
          if ( *(_DWORD *)(v71 + 32) == 4 )
          {
            if ( *(_WORD *)(v71 + 24) == v69 && *(_BYTE *)(v71 + 26) == v70 )
              *(_QWORD *)v71 = v68 - *(_QWORD *)v71;
            else
              *(_QWORD *)v71 = 1LL;
          }
          else
          {
            *(_QWORD *)v71 = 0LL;
          }
          *(_DWORD *)(v71 + 24) = (_DWORD)SystemArgument1;
          *(_DWORD *)(v71 + 44) = v98;
          *(_DWORD *)(v71 + 32) = 1;
          *(_DWORD *)(v71 + 36) = 1;
        }
      }
      return 1;
    }
    _m_prefetchw(&LockHandle);
    v72 = (__int64)LockHandle.LockQueue.Next;
    if ( !LockHandle.LockQueue.Next )
    {
      if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                           (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                           0LL,
                                           (signed __int64)&LockHandle) == &LockHandle )
        goto LABEL_54;
      v72 = KxWaitForLockChainValid(&LockHandle);
    }
    LockHandle.LockQueue.Next = 0LL;
    v73 = LockHandle.LockQueue.Lock;
    if ( (((unsigned __int8)v73 ^ (unsigned __int8)_InterlockedExchange64(
                                                     (volatile __int64 *)(v72 + 8),
                                                     (__int64)LockHandle.LockQueue.Lock)) & 4) != 0 )
      KeWakeAddressAll(v72 + 8, v73, v2, v3);
    goto LABEL_54;
  }
  v93 = KeGetCurrentIrql();
  v94 = KeGetCurrentThread();
  if ( v93 > (unsigned __int8)v2 )
    KeBugCheckEx(0x1C6u, 0LL, v93, (unsigned __int8)v2, 0LL);
  if ( v93 >= 2u && (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
LABEL_154:
    KeBugCheckEx(0x1C6u, 5uLL, 0LL, 0LL, 0LL);
  if ( (v94->ApcState.InProgressFlags & 2) != 0 )
LABEL_148:
    KeBugCheckEx(0x1C6u, 6uLL, 0LL, 0LL, 0LL);
  if ( !v93 && (v94->MiscFlags & 0x400) == 0 && !v94->WaitBlock[3].SpareLong )
    goto LABEL_152;
  v76 = (unsigned __int64)KeGetCurrentThread();
  if ( Wait )
  {
    v77 = 9;
    v78 = 1;
    v79 = 8;
  }
  else
  {
    v79 = 0;
    v78 = 0;
    v77 = 1;
  }
  v80 = (v78 ^ 1) + 1;
  v81 = KeGetCurrentIrql();
  v82 = KeGetCurrentThread();
  if ( v81 > v80 )
    KeBugCheckEx(0x1C6u, 0LL, v81, v80, 0LL);
  if ( v81 >= 2u && (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
    goto LABEL_154;
  if ( (Flag & 8) == 0 && (v82->ApcState.InProgressFlags & 2) != 0 )
    goto LABEL_148;
  if ( !v81 && (v82->MiscFlags & 0x400) == 0 && !v82->WaitBlock[3].SpareLong )
LABEL_152:
    KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
  v83 = KeAbPreAcquire(Resource, 0LL, v79 == 0);
  v98 = v83;
  v84 = _InterlockedCompareExchange64((volatile signed __int64 *)Resource, 1LL, 0LL);
  p_ActiveEntries = &Resource->ActiveEntries;
  if ( !v84 )
  {
    LODWORD(Resource->SpinLock) = 1;
    LOBYTE(v7) = 0;
    Resource->Reserved2 = (PVOID)(v76 | v7);
    if ( v83 )
    {
      v86 = *(_BYTE *)(v83 + 8);
      *(_BYTE *)(v83 + 10) = 1;
      BYTE4(Resource->SpinLock) = (2 * (v86 & 0x3F)) | 1;
    }
    _disable();
    v87 = (ULONG **)(v76 + 1720);
    v88 = *(_QWORD **)(v76 + 1720);
    if ( v88[1] != v76 + 1720 )
LABEL_43:
      __fastfail(3u);
    *(_QWORD *)p_ActiveEntries = v88;
    *(_QWORD *)&Resource->NumberOfSharedWaiters = v87;
    v88[1] = p_ActiveEntries;
    *v87 = p_ActiveEntries;
    v89 = KeGetCurrentPrcb();
    v90 = (signed __int32 *)v89->SchedulerAssist;
    if ( v90 )
    {
      _m_prefetchw(v90);
      v91 = *v90;
      do
      {
        v92 = v91;
        v91 = _InterlockedCompareExchange(v90, v91 & 0xFFDFFFFF, v91);
      }
      while ( v92 != v91 );
      if ( (v91 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick((__int64)v89);
    }
    _enable();
    return 1;
  }
  if ( Resource->Reserved2 == (PVOID)v76 )
  {
    ++LODWORD(Resource->SpinLock);
    if ( !v83 )
      return 1;
    KeAbPostReleaseEx((ULONG_PTR)Resource, v83);
    return 1;
  }
  else
  {
    if ( v79 )
    {
      ExpAcquireFastResourceExclusiveSlow((_DWORD)Resource, v84, v76, v83, v77);
      return 1;
    }
    if ( v83 )
      KeAbPostReleaseEx((ULONG_PTR)Resource, v83);
    return 0;
  }
}
