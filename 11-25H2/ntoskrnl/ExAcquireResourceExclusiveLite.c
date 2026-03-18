/*
 * XREFs of ExAcquireResourceExclusiveLite @ 0x14028A9E0
 * Callers:
 *     PnpUnregisterPlugPlayNotification @ 0x140205238 (PnpUnregisterPlugPlayNotification.c)
 *     ExEnterCriticalRegionAndAcquireResourceExclusive @ 0x14028A9A0 (ExEnterCriticalRegionAndAcquireResourceExclusive.c)
 *     SepInternalSetSecurityAttributesToken @ 0x1402914F4 (SepInternalSetSecurityAttributesToken.c)
 *     SepDesktopAppxSubProcessToken @ 0x14029223C (SepDesktopAppxSubProcessToken.c)
 *     CcPinFileData @ 0x1402D7150 (CcPinFileData.c)
 *     FsRtlAcquireFileForModWriteEx @ 0x14035BCBC (FsRtlAcquireFileForModWriteEx.c)
 *     MiAcquireLoadLock @ 0x14036DF38 (MiAcquireLoadLock.c)
 *     CcUnpinRepinnedBcb @ 0x1403A73C0 (CcUnpinRepinnedBcb.c)
 *     SepQueueWorkItem @ 0x1403D74A8 (SepQueueWorkItem.c)
 *     SepRmCallLsa @ 0x1403D8550 (SepRmCallLsa.c)
 *     SeTokenSetRedirectionTrustPolicy @ 0x140497B08 (SeTokenSetRedirectionTrustPolicy.c)
 *     PfResourceExclusiveAcquire @ 0x1404A0210 (PfResourceExclusiveAcquire.c)
 *     SeTokenSetNoChildProcessRestricted @ 0x1404BA494 (SeTokenSetNoChildProcessRestricted.c)
 *     PiDmaGuardQueueRemoveEntry @ 0x1404BE3BC (PiDmaGuardQueueRemoveEntry.c)
 *     IoCaptureLiveDump @ 0x1404D7188 (IoCaptureLiveDump.c)
 *     CcAcquireByteRangeForWrite @ 0x1404DCD80 (CcAcquireByteRangeForWrite.c)
 *     IoConfigureCrashDump @ 0x14058D584 (IoConfigureCrashDump.c)
 *     IoUpdateDumpPhysicalRanges @ 0x14058ED08 (IoUpdateDumpPhysicalRanges.c)
 *     IoSetDeferredLiveDumpFileHandle @ 0x140594458 (IoSetDeferredLiveDumpFileHandle.c)
 *     PiDrvDbUnloadNodeWaitWorkerCallback @ 0x1405A5F80 (PiDrvDbUnloadNodeWaitWorkerCallback.c)
 *     RtlpAllocateHeap @ 0x1405DE67C (RtlpAllocateHeap.c)
 *     RtlpFreeHeap @ 0x1405E06E0 (RtlpFreeHeap.c)
 *     RtlpSetupExtendedBlock @ 0x1405E1428 (RtlpSetupExtendedBlock.c)
 *     SeSetSecurityAttributesTokenEx @ 0x1405FCDF0 (SeSetSecurityAttributesTokenEx.c)
 *     DifExAcquireResourceExclusiveLiteWrapper @ 0x14060FC10 (DifExAcquireResourceExclusiveLiteWrapper.c)
 *     ExEnterPriorityRegionAndAcquireResourceExclusive @ 0x14064AEA0 (ExEnterPriorityRegionAndAcquireResourceExclusive.c)
 *     TtmpAcquireSessionLock @ 0x1406EBB64 (TtmpAcquireSessionLock.c)
 *     FsRtlPrepareMdlWriteDev @ 0x1406FE5D0 (FsRtlPrepareMdlWriteDev.c)
 *     FsRtlDedupChangeUninit @ 0x140700BD0 (FsRtlDedupChangeUninit.c)
 *     FsRtlpDedupChangeRegisterVolume @ 0x140700E00 (FsRtlpDedupChangeRegisterVolume.c)
 *     FsRtlpHeatRegisterVolume @ 0x1407017FC (FsRtlpHeatRegisterVolume.c)
 *     FsRtlpHeatUnregisterVolume @ 0x1407019A0 (FsRtlpHeatUnregisterVolume.c)
 *     IoInitializeCrashDump @ 0x140704968 (IoInitializeCrashDump.c)
 *     IopBootLogToFile @ 0x140705934 (IopBootLogToFile.c)
 *     IopCopyBootLogRegistryToFile @ 0x140705D7C (IopCopyBootLogRegistryToFile.c)
 *     IopInitializeBootLogging @ 0x140706328 (IopInitializeBootLogging.c)
 *     IoEnumerateRegisteredFiltersList @ 0x140707F80 (IoEnumerateRegisteredFiltersList.c)
 *     IoRegisterFileSystem @ 0x1407081F0 (IoRegisterFileSystem.c)
 *     IoRegisterFsRegistrationChangeMountAware @ 0x1407083C0 (IoRegisterFsRegistrationChangeMountAware.c)
 *     IoUnregisterFileSystem @ 0x140708C40 (IoUnregisterFileSystem.c)
 *     IoUnregisterFsRegistrationChange @ 0x140708D00 (IoUnregisterFsRegistrationChange.c)
 *     IoReportDetectedDevice @ 0x140710750 (IoReportDetectedDevice.c)
 *     IoReportRootDevice @ 0x140711200 (IoReportRootDevice.c)
 *     PiGetDeviceRegistryProperty @ 0x140712B28 (PiGetDeviceRegistryProperty.c)
 *     PnpNotifyHwProfileChange @ 0x140714584 (PnpNotifyHwProfileChange.c)
 *     PnpNotifyTargetDeviceChangeNotifyEntry @ 0x1407147D4 (PnpNotifyTargetDeviceChangeNotifyEntry.c)
 *     PpReleaseBootDDB @ 0x140718F48 (PpReleaseBootDDB.c)
 *     PpDevCfgProcessDevices @ 0x140721110 (PpDevCfgProcessDevices.c)
 *     PiCMDeleteDeviceWorker @ 0x140724ED4 (PiCMDeleteDeviceWorker.c)
 *     PiCMGenerateDeviceInstance @ 0x140725150 (PiCMGenerateDeviceInstance.c)
 *     PipKsrNotifyDrivers @ 0x140727FAC (PipKsrNotifyDrivers.c)
 *     PiInitializeDevice @ 0x14072877C (PiInitializeDevice.c)
 *     PiDmaGuardQueueInsertEntry @ 0x14072E110 (PiDmaGuardQueueInsertEntry.c)
 *     TtmiResetInactivityTimer @ 0x1407600D0 (TtmiResetInactivityTimer.c)
 *     TtmpWnfInactivityTimeoutCallback @ 0x140760D70 (TtmpWnfInactivityTimeoutCallback.c)
 *     TtmpAcquireQueueLock @ 0x140761328 (TtmpAcquireQueueLock.c)
 *     PspSetIoPriorityLimitJobTree @ 0x1407682C4 (PspSetIoPriorityLimitJobTree.c)
 *     PspSetJobMemoryPartition @ 0x140768374 (PspSetJobMemoryPartition.c)
 *     PspSetPagePriorityLimitJobTree @ 0x140768A10 (PspSetPagePriorityLimitJobTree.c)
 *     RtlZeroHeap @ 0x140773FD0 (RtlZeroHeap.c)
 *     SeSetPrivateNameSpaceToken @ 0x140780578 (SeSetPrivateNameSpaceToken.c)
 *     SepSetServerSiloToken @ 0x140780948 (SepSetServerSiloToken.c)
 *     SeExchangePrimaryToken @ 0x14078384C (SeExchangePrimaryToken.c)
 *     SepAddTokenLogonSession @ 0x1407841A0 (SepAddTokenLogonSession.c)
 *     SepDeleteUnreferencedLogonSessionsInSilo @ 0x140784298 (SepDeleteUnreferencedLogonSessionsInSilo.c)
 *     SepMakeLogonSessionsSiblings @ 0x140784434 (SepMakeLogonSessionsSiblings.c)
 *     SepRemoveTokenLogonSession @ 0x140784688 (SepRemoveTokenLogonSession.c)
 *     SepRmGlobalSaclSetWrkr @ 0x1407853E0 (SepRmGlobalSaclSetWrkr.c)
 *     WmiAcquireSmbiosLockExclusive @ 0x140794C44 (WmiAcquireSmbiosLockExclusive.c)
 *     ExpRegisterFirmwareTableInformationHandler @ 0x1407A61B0 (ExpRegisterFirmwareTableInformationHandler.c)
 *     NtFlushInstallUILanguage @ 0x1407B4A60 (NtFlushInstallUILanguage.c)
 *     NtMapCMFModule @ 0x1407B4B70 (NtMapCMFModule.c)
 *     _PnpCtxCloseMachine @ 0x1408072F0 (_PnpCtxCloseMachine.c)
 *     DrvDbSetDriverDatabaseMappedProperty @ 0x1408127F4 (DrvDbSetDriverDatabaseMappedProperty.c)
 *     PiProcessNewDeviceNode @ 0x14082CE68 (PiProcessNewDeviceNode.c)
 *     PnpDelayedRemoveWorker @ 0x14082EE10 (PnpDelayedRemoveWorker.c)
 *     PnpProcessQueryRemoveAndEject @ 0x14082FB18 (PnpProcessQueryRemoveAndEject.c)
 *     PnpQueuePendingSurpriseRemoval @ 0x140830954 (PnpQueuePendingSurpriseRemoval.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x1408313BC (PnpUnlinkDeviceRemovalRelations.c)
 *     PnpAcquireDependencyRelationsLock @ 0x1408325D8 (PnpAcquireDependencyRelationsLock.c)
 *     PipProcessDevNodeTree @ 0x1408355F8 (PipProcessDevNodeTree.c)
 *     PiSwLock @ 0x1408363D0 (PiSwLock.c)
 *     PiPnpRtlObjectEventWorker @ 0x140836F20 (PiPnpRtlObjectEventWorker.c)
 *     PiDqObjectManagerServiceActionQueue @ 0x1408380E0 (PiDqObjectManagerServiceActionQueue.c)
 *     _CmGetDeviceSoftwareKeyPath @ 0x14083D860 (_CmGetDeviceSoftwareKeyPath.c)
 *     LockRMLog @ 0x1408668D8 (LockRMLog.c)
 *     IopGetSetSecurityObject @ 0x14086F330 (IopGetSetSecurityObject.c)
 *     CmpLockRegistryExclusive @ 0x14087DA6C (CmpLockRegistryExclusive.c)
 *     PiPnpRtlOperationListAcquireExclusiveLock @ 0x1408D0B3C (PiPnpRtlOperationListAcquireExclusiveLock.c)
 *     PspLockJobsAndProcessExclusive @ 0x1408D7E24 (PspLockJobsAndProcessExclusive.c)
 *     PspGetMemoryPartitionFromJobList @ 0x1408D82A0 (PspGetMemoryPartitionFromJobList.c)
 *     PspLockJobChain @ 0x1408D83E8 (PspLockJobChain.c)
 *     PspApplyWorkingSetLimitsToProcess @ 0x1408D8888 (PspApplyWorkingSetLimitsToProcess.c)
 *     PspSetEnergyTrackingStateJobTree @ 0x1408DAC64 (PspSetEnergyTrackingStateJobTree.c)
 *     PspSendProcessNotificationToJobChain @ 0x1408DB3B0 (PspSendProcessNotificationToJobChain.c)
 *     PspLockJobExclusive @ 0x1408DC060 (PspLockJobExclusive.c)
 *     PspCallJobHierarchyCallbacks @ 0x1408DCC28 (PspCallJobHierarchyCallbacks.c)
 *     PspEnforceLimitsJobPostCallback @ 0x1408DD910 (PspEnforceLimitsJobPostCallback.c)
 *     PspRemoveProcessFromJobChain @ 0x1408E09E4 (PspRemoveProcessFromJobChain.c)
 *     DrvDbReleaseDatabaseNodeBaseKey @ 0x140930CDC (DrvDbReleaseDatabaseNodeBaseKey.c)
 *     DrvDbAcquireDatabaseNodeBaseKey @ 0x140930D80 (DrvDbAcquireDatabaseNodeBaseKey.c)
 *     DrvDbOpenObjectRegKey @ 0x140931000 (DrvDbOpenObjectRegKey.c)
 *     PiDrvDbNodeActionCallback @ 0x140931920 (PiDrvDbNodeActionCallback.c)
 *     PiDrvDbLoadNode @ 0x140931A50 (PiDrvDbLoadNode.c)
 *     NtAdjustPrivilegesToken @ 0x1409334E0 (NtAdjustPrivilegesToken.c)
 *     FsRtlAcquireFileExclusiveCommon @ 0x14093DA50 (FsRtlAcquireFileExclusiveCommon.c)
 *     PiPnpRtlSetDeviceRegProperty @ 0x14094EE88 (PiPnpRtlSetDeviceRegProperty.c)
 *     PiPnpRtlSetObjectProperty @ 0x140955470 (PiPnpRtlSetObjectProperty.c)
 *     IoGetDeviceInterfaceAlias @ 0x140956090 (IoGetDeviceInterfaceAlias.c)
 *     IopGetDeviceInterfaces @ 0x1409572B8 (IopGetDeviceInterfaces.c)
 *     IopRegisterDeviceInterface @ 0x14095C574 (IopRegisterDeviceInterface.c)
 *     PopAdaptiveGetBootIsSystemInitiated @ 0x140963574 (PopAdaptiveGetBootIsSystemInitiated.c)
 *     PiDmObjectManagerAcquireExclusiveLock @ 0x140968EE4 (PiDmObjectManagerAcquireExclusiveLock.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x140969360 (PspAllocateAndQueryNotificationChannel.c)
 *     PspLockRootJobExclusive @ 0x1409697E4 (PspLockRootJobExclusive.c)
 *     IoSetDeviceInterfaceState @ 0x140969D40 (IoSetDeviceInterfaceState.c)
 *     IoRegisterPlugPlayNotification @ 0x14096BD60 (IoRegisterPlugPlayNotification.c)
 *     PnpNotifyDeviceClassChange @ 0x14096CC3C (PnpNotifyDeviceClassChange.c)
 *     PnpNotifyTargetDeviceChange @ 0x14096CFB0 (PnpNotifyTargetDeviceChange.c)
 *     PiDcHandleCustomDeviceEvent @ 0x14096D434 (PiDcHandleCustomDeviceEvent.c)
 *     PnpDeleteDeviceInterfaces @ 0x140981CA4 (PnpDeleteDeviceInterfaces.c)
 *     NtAdjustGroupsToken @ 0x140996CB0 (NtAdjustGroupsToken.c)
 *     PnpDisableDeviceInterfaces @ 0x1409A18E0 (PnpDisableDeviceInterfaces.c)
 *     SepDeReferenceLogonSession @ 0x1409A78B8 (SepDeReferenceLogonSession.c)
 *     PpCheckInDriverDatabase @ 0x1409AF608 (PpCheckInDriverDatabase.c)
 *     IopLoadDriver @ 0x1409B0D50 (IopLoadDriver.c)
 *     PspSetQuotaLimits @ 0x1409C2688 (PspSetQuotaLimits.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x1409CEE20 (FsRtlAcquireFileForCcFlushEx.c)
 *     NtCreateTimer @ 0x1409FAF30 (NtCreateTimer.c)
 *     PpDevNodeLockTree @ 0x140A060F0 (PpDevNodeLockTree.c)
 *     PopAdaptiveGetBootIsUnattended @ 0x140A113E4 (PopAdaptiveGetBootIsUnattended.c)
 *     NtGetMUIRegistryInfo @ 0x140A168A0 (NtGetMUIRegistryInfo.c)
 *     SepCreateLogonSessionTrack @ 0x140A1862C (SepCreateLogonSessionTrack.c)
 *     PopAdaptiveGetSessionState @ 0x140A1C024 (PopAdaptiveGetSessionState.c)
 *     PopSetDisplayStatus @ 0x140A22500 (PopSetDisplayStatus.c)
 *     PopSessionConnectionChange @ 0x140A226D0 (PopSessionConnectionChange.c)
 *     PopAcquireAdaptiveLock @ 0x140A22A64 (PopAcquireAdaptiveLock.c)
 *     SepReferenceLogonSessionSilo @ 0x140A2B0F4 (SepReferenceLogonSessionSilo.c)
 *     FsRtlCopyWrite @ 0x140A34DE0 (FsRtlCopyWrite.c)
 *     PspSetJobIoRateControl @ 0x140A3AD48 (PspSetJobIoRateControl.c)
 *     PspLockJobConditionally @ 0x140A3B07C (PspLockJobConditionally.c)
 *     PpDeviceRegistration @ 0x140A46B4C (PpDeviceRegistration.c)
 *     SeSetMandatoryPolicyToken @ 0x140A4769C (SeSetMandatoryPolicyToken.c)
 *     SepUpdateLogonSessionTrack @ 0x140A49044 (SepUpdateLogonSessionTrack.c)
 *     SeSetSessionIdToken @ 0x140A4CF28 (SeSetSessionIdToken.c)
 *     SepRmCommandServerThread @ 0x140A4F080 (SepRmCommandServerThread.c)
 *     PspSetBackgroundJobTree @ 0x140A558BC (PspSetBackgroundJobTree.c)
 *     IopSetDeviceSecurityDescriptor @ 0x140A573D4 (IopSetDeviceSecurityDescriptor.c)
 *     IopGetRootDevices @ 0x140A608F8 (IopGetRootDevices.c)
 *     SepDeleteLogonSessionTrack @ 0x140A62490 (SepDeleteLogonSessionTrack.c)
 *     IopDoDeferredSetInterfaceState @ 0x140A6C2D0 (IopDoDeferredSetInterfaceState.c)
 *     AdtpBuildAccessesString @ 0x140A70050 (AdtpBuildAccessesString.c)
 *     PspFreezeJobTree @ 0x140A71B9C (PspFreezeJobTree.c)
 *     IopBootLog @ 0x140A76824 (IopBootLog.c)
 *     PnpSurpriseFailUnsafeDmaDevices @ 0x140A7BD60 (PnpSurpriseFailUnsafeDmaDevices.c)
 *     PnpChainDereferenceComplete @ 0x140A82AFC (PnpChainDereferenceComplete.c)
 *     DrvDbOpenDriverDatabaseRegKey @ 0x140A84448 (DrvDbOpenDriverDatabaseRegKey.c)
 *     SeSetVirtualizationToken @ 0x140A85DC0 (SeSetVirtualizationToken.c)
 *     PopUserPresenceHostStateChange @ 0x140A86AB0 (PopUserPresenceHostStateChange.c)
 *     PopAdaptiveGetBootTargetSystemState @ 0x140A8AC28 (PopAdaptiveGetBootTargetSystemState.c)
 *     PiDrvDbUnloadNodeWorkerCallback @ 0x140A92360 (PiDrvDbUnloadNodeWorkerCallback.c)
 *     PopAdaptiveGetSystemInitiatedRebootTargetState @ 0x140A9878C (PopAdaptiveGetSystemInitiatedRebootTargetState.c)
 *     PopIsLockConsoleTimeoutActive @ 0x140A9C054 (PopIsLockConsoleTimeoutActive.c)
 *     PiDmaGuardQueueFlush @ 0x140A9CE10 (PiDmaGuardQueueFlush.c)
 *     SeMarkLogonSessionForTerminationNotificationEx @ 0x140AA24D0 (SeMarkLogonSessionForTerminationNotificationEx.c)
 *     IoOpenDeviceInterfaceRegistryKey @ 0x140AA8710 (IoOpenDeviceInterfaceRegistryKey.c)
 *     PiCMCreateDevice @ 0x140AAF980 (PiCMCreateDevice.c)
 *     SepBlockAccessForLogonSession @ 0x140AB7820 (SepBlockAccessForLogonSession.c)
 *     PnpGetDeviceInstanceRegistryValue @ 0x140AB8700 (PnpGetDeviceInstanceRegistryValue.c)
 *     PiCMUnregisterDeviceInterface @ 0x140ABBD2C (PiCMUnregisterDeviceInterface.c)
 *     NtSetInformationJobObject @ 0x140AC4C00 (NtSetInformationJobObject.c)
 *     NtSetInformationToken @ 0x140ACC810 (NtSetInformationToken.c)
 *     NtCreateLowBoxToken @ 0x140ACDB00 (NtCreateLowBoxToken.c)
 *     IoShutdownSystem @ 0x140B4374C (IoShutdownSystem.c)
 *     PopAcquirePolicyLock @ 0x140B57E80 (PopAcquirePolicyLock.c)
 *     IopInitCrashDumpRegCallback @ 0x140C0B880 (IopInitCrashDumpRegCallback.c)
 *     PipResetMatchingFilteredDevices @ 0x140C10EE0 (PipResetMatchingFilteredDevices.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140253560 (KxAcquireSpinLock.c)
 *     KeAbPostReleaseEx @ 0x14027D430 (KeAbPostReleaseEx.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14028A810 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeDisableInterrupts @ 0x14028A900 (KeDisableInterrupts.c)
 *     KxWaitForLockChainValid @ 0x14028A940 (KxWaitForLockChainValid.c)
 *     EtwpGetTrackingLockSlotForThread @ 0x14028BAA0 (EtwpGetTrackingLockSlotForThread.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028BBC0 (KiRemoveSystemWorkPriorityKick.c)
 *     KeAbMarkCrossThreadReleasable @ 0x140292FF0 (KeAbMarkCrossThreadReleasable.c)
 *     ExpAcquireFastResourceExclusiveSlow @ 0x1402937F0 (ExpAcquireFastResourceExclusiveSlow.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x14029B2A0 (ObfReferenceObjectWithTag.c)
 *     KiAbThreadInsertList @ 0x1402E5880 (KiAbThreadInsertList.c)
 *     KiAbQueueAutoBoostDpc @ 0x1402E5E60 (KiAbQueueAutoBoostDpc.c)
 *     PsBoostThreadIoEx @ 0x1402EA7E0 (PsBoostThreadIoEx.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1402FF4DC (KiReleaseQueuedSpinLockInstrumented.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140301030 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KxWaitForLockOwnerShip @ 0x140301110 (KxWaitForLockOwnerShip.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140302580 (KeReleaseInStackQueuedSpinLock.c)
 *     ExpApplyPriorityBoost @ 0x140324DC0 (ExpApplyPriorityBoost.c)
 *     PsBoostThreadOutstandingIoQoS @ 0x140325D24 (PsBoostThreadOutstandingIoQoS.c)
 *     IoBoostThreadIoPriority @ 0x140326240 (IoBoostThreadIoPriority.c)
 *     KxReleaseSpinLock @ 0x14034A6E0 (KxReleaseSpinLock.c)
 *     ExpWaitForResource @ 0x14041F0A0 (ExpWaitForResource.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiHaltOnAddressWakeEntireList @ 0x1404F668C (KiHaltOnAddressWakeEntireList.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

BOOLEAN __stdcall ExAcquireResourceExclusiveLite(PERESOURCE Resource, BOOLEAN Wait)
{
  __int64 v2; // r8
  __int64 v3; // r9
  USHORT Flag; // cx
  __int64 v7; // rsi
  struct _KTHREAD *CurrentThread; // r13
  bool v9; // r12
  KSPIN_LOCK *p_SpinLock; // rdi
  unsigned __int8 CurrentIrql; // r14
  __int64 v12; // rdx
  BOOLEAN v13; // r15
  ULONG v14; // eax
  __int64 Next; // rax
  unsigned __int8 Lock; // cl
  bool v17; // di
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rcx
  struct _KPRCB *v21; // rcx
  signed __int32 *SchedulerAssist; // r8
  unsigned __int64 OldIrql; // rdi
  ULONG ContentionCount; // r13d
  struct _KPRCB *CurrentPrcb; // rdi
  unsigned __int64 v27; // r12
  __int16 Group; // ax
  __int64 TrackingLockSlotForThread; // rax
  int v30; // ecx
  signed __int32 v31; // eax
  signed __int32 v32; // ett
  _QWORD *ExclusiveWaiters; // rax
  PVOID *v34; // rcx
  ULONG v35; // edi
  ULONG v36; // edi
  struct _KPRCB *v37; // rsi
  ULONG v38; // r15d
  __int16 v39; // ax
  __int64 v40; // rax
  unsigned __int64 v41; // r14
  struct _KPRCB *v42; // r14
  unsigned __int64 v43; // r15
  __int16 v44; // cx
  __int64 v45; // rax
  int v46; // ecx
  struct _KTHREAD *v47; // r8
  int v48; // edx
  int v49; // ecx
  unsigned __int64 v50; // rax
  int v51; // eax
  unsigned int v52; // r9d
  __int64 v53; // rdx
  __int64 v54; // r8
  __int64 v55; // r9
  USHORT v56; // ax
  int v57; // edx
  int v58; // ecx
  unsigned __int64 v59; // rax
  int v60; // eax
  int v61; // r15d
  ULONG_PTR v62; // rax
  __int64 v63; // rdx
  ERESOURCE_THREAD OwnerThread; // rax
  OWNER_ENTRY *p_OwnerEntry; // rdi
  POWNER_ENTRY OwnerTable; // rdi
  unsigned __int64 v67; // rcx
  unsigned __int64 v68; // rdx
  POWNER_ENTRY v69; // r9
  struct _KPRCB *v70; // r15
  unsigned __int64 v71; // rdi
  __int16 v72; // r13
  unsigned __int8 v73; // r12
  __int64 v74; // rax
  OWNER_ENTRY *v75; // r8
  ULONG_PTR v76; // rax
  unsigned __int64 v77; // rdi
  char v78; // r12
  char v79; // al
  int v80; // r15d
  unsigned __int8 v81; // al
  unsigned __int8 v82; // dl
  struct _KTHREAD *v83; // r8
  ULONG_PTR v84; // rdx
  signed __int64 v85; // rax
  ULONG *p_ActiveEntries; // r13
  char v87; // al
  ULONG **v88; // rax
  _QWORD *v89; // rcx
  struct _KPRCB *v90; // rcx
  signed __int32 *v91; // r8
  signed __int32 v92; // eax
  signed __int32 v93; // ett
  unsigned __int8 v94; // dl
  struct _KTHREAD *v95; // r9
  signed __int32 v96[6]; // [rsp+8h] [rbp-A9h] BYREF
  PVOID SystemArgument1; // [rsp+38h] [rbp-79h]
  unsigned __int8 GroupIndex; // [rsp+40h] [rbp-71h]
  ULONG_PTR v99; // [rsp+48h] [rbp-69h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-61h] BYREF
  PVOID v101; // [rsp+68h] [rbp-49h] BYREF
  PVOID *v102; // [rsp+70h] [rbp-41h]
  struct _KTHREAD *v103; // [rsp+78h] [rbp-39h]
  __int64 v104; // [rsp+80h] [rbp-31h]
  _QWORD v105[3]; // [rsp+88h] [rbp-29h] BYREF
  struct _KLOCK_QUEUE_HANDLE v106; // [rsp+A0h] [rbp-11h] BYREF
  __int128 v107; // [rsp+B8h] [rbp+7h]
  __int128 v108; // [rsp+C8h] [rbp+17h]
  __int128 v109; // [rsp+D8h] [rbp+27h]
  void *retaddr; // [rsp+110h] [rbp+5Fh]

  Flag = Resource->Flag;
  LOBYTE(v2) = (Wait == 0) + 1;
  v7 = 0LL;
  if ( (Flag & 0x41) == 1 )
    KeBugCheckEx(0x1C6u, 0xFuLL, (ULONG_PTR)Resource, 0LL, 0LL);
  if ( (Flag & 1) == 0 )
  {
    v102 = 0LL;
    *(_QWORD *)&LockHandle.OldIrql = 0LL;
    BYTE3(v104) = 0;
    CurrentThread = KeGetCurrentThread();
    v9 = (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0;
    __incgsdword(0x9078u);
    p_SpinLock = &Resource->SpinLock;
    LockHandle.LockQueue.Lock = &Resource->SpinLock;
    LockHandle.LockQueue.Next = 0LL;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql);
    LockHandle.OldIrql = CurrentIrql;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      v12 = _InterlockedExchange64((volatile __int64 *)p_SpinLock, (__int64)&LockHandle);
      if ( v12 )
        KxWaitForLockOwnerShip(&LockHandle, v12, v2, v3);
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
        goto LABEL_17;
      }
      _m_prefetchw(&LockHandle);
      Next = (__int64)LockHandle.LockQueue.Next;
      if ( !LockHandle.LockQueue.Next )
      {
        if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                             (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                             0LL,
                                             (signed __int64)&LockHandle) == &LockHandle )
        {
LABEL_17:
          OldIrql = LockHandle.OldIrql;
          if ( KiIrqlFlags )
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), LockHandle.OldIrql);
          __writecr8(OldIrql);
          __incgsdword(0x907Cu);
          __incgsdword(0x9064u);
          if ( v9 )
          {
            ContentionCount = Resource->ContentionCount;
            LODWORD(SystemArgument1) = 0;
            CurrentPrcb = KeGetCurrentPrcb();
            v27 = __rdtsc();
            Group = CurrentPrcb->Group;
            ++CurrentPrcb->SynchCounters.ExEtwSynchTrackingNotificationsCount;
            LOWORD(SystemArgument1) = Group;
            GroupIndex = CurrentPrcb->GroupIndex;
            BYTE2(SystemArgument1) = GroupIndex;
            TrackingLockSlotForThread = EtwpGetTrackingLockSlotForThread(Resource, 0x10000LL);
            if ( TrackingLockSlotForThread )
            {
              ++CurrentPrcb->SynchCounters.ExEtwSynchTrackingNotificationsAccountedCount;
              v30 = *(_DWORD *)(TrackingLockSlotForThread + 32);
              *(_QWORD *)(TrackingLockSlotForThread + 8) = v27;
              if ( v30 == 4 )
              {
                if ( *(_WORD *)(TrackingLockSlotForThread + 24) == (_WORD)SystemArgument1
                  && *(_BYTE *)(TrackingLockSlotForThread + 26) == GroupIndex )
                {
                  *(_QWORD *)TrackingLockSlotForThread = v27 - *(_QWORD *)TrackingLockSlotForThread;
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
              *(_DWORD *)(TrackingLockSlotForThread + 32) = 1;
              *(_DWORD *)(TrackingLockSlotForThread + 36) = 1;
              *(_DWORD *)(TrackingLockSlotForThread + 44) = ContentionCount;
            }
          }
          return v13;
        }
        Next = KxWaitForLockChainValid((__int64 *)&LockHandle);
      }
      LockHandle.LockQueue.Next = 0LL;
      Lock = (unsigned __int8)LockHandle.LockQueue.Lock;
      if ( ((Lock ^ (unsigned __int8)_InterlockedExchange64(
                                       (volatile __int64 *)(Next + 8),
                                       (__int64)LockHandle.LockQueue.Lock)) & 4) != 0 )
      {
        _InterlockedOr(v96, 0);
        v17 = KeDisableInterrupts();
        KiHaltOnAddressWakeEntireList(v20, _InterlockedExchange64((volatile __int64 *)(v19 + 8 * v18), 0LL));
        if ( v17 )
        {
          v21 = KeGetCurrentPrcb();
          SchedulerAssist = (signed __int32 *)v21->SchedulerAssist;
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
              KiRemoveSystemWorkPriorityKick(v21);
          }
          _enable();
        }
      }
      goto LABEL_17;
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
        v38 = Resource->ContentionCount;
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
            *(_DWORD *)(v40 + 44) = v38;
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
    v105[1] = v105;
    v105[0] = v105;
    ExclusiveWaiters = Resource->ExclusiveWaiters;
    v101 = 0LL;
    v102 = 0LL;
    v104 = 393217LL;
    v103 = CurrentThread;
    v105[2] = 0LL;
    if ( ExclusiveWaiters )
    {
      v34 = (PVOID *)ExclusiveWaiters[1];
      if ( *v34 != ExclusiveWaiters )
        goto LABEL_43;
      v102 = (PVOID *)ExclusiveWaiters[1];
      v101 = ExclusiveWaiters;
      *v34 = &v101;
      ExclusiveWaiters[1] = &v101;
    }
    else
    {
      v102 = &v101;
      v101 = &v101;
      Resource->ExclusiveWaiters = &v101;
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v41 = LockHandle.OldIrql;
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), LockHandle.OldIrql);
    __writecr8(v41);
    __incgsdword(0x9084u);
    if ( v9 )
    {
      v107 = 0LL;
      v108 = 0LL;
      v109 = 0LL;
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
    if ( (_DWORD)v53 )
      ExpApplyPriorityBoost(Resource, v53, v47);
    ExpWaitForResource(Resource, &v101, 66084LL);
    v56 = Resource->Flag;
    memset(&v106, 0, sizeof(v106));
    if ( (v56 & 8) == 0 )
    {
      v57 = 0;
      if ( (v56 & 4) != 0 )
      {
        v58 = (*((_DWORD *)&CurrentThread[1].SwapListEntry + 2) >> 9) & 7;
        v59 = CurrentThread->Process[1].Padding[3];
        if ( v59 )
        {
          v60 = *(_DWORD *)(v59 + 1084);
          if ( v58 >= v60 )
            v58 = v60;
        }
        if ( v58 < 2 )
          v57 = 4;
      }
      v61 = v57 | 2;
      if ( (Resource->ReservedLowFlags & 2) == 0 )
        v61 = v57;
      if ( v61 )
      {
        v106.LockQueue.Lock = &Resource->SpinLock;
        v106.LockQueue.Next = 0LL;
        v62 = KeGetCurrentIrql();
        v99 = v62;
        __writecr8(2uLL);
        if ( KiIrqlFlags )
        {
          KiRaiseIrqlProcessIrqlFlags((unsigned __int8)v62);
          LOBYTE(v62) = v99;
        }
        v106.OldIrql = v62;
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
        {
          v63 = _InterlockedExchange64((volatile __int64 *)p_SpinLock, (__int64)&v106);
          if ( v63 )
            KxWaitForLockOwnerShip(&v106, v63, v54, v55);
        }
        else
        {
          KiAcquireQueuedSpinLockInstrumented(&v106, &Resource->SpinLock);
        }
        OwnerThread = Resource->OwnerEntry.OwnerThread;
        p_OwnerEntry = &Resource->OwnerEntry;
        if ( (struct _KTHREAD *)OwnerThread != CurrentThread )
        {
          OwnerTable = Resource->OwnerTable;
          v67 = OwnerThread != 0;
          v68 = Resource->ActiveEntries + (unsigned __int64)Resource->NumberOfSharedWaiters;
          v69 = OwnerTable;
          if ( OwnerTable && (v75 = &OwnerTable[OwnerTable->TableSize], p_OwnerEntry = OwnerTable + 1, v67 < v68) )
          {
            while ( (struct _KTHREAD *)p_OwnerEntry->OwnerThread != CurrentThread )
            {
              if ( !p_OwnerEntry->OwnerThread || (++v67, v67 != v68) )
              {
                if ( ++p_OwnerEntry != v75 )
                  continue;
              }
              goto LABEL_86;
            }
            KeGetCurrentThread()->ResourceIndex = p_OwnerEntry - v69;
          }
          else
          {
LABEL_86:
            p_OwnerEntry = 0LL;
          }
        }
        if ( (v61 & 4) != 0 )
        {
          if ( (p_OwnerEntry->TableSize & 1) != 0 )
          {
            v61 &= ~4u;
          }
          else
          {
            PsBoostThreadIoEx(CurrentThread, 0LL, 0LL, 0LL);
            p_OwnerEntry->TableSize |= 1u;
          }
        }
        if ( (v61 & 2) != 0 )
        {
          if ( (p_OwnerEntry->TableSize & 4) != 0 )
          {
            v61 &= ~2u;
          }
          else
          {
            if ( _InterlockedIncrement((volatile signed __int32 *)&CurrentThread[1].Timer.TimerListEntry.Flink + 1) == 1
              && CurrentThread->AbWaitEntryCount )
            {
              v76 = KeGetCurrentIrql();
              v99 = v76;
              __writecr8(2uLL);
              if ( KiIrqlFlags )
                KiRaiseIrqlProcessIrqlFlags((unsigned __int8)v76);
              SystemArgument1 = KeGetCurrentPrcb();
              if ( (unsigned int)KiAbThreadInsertList(
                                   CurrentThread,
                                   (char *)SystemArgument1 + 37240,
                                   &CurrentThread->PropagateBoostsEntry) )
                KiAbQueueAutoBoostDpc(SystemArgument1);
              if ( KiIrqlFlags )
                KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v99);
              __writecr8((unsigned __int8)v99);
            }
            p_OwnerEntry->TableSize |= 4u;
          }
        }
        KeReleaseInStackQueuedSpinLock(&v106);
        if ( v61 )
        {
          if ( (v61 & 4) != 0 )
            IoBoostThreadIoPriority(CurrentThread, 2LL, 0LL);
          if ( (v61 & 2) != 0 )
            PsBoostThreadOutstandingIoQoS(CurrentThread);
        }
      }
    }
    __incgsdword(0x907Cu);
    __incgsdword(0x9064u);
    if ( v9 )
    {
      LODWORD(v99) = Resource->ContentionCount;
      LODWORD(SystemArgument1) = 0;
      v70 = KeGetCurrentPrcb();
      v71 = __rdtsc();
      v72 = v70->Group;
      v73 = v70->GroupIndex;
      ++v70->SynchCounters.ExEtwSynchTrackingNotificationsCount;
      LOWORD(SystemArgument1) = v72;
      BYTE2(SystemArgument1) = v73;
      v74 = EtwpGetTrackingLockSlotForThread(Resource, 0x10000LL);
      if ( v74 )
      {
        ++v70->SynchCounters.ExEtwSynchTrackingNotificationsAccountedCount;
        *(_QWORD *)(v74 + 8) = v71;
        if ( *(_DWORD *)(v74 + 32) == 4 )
        {
          if ( *(_WORD *)(v74 + 24) == v72 && *(_BYTE *)(v74 + 26) == v73 )
            *(_QWORD *)v74 = v71 - *(_QWORD *)v74;
          else
            *(_QWORD *)v74 = 1LL;
        }
        else
        {
          *(_QWORD *)v74 = 0LL;
        }
        *(_DWORD *)(v74 + 24) = (_DWORD)SystemArgument1;
        *(_DWORD *)(v74 + 44) = v99;
        *(_DWORD *)(v74 + 32) = 1;
        *(_DWORD *)(v74 + 36) = 1;
      }
    }
    return 1;
  }
  v94 = KeGetCurrentIrql();
  v95 = KeGetCurrentThread();
  if ( v94 > (unsigned __int8)v2 )
    KeBugCheckEx(0x1C6u, 0LL, v94, (unsigned __int8)v2, 0LL);
  if ( v94 >= 2u && (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
LABEL_163:
    KeBugCheckEx(0x1C6u, 5uLL, 0LL, 0LL, 0LL);
  if ( (v95->ApcState.InProgressFlags & 2) != 0 )
LABEL_139:
    KeBugCheckEx(0x1C6u, 6uLL, 0LL, 0LL, 0LL);
  if ( !v94 && (v95->MiscFlags & 0x400) == 0 && !v95->WaitBlock[3].SpareLong )
    goto LABEL_144;
  v77 = (unsigned __int64)KeGetCurrentThread();
  if ( Wait )
  {
    v78 = 9;
    v79 = 1;
    v80 = 8;
  }
  else
  {
    v80 = 0;
    v79 = 0;
    v78 = 1;
  }
  v81 = (v79 ^ 1) + 1;
  v82 = KeGetCurrentIrql();
  v83 = KeGetCurrentThread();
  if ( v82 > v81 )
    KeBugCheckEx(0x1C6u, 0LL, v82, v81, 0LL);
  if ( v82 >= 2u && (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
    goto LABEL_163;
  if ( (Flag & 8) == 0 && (v83->ApcState.InProgressFlags & 2) != 0 )
    goto LABEL_139;
  if ( !v82 && (v83->MiscFlags & 0x400) == 0 && !v83->WaitBlock[3].SpareLong )
LABEL_144:
    KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
  v84 = KeAbPreAcquire(Resource, 0LL, v80 == 0);
  v99 = v84;
  v85 = _InterlockedCompareExchange64((volatile signed __int64 *)Resource, 1LL, 0LL);
  p_ActiveEntries = &Resource->ActiveEntries;
  if ( !v85 )
  {
    LODWORD(Resource->SpinLock) = 1;
    LOBYTE(v7) = 0;
    Resource->Reserved2 = (PVOID)(v77 | v7);
    if ( v84 )
    {
      v87 = *(_BYTE *)(v84 + 8);
      *(_BYTE *)(v84 + 10) = 1;
      BYTE4(Resource->SpinLock) = (2 * (v87 & 0x3F)) | 1;
    }
    _disable();
    v88 = (ULONG **)(v77 + 1720);
    v89 = *(_QWORD **)(v77 + 1720);
    if ( v89[1] != v77 + 1720 )
LABEL_43:
      __fastfail(3u);
    *(_QWORD *)p_ActiveEntries = v89;
    *(_QWORD *)&Resource->NumberOfSharedWaiters = v88;
    v89[1] = p_ActiveEntries;
    *v88 = p_ActiveEntries;
    v90 = KeGetCurrentPrcb();
    v91 = (signed __int32 *)v90->SchedulerAssist;
    if ( v91 )
    {
      _m_prefetchw(v91);
      v92 = *v91;
      do
      {
        v93 = v92;
        v92 = _InterlockedCompareExchange(v91, v92 & 0xFFDFFFFF, v92);
      }
      while ( v93 != v92 );
      if ( (v92 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick(v90);
    }
    _enable();
    return 1;
  }
  if ( Resource->Reserved2 == (PVOID)v77 )
  {
    ++LODWORD(Resource->SpinLock);
    if ( !v84 )
      return 1;
    KeAbPostReleaseEx((ULONG_PTR)Resource, v84);
    return 1;
  }
  else
  {
    if ( v80 )
    {
      ExpAcquireFastResourceExclusiveSlow((_DWORD)Resource, v85, v77, v84, v78);
      return 1;
    }
    if ( v84 )
      KeAbPostReleaseEx((ULONG_PTR)Resource, v84);
    return 0;
  }
}
