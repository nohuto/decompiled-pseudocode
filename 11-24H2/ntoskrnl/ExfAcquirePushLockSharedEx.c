/*
 * XREFs of ExfAcquirePushLockSharedEx @ 0x14031F9EC
 * Callers:
 *     CcFlushCacheOneRange @ 0x140208260 (CcFlushCacheOneRange.c)
 *     SmpKeyedStoreReference @ 0x14020D9B4 (SmpKeyedStoreReference.c)
 *     SmpKeyedStoreEntryGet @ 0x14020DF80 (SmpKeyedStoreEntryGet.c)
 *     RtlpCSparseBitmapPageCommit @ 0x1402197E0 (RtlpCSparseBitmapPageCommit.c)
 *     CcGetVirtualAddress @ 0x140229480 (CcGetVirtualAddress.c)
 *     RtlpLookupDynamicUserFunctionTable @ 0x140237304 (RtlpLookupDynamicUserFunctionTable.c)
 *     MiLockDynamicMemoryShared @ 0x140264694 (MiLockDynamicMemoryShared.c)
 *     ExpSaAllocatorAllocate @ 0x14026E250 (ExpSaAllocatorAllocate.c)
 *     InsertEventEntryInLookUpTable @ 0x140274A04 (InsertEventEntryInLookUpTable.c)
 *     FsRtlAcquireAutoExpandPushLockShared @ 0x14028F100 (FsRtlAcquireAutoExpandPushLockShared.c)
 *     PopAcquireRwLockShared @ 0x1402AE968 (PopAcquireRwLockShared.c)
 *     PopDiagTraceFxRundown @ 0x1402B69F4 (PopDiagTraceFxRundown.c)
 *     PopFxStopDeviceAccounting @ 0x1402B79AC (PopFxStopDeviceAccounting.c)
 *     MiLockLoaderEntry @ 0x1402BC0A0 (MiLockLoaderEntry.c)
 *     PopPepWork @ 0x1402BEEE0 (PopPepWork.c)
 *     ?SmStUnmapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z @ 0x1402F85D0 (-SmStUnmapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z.c)
 *     ?StLockAcquireShared@@YAKPEAUVLOCK@@@Z @ 0x1402F9208 (-StLockAcquireShared@@YAKPEAUVLOCK@@@Z.c)
 *     PspLockProcessShared @ 0x14031DC40 (PspLockProcessShared.c)
 *     ExAcquireCacheAwarePushLockSharedEx @ 0x14031EF90 (ExAcquireCacheAwarePushLockSharedEx.c)
 *     ExAcquireAutoExpandPushLockShared @ 0x14031F040 (ExAcquireAutoExpandPushLockShared.c)
 *     PsReferencePrimaryTokenWithTag @ 0x14031F4D0 (PsReferencePrimaryTokenWithTag.c)
 *     ExAcquirePushLockSharedEx @ 0x14031F960 (ExAcquirePushLockSharedEx.c)
 *     MiLockVadShared @ 0x140345480 (MiLockVadShared.c)
 *     MiWalkEntireImage @ 0x140349C00 (MiWalkEntireImage.c)
 *     ExpSaAllocatorFree @ 0x140360F4C (ExpSaAllocatorFree.c)
 *     MiTrimSection @ 0x1403612B0 (MiTrimSection.c)
 *     MiTrimSharedPageFromViews @ 0x140362D10 (MiTrimSharedPageFromViews.c)
 *     PoGetIdleTimes @ 0x14036F560 (PoGetIdleTimes.c)
 *     SmHwAcceleratorPartitionMgrGetDescriptor @ 0x140383B28 (SmHwAcceleratorPartitionMgrGetDescriptor.c)
 *     PopFxPauseDeviceAccounting @ 0x1403A67DC (PopFxPauseDeviceAccounting.c)
 *     PopFxResidentTimeoutRoutine @ 0x1403A8BF0 (PopFxResidentTimeoutRoutine.c)
 *     SepRmReferenceCapTable @ 0x1403B50BC (SepRmReferenceCapTable.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x1403C63D8 (LOCK_ADDRESS_SPACE_SHARED.c)
 *     RtlpHpAcquireLockShared @ 0x1403D9B14 (RtlpHpAcquireLockShared.c)
 *     PspLockProcessThreadListShared @ 0x1403E2A50 (PspLockProcessThreadListShared.c)
 *     ExfAcquireCacheAwarePushLockSharedEx @ 0x1404080E0 (ExfAcquireCacheAwarePushLockSharedEx.c)
 *     PspLockProcessListShared @ 0x14040B0F0 (PspLockProcessListShared.c)
 *     PspLockThreadSecurityShared @ 0x140414FB0 (PspLockThreadSecurityShared.c)
 *     ExfAcquirePushLockShared @ 0x140438000 (ExfAcquirePushLockShared.c)
 *     MI_LOCK_RELOCATIONS_SHARED @ 0x14043AF7C (MI_LOCK_RELOCATIONS_SHARED.c)
 *     CcSlowReferenceSharedCacheMapFileObject @ 0x140446C84 (CcSlowReferenceSharedCacheMapFileObject.c)
 *     PopPepIdleTimeoutRoutine @ 0x140447B60 (PopPepIdleTimeoutRoutine.c)
 *     MiGetSpecialPurposeMemoryPartitionForCaching @ 0x14044E920 (MiGetSpecialPurposeMemoryPartitionForCaching.c)
 *     PoFxSystemLatencyNotify @ 0x140463574 (PoFxSystemLatencyNotify.c)
 *     MiSendParkedCoreUpdateToAllChildPartitions @ 0x140471E10 (MiSendParkedCoreUpdateToAllChildPartitions.c)
 *     PfLockSharedAcquire @ 0x14047A884 (PfLockSharedAcquire.c)
 *     MmCheckProcessShadow @ 0x140482160 (MmCheckProcessShadow.c)
 *     PopFxResumeDeviceAccounting @ 0x1404854CC (PopFxResumeDeviceAccounting.c)
 *     PoFxPrepareDevice @ 0x140488860 (PoFxPrepareDevice.c)
 *     ExpAcquirePoolListLockShared @ 0x14048C078 (ExpAcquirePoolListLockShared.c)
 *     PspLockQuotaListShared @ 0x14048F05C (PspLockQuotaListShared.c)
 *     PopFxActivateDevicesForSx @ 0x1404908F4 (PopFxActivateDevicesForSx.c)
 *     PopFxStartDeviceAccounting @ 0x140492E8C (PopFxStartDeviceAccounting.c)
 *     ExpLockCallbackListShared @ 0x1404A1FA4 (ExpLockCallbackListShared.c)
 *     PopFxIdleDevicesFromSx @ 0x1404A3788 (PopFxIdleDevicesFromSx.c)
 *     PoFxStartDevicePowerManagement @ 0x1404A5D50 (PoFxStartDevicePowerManagement.c)
 *     ExpQueryLicenseValueFromBlobHelper @ 0x1404AA410 (ExpQueryLicenseValueFromBlobHelper.c)
 *     MiFinishResume @ 0x1404ADDD0 (MiFinishResume.c)
 *     PopFxFindAcpiDeviceByUniqueId @ 0x1404B59F0 (PopFxFindAcpiDeviceByUniqueId.c)
 *     PopFxFindAndReferenceAcpiDevice @ 0x1404B779C (PopFxFindAndReferenceAcpiDevice.c)
 *     PopFxLowPowerEpochCallback @ 0x1404BB450 (PopFxLowPowerEpochCallback.c)
 *     CcGetNumberOfMappedPages @ 0x1404BC6B0 (CcGetNumberOfMappedPages.c)
 *     PopFxRegisterDeviceWithPep @ 0x1404BEBF8 (PopFxRegisterDeviceWithPep.c)
 *     SmHwAcceleratorPartitionMgrFreeDescriptor @ 0x1404C7018 (SmHwAcceleratorPartitionMgrFreeDescriptor.c)
 *     EtwpTraceThreadRundown @ 0x1404ECB50 (EtwpTraceThreadRundown.c)
 *     PspAcquirePushLockShared @ 0x1404F2D1C (PspAcquirePushLockShared.c)
 *     IommuProcessPageRequestQueue @ 0x1405621A0 (IommuProcessPageRequestQueue.c)
 *     KeQueryDpcWatchdogConfiguration @ 0x1405B16E8 (KeQueryDpcWatchdogConfiguration.c)
 *     KiAvailableCpusPartitionWorkItemCallback @ 0x1405B5B20 (KiAvailableCpusPartitionWorkItemCallback.c)
 *     PopFxDisableBasicAccountingWorker @ 0x1405CE850 (PopFxDisableBasicAccountingWorker.c)
 *     PopPepIterateDeviceList @ 0x1405D8AB4 (PopPepIterateDeviceList.c)
 *     PopPepPlatformStateRegistered @ 0x1405D8BE8 (PopPepPlatformStateRegistered.c)
 *     PopFxAcpiPrepareDevice @ 0x1405D9424 (PopFxAcpiPrepareDevice.c)
 *     PspLookupSyscallProviderById @ 0x1405E1F54 (PspLookupSyscallProviderById.c)
 *     PspSetProcessTimerDelayForWin32 @ 0x1405E33F8 (PspSetProcessTimerDelayForWin32.c)
 *     SmKmVirtualLockCtxLockMemory @ 0x14060C5BC (SmKmVirtualLockCtxLockMemory.c)
 *     SmGetStoreOwnerProcessId @ 0x14060D3FC (SmGetStoreOwnerProcessId.c)
 *     DifExfAcquirePushLockSharedWrapper @ 0x140620080 (DifExfAcquirePushLockSharedWrapper.c)
 *     EtwpGetCompressionSettings @ 0x14064FBB0 (EtwpGetCompressionSettings.c)
 *     MiMarkHugePfnBad @ 0x1406720BC (MiMarkHugePfnBad.c)
 *     CmpLockGlobalKeyLockTrackerShared @ 0x1406F31B8 (CmpLockGlobalKeyLockTrackerShared.c)
 *     ExpWatchProductTypeWork @ 0x1406F4C60 (ExpWatchProductTypeWork.c)
 *     KiAvailableCpusProcessWorkItemCallback @ 0x140739E20 (KiAvailableCpusProcessWorkItemCallback.c)
 *     AlpcpPortQueryServerInfo @ 0x140740094 (AlpcpPortQueryServerInfo.c)
 *     ObIsDosDeviceLocallyMapped @ 0x140742100 (ObIsDosDeviceLocallyMapped.c)
 *     PspGetNextSyscallProviderProcess @ 0x140771558 (PspGetNextSyscallProviderProcess.c)
 *     PspSetProcessAffinityUpdateMode @ 0x1407754A8 (PspSetProcessAffinityUpdateMode.c)
 *     PspUpdateSingleProcessAffinity @ 0x1407756D0 (PspUpdateSingleProcessAffinity.c)
 *     PsTerminateVsmEnclave @ 0x14077B4E4 (PsTerminateVsmEnclave.c)
 *     SepIsValidProcUniqueLuid @ 0x140794610 (SepIsValidProcUniqueLuid.c)
 *     SepIsParentOfChildAppContainer @ 0x140795018 (SepIsParentOfChildAppContainer.c)
 *     SmKmKeyGenGenerate @ 0x140799F10 (SmKmKeyGenGenerate.c)
 *     SmEtwEnableCallback @ 0x14079B9C0 (SmEtwEnableCallback.c)
 *     SmcGetCacheStats @ 0x14079D74C (SmcGetCacheStats.c)
 *     EtwCleanupSiloState @ 0x1407A63FC (EtwCleanupSiloState.c)
 *     ExpGetSystemPlatformBinary @ 0x1407B4710 (ExpGetSystemPlatformBinary.c)
 *     ExFetchLicenseData @ 0x1407B81D0 (ExFetchLicenseData.c)
 *     ExGetLicenseTamperState @ 0x1407B8480 (ExGetLicenseTamperState.c)
 *     sub_1407B8A00 @ 0x1407B8A00 (sub_1407B8A00.c)
 *     sub_1407B91F4 @ 0x1407B91F4 (sub_1407B91F4.c)
 *     sub_1407B97AC @ 0x1407B97AC (sub_1407B97AC.c)
 *     SLGetSubscriptionPfn @ 0x1407B9B58 (SLGetSubscriptionPfn.c)
 *     SLQueryLicenseValueInternal @ 0x1407B9E3C (SLQueryLicenseValueInternal.c)
 *     SLUpdateLicenseDataInternal @ 0x1407BA654 (SLUpdateLicenseDataInternal.c)
 *     ExRegisterExtension @ 0x1407C08C0 (ExRegisterExtension.c)
 *     ExpKdPullRemoteFileForUser @ 0x1407C4C90 (ExpKdPullRemoteFileForUser.c)
 *     MmEnumerateBadPages @ 0x1407ED768 (MmEnumerateBadPages.c)
 *     MiIsExtentDangling @ 0x1407F09E0 (MiIsExtentDangling.c)
 *     MiGetAllRegisteredPatches @ 0x1407F2DDC (MiGetAllRegisteredPatches.c)
 *     MiLogHotPatchRundown @ 0x1407F4BB8 (MiLogHotPatchRundown.c)
 *     MiOpenSpecialPurposeMemory @ 0x1407FEE68 (MiOpenSpecialPurposeMemory.c)
 *     MiQuerySpecialPurposeMemoryInformation @ 0x1407FF008 (MiQuerySpecialPurposeMemoryInformation.c)
 *     EtwpIsGuidAllowed @ 0x140833108 (EtwpIsGuidAllowed.c)
 *     ObLogSecurityDescriptor @ 0x140836B60 (ObLogSecurityDescriptor.c)
 *     EtwpReferenceLoggerSecurityDescriptor @ 0x14083732C (EtwpReferenceLoggerSecurityDescriptor.c)
 *     EtwpFindOrCreateGuidEntry @ 0x14083866C (EtwpFindOrCreateGuidEntry.c)
 *     EtwpFindGuidEntryByGuid @ 0x140838880 (EtwpFindGuidEntryByGuid.c)
 *     EtwpRegisterUMProvider @ 0x140838D50 (EtwpRegisterUMProvider.c)
 *     EtwpGetGuidList @ 0x1408399A0 (EtwpGetGuidList.c)
 *     EtwpGetNextGuidEntry @ 0x140839C10 (EtwpGetNextGuidEntry.c)
 *     SeCreateAccessState @ 0x14083B750 (SeCreateAccessState.c)
 *     SeCaptureSubjectContextEx @ 0x14083BF00 (SeCaptureSubjectContextEx.c)
 *     CmpFindSubkeyInHashByChildCell @ 0x14083F9C0 (CmpFindSubkeyInHashByChildCell.c)
 *     CmpLockHiveListShared @ 0x1408405B8 (CmpLockHiveListShared.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x140840AF0 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpCallCallBacksEx @ 0x140843FD0 (CmpCallCallBacksEx.c)
 *     CmpCallbackFillObjectContext @ 0x140844AB0 (CmpCallbackFillObjectContext.c)
 *     SeCaptureSubjectContext @ 0x140849BB0 (SeCaptureSubjectContext.c)
 *     ObpCreateHandle @ 0x140849D60 (ObpCreateHandle.c)
 *     PsOpenProcess @ 0x140850610 (PsOpenProcess.c)
 *     ObOpenObjectByPointer @ 0x1408511D0 (ObOpenObjectByPointer.c)
 *     NtOpenThreadTokenEx @ 0x140851680 (NtOpenThreadTokenEx.c)
 *     ObInsertObjectEx @ 0x140853900 (ObInsertObjectEx.c)
 *     SeDefaultObjectMethod @ 0x140854470 (SeDefaultObjectMethod.c)
 *     ObSetSecurityDescriptorInfo @ 0x140854B90 (ObSetSecurityDescriptorInfo.c)
 *     PsReferenceEffectiveToken @ 0x140858F20 (PsReferenceEffectiveToken.c)
 *     PspGetNextJob @ 0x14085D390 (PspGetNextJob.c)
 *     PsQueryStatisticsProcess @ 0x14085E140 (PsQueryStatisticsProcess.c)
 *     PspLockJobMemoryLimitsShared @ 0x14085ED08 (PspLockJobMemoryLimitsShared.c)
 *     PsQueryProcessEnergyValues @ 0x14085EE30 (PsQueryProcessEnergyValues.c)
 *     PfpPrivSourceEnum @ 0x14085F9A0 (PfpPrivSourceEnum.c)
 *     PsGetNextProcess @ 0x1408603A0 (PsGetNextProcess.c)
 *     ExGetNextProcess @ 0x140860570 (ExGetNextProcess.c)
 *     AlpcpCreateClientPort @ 0x140868FD0 (AlpcpCreateClientPort.c)
 *     NtDeleteKey @ 0x14086DAE0 (NtDeleteKey.c)
 *     CmpCreateKeyControlBlock @ 0x140875AF0 (CmpCreateKeyControlBlock.c)
 *     CmpWalkOneLevel @ 0x140876890 (CmpWalkOneLevel.c)
 *     CmpGetKeyNodeForKcb @ 0x140879FC0 (CmpGetKeyNodeForKcb.c)
 *     ObpReferenceSecurityDescriptorSlow @ 0x14087EDAC (ObpReferenceSecurityDescriptorSlow.c)
 *     HvLockHiveFlusherShared @ 0x140881BD8 (HvLockHiveFlusherShared.c)
 *     AlpcpFlushMessagesPort @ 0x14088EE5C (AlpcpFlushMessagesPort.c)
 *     AlpcpDisconnectPort @ 0x14088F628 (AlpcpDisconnectPort.c)
 *     AlpcpDispatchConnectionRequest @ 0x14089032C (AlpcpDispatchConnectionRequest.c)
 *     AlpcpSendLegacySynchronousRequest @ 0x14089055C (AlpcpSendLegacySynchronousRequest.c)
 *     AlpcpReceiveDirectMessagePort @ 0x1408926F8 (AlpcpReceiveDirectMessagePort.c)
 *     NtAlpcOpenSenderProcess @ 0x1408929D0 (NtAlpcOpenSenderProcess.c)
 *     AlpcpCreateSection @ 0x140893594 (AlpcpCreateSection.c)
 *     AlpcpCreateReserve @ 0x140893C6C (AlpcpCreateReserve.c)
 *     AlpcpCreateSectionView @ 0x1408950B8 (AlpcpCreateSectionView.c)
 *     AlpcpLocateSectionView @ 0x14089630C (AlpcpLocateSectionView.c)
 *     AlpcReferenceBlobByHandle @ 0x140896580 (AlpcReferenceBlobByHandle.c)
 *     AlpcpSendMessage @ 0x140898440 (AlpcpSendMessage.c)
 *     PspChargeProcessWakeCounter @ 0x1408999A0 (PspChargeProcessWakeCounter.c)
 *     AlpcpDispatchReplyToWaitingThread @ 0x140899F40 (AlpcpDispatchReplyToWaitingThread.c)
 *     AlpcpDispatchNewMessage @ 0x14089A470 (AlpcpDispatchNewMessage.c)
 *     AlpcpDispatchReplyToPort @ 0x14089BF40 (AlpcpDispatchReplyToPort.c)
 *     AlpcpReferenceAndLockTargetPortsAndCommunicationInfo @ 0x14089C510 (AlpcpReferenceAndLockTargetPortsAndCommunicationInfo.c)
 *     AlpcpCancelMessage @ 0x14089C73C (AlpcpCancelMessage.c)
 *     AlpcpCaptureSecurityAttributeInternal @ 0x14089CE60 (AlpcpCaptureSecurityAttributeInternal.c)
 *     NtAlpcCreateSecurityContext @ 0x14089D0F0 (NtAlpcCreateSecurityContext.c)
 *     AlpcpReceiveLegacyMessage @ 0x14089D780 (AlpcpReceiveLegacyMessage.c)
 *     AlpcpReceiveMessagePort @ 0x14089DB00 (AlpcpReceiveMessagePort.c)
 *     AlpcpCreateSecurityContext @ 0x14089E878 (AlpcpCreateSecurityContext.c)
 *     SeCreateClientSecurity @ 0x14089EDC0 (SeCreateClientSecurity.c)
 *     NtAlpcImpersonateClientOfPort @ 0x14089F010 (NtAlpcImpersonateClientOfPort.c)
 *     SeCreateClientSecurityEx @ 0x14089FB40 (SeCreateClientSecurityEx.c)
 *     AlpcpGetEffectiveTokenMessage @ 0x14089FDF0 (AlpcpGetEffectiveTokenMessage.c)
 *     AlpcpExposeTokenAttribute @ 0x1408A0FD0 (AlpcpExposeTokenAttribute.c)
 *     ObOpenObjectByNameEx @ 0x1408A41E0 (ObOpenObjectByNameEx.c)
 *     ObCreateObjectEx @ 0x1408A4B90 (ObCreateObjectEx.c)
 *     ObpLookupObjectName @ 0x1408A58B0 (ObpLookupObjectName.c)
 *     PiControlGetDeviceInterfaceEnabled @ 0x1408CD650 (PiControlGetDeviceInterfaceEnabled.c)
 *     PiDmObjectAcquireSharedLock @ 0x1408CE46C (PiDmObjectAcquireSharedLock.c)
 *     NtAreMappedFilesTheSame @ 0x1408D8910 (NtAreMappedFilesTheSame.c)
 *     MiIsRangeFullyCommitted @ 0x1408DBA3C (MiIsRangeFullyCommitted.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1408E4560 (CmKeyBodyRemapToVirtualForEnum.c)
 *     AlpcpReferenceConnectedPort @ 0x1408E89B0 (AlpcpReferenceConnectedPort.c)
 *     NtSetInformationProcess @ 0x1408EBA70 (NtSetInformationProcess.c)
 *     PsGetNextProcessThread @ 0x1408EEC70 (PsGetNextProcessThread.c)
 *     ExpSnapShotHandleTables @ 0x1408F1D40 (ExpSnapShotHandleTables.c)
 *     PsGetProcessDeepFreezeStats @ 0x1408F3CEC (PsGetProcessDeepFreezeStats.c)
 *     SeCreateAccessStateEx @ 0x1408FCAF0 (SeCreateAccessStateEx.c)
 *     sub_1408FF83C @ 0x1408FF83C (sub_1408FF83C.c)
 *     ExpWnfLookupNameInstance @ 0x140900CF0 (ExpWnfLookupNameInstance.c)
 *     ExpWnfAcquireSubscriptionByName @ 0x140900E08 (ExpWnfAcquireSubscriptionByName.c)
 *     ExpWnfDeliverThreadNotifications @ 0x1409016A0 (ExpWnfDeliverThreadNotifications.c)
 *     ExpWnfCompleteThreadSubscriptions @ 0x140901A5C (ExpWnfCompleteThreadSubscriptions.c)
 *     ExpWnfReadStateData @ 0x140901C9C (ExpWnfReadStateData.c)
 *     NtQueryWnfStateData @ 0x140901E30 (NtQueryWnfStateData.c)
 *     ExpNtUpdateWnfStateData @ 0x1409027E0 (ExpNtUpdateWnfStateData.c)
 *     ExpWnfResolveScopeInstance @ 0x1409032C0 (ExpWnfResolveScopeInstance.c)
 *     ExpWnfNotifyNameSubscribers @ 0x140904190 (ExpWnfNotifyNameSubscribers.c)
 *     ExpWnfDispatchKernelSubscription @ 0x140904520 (ExpWnfDispatchKernelSubscription.c)
 *     sub_14091DBE4 @ 0x14091DBE4 (sub_14091DBE4.c)
 *     sub_14091E6EC @ 0x14091E6EC (sub_14091E6EC.c)
 *     sub_14091EE7C @ 0x14091EE7C (sub_14091EE7C.c)
 *     sub_14091F17C @ 0x14091F17C (sub_14091F17C.c)
 *     PspReferenceSystemDll @ 0x1409222A8 (PspReferenceSystemDll.c)
 *     EtwpCovSampStackHashCheck @ 0x1409231EC (EtwpCovSampStackHashCheck.c)
 *     EtwpCovSampContextGetModule @ 0x140923930 (EtwpCovSampContextGetModule.c)
 *     VrpTranslatePath @ 0x140929830 (VrpTranslatePath.c)
 *     VrpLockJobContextShared @ 0x14092B158 (VrpLockJobContextShared.c)
 *     VrpLockDiffHiveTableShared @ 0x14092CE50 (VrpLockDiffHiveTableShared.c)
 *     MiRelocateImagePfn @ 0x14093B6F8 (MiRelocateImagePfn.c)
 *     PsReferenceImpersonationToken @ 0x140940A30 (PsReferenceImpersonationToken.c)
 *     CmpGetCallbackObjectContext @ 0x140940B60 (CmpGetCallbackObjectContext.c)
 *     ExpGetNextProcessThread @ 0x140940F10 (ExpGetNextProcessThread.c)
 *     EtwpCoverageSamplerQuery @ 0x1409454F0 (EtwpCoverageSamplerQuery.c)
 *     NtQueryObject @ 0x140951400 (NtQueryObject.c)
 *     ObQueryNameStringMode @ 0x1409524C0 (ObQueryNameStringMode.c)
 *     ExpGetKernelDataProtection @ 0x14095B830 (ExpGetKernelDataProtection.c)
 *     ObQueryDeviceMapInformation @ 0x14096D0C0 (ObQueryDeviceMapInformation.c)
 *     ObpReferenceCurrentDeviceMap @ 0x14096D6B0 (ObpReferenceCurrentDeviceMap.c)
 *     ObpReferenceDeviceMapFastRef @ 0x14096DEB0 (ObpReferenceDeviceMapFastRef.c)
 *     CmpLockHashEntryShared @ 0x140970DC0 (CmpLockHashEntryShared.c)
 *     PsReferenceImpersonationTokenEx @ 0x1409737D0 (PsReferenceImpersonationTokenEx.c)
 *     CmSetCallbackObjectContext @ 0x140975570 (CmSetCallbackObjectContext.c)
 *     ObpCallPreOperationCallbacks @ 0x140977CD0 (ObpCallPreOperationCallbacks.c)
 *     CmpLockContextListShared @ 0x1409834D0 (CmpLockContextListShared.c)
 *     CmpLockCallbackListShared @ 0x140987240 (CmpLockCallbackListShared.c)
 *     ObAssignObjectSecurityDescriptor @ 0x140989740 (ObAssignObjectSecurityDescriptor.c)
 *     EtwpGetSidExtendedHeaderItem @ 0x14098FEE0 (EtwpGetSidExtendedHeaderItem.c)
 *     AlpcpReceiveSynchronousReply @ 0x140993FB0 (AlpcpReceiveSynchronousReply.c)
 *     AlpcpPortQueryConnectedSidInfo @ 0x1409950F4 (AlpcpPortQueryConnectedSidInfo.c)
 *     AlpcpPortQueryServerSessionInfo @ 0x1409953FC (AlpcpPortQueryServerSessionInfo.c)
 *     ObpLockDirectoryShared @ 0x14099A610 (ObpLockDirectoryShared.c)
 *     PiDmObjectGetCachedObjectPropertyData @ 0x14099AAC0 (PiDmObjectGetCachedObjectPropertyData.c)
 *     ObpLockChildDirectory @ 0x1409AF090 (ObpLockChildDirectory.c)
 *     PsQueryRuntimeProcess @ 0x1409AF430 (PsQueryRuntimeProcess.c)
 *     AlpcpCaptureSecurityAttribute @ 0x1409C12C0 (AlpcpCaptureSecurityAttribute.c)
 *     ExpWnfSubscribeNameInstance @ 0x1409C32E4 (ExpWnfSubscribeNameInstance.c)
 *     sub_1409D9BE8 @ 0x1409D9BE8 (sub_1409D9BE8.c)
 *     sub_1409DA1F4 @ 0x1409DA1F4 (sub_1409DA1F4.c)
 *     sub_1409DB02C @ 0x1409DB02C (sub_1409DB02C.c)
 *     CmLockKeyForWrite @ 0x1409DBB68 (CmLockKeyForWrite.c)
 *     AlpcpEnumerateResourcesPort @ 0x1409E1B20 (AlpcpEnumerateResourcesPort.c)
 *     CmpLockHashEntrySharedByKcb @ 0x1409E4D38 (CmpLockHashEntrySharedByKcb.c)
 *     AlpcpReplyLegacySynchronousRequest @ 0x1409E5CE0 (AlpcpReplyLegacySynchronousRequest.c)
 *     PspStorageGetObject @ 0x1409E74EC (PspStorageGetObject.c)
 *     ExpWnfNotifySubscription @ 0x1409E8AE0 (ExpWnfNotifySubscription.c)
 *     DbgkpSendErrorMessage @ 0x1409E93F0 (DbgkpSendErrorMessage.c)
 *     PspLockJobListShared @ 0x1409F4C44 (PspLockJobListShared.c)
 *     RtlFindDynamicEnforcedAddressInRanges @ 0x1409F9380 (RtlFindDynamicEnforcedAddressInRanges.c)
 *     NtAlpcSetInformation @ 0x140A06870 (NtAlpcSetInformation.c)
 *     PspSelectVsmEnclaveByNumber @ 0x140A0A5EC (PspSelectVsmEnclaveByNumber.c)
 *     RtlpFlsDataCleanup @ 0x140A0A908 (RtlpFlsDataCleanup.c)
 *     ExAcquireTimeRefreshLockShared @ 0x140A0C1B0 (ExAcquireTimeRefreshLockShared.c)
 *     AlpcpReturnMessageOnInsufficientBuffer @ 0x140A1850C (AlpcpReturnMessageOnInsufficientBuffer.c)
 *     NtAlpcDeleteSectionView @ 0x140A19B40 (NtAlpcDeleteSectionView.c)
 *     CmFcManagerQueryFeatureConfigurationSectionInformation @ 0x140A1A8B0 (CmFcManagerQueryFeatureConfigurationSectionInformation.c)
 *     AlpcpAcceptConnectPort @ 0x140A1ED20 (AlpcpAcceptConnectPort.c)
 *     RtlpFindDynamicEHContinuationTarget @ 0x140A248E4 (RtlpFindDynamicEHContinuationTarget.c)
 *     AlpcpProcessSynchronousRequest @ 0x140A24FBC (AlpcpProcessSynchronousRequest.c)
 *     MiFindProcessImageHotPatchRecord @ 0x140A26708 (MiFindProcessImageHotPatchRecord.c)
 *     CmFcpManagerPublishChangeNotifications @ 0x140A2B2EC (CmFcpManagerPublishChangeNotifications.c)
 *     AlpcpReferenceMessageByWaitingThreadPort @ 0x140A2F828 (AlpcpReferenceMessageByWaitingThreadPort.c)
 *     ExpWnfAcquireSubscriptionNameInstance @ 0x140A313DC (ExpWnfAcquireSubscriptionNameInstance.c)
 *     AlpcpQueryRemoteView @ 0x140A320FC (AlpcpQueryRemoteView.c)
 *     SepDereferenceLowBoxNumberEntry @ 0x140A3B0C0 (SepDereferenceLowBoxNumberEntry.c)
 *     CmpVolumeContextLockShared @ 0x140A3BFC0 (CmpVolumeContextLockShared.c)
 *     WdipTimeoutCheckRoutine @ 0x140A3D620 (WdipTimeoutCheckRoutine.c)
 *     WdipSemDisableScenario @ 0x140A3D910 (WdipSemDisableScenario.c)
 *     WdipSemEnableScenario @ 0x140A3E10C (WdipSemEnableScenario.c)
 *     SepSetTokenLowboxNumber @ 0x140A42978 (SepSetTokenLowboxNumber.c)
 *     PopAcquireUmpoPushLock @ 0x140A45FAC (PopAcquireUmpoPushLock.c)
 *     PsReferencePartitionSystemProcess @ 0x140A48DC0 (PsReferencePartitionSystemProcess.c)
 *     MiFindHotPatchRecord @ 0x140A4EF38 (MiFindHotPatchRecord.c)
 *     DbgkFlushErrorPort @ 0x140A527EC (DbgkFlushErrorPort.c)
 *     CmpVolumeManagerLockContextListShared @ 0x140A52CDC (CmpVolumeManagerLockContextListShared.c)
 *     ExpWnfAcquirePermanentDataStoreHandle @ 0x140A5AB08 (ExpWnfAcquirePermanentDataStoreHandle.c)
 *     ExpWnfEnumerateScopeInstances @ 0x140A60D58 (ExpWnfEnumerateScopeInstances.c)
 *     NtTraceControl @ 0x140A82250 (NtTraceControl.c)
 *     AlpcpMapLegacyPortRemoteView @ 0x140A839EC (AlpcpMapLegacyPortRemoteView.c)
 *     CmFcpManagerProcessUsageDataProviders @ 0x140A8CD40 (CmFcpManagerProcessUsageDataProviders.c)
 *     ExpWnfInvalidateDataStores @ 0x140A9A7A8 (ExpWnfInvalidateDataStores.c)
 *     MiQueryLoadedPatches @ 0x140AA11D8 (MiQueryLoadedPatches.c)
 *     AlpcpInvokeLogCallbacks @ 0x140AA4A24 (AlpcpInvokeLogCallbacks.c)
 *     MiQueryProcessActivePatches @ 0x140AA9284 (MiQueryProcessActivePatches.c)
 *     PopQueryPowerButtonBugcheckEnabled @ 0x140AAD370 (PopQueryPowerButtonBugcheckEnabled.c)
 *     NtQueryDirectoryObject @ 0x140AC1EB0 (NtQueryDirectoryObject.c)
 *     EtwpAddRegEntryToGroup @ 0x140AD9390 (EtwpAddRegEntryToGroup.c)
 *     EtwpCovSampContextPruneModules @ 0x140ADB9FC (EtwpCovSampContextPruneModules.c)
 *     WheaConfigureErrorSource @ 0x140B63CB0 (WheaConfigureErrorSource.c)
 *     WheaUnconfigureErrorSource @ 0x140B63E70 (WheaUnconfigureErrorSource.c)
 *     MmDuplicateMemory @ 0x140B64A68 (MmDuplicateMemory.c)
 *     CmLockHiveSecurityShared @ 0x140BBB96C (CmLockHiveSecurityShared.c)
 *     CmpLockKcbShared @ 0x140BBBA1C (CmpLockKcbShared.c)
 * Callees:
 *     RtlBackoff @ 0x140284140 (RtlBackoff.c)
 *     KeAbPreWait @ 0x14031DCF0 (KeAbPreWait.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExpOptimizePushLockList @ 0x140406034 (ExpOptimizePushLockList.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

signed __int64 __fastcall ExfAcquirePushLockSharedEx(signed __int64 *a1, char a2, char *a3, __int64 a4)
{
  unsigned __int64 i; // rdx
  unsigned __int64 v9; // r9
  bool v10; // r15
  signed __int64 v11; // rdi
  signed __int64 v12; // rcx
  signed __int64 result; // rax
  bool v14; // cl
  bool v15; // zf
  signed __int64 v16; // rax
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rax
  __int16 Object; // [rsp+40h] [rbp-40h] BYREF
  char v22; // [rsp+42h] [rbp-3Eh]
  _BYTE v23[5]; // [rsp+43h] [rbp-3Dh] BYREF
  _QWORD v24[3]; // [rsp+48h] [rbp-38h] BYREF
  __int16 *p_Object; // [rsp+60h] [rbp-20h]
  __int64 v26; // [rsp+68h] [rbp-18h]
  int v27; // [rsp+70h] [rbp-10h]
  signed __int32 v28; // [rsp+74h] [rbp-Ch] BYREF
  char *v29; // [rsp+78h] [rbp-8h]
  unsigned int v30; // [rsp+B0h] [rbp+30h] BYREF

  memset_0(&Object, 0, 0x40uLL);
  v30 = 0;
  v10 = ExpPushLockAllowImplicitUpgrade && (a2 & 4) == 0;
  _m_prefetchw(a1);
  v11 = *a1;
  while ( ((v11 & 2) != 0 || (v11 & 1) != 0 && (v11 & 0xFFFFFFFFFFFFFFF0uLL) == 0) && (!v10 || (v11 & 1) != 0) )
  {
    if ( a3 )
      KeAbPreWait(a3, i, 1LL, v9);
    v26 = 0LL;
    v14 = 0;
    v29 = a3;
    v28 = 2;
    if ( (v11 & 2) != 0 )
    {
      p_Object = 0LL;
      v27 = -1;
      v24[2] = v11 & 0xFFFFFFFFFFFFFFF0uLL;
      i = (unsigned __int64)&Object | v11 & 9 | 6;
      v14 = (v11 & 4) == 0;
    }
    else
    {
      v27 = -2;
      p_Object = &Object;
      i = (unsigned __int64)v23;
    }
    v16 = _InterlockedCompareExchange64(a1, i, v11);
    v15 = v11 == v16;
    v11 = v16;
    if ( !v15 )
      goto LABEL_28;
    if ( v14 )
      ExpOptimizePushLockList(a1, i, 1LL);
    *(_DWORD *)&v23[1] = 0;
    v24[1] = v24;
    v24[0] = v24;
    Object = 1;
    v22 = 6;
    if ( MEMORY[0xFFFFF7800000036A] > 1u )
    {
      if ( MEMORY[0xFFFFF78000000297] )
      {
        v18 = __rdtsc();
        v9 = v18 + (unsigned int)ExpSpinCycleCount;
        while ( 1 )
        {
          i = 0LL;
          __asm { monitorx rax, rcx, rdx }
          if ( (v28 & 2) == 0 )
            break;
          v19 = v18;
          v20 = __rdtsc();
          i = (unsigned __int64)HIDWORD(v20) << 32;
          v18 = v20;
          if ( v20 < v19 || v20 >= v9 )
            break;
          __asm { mwaitx  rax, rcx, rbx }
        }
      }
      else
      {
        for ( i = 0LL;
              (v28 & 2) != 0 && (_DWORD)i != ExpSpinCycleCount / (unsigned int)MEMORY[0xFFFFF780000002D6];
              i = (unsigned int)(i + 1) )
        {
          _mm_pause();
        }
      }
    }
    if ( _interlockedbittestandreset(&v28, 1u) )
      KeWaitForSingleObject(&Object, WrPushLock, 0, 0, 0LL);
LABEL_29:
    if ( a3 )
      a3 = (char *)KeAbPreAcquire(a4, (__int64)a3);
  }
  v12 = (v11 | 1) + 16;
  if ( (v11 & 2) != 0 )
    v12 = v11 | 1;
  result = _InterlockedCompareExchange64(a1, v12, v11);
  if ( v11 != result )
  {
    if ( a3 )
      KeAbPreWait(a3, i, 1LL, v9);
LABEL_28:
    RtlBackoff(&v30);
    v11 = *a1;
    _m_prefetchw(a1);
    goto LABEL_29;
  }
  return result;
}
