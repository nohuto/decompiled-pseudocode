/*
 * XREFs of ExAcquireResourceExclusiveLite @ 0x14022BF50
 * Callers:
 *     CcPinFileData @ 0x1402282C0 (CcPinFileData.c)
 *     ExEnterCriticalRegionAndAcquireResourceExclusive @ 0x14022BF10 (ExEnterCriticalRegionAndAcquireResourceExclusive.c)
 *     FsRtlAcquireFileForModWriteEx @ 0x14025B37C (FsRtlAcquireFileForModWriteEx.c)
 *     MiAcquireLoadLock @ 0x1402BBB18 (MiAcquireLoadLock.c)
 *     SepInternalSetSecurityAttributesToken @ 0x1403B9324 (SepInternalSetSecurityAttributesToken.c)
 *     SepRmCallLsa @ 0x1403C17F0 (SepRmCallLsa.c)
 *     SepQueueWorkItem @ 0x1403C35C4 (SepQueueWorkItem.c)
 *     PnpUnregisterPlugPlayNotification @ 0x140469950 (PnpUnregisterPlugPlayNotification.c)
 *     CcUnpinRepinnedBcb @ 0x14048F410 (CcUnpinRepinnedBcb.c)
 *     SeTokenSetRedirectionTrustPolicy @ 0x140491F2C (SeTokenSetRedirectionTrustPolicy.c)
 *     PfResourceExclusiveAcquire @ 0x140499D88 (PfResourceExclusiveAcquire.c)
 *     SeTokenSetNoChildProcessRestricted @ 0x1404B4294 (SeTokenSetNoChildProcessRestricted.c)
 *     PiDmaGuardQueueRemoveEntry @ 0x1404B84B4 (PiDmaGuardQueueRemoveEntry.c)
 *     CcAcquireByteRangeForWrite @ 0x1404D5E90 (CcAcquireByteRangeForWrite.c)
 *     IoCaptureLiveDump @ 0x1404DC764 (IoCaptureLiveDump.c)
 *     SepDesktopAppxSubProcessToken @ 0x1404EBED4 (SepDesktopAppxSubProcessToken.c)
 *     IoConfigureCrashDump @ 0x14058DDD4 (IoConfigureCrashDump.c)
 *     IoUpdateDumpPhysicalRanges @ 0x14058F55C (IoUpdateDumpPhysicalRanges.c)
 *     IoSetDeferredLiveDumpFileHandle @ 0x140594AE4 (IoSetDeferredLiveDumpFileHandle.c)
 *     PiDrvDbUnloadNodeWaitWorkerCallback @ 0x1405A6880 (PiDrvDbUnloadNodeWaitWorkerCallback.c)
 *     RtlpAllocateHeap @ 0x1405E7EFC (RtlpAllocateHeap.c)
 *     RtlpFreeHeap @ 0x1405E9FB0 (RtlpFreeHeap.c)
 *     RtlpSetupExtendedBlock @ 0x1405EAD40 (RtlpSetupExtendedBlock.c)
 *     SepCreateAppContainerToken @ 0x140606A30 (SepCreateAppContainerToken.c)
 *     SeSetSecurityAttributesTokenEx @ 0x140607780 (SeSetSecurityAttributesTokenEx.c)
 *     DifExAcquireResourceExclusiveLiteWrapper @ 0x14061A190 (DifExAcquireResourceExclusiveLiteWrapper.c)
 *     ExEnterPriorityRegionAndAcquireResourceExclusive @ 0x1406554A0 (ExEnterPriorityRegionAndAcquireResourceExclusive.c)
 *     TtmpAcquireSessionLock @ 0x1406F53C8 (TtmpAcquireSessionLock.c)
 *     FsRtlPrepareMdlWriteDev @ 0x140708070 (FsRtlPrepareMdlWriteDev.c)
 *     FsRtlDedupChangeUninit @ 0x14070A650 (FsRtlDedupChangeUninit.c)
 *     FsRtlpDedupChangeRegisterVolume @ 0x14070A880 (FsRtlpDedupChangeRegisterVolume.c)
 *     FsRtlpHeatRegisterVolume @ 0x14070B27C (FsRtlpHeatRegisterVolume.c)
 *     FsRtlpHeatUnregisterVolume @ 0x14070B420 (FsRtlpHeatUnregisterVolume.c)
 *     IoInitializeCrashDump @ 0x14070E5F8 (IoInitializeCrashDump.c)
 *     IopBootLogToFile @ 0x14070F5C4 (IopBootLogToFile.c)
 *     IopCopyBootLogRegistryToFile @ 0x14070FA0C (IopCopyBootLogRegistryToFile.c)
 *     IopInitializeBootLogging @ 0x14070FFB8 (IopInitializeBootLogging.c)
 *     IoEnumerateRegisteredFiltersList @ 0x140711C10 (IoEnumerateRegisteredFiltersList.c)
 *     IoRegisterFileSystem @ 0x140711E80 (IoRegisterFileSystem.c)
 *     IoRegisterFsRegistrationChangeMountAware @ 0x140712050 (IoRegisterFsRegistrationChangeMountAware.c)
 *     IoUnregisterFileSystem @ 0x1407128D0 (IoUnregisterFileSystem.c)
 *     IoUnregisterFsRegistrationChange @ 0x140712990 (IoUnregisterFsRegistrationChange.c)
 *     IoReportDetectedDevice @ 0x14071A3E0 (IoReportDetectedDevice.c)
 *     IoReportRootDevice @ 0x14071AE90 (IoReportRootDevice.c)
 *     PiGetDeviceRegistryProperty @ 0x14071C7B8 (PiGetDeviceRegistryProperty.c)
 *     PnpNotifyHwProfileChange @ 0x14071E214 (PnpNotifyHwProfileChange.c)
 *     PnpNotifyTargetDeviceChangeNotifyEntry @ 0x14071E464 (PnpNotifyTargetDeviceChangeNotifyEntry.c)
 *     PpReleaseBootDDB @ 0x140722A54 (PpReleaseBootDDB.c)
 *     PpDevCfgProcessDevices @ 0x14072B0A4 (PpDevCfgProcessDevices.c)
 *     PiCMDeleteDeviceWorker @ 0x14072F100 (PiCMDeleteDeviceWorker.c)
 *     PiCMGenerateDeviceInstance @ 0x14072F37C (PiCMGenerateDeviceInstance.c)
 *     PipKsrNotifyDrivers @ 0x14073216C (PipKsrNotifyDrivers.c)
 *     PiInitializeDevice @ 0x14073293C (PiInitializeDevice.c)
 *     PiDmaGuardQueueInsertEntry @ 0x1407382D0 (PiDmaGuardQueueInsertEntry.c)
 *     TtmiResetInactivityTimer @ 0x14076FCB0 (TtmiResetInactivityTimer.c)
 *     TtmpWnfInactivityTimeoutCallback @ 0x140770950 (TtmpWnfInactivityTimeoutCallback.c)
 *     TtmpAcquireQueueLock @ 0x140770F08 (TtmpAcquireQueueLock.c)
 *     PspSetIoPriorityLimitJobTree @ 0x140777F64 (PspSetIoPriorityLimitJobTree.c)
 *     PspSetJobMemoryPartition @ 0x140778014 (PspSetJobMemoryPartition.c)
 *     PspSetPagePriorityLimitJobTree @ 0x1407786B0 (PspSetPagePriorityLimitJobTree.c)
 *     RtlZeroHeap @ 0x1407831B0 (RtlZeroHeap.c)
 *     SeSetPrivateNameSpaceToken @ 0x14078F808 (SeSetPrivateNameSpaceToken.c)
 *     SepSetServerSiloToken @ 0x14078FBD8 (SepSetServerSiloToken.c)
 *     SeExchangePrimaryToken @ 0x140792C70 (SeExchangePrimaryToken.c)
 *     SepAddTokenLogonSession @ 0x140793610 (SepAddTokenLogonSession.c)
 *     SepDeleteUnreferencedLogonSessionsInSilo @ 0x140793708 (SepDeleteUnreferencedLogonSessionsInSilo.c)
 *     SepMakeLogonSessionsSiblings @ 0x1407938A4 (SepMakeLogonSessionsSiblings.c)
 *     SepRemoveTokenLogonSession @ 0x140793AF8 (SepRemoveTokenLogonSession.c)
 *     SepRmGlobalSaclSetWrkr @ 0x1407948C0 (SepRmGlobalSaclSetWrkr.c)
 *     WmiAcquireSmbiosLockExclusive @ 0x1407A4124 (WmiAcquireSmbiosLockExclusive.c)
 *     ExpRegisterFirmwareTableInformationHandler @ 0x1407B5AA0 (ExpRegisterFirmwareTableInformationHandler.c)
 *     NtFlushInstallUILanguage @ 0x1407C41A0 (NtFlushInstallUILanguage.c)
 *     NtMapCMFModule @ 0x1407C42B0 (NtMapCMFModule.c)
 *     _PnpCtxCloseMachine @ 0x140817930 (_PnpCtxCloseMachine.c)
 *     DrvDbSetDriverDatabaseMappedProperty @ 0x140822E34 (DrvDbSetDriverDatabaseMappedProperty.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x140858A1C (PspAllocateAndQueryNotificationChannel.c)
 *     PspLockRootJobExclusive @ 0x140858E9C (PspLockRootJobExclusive.c)
 *     PspSetJobIoRateControl @ 0x14085A388 (PspSetJobIoRateControl.c)
 *     PspLockJobConditionally @ 0x14085A6BC (PspLockJobConditionally.c)
 *     PspSetEnergyTrackingStateJobTree @ 0x14085B860 (PspSetEnergyTrackingStateJobTree.c)
 *     PspSendProcessNotificationToJobChain @ 0x14085BFB0 (PspSendProcessNotificationToJobChain.c)
 *     PspLockJobExclusive @ 0x14085CC60 (PspLockJobExclusive.c)
 *     PspCallJobHierarchyCallbacks @ 0x14085D828 (PspCallJobHierarchyCallbacks.c)
 *     PspEnforceLimitsJobPostCallback @ 0x14085E4B0 (PspEnforceLimitsJobPostCallback.c)
 *     IopGetSetSecurityObject @ 0x14087DA20 (IopGetSetSecurityObject.c)
 *     CmpLockRegistryExclusive @ 0x140881C30 (CmpLockRegistryExclusive.c)
 *     IopDoDeferredSetInterfaceState @ 0x1408AFDC4 (IopDoDeferredSetInterfaceState.c)
 *     IopRegisterDeviceInterface @ 0x1408B141C (IopRegisterDeviceInterface.c)
 *     IoSetDeviceInterfaceState @ 0x1408B19A0 (IoSetDeviceInterfaceState.c)
 *     PiDmObjectManagerAcquireExclusiveLock @ 0x1408B2D34 (PiDmObjectManagerAcquireExclusiveLock.c)
 *     IoGetDeviceInterfaceAlias @ 0x1408B4A00 (IoGetDeviceInterfaceAlias.c)
 *     PiPnpRtlSetObjectProperty @ 0x1408B5E10 (PiPnpRtlSetObjectProperty.c)
 *     PiSwLock @ 0x1408B6E3C (PiSwLock.c)
 *     PiPnpRtlObjectEventWorker @ 0x1408B76F0 (PiPnpRtlObjectEventWorker.c)
 *     PipProcessDevNodeTree @ 0x1408B7FE0 (PipProcessDevNodeTree.c)
 *     IopGetDeviceInterfaces @ 0x1408C5EA0 (IopGetDeviceInterfaces.c)
 *     PiPnpRtlOperationListAcquireExclusiveLock @ 0x1408C9CCC (PiPnpRtlOperationListAcquireExclusiveLock.c)
 *     PiDqObjectManagerServiceActionQueue @ 0x1408D07C0 (PiDqObjectManagerServiceActionQueue.c)
 *     PspLockJobsAndProcessExclusive @ 0x1408D78C4 (PspLockJobsAndProcessExclusive.c)
 *     PspGetMemoryPartitionFromJobList @ 0x1408D7DF0 (PspGetMemoryPartitionFromJobList.c)
 *     PspLockJobChain @ 0x1408D7F38 (PspLockJobChain.c)
 *     PspApplyWorkingSetLimitsToProcess @ 0x1408D8304 (PspApplyWorkingSetLimitsToProcess.c)
 *     _CmGetDeviceSoftwareKeyPath @ 0x1408E0D10 (_CmGetDeviceSoftwareKeyPath.c)
 *     NtGetMUIRegistryInfo @ 0x1408F7D70 (NtGetMUIRegistryInfo.c)
 *     PspRemoveProcessFromJobChain @ 0x1408FF2D8 (PspRemoveProcessFromJobChain.c)
 *     DrvDbReleaseDatabaseNodeBaseKey @ 0x140927308 (DrvDbReleaseDatabaseNodeBaseKey.c)
 *     DrvDbAcquireDatabaseNodeBaseKey @ 0x1409273B0 (DrvDbAcquireDatabaseNodeBaseKey.c)
 *     DrvDbOpenObjectRegKey @ 0x140927630 (DrvDbOpenObjectRegKey.c)
 *     PiDrvDbNodeActionCallback @ 0x140927F50 (PiDrvDbNodeActionCallback.c)
 *     PiDrvDbLoadNode @ 0x140928080 (PiDrvDbLoadNode.c)
 *     NtAdjustPrivilegesToken @ 0x140984860 (NtAdjustPrivilegesToken.c)
 *     NtAdjustGroupsToken @ 0x140986940 (NtAdjustGroupsToken.c)
 *     FsRtlAcquireFileExclusiveCommon @ 0x14098C5C0 (FsRtlAcquireFileExclusiveCommon.c)
 *     PspSetQuotaLimits @ 0x140999A58 (PspSetQuotaLimits.c)
 *     PopAdaptiveGetBootIsUnattended @ 0x1409A04C0 (PopAdaptiveGetBootIsUnattended.c)
 *     PopIsLockConsoleTimeoutActive @ 0x1409A097C (PopIsLockConsoleTimeoutActive.c)
 *     PopSetDisplayStatus @ 0x1409A0A38 (PopSetDisplayStatus.c)
 *     PopAdaptiveGetBootTargetSystemState @ 0x1409A0B28 (PopAdaptiveGetBootTargetSystemState.c)
 *     PopUserPresenceHostStateChange @ 0x1409A0E18 (PopUserPresenceHostStateChange.c)
 *     PopAdaptiveGetBootIsSystemInitiated @ 0x1409A17BC (PopAdaptiveGetBootIsSystemInitiated.c)
 *     PopAdaptiveGetSessionState @ 0x1409A18F4 (PopAdaptiveGetSessionState.c)
 *     IopLoadDriver @ 0x1409B6EEC (IopLoadDriver.c)
 *     PpCheckInDriverDatabase @ 0x1409B89D4 (PpCheckInDriverDatabase.c)
 *     PnpDelayedRemoveWorker @ 0x1409BABD0 (PnpDelayedRemoveWorker.c)
 *     PpDeviceRegistration @ 0x1409BAF3C (PpDeviceRegistration.c)
 *     PnpProcessQueryRemoveAndEject @ 0x1409BBF7C (PnpProcessQueryRemoveAndEject.c)
 *     PnpQueuePendingSurpriseRemoval @ 0x1409BCDB8 (PnpQueuePendingSurpriseRemoval.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x1409BD1E4 (PnpUnlinkDeviceRemovalRelations.c)
 *     PnpAcquireDependencyRelationsLock @ 0x1409BD598 (PnpAcquireDependencyRelationsLock.c)
 *     PnpDisableDeviceInterfaces @ 0x1409BF2E8 (PnpDisableDeviceInterfaces.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x1409C1C10 (FsRtlAcquireFileForCcFlushEx.c)
 *     PiPnpRtlSetDeviceRegProperty @ 0x1409CDD3C (PiPnpRtlSetDeviceRegProperty.c)
 *     NtCreateTimer @ 0x1409EADF0 (NtCreateTimer.c)
 *     IoRegisterPlugPlayNotification @ 0x1409EB2A0 (IoRegisterPlugPlayNotification.c)
 *     PnpNotifyDeviceClassChange @ 0x1409EC16C (PnpNotifyDeviceClassChange.c)
 *     PnpNotifyTargetDeviceChange @ 0x1409EC4E0 (PnpNotifyTargetDeviceChange.c)
 *     PiDcHandleCustomDeviceEvent @ 0x1409EC964 (PiDcHandleCustomDeviceEvent.c)
 *     LockRMLog @ 0x140A01F68 (LockRMLog.c)
 *     PpDevNodeLockTree @ 0x140A05140 (PpDevNodeLockTree.c)
 *     SepCreateLogonSessionTrack @ 0x140A16FEC (SepCreateLogonSessionTrack.c)
 *     PopAcquireAdaptiveLock @ 0x140A24C58 (PopAcquireAdaptiveLock.c)
 *     SepReferenceLogonSessionSilo @ 0x140A25AB4 (SepReferenceLogonSessionSilo.c)
 *     FsRtlCopyWrite @ 0x140A2FA90 (FsRtlCopyWrite.c)
 *     SeSetMandatoryPolicyToken @ 0x140A412E4 (SeSetMandatoryPolicyToken.c)
 *     SepUpdateLogonSessionTrack @ 0x140A427E4 (SepUpdateLogonSessionTrack.c)
 *     SeSetSessionIdToken @ 0x140A471F8 (SeSetSessionIdToken.c)
 *     SepRmCommandServerThread @ 0x140A4A870 (SepRmCommandServerThread.c)
 *     PspSetBackgroundJobTree @ 0x140A50138 (PspSetBackgroundJobTree.c)
 *     IopSetDeviceSecurityDescriptor @ 0x140A524DC (IopSetDeviceSecurityDescriptor.c)
 *     IopGetRootDevices @ 0x140A5ADB8 (IopGetRootDevices.c)
 *     SepDeleteLogonSessionTrack @ 0x140A5CE20 (SepDeleteLogonSessionTrack.c)
 *     PspFreezeJobTree @ 0x140A67B30 (PspFreezeJobTree.c)
 *     AdtpBuildAccessesString @ 0x140A6BDDC (AdtpBuildAccessesString.c)
 *     IopBootLog @ 0x140A728F8 (IopBootLog.c)
 *     PiProcessNewDeviceNode @ 0x140A76864 (PiProcessNewDeviceNode.c)
 *     PnpSurpriseFailUnsafeDmaDevices @ 0x140A78A28 (PnpSurpriseFailUnsafeDmaDevices.c)
 *     PnpChainDereferenceComplete @ 0x140A83D94 (PnpChainDereferenceComplete.c)
 *     DrvDbOpenDriverDatabaseRegKey @ 0x140A85194 (DrvDbOpenDriverDatabaseRegKey.c)
 *     SeSetVirtualizationToken @ 0x140A86A68 (SeSetVirtualizationToken.c)
 *     PiDrvDbUnloadNodeWorkerCallback @ 0x140A92DE0 (PiDrvDbUnloadNodeWorkerCallback.c)
 *     PiDmaGuardQueueFlush @ 0x140A9D9A0 (PiDmaGuardQueueFlush.c)
 *     SeMarkLogonSessionForTerminationNotificationEx @ 0x140AA2360 (SeMarkLogonSessionForTerminationNotificationEx.c)
 *     PnpDeleteDeviceInterfaces @ 0x140AA2768 (PnpDeleteDeviceInterfaces.c)
 *     IoOpenDeviceInterfaceRegistryKey @ 0x140AA8C70 (IoOpenDeviceInterfaceRegistryKey.c)
 *     PiCMCreateDevice @ 0x140AB39A4 (PiCMCreateDevice.c)
 *     SepBlockAccessForLogonSession @ 0x140AB6B80 (SepBlockAccessForLogonSession.c)
 *     PnpGetDeviceInstanceRegistryValue @ 0x140AB78A0 (PnpGetDeviceInstanceRegistryValue.c)
 *     PiCMUnregisterDeviceInterface @ 0x140ABB188 (PiCMUnregisterDeviceInterface.c)
 *     NtSetInformationJobObject @ 0x140ACC7F0 (NtSetInformationJobObject.c)
 *     NtSetInformationToken @ 0x140AD4280 (NtSetInformationToken.c)
 *     NtCreateLowBoxToken @ 0x140AD5A60 (NtCreateLowBoxToken.c)
 *     SepDeReferenceLogonSession @ 0x140AD7224 (SepDeReferenceLogonSession.c)
 *     IoShutdownSystem @ 0x140B5579C (IoShutdownSystem.c)
 *     PopAcquirePolicyLock @ 0x140B69DF0 (PopAcquirePolicyLock.c)
 *     IopInitCrashDumpRegCallback @ 0x140C1EA90 (IopInitCrashDumpRegCallback.c)
 *     PipResetMatchingFilteredDevices @ 0x140C24080 (PipResetMatchingFilteredDevices.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x14022B260 (KeReleaseInStackQueuedSpinLock.c)
 *     EtwpGetTrackingLockSlotForThread @ 0x14022CCA8 (EtwpGetTrackingLockSlotForThread.c)
 *     ExpWaitForResource @ 0x14022CDD0 (ExpWaitForResource.c)
 *     ExpApplyPriorityBoost @ 0x14022CFA0 (ExpApplyPriorityBoost.c)
 *     PsBoostThreadOutstandingIoQoS @ 0x14022DE70 (PsBoostThreadOutstandingIoQoS.c)
 *     IoBoostThreadIoPriority @ 0x14022E320 (IoBoostThreadIoPriority.c)
 *     KxReleaseSpinLock @ 0x14022F250 (KxReleaseSpinLock.c)
 *     PsBoostThreadIoEx @ 0x14027E3A0 (PsBoostThreadIoEx.c)
 *     KiAbThreadInsertList @ 0x14027EA80 (KiAbThreadInsertList.c)
 *     KiAbQueueAutoBoostDpc @ 0x140284100 (KiAbQueueAutoBoostDpc.c)
 *     KxAcquireSpinLock @ 0x1402850F0 (KxAcquireSpinLock.c)
 *     KeAbPostReleaseEx @ 0x14028D2F0 (KeAbPostReleaseEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028EA18 (KiRemoveSystemWorkPriorityKick.c)
 *     KeWakeAddressAll @ 0x1402CA630 (KeWakeAddressAll.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1402CA820 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KxWaitForLockChainValid @ 0x1402CA8D0 (KxWaitForLockChainValid.c)
 *     KiHaltOnAddressWakeEntireList @ 0x1402CA924 (KiHaltOnAddressWakeEntireList.c)
 *     KeDisableInterrupts @ 0x1402CAA10 (KeDisableInterrupts.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x14031F8C0 (ObfReferenceObjectWithTag.c)
 *     KxWaitForLockOwnerShip @ 0x140357C10 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140359870 (KiAcquireQueuedSpinLockInstrumented.c)
 *     ExpAcquireFastResourceExclusiveSlow @ 0x1403BD020 (ExpAcquireFastResourceExclusiveSlow.c)
 *     KeAbMarkCrossThreadReleasable @ 0x1403BD5FC (KeAbMarkCrossThreadReleasable.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
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
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v30; // eax
  signed __int32 v31; // ett
  _QWORD *ExclusiveWaiters; // rax
  PVOID *v33; // rcx
  ULONG v34; // edi
  ULONG v35; // edi
  struct _KPRCB *v36; // rsi
  ULONG ContentionCount; // r15d
  __int16 v38; // ax
  __int64 v39; // rax
  unsigned __int64 v40; // r14
  struct _KPRCB *v41; // r14
  unsigned __int64 v42; // r12
  __int16 v43; // cx
  __int64 v44; // rax
  int v45; // ecx
  struct _KTHREAD *v46; // r8
  int v47; // edx
  int v48; // ecx
  unsigned __int64 v49; // rax
  int v50; // eax
  int v51; // r9d
  int v52; // edx
  USHORT v53; // ax
  int v54; // edx
  int v55; // ecx
  unsigned __int64 v56; // rax
  int v57; // eax
  int v58; // r12d
  __int64 v59; // rax
  __int64 v60; // rdx
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
  __int64 v75; // rax
  unsigned __int64 v76; // rdi
  char v77; // r12
  char v78; // al
  int v79; // r15d
  unsigned __int8 v80; // al
  unsigned __int8 v81; // dl
  struct _KTHREAD *v82; // r8
  __int64 v83; // rdx
  signed __int64 v84; // rax
  ULONG *p_ActiveEntries; // r13
  char v86; // al
  ULONG **v87; // rax
  _QWORD *v88; // rcx
  signed __int32 *v89; // r8
  signed __int32 v90; // eax
  signed __int32 v91; // ett
  unsigned __int8 v92; // dl
  struct _KTHREAD *v93; // r9
  signed __int32 v94[6]; // [rsp+8h] [rbp-A9h] BYREF
  PVOID SystemArgument1; // [rsp+38h] [rbp-79h]
  unsigned __int8 v96; // [rsp+40h] [rbp-71h]
  __int64 v97; // [rsp+48h] [rbp-69h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-61h] BYREF
  PVOID v99; // [rsp+68h] [rbp-49h] BYREF
  PVOID *v100; // [rsp+70h] [rbp-41h]
  struct _KTHREAD *v101; // [rsp+78h] [rbp-39h]
  __int64 v102; // [rsp+80h] [rbp-31h]
  _QWORD v103[3]; // [rsp+88h] [rbp-29h] BYREF
  struct _KLOCK_QUEUE_HANDLE v104; // [rsp+A0h] [rbp-11h] BYREF
  __int128 v105; // [rsp+B8h] [rbp+7h]
  __int128 v106; // [rsp+C8h] [rbp+17h]
  __int128 v107; // [rsp+D8h] [rbp+27h]
  _UNKNOWN *retaddr; // [rsp+110h] [rbp+5Fh]

  Flag = Resource->Flag;
  LOBYTE(v2) = (Wait == 0) + 1;
  v7 = 0LL;
  if ( (Flag & 0x41) == 1 )
    KeBugCheckEx(0x1C6u, 0xFuLL, (ULONG_PTR)Resource, 0LL, 0LL);
  if ( (Flag & 1) == 0 )
  {
    v100 = 0LL;
    *(_QWORD *)&LockHandle.OldIrql = 0LL;
    BYTE3(v102) = 0;
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
        KxWaitForLockOwnerShip(&LockHandle, v12);
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
          LODWORD(v97) = Resource->ContentionCount;
          LODWORD(SystemArgument1) = 0;
          CurrentPrcb = KeGetCurrentPrcb();
          v17 = __rdtsc();
          GroupIndex = CurrentPrcb->GroupIndex;
          Group = CurrentPrcb->Group;
          ++CurrentPrcb->SynchCounters.ExEtwSynchTrackingNotificationsCount;
          LOWORD(SystemArgument1) = Group;
          v96 = GroupIndex;
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
                && *(_BYTE *)(TrackingLockSlotForThread + 26) == v96 )
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
            *(_DWORD *)(TrackingLockSlotForThread + 44) = v97;
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
        _InterlockedOr(v94, 0);
        v25 = KeDisableInterrupts(Lock, v12, ((unsigned __int64)(Next + 8) >> 5) & 0x7F, &KiHaltOnAddressHashTable);
        KiHaltOnAddressWakeEntireList(v28, _InterlockedExchange64((volatile __int64 *)(v27 + 8 * v26), 0LL));
        if ( v25 )
        {
          SchedulerAssist = (signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist;
          if ( SchedulerAssist )
          {
            _m_prefetchw(SchedulerAssist);
            v30 = *SchedulerAssist;
            do
            {
              v31 = v30;
              v30 = _InterlockedCompareExchange(SchedulerAssist, v30 & 0xFFDFFFFF, v30);
            }
            while ( v31 != v30 );
            if ( (v30 & 0x200000) != 0 )
              KiRemoveSystemWorkPriorityKick();
          }
          _enable();
        }
      }
      goto LABEL_12;
    }
    if ( (Resource->ReservedLowFlags & 0x80u) != 0
      && (struct _KTHREAD *)Resource->OwnerEntry.OwnerThread == CurrentThread )
    {
      v34 = (Resource->OwnerEntry.TableSize + 8) ^ ((unsigned __int8)(Resource->OwnerEntry.TableSize + 8) ^ (unsigned __int8)*(_DWORD *)&Resource->OwnerEntry.0) & 7;
      Resource->OwnerEntry.TableSize = v34;
      v35 = v34 >> 3;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      __incgsdword(0x9080u);
      __incgsdword(0x9064u);
      if ( v9 )
      {
        v36 = KeGetCurrentPrcb();
        ContentionCount = Resource->ContentionCount;
        BYTE3(SystemArgument1) = 0;
        v38 = v36->Group;
        ++v36->SynchCounters.ExEtwSynchTrackingNotificationsCount;
        LOWORD(SystemArgument1) = v38;
        BYTE2(SystemArgument1) = v36->GroupIndex;
        v39 = EtwpGetTrackingLockSlotForThread(Resource, 0x10000LL);
        if ( v39 )
        {
          ++v36->SynchCounters.ExEtwSynchTrackingNotificationsAccountedCount;
          if ( *(_DWORD *)(v39 + 32) )
          {
            if ( *(_DWORD *)(v39 + 36) < v35 )
              *(_DWORD *)(v39 + 36) = v35;
          }
          else
          {
            *(_QWORD *)v39 = 1LL;
            *(_QWORD *)(v39 + 8) = 2LL;
            *(_DWORD *)(v39 + 24) = (_DWORD)SystemArgument1;
            *(_DWORD *)(v39 + 36) = v35;
            *(_DWORD *)(v39 + 44) = ContentionCount;
          }
          *(_DWORD *)(v39 + 32) = 1;
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
    v103[1] = v103;
    v103[0] = v103;
    ExclusiveWaiters = Resource->ExclusiveWaiters;
    v99 = 0LL;
    v100 = 0LL;
    v102 = 393217LL;
    v101 = CurrentThread;
    v103[2] = 0LL;
    if ( ExclusiveWaiters )
    {
      v33 = (PVOID *)ExclusiveWaiters[1];
      if ( *v33 != ExclusiveWaiters )
        goto LABEL_43;
      v100 = (PVOID *)ExclusiveWaiters[1];
      v99 = ExclusiveWaiters;
      *v33 = &v99;
      ExclusiveWaiters[1] = &v99;
    }
    else
    {
      v100 = &v99;
      v99 = &v99;
      Resource->ExclusiveWaiters = &v99;
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 && !PopHibernateInProgress )
    {
      KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
LABEL_54:
      v40 = LockHandle.OldIrql;
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), LockHandle.OldIrql);
      __writecr8(v40);
      __incgsdword(0x9084u);
      if ( v9 )
      {
        v105 = 0LL;
        v106 = 0LL;
        v107 = 0LL;
        v41 = KeGetCurrentPrcb();
        BYTE3(SystemArgument1) = 0;
        v42 = __rdtsc();
        v43 = v41->Group;
        ++v41->SynchCounters.ExEtwSynchTrackingNotificationsCount;
        LOWORD(SystemArgument1) = v43;
        BYTE2(SystemArgument1) = v41->GroupIndex;
        v44 = EtwpGetTrackingLockSlotForThread(Resource, 0x10000LL);
        if ( v44 )
        {
          ++v41->SynchCounters.ExEtwSynchTrackingNotificationsAccountedCount;
          v45 = (int)SystemArgument1;
          *(_DWORD *)(v44 + 32) = 4;
          *(_QWORD *)v44 = v42;
          *(_DWORD *)(v44 + 24) = v45;
        }
      }
      v46 = KeGetCurrentThread();
      v47 = 0;
      v48 = (*((_DWORD *)&v46[1].SwapListEntry + 2) >> 9) & 7;
      v49 = v46->Process[1].Padding[3];
      if ( v49 )
      {
        v50 = *(_DWORD *)(v49 + 1084);
        if ( v48 >= v50 )
          v48 = v50;
      }
      if ( (v48 < 2 && v46 == KeGetCurrentThread() && LODWORD(v46[1].Timer.TimerListEntry.Flink) || v48 > 1)
        && (Resource->ReservedLowFlags & 4) == 0 )
      {
        v47 = 4;
      }
      v51 = v47 | 2;
      if ( (Resource->ReservedLowFlags & 2) != 0 )
        v51 = v47;
      v52 = v51 | 0xFF00;
      if ( v46->Priority <= (int)Resource->WaiterPriority )
        v52 = v51;
      if ( v52 )
        ExpApplyPriorityBoost(Resource);
      ExpWaitForResource(Resource, &v99, 66084LL);
      v53 = Resource->Flag;
      memset(&v104, 0, sizeof(v104));
      if ( (v53 & 8) == 0 )
      {
        v54 = 0;
        if ( (v53 & 4) != 0 )
        {
          v55 = (*((_DWORD *)&CurrentThread[1].SwapListEntry + 2) >> 9) & 7;
          v56 = CurrentThread->Process[1].Padding[3];
          if ( v56 )
          {
            v57 = *(_DWORD *)(v56 + 1084);
            if ( v55 >= v57 )
              v55 = v57;
          }
          if ( v55 < 2 )
            v54 = 4;
        }
        v58 = v54 | 2;
        if ( (Resource->ReservedLowFlags & 2) == 0 )
          v58 = v54;
        if ( v58 )
        {
          v104.LockQueue.Lock = &Resource->SpinLock;
          v104.LockQueue.Next = 0LL;
          v59 = KeGetCurrentIrql();
          v97 = v59;
          __writecr8(2uLL);
          if ( KiIrqlFlags )
          {
            KiRaiseIrqlProcessIrqlFlags((unsigned __int8)v59, 2LL);
            LOBYTE(v59) = v97;
          }
          v104.OldIrql = v59;
          if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
          {
            v60 = _InterlockedExchange64((volatile __int64 *)p_SpinLock, (__int64)&v104);
            if ( v60 )
              KxWaitForLockOwnerShip(&v104, v60);
          }
          else
          {
            KiAcquireQueuedSpinLockInstrumented(&v104, &Resource->SpinLock);
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
          if ( (v58 & 4) != 0 )
          {
            if ( (p_OwnerEntry->TableSize & 1) != 0 )
            {
              v58 &= ~4u;
            }
            else
            {
              PsBoostThreadIoEx(CurrentThread, 0LL, 0LL, 0LL);
              p_OwnerEntry->TableSize |= 1u;
            }
          }
          if ( (v58 & 2) != 0 )
          {
            if ( (p_OwnerEntry->TableSize & 4) != 0 )
            {
              v58 &= ~2u;
            }
            else
            {
              if ( _InterlockedIncrement((volatile signed __int32 *)&CurrentThread[1].Timer.TimerListEntry.Flink + 1) == 1
                && CurrentThread->AbWaitEntryCount )
              {
                v75 = KeGetCurrentIrql();
                v97 = v75;
                __writecr8(2uLL);
                if ( KiIrqlFlags )
                  KiRaiseIrqlProcessIrqlFlags((unsigned __int8)v75, 2LL);
                SystemArgument1 = KeGetCurrentPrcb();
                if ( (unsigned int)KiAbThreadInsertList(
                                     CurrentThread,
                                     (char *)SystemArgument1 + 37240,
                                     &CurrentThread->PropagateBoostsEntry) )
                  KiAbQueueAutoBoostDpc(SystemArgument1);
                if ( KiIrqlFlags )
                  KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v97);
                __writecr8((unsigned __int8)v97);
              }
              p_OwnerEntry->TableSize |= 4u;
            }
          }
          KeReleaseInStackQueuedSpinLock(&v104);
          if ( v58 )
          {
            if ( (v58 & 4) != 0 )
              IoBoostThreadIoPriority(CurrentThread, 2LL);
            if ( (v58 & 2) != 0 )
              PsBoostThreadOutstandingIoQoS(CurrentThread);
          }
        }
      }
      __incgsdword(0x907Cu);
      __incgsdword(0x9064u);
      if ( v9 )
      {
        LODWORD(v97) = Resource->ContentionCount;
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
          *(_DWORD *)(v71 + 44) = v97;
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
  v92 = KeGetCurrentIrql();
  v93 = KeGetCurrentThread();
  if ( v92 > (unsigned __int8)v2 )
    KeBugCheckEx(0x1C6u, 0LL, v92, (unsigned __int8)v2, 0LL);
  if ( v92 >= 2u && (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
LABEL_154:
    KeBugCheckEx(0x1C6u, 5uLL, 0LL, 0LL, 0LL);
  if ( (v93->ApcState.InProgressFlags & 2) != 0 )
LABEL_148:
    KeBugCheckEx(0x1C6u, 6uLL, 0LL, 0LL, 0LL);
  if ( !v92 && (v93->MiscFlags & 0x400) == 0 && !v93->WaitBlock[3].SpareLong )
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
  v97 = v83;
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
    v89 = (signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist;
    if ( v89 )
    {
      _m_prefetchw(v89);
      v90 = *v89;
      do
      {
        v91 = v90;
        v90 = _InterlockedCompareExchange(v89, v90 & 0xFFDFFFFF, v90);
      }
      while ( v91 != v90 );
      if ( (v90 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick();
    }
    _enable();
    return 1;
  }
  if ( Resource->Reserved2 == (PVOID)v76 )
  {
    ++LODWORD(Resource->SpinLock);
    if ( !v83 )
      return 1;
    KeAbPostReleaseEx((ULONG_PTR)Resource);
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
      KeAbPostReleaseEx((ULONG_PTR)Resource);
    return 0;
  }
}
