/*
 * XREFs of ExfAcquirePushLockSharedEx @ 0x14034050C
 * Callers:
 *     CcFlushCacheOneRange @ 0x140240110 (CcFlushCacheOneRange.c)
 *     SmpKeyedStoreReference @ 0x1402451D4 (SmpKeyedStoreReference.c)
 *     SmpKeyedStoreEntryGet @ 0x1402457A0 (SmpKeyedStoreEntryGet.c)
 *     RtlpCSparseBitmapPageCommit @ 0x1402477C4 (RtlpCSparseBitmapPageCommit.c)
 *     FsRtlAcquireAutoExpandPushLockShared @ 0x14025EAF0 (FsRtlAcquireAutoExpandPushLockShared.c)
 *     CcGetVirtualAddress @ 0x140273EF0 (CcGetVirtualAddress.c)
 *     RtlpLookupDynamicUserFunctionTable @ 0x140281D74 (RtlpLookupDynamicUserFunctionTable.c)
 *     ExpSaAllocatorFree @ 0x1402B980C (ExpSaAllocatorFree.c)
 *     MiTrimSection @ 0x1402B9B70 (MiTrimSection.c)
 *     MiTrimSharedPageFromViews @ 0x1402BB5D0 (MiTrimSharedPageFromViews.c)
 *     MiLockLoaderEntry @ 0x1402C7520 (MiLockLoaderEntry.c)
 *     MI_LOCK_RELOCATIONS_SHARED @ 0x1402C936C (MI_LOCK_RELOCATIONS_SHARED.c)
 *     MiWalkEntireImage @ 0x1402E85C0 (MiWalkEntireImage.c)
 *     MiLockVadShared @ 0x1402FC580 (MiLockVadShared.c)
 *     PopFxPauseDeviceAccounting @ 0x140311B04 (PopFxPauseDeviceAccounting.c)
 *     PopPepWork @ 0x140316330 (PopPepWork.c)
 *     PopDiagTraceFxRundown @ 0x14032E260 (PopDiagTraceFxRundown.c)
 *     PopFxStopDeviceAccounting @ 0x14032F168 (PopFxStopDeviceAccounting.c)
 *     PspLockProcessShared @ 0x14033E760 (PspLockProcessShared.c)
 *     ExAcquireCacheAwarePushLockSharedEx @ 0x14033FAB0 (ExAcquireCacheAwarePushLockSharedEx.c)
 *     ExAcquireAutoExpandPushLockShared @ 0x14033FB60 (ExAcquireAutoExpandPushLockShared.c)
 *     PsReferencePrimaryTokenWithTag @ 0x14033FFF0 (PsReferencePrimaryTokenWithTag.c)
 *     ExAcquirePushLockSharedEx @ 0x140340480 (ExAcquirePushLockSharedEx.c)
 *     PoGetIdleTimes @ 0x140351EF0 (PoGetIdleTimes.c)
 *     SmHwAcceleratorPartitionMgrGetDescriptor @ 0x14038A1E8 (SmHwAcceleratorPartitionMgrGetDescriptor.c)
 *     ?SmStUnmapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z @ 0x14039B2D0 (-SmStUnmapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z.c)
 *     ?StLockAcquireShared@@YAKPEAUVLOCK@@@Z @ 0x14039BF08 (-StLockAcquireShared@@YAKPEAUVLOCK@@@Z.c)
 *     PopFxResidentTimeoutRoutine @ 0x1403B4720 (PopFxResidentTimeoutRoutine.c)
 *     PopAcquireRwLockShared @ 0x1403B5E64 (PopAcquireRwLockShared.c)
 *     PoFxSystemLatencyNotify @ 0x1403B68D8 (PoFxSystemLatencyNotify.c)
 *     InsertEventEntryInLookUpTable @ 0x1403D0F14 (InsertEventEntryInLookUpTable.c)
 *     MiLockDynamicMemoryShared @ 0x1403D5830 (MiLockDynamicMemoryShared.c)
 *     PspLockProcessThreadListShared @ 0x1403EFAD0 (PspLockProcessThreadListShared.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x140404438 (LOCK_ADDRESS_SPACE_SHARED.c)
 *     ExfAcquireCacheAwarePushLockSharedEx @ 0x140418330 (ExfAcquireCacheAwarePushLockSharedEx.c)
 *     PspLockProcessListShared @ 0x14041B0F0 (PspLockProcessListShared.c)
 *     PspLockThreadSecurityShared @ 0x14041F270 (PspLockThreadSecurityShared.c)
 *     ExfAcquirePushLockShared @ 0x1404416C0 (ExfAcquirePushLockShared.c)
 *     CcSlowReferenceSharedCacheMapFileObject @ 0x140451BD4 (CcSlowReferenceSharedCacheMapFileObject.c)
 *     PopPepIdleTimeoutRoutine @ 0x140452AB0 (PopPepIdleTimeoutRoutine.c)
 *     SepRmReferenceCapTable @ 0x140455064 (SepRmReferenceCapTable.c)
 *     RtlpHpAcquireLockShared @ 0x14045964C (RtlpHpAcquireLockShared.c)
 *     MiGetSpecialPurposeMemoryPartitionForCaching @ 0x140459B70 (MiGetSpecialPurposeMemoryPartitionForCaching.c)
 *     MiSendParkedCoreUpdateToAllChildPartitions @ 0x140475D70 (MiSendParkedCoreUpdateToAllChildPartitions.c)
 *     ExpSaAllocatorAllocate @ 0x14047B930 (ExpSaAllocatorAllocate.c)
 *     PfLockSharedAcquire @ 0x14047FC44 (PfLockSharedAcquire.c)
 *     MmCheckProcessShadow @ 0x1404870F0 (MmCheckProcessShadow.c)
 *     PopFxResumeDeviceAccounting @ 0x14048A6A4 (PopFxResumeDeviceAccounting.c)
 *     PoFxPrepareDevice @ 0x14048E428 (PoFxPrepareDevice.c)
 *     ExpAcquirePoolListLockShared @ 0x140491580 (ExpAcquirePoolListLockShared.c)
 *     PspLockQuotaListShared @ 0x1404945CC (PspLockQuotaListShared.c)
 *     PopFxActivateDevicesForSx @ 0x140495F64 (PopFxActivateDevicesForSx.c)
 *     PopFxStartDeviceAccounting @ 0x1404984AC (PopFxStartDeviceAccounting.c)
 *     ExpLockCallbackListShared @ 0x1404A7574 (ExpLockCallbackListShared.c)
 *     PopFxIdleDevicesFromSx @ 0x1404A9368 (PopFxIdleDevicesFromSx.c)
 *     PoFxStartDevicePowerManagement @ 0x1404AB730 (PoFxStartDevicePowerManagement.c)
 *     ExpQueryLicenseValueFromBlobHelper @ 0x1404AFA20 (ExpQueryLicenseValueFromBlobHelper.c)
 *     MiFinishResume @ 0x1404B3560 (MiFinishResume.c)
 *     PopFxFindAcpiDeviceByUniqueId @ 0x1404BAB50 (PopFxFindAcpiDeviceByUniqueId.c)
 *     PopFxFindAndReferenceAcpiDevice @ 0x1404BC634 (PopFxFindAndReferenceAcpiDevice.c)
 *     PopFxLowPowerEpochCallback @ 0x1404BFF20 (PopFxLowPowerEpochCallback.c)
 *     CcGetNumberOfMappedPages @ 0x1404C10C0 (CcGetNumberOfMappedPages.c)
 *     PopFxRegisterDeviceWithPep @ 0x1404C36C0 (PopFxRegisterDeviceWithPep.c)
 *     SmHwAcceleratorPartitionMgrFreeDescriptor @ 0x1404CDC48 (SmHwAcceleratorPartitionMgrFreeDescriptor.c)
 *     PspAcquirePushLockShared @ 0x1404F541C (PspAcquirePushLockShared.c)
 *     IommuProcessPageRequestQueue @ 0x140564570 (IommuProcessPageRequestQueue.c)
 *     KeQueryDpcWatchdogConfiguration @ 0x1405B4764 (KeQueryDpcWatchdogConfiguration.c)
 *     KiAvailableCpusPartitionWorkItemCallback @ 0x1405B8540 (KiAvailableCpusPartitionWorkItemCallback.c)
 *     PopFxDisableBasicAccountingWorker @ 0x1405D1130 (PopFxDisableBasicAccountingWorker.c)
 *     PopPepIterateDeviceList @ 0x1405DBBE4 (PopPepIterateDeviceList.c)
 *     PopPepPlatformStateRegistered @ 0x1405DBD18 (PopPepPlatformStateRegistered.c)
 *     PopFxAcpiPrepareDevice @ 0x1405DC554 (PopFxAcpiPrepareDevice.c)
 *     PspLookupSyscallProviderById @ 0x1405E4A2C (PspLookupSyscallProviderById.c)
 *     PspSetProcessTimerDelayForWin32 @ 0x1405E5E58 (PspSetProcessTimerDelayForWin32.c)
 *     SmKmVirtualLockCtxLockMemory @ 0x14060DFFC (SmKmVirtualLockCtxLockMemory.c)
 *     SmGetStoreOwnerProcessId @ 0x14060EE3C (SmGetStoreOwnerProcessId.c)
 *     DifExfAcquirePushLockSharedWrapper @ 0x140621AC0 (DifExfAcquirePushLockSharedWrapper.c)
 *     EtwpGetCompressionSettings @ 0x1406514B0 (EtwpGetCompressionSettings.c)
 *     MiMarkHugePfnBad @ 0x140670EEC (MiMarkHugePfnBad.c)
 *     CmpLockGlobalKeyLockTrackerShared @ 0x1406F51B8 (CmpLockGlobalKeyLockTrackerShared.c)
 *     ExpWatchProductTypeWork @ 0x1406F6C60 (ExpWatchProductTypeWork.c)
 *     KiAvailableCpusProcessWorkItemCallback @ 0x14073BEF0 (KiAvailableCpusProcessWorkItemCallback.c)
 *     AlpcpPortQueryServerInfo @ 0x140741EA4 (AlpcpPortQueryServerInfo.c)
 *     ObIsDosDeviceLocallyMapped @ 0x1407441D0 (ObIsDosDeviceLocallyMapped.c)
 *     PspGetNextSyscallProviderProcess @ 0x140771338 (PspGetNextSyscallProviderProcess.c)
 *     PspSetProcessAffinityUpdateMode @ 0x140775288 (PspSetProcessAffinityUpdateMode.c)
 *     PspUpdateSingleProcessAffinity @ 0x1407754B0 (PspUpdateSingleProcessAffinity.c)
 *     PsTerminateVsmEnclave @ 0x14077B634 (PsTerminateVsmEnclave.c)
 *     SepIsValidProcUniqueLuid @ 0x140794500 (SepIsValidProcUniqueLuid.c)
 *     SepIsParentOfChildAppContainer @ 0x140794F90 (SepIsParentOfChildAppContainer.c)
 *     SmKmKeyGenGenerate @ 0x140799E00 (SmKmKeyGenGenerate.c)
 *     SmEtwEnableCallback @ 0x14079B8B0 (SmEtwEnableCallback.c)
 *     SmcGetCacheStats @ 0x14079D63C (SmcGetCacheStats.c)
 *     EtwCleanupSiloState @ 0x1407A62BC (EtwCleanupSiloState.c)
 *     ExpGetSystemPlatformBinary @ 0x1407B42C0 (ExpGetSystemPlatformBinary.c)
 *     ExFetchLicenseData @ 0x1407B7D80 (ExFetchLicenseData.c)
 *     ExGetLicenseTamperState @ 0x1407B8030 (ExGetLicenseTamperState.c)
 *     sub_1407B85B0 @ 0x1407B85B0 (sub_1407B85B0.c)
 *     sub_1407B8DA4 @ 0x1407B8DA4 (sub_1407B8DA4.c)
 *     sub_1407B935C @ 0x1407B935C (sub_1407B935C.c)
 *     SLGetSubscriptionPfn @ 0x1407B9708 (SLGetSubscriptionPfn.c)
 *     SLQueryLicenseValueInternal @ 0x1407B99EC (SLQueryLicenseValueInternal.c)
 *     SLUpdateLicenseDataInternal @ 0x1407BA204 (SLUpdateLicenseDataInternal.c)
 *     ExRegisterExtension @ 0x1407C0470 (ExRegisterExtension.c)
 *     ExpKdPullRemoteFileForUser @ 0x1407C4CB4 (ExpKdPullRemoteFileForUser.c)
 *     MmEnumerateBadPages @ 0x1407ED198 (MmEnumerateBadPages.c)
 *     MiIsExtentDangling @ 0x1407F0410 (MiIsExtentDangling.c)
 *     MiGetAllRegisteredPatches @ 0x1407F280C (MiGetAllRegisteredPatches.c)
 *     MiLogHotPatchRundown @ 0x1407F44C4 (MiLogHotPatchRundown.c)
 *     MiOpenSpecialPurposeMemory @ 0x1407FE6F8 (MiOpenSpecialPurposeMemory.c)
 *     MiQuerySpecialPurposeMemoryInformation @ 0x1407FE898 (MiQuerySpecialPurposeMemoryInformation.c)
 *     EtwpReferenceLoggerSecurityDescriptor @ 0x140836818 (EtwpReferenceLoggerSecurityDescriptor.c)
 *     RtlFindDynamicEnforcedAddressInRanges @ 0x1408377B4 (RtlFindDynamicEnforcedAddressInRanges.c)
 *     ObLogSecurityDescriptor @ 0x140838F50 (ObLogSecurityDescriptor.c)
 *     EtwpAddRegEntryToGroup @ 0x140839260 (EtwpAddRegEntryToGroup.c)
 *     EtwpIsGuidAllowed @ 0x14083A0B4 (EtwpIsGuidAllowed.c)
 *     EtwpFindOrCreateGuidEntry @ 0x14083ACCC (EtwpFindOrCreateGuidEntry.c)
 *     EtwpFindGuidEntryByGuid @ 0x14083AEE0 (EtwpFindGuidEntryByGuid.c)
 *     EtwpRegisterUMProvider @ 0x14083C6F0 (EtwpRegisterUMProvider.c)
 *     EtwpGetGuidList @ 0x14083D340 (EtwpGetGuidList.c)
 *     EtwpGetNextGuidEntry @ 0x14083D5B0 (EtwpGetNextGuidEntry.c)
 *     SeCreateAccessState @ 0x14083F490 (SeCreateAccessState.c)
 *     SeCaptureSubjectContextEx @ 0x14083FC40 (SeCaptureSubjectContextEx.c)
 *     CmpFindSubkeyInHashByChildCell @ 0x140843700 (CmpFindSubkeyInHashByChildCell.c)
 *     CmpLockHiveListShared @ 0x1408442F8 (CmpLockHiveListShared.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x140844830 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpCallCallBacksEx @ 0x140847D10 (CmpCallCallBacksEx.c)
 *     CmpCallbackFillObjectContext @ 0x1408487F0 (CmpCallbackFillObjectContext.c)
 *     SeCaptureSubjectContext @ 0x14084D8F0 (SeCaptureSubjectContext.c)
 *     ObpCreateHandle @ 0x14084DAA0 (ObpCreateHandle.c)
 *     PsOpenProcess @ 0x140854350 (PsOpenProcess.c)
 *     ObOpenObjectByPointer @ 0x140854F10 (ObOpenObjectByPointer.c)
 *     NtOpenThreadTokenEx @ 0x1408553C0 (NtOpenThreadTokenEx.c)
 *     ObInsertObjectEx @ 0x140857620 (ObInsertObjectEx.c)
 *     SeDefaultObjectMethod @ 0x140858190 (SeDefaultObjectMethod.c)
 *     ObSetSecurityDescriptorInfo @ 0x1408588B0 (ObSetSecurityDescriptorInfo.c)
 *     PsReferenceEffectiveToken @ 0x14085D1B0 (PsReferenceEffectiveToken.c)
 *     AlpcpCreateClientPort @ 0x1408649C0 (AlpcpCreateClientPort.c)
 *     NtDeleteKey @ 0x1408697B0 (NtDeleteKey.c)
 *     CmpCreateKeyControlBlock @ 0x1408717C0 (CmpCreateKeyControlBlock.c)
 *     CmpWalkOneLevel @ 0x140872560 (CmpWalkOneLevel.c)
 *     CmpGetKeyNodeForKcb @ 0x140875C90 (CmpGetKeyNodeForKcb.c)
 *     ObpReferenceSecurityDescriptorSlow @ 0x14087AEFC (ObpReferenceSecurityDescriptorSlow.c)
 *     HvLockHiveFlusherShared @ 0x14087DD28 (HvLockHiveFlusherShared.c)
 *     AlpcpQueryRemoteView @ 0x14088A6E4 (AlpcpQueryRemoteView.c)
 *     AlpcpReceiveSynchronousReply @ 0x14088AA00 (AlpcpReceiveSynchronousReply.c)
 *     AlpcpFlushMessagesPort @ 0x14088BE6C (AlpcpFlushMessagesPort.c)
 *     AlpcpDisconnectPort @ 0x14088C638 (AlpcpDisconnectPort.c)
 *     AlpcpDispatchConnectionRequest @ 0x14088D0AC (AlpcpDispatchConnectionRequest.c)
 *     AlpcpSendLegacySynchronousRequest @ 0x14088D3F8 (AlpcpSendLegacySynchronousRequest.c)
 *     AlpcpCaptureSecurityAttribute @ 0x14088DE30 (AlpcpCaptureSecurityAttribute.c)
 *     AlpcpSendMessage @ 0x14088E810 (AlpcpSendMessage.c)
 *     PspChargeProcessWakeCounter @ 0x14088FD70 (PspChargeProcessWakeCounter.c)
 *     AlpcpDispatchReplyToWaitingThread @ 0x140890950 (AlpcpDispatchReplyToWaitingThread.c)
 *     AlpcpDispatchNewMessage @ 0x140890E80 (AlpcpDispatchNewMessage.c)
 *     AlpcpDispatchReplyToPort @ 0x140892910 (AlpcpDispatchReplyToPort.c)
 *     AlpcpReferenceAndLockTargetPortsAndCommunicationInfo @ 0x140892EE0 (AlpcpReferenceAndLockTargetPortsAndCommunicationInfo.c)
 *     AlpcReferenceBlobByHandle @ 0x1408938D0 (AlpcReferenceBlobByHandle.c)
 *     AlpcpLocateSectionView @ 0x140893C6C (AlpcpLocateSectionView.c)
 *     AlpcpCancelMessage @ 0x140894410 (AlpcpCancelMessage.c)
 *     AlpcpCaptureSecurityAttributeInternal @ 0x1408949C0 (AlpcpCaptureSecurityAttributeInternal.c)
 *     NtAlpcCreateSecurityContext @ 0x140894C50 (NtAlpcCreateSecurityContext.c)
 *     AlpcpReceiveLegacyMessage @ 0x1408952E0 (AlpcpReceiveLegacyMessage.c)
 *     AlpcpReceiveMessagePort @ 0x140895660 (AlpcpReceiveMessagePort.c)
 *     AlpcpCreateSecurityContext @ 0x1408963D8 (AlpcpCreateSecurityContext.c)
 *     SeCreateClientSecurity @ 0x140896720 (SeCreateClientSecurity.c)
 *     NtAlpcImpersonateClientOfPort @ 0x140896970 (NtAlpcImpersonateClientOfPort.c)
 *     SeCreateClientSecurityEx @ 0x1408974A0 (SeCreateClientSecurityEx.c)
 *     AlpcpGetEffectiveTokenMessage @ 0x140897750 (AlpcpGetEffectiveTokenMessage.c)
 *     AlpcpExposeTokenAttribute @ 0x140898930 (AlpcpExposeTokenAttribute.c)
 *     ObOpenObjectByNameEx @ 0x14089BB40 (ObOpenObjectByNameEx.c)
 *     ObCreateObjectEx @ 0x14089C4F0 (ObCreateObjectEx.c)
 *     ObpLookupObjectName @ 0x14089D210 (ObpLookupObjectName.c)
 *     SeCreateAccessStateEx @ 0x1408A64E0 (SeCreateAccessStateEx.c)
 *     sub_1408A95DC @ 0x1408A95DC (sub_1408A95DC.c)
 *     ExpWnfLookupNameInstance @ 0x1408AAA90 (ExpWnfLookupNameInstance.c)
 *     ExpWnfAcquireSubscriptionByName @ 0x1408AABA8 (ExpWnfAcquireSubscriptionByName.c)
 *     ExpWnfDeliverThreadNotifications @ 0x1408AB440 (ExpWnfDeliverThreadNotifications.c)
 *     ExpWnfCompleteThreadSubscriptions @ 0x1408AB7FC (ExpWnfCompleteThreadSubscriptions.c)
 *     ExpWnfReadStateData @ 0x1408ABA3C (ExpWnfReadStateData.c)
 *     NtQueryWnfStateData @ 0x1408ABBD0 (NtQueryWnfStateData.c)
 *     ExpNtUpdateWnfStateData @ 0x1408AC580 (ExpNtUpdateWnfStateData.c)
 *     ExpWnfResolveScopeInstance @ 0x1408AD060 (ExpWnfResolveScopeInstance.c)
 *     ExpWnfNotifyNameSubscribers @ 0x1408ADF30 (ExpWnfNotifyNameSubscribers.c)
 *     ExpWnfDispatchKernelSubscription @ 0x1408AE2C0 (ExpWnfDispatchKernelSubscription.c)
 *     PiControlGetDeviceInterfaceEnabled @ 0x1408CFC60 (PiControlGetDeviceInterfaceEnabled.c)
 *     PiDmObjectAcquireSharedLock @ 0x1408D0A7C (PiDmObjectAcquireSharedLock.c)
 *     MiIsRangeFullyCommitted @ 0x1408DD80C (MiIsRangeFullyCommitted.c)
 *     NtAreMappedFilesTheSame @ 0x1408E8130 (NtAreMappedFilesTheSame.c)
 *     PspGetNextJob @ 0x1408EBB60 (PspGetNextJob.c)
 *     PsQueryStatisticsProcess @ 0x1408EC910 (PsQueryStatisticsProcess.c)
 *     PspLockJobMemoryLimitsShared @ 0x1408ED4D8 (PspLockJobMemoryLimitsShared.c)
 *     PsQueryProcessEnergyValues @ 0x1408ED600 (PsQueryProcessEnergyValues.c)
 *     PfpPrivSourceEnum @ 0x1408EE170 (PfpPrivSourceEnum.c)
 *     PsGetNextProcess @ 0x1408EEB70 (PsGetNextProcess.c)
 *     ExGetNextProcess @ 0x1408EED40 (ExGetNextProcess.c)
 *     sub_1408FB304 @ 0x1408FB304 (sub_1408FB304.c)
 *     sub_1408FBE0C @ 0x1408FBE0C (sub_1408FBE0C.c)
 *     sub_1408FC59C @ 0x1408FC59C (sub_1408FC59C.c)
 *     sub_1408FC89C @ 0x1408FC89C (sub_1408FC89C.c)
 *     PspReferenceSystemDll @ 0x1408FF9C8 (PspReferenceSystemDll.c)
 *     EtwpCovSampStackHashCheck @ 0x14090090C (EtwpCovSampStackHashCheck.c)
 *     EtwpCovSampContextGetModule @ 0x140901050 (EtwpCovSampContextGetModule.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x14090CE40 (CmKeyBodyRemapToVirtualForEnum.c)
 *     AlpcpReferenceConnectedPort @ 0x140911260 (AlpcpReferenceConnectedPort.c)
 *     EtwpGetSidExtendedHeaderItem @ 0x1409227D0 (EtwpGetSidExtendedHeaderItem.c)
 *     VrpTranslatePath @ 0x1409276F0 (VrpTranslatePath.c)
 *     VrpLockJobContextShared @ 0x140929018 (VrpLockJobContextShared.c)
 *     VrpLockDiffHiveTableShared @ 0x14092AD10 (VrpLockDiffHiveTableShared.c)
 *     PsGetProcessDeepFreezeStats @ 0x14093961C (PsGetProcessDeepFreezeStats.c)
 *     DbgkFlushErrorPort @ 0x140939888 (DbgkFlushErrorPort.c)
 *     DbgkpSendErrorMessage @ 0x14093A900 (DbgkpSendErrorMessage.c)
 *     AlpcpCreateSectionView @ 0x14093DC88 (AlpcpCreateSectionView.c)
 *     AlpcpReceiveDirectMessagePort @ 0x14093E0B8 (AlpcpReceiveDirectMessagePort.c)
 *     NtAlpcOpenSenderProcess @ 0x14093E390 (NtAlpcOpenSenderProcess.c)
 *     AlpcpCreateSection @ 0x14093EF54 (AlpcpCreateSection.c)
 *     AlpcpCreateReserve @ 0x14093F62C (AlpcpCreateReserve.c)
 *     PsReferenceImpersonationToken @ 0x140946AD0 (PsReferenceImpersonationToken.c)
 *     NtSetInformationProcess @ 0x140947500 (NtSetInformationProcess.c)
 *     PsGetNextProcessThread @ 0x14094A700 (PsGetNextProcessThread.c)
 *     ExpSnapShotHandleTables @ 0x14094D7D0 (ExpSnapShotHandleTables.c)
 *     CmpGetCallbackObjectContext @ 0x1409508E0 (CmpGetCallbackObjectContext.c)
 *     MiRelocateImagePfn @ 0x1409587A8 (MiRelocateImagePfn.c)
 *     ExpGetNextProcessThread @ 0x140959450 (ExpGetNextProcessThread.c)
 *     EtwpCoverageSamplerQuery @ 0x14095DA30 (EtwpCoverageSamplerQuery.c)
 *     NtQueryObject @ 0x140968970 (NtQueryObject.c)
 *     ObQueryNameStringMode @ 0x140969A30 (ObQueryNameStringMode.c)
 *     ExpGetKernelDataProtection @ 0x140973020 (ExpGetKernelDataProtection.c)
 *     ObQueryDeviceMapInformation @ 0x1409848B0 (ObQueryDeviceMapInformation.c)
 *     ObpReferenceCurrentDeviceMap @ 0x140984EA0 (ObpReferenceCurrentDeviceMap.c)
 *     ObpReferenceDeviceMapFastRef @ 0x1409856A0 (ObpReferenceDeviceMapFastRef.c)
 *     CmpLockHashEntryShared @ 0x1409885E0 (CmpLockHashEntryShared.c)
 *     PsReferenceImpersonationTokenEx @ 0x140989D20 (PsReferenceImpersonationTokenEx.c)
 *     CmSetCallbackObjectContext @ 0x14098AF60 (CmSetCallbackObjectContext.c)
 *     CmpLockContextListShared @ 0x14099CF50 (CmpLockContextListShared.c)
 *     CmpLockCallbackListShared @ 0x14099D210 (CmpLockCallbackListShared.c)
 *     ObAssignObjectSecurityDescriptor @ 0x1409A6120 (ObAssignObjectSecurityDescriptor.c)
 *     ObpCallPreOperationCallbacks @ 0x1409A65F0 (ObpCallPreOperationCallbacks.c)
 *     AlpcpPortQueryConnectedSidInfo @ 0x1409AB3F4 (AlpcpPortQueryConnectedSidInfo.c)
 *     AlpcpPortQueryServerSessionInfo @ 0x1409AB6FC (AlpcpPortQueryServerSessionInfo.c)
 *     ObpLockDirectoryShared @ 0x1409B0B50 (ObpLockDirectoryShared.c)
 *     PiDmObjectGetCachedObjectPropertyData @ 0x1409B1000 (PiDmObjectGetCachedObjectPropertyData.c)
 *     ObpLockChildDirectory @ 0x1409B7950 (ObpLockChildDirectory.c)
 *     PsQueryRuntimeProcess @ 0x1409C4240 (PsQueryRuntimeProcess.c)
 *     ExpWnfSubscribeNameInstance @ 0x1409D34B4 (ExpWnfSubscribeNameInstance.c)
 *     sub_1409DFE38 @ 0x1409DFE38 (sub_1409DFE38.c)
 *     sub_1409E0444 @ 0x1409E0444 (sub_1409E0444.c)
 *     sub_1409E127C @ 0x1409E127C (sub_1409E127C.c)
 *     CmLockKeyForWrite @ 0x1409E1DB8 (CmLockKeyForWrite.c)
 *     AlpcpEnumerateResourcesPort @ 0x1409E6B60 (AlpcpEnumerateResourcesPort.c)
 *     CmpLockHashEntrySharedByKcb @ 0x1409E9D78 (CmpLockHashEntrySharedByKcb.c)
 *     AlpcpReplyLegacySynchronousRequest @ 0x1409EC9B0 (AlpcpReplyLegacySynchronousRequest.c)
 *     PspStorageGetObject @ 0x1409F318C (PspStorageGetObject.c)
 *     ExpWnfNotifySubscription @ 0x1409F4780 (ExpWnfNotifySubscription.c)
 *     AlpcpAcceptConnectPort @ 0x1409F4F00 (AlpcpAcceptConnectPort.c)
 *     PspLockJobListShared @ 0x1409FBF04 (PspLockJobListShared.c)
 *     NtAlpcSetInformation @ 0x140A0A340 (NtAlpcSetInformation.c)
 *     PspSelectVsmEnclaveByNumber @ 0x140A0B3AC (PspSelectVsmEnclaveByNumber.c)
 *     RtlpFlsDataCleanup @ 0x140A0B6C8 (RtlpFlsDataCleanup.c)
 *     ExAcquireTimeRefreshLockShared @ 0x140A13A50 (ExAcquireTimeRefreshLockShared.c)
 *     AlpcpReturnMessageOnInsufficientBuffer @ 0x140A2413C (AlpcpReturnMessageOnInsufficientBuffer.c)
 *     NtAlpcDeleteSectionView @ 0x140A25B50 (NtAlpcDeleteSectionView.c)
 *     CmFcManagerQueryFeatureConfigurationSectionInformation @ 0x140A25E28 (CmFcManagerQueryFeatureConfigurationSectionInformation.c)
 *     RtlpFindDynamicEHContinuationTarget @ 0x140A2FEA4 (RtlpFindDynamicEHContinuationTarget.c)
 *     AlpcpProcessSynchronousRequest @ 0x140A304CC (AlpcpProcessSynchronousRequest.c)
 *     MiFindProcessImageHotPatchRecord @ 0x140A326F0 (MiFindProcessImageHotPatchRecord.c)
 *     CmFcpManagerPublishChangeNotifications @ 0x140A35DD0 (CmFcpManagerPublishChangeNotifications.c)
 *     AlpcpReferenceMessageByWaitingThreadPort @ 0x140A3A1FC (AlpcpReferenceMessageByWaitingThreadPort.c)
 *     ExpWnfAcquireSubscriptionNameInstance @ 0x140A3BBFC (ExpWnfAcquireSubscriptionNameInstance.c)
 *     SepDereferenceLowBoxNumberEntry @ 0x140A45514 (SepDereferenceLowBoxNumberEntry.c)
 *     CmpVolumeContextLockShared @ 0x140A46300 (CmpVolumeContextLockShared.c)
 *     WdipTimeoutCheckRoutine @ 0x140A47800 (WdipTimeoutCheckRoutine.c)
 *     WdipSemDisableScenario @ 0x140A47AF0 (WdipSemDisableScenario.c)
 *     WdipSemEnableScenario @ 0x140A4835C (WdipSemEnableScenario.c)
 *     SepSetTokenLowboxNumber @ 0x140A4BC18 (SepSetTokenLowboxNumber.c)
 *     PopAcquireUmpoPushLock @ 0x140A4F1FC (PopAcquireUmpoPushLock.c)
 *     PsReferencePartitionSystemProcess @ 0x140A51CF0 (PsReferencePartitionSystemProcess.c)
 *     MiFindHotPatchRecord @ 0x140A570A8 (MiFindHotPatchRecord.c)
 *     CmpVolumeManagerLockContextListShared @ 0x140A5B3CC (CmpVolumeManagerLockContextListShared.c)
 *     ExpWnfAcquirePermanentDataStoreHandle @ 0x140A62208 (ExpWnfAcquirePermanentDataStoreHandle.c)
 *     EtwpGetDisallowList @ 0x140A65D64 (EtwpGetDisallowList.c)
 *     ExpWnfEnumerateScopeInstances @ 0x140A67860 (ExpWnfEnumerateScopeInstances.c)
 *     AlpcpMapLegacyPortRemoteView @ 0x140A874FC (AlpcpMapLegacyPortRemoteView.c)
 *     CmFcpManagerProcessUsageDataProviders @ 0x140A90644 (CmFcpManagerProcessUsageDataProviders.c)
 *     ExpWnfInvalidateDataStores @ 0x140A9F3D8 (ExpWnfInvalidateDataStores.c)
 *     MiQueryLoadedPatches @ 0x140AA6168 (MiQueryLoadedPatches.c)
 *     AlpcpInvokeLogCallbacks @ 0x140AA9974 (AlpcpInvokeLogCallbacks.c)
 *     MiQueryProcessActivePatches @ 0x140AAE3A8 (MiQueryProcessActivePatches.c)
 *     PopQueryPowerButtonBugcheckEnabled @ 0x140AB2400 (PopQueryPowerButtonBugcheckEnabled.c)
 *     NtQueryDirectoryObject @ 0x140AC44D0 (NtQueryDirectoryObject.c)
 *     EtwpCovSampContextPruneModules @ 0x140ADA1B8 (EtwpCovSampContextPruneModules.c)
 *     WheaConfigureErrorSource @ 0x140B61BE0 (WheaConfigureErrorSource.c)
 *     WheaUnconfigureErrorSource @ 0x140B61DA0 (WheaUnconfigureErrorSource.c)
 *     MmDuplicateMemory @ 0x140B62998 (MmDuplicateMemory.c)
 *     CmLockHiveSecurityShared @ 0x140BB996C (CmLockHiveSecurityShared.c)
 *     CmpLockKcbShared @ 0x140BB9A1C (CmpLockKcbShared.c)
 * Callees:
 *     RtlBackoff @ 0x140253B30 (RtlBackoff.c)
 *     KeAbPreWait @ 0x14033E810 (KeAbPreWait.c)
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ExpOptimizePushLockList @ 0x14040DDE4 (ExpOptimizePushLockList.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

signed __int64 __fastcall ExfAcquirePushLockSharedEx(signed __int64 *a1, char a2, _QWORD *a3, __int64 a4)
{
  unsigned __int64 i; // rdx
  bool v9; // r15
  signed __int64 v10; // rdi
  signed __int64 v11; // rcx
  signed __int64 result; // rax
  bool v13; // cl
  bool v14; // zf
  signed __int64 v15; // rax
  unsigned __int64 v17; // r8
  unsigned __int64 v18; // r9
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
  _QWORD *v29; // [rsp+78h] [rbp-8h]
  unsigned int v30; // [rsp+B0h] [rbp+30h] BYREF

  memset_0(&Object, 0, 0x40uLL);
  v30 = 0;
  v9 = ExpPushLockAllowImplicitUpgrade && (a2 & 4) == 0;
  _m_prefetchw(a1);
  v10 = *a1;
  while ( ((v10 & 2) != 0 || (v10 & 1) != 0 && (v10 & 0xFFFFFFFFFFFFFFF0uLL) == 0) && (!v9 || (v10 & 1) != 0) )
  {
    if ( a3 )
      KeAbPreWait((__int64)a3, i, 1LL);
    v26 = 0LL;
    v13 = 0;
    v29 = a3;
    v28 = 2;
    if ( (v10 & 2) != 0 )
    {
      p_Object = 0LL;
      v27 = -1;
      v24[2] = v10 & 0xFFFFFFFFFFFFFFF0uLL;
      i = (unsigned __int64)&Object | v10 & 9 | 6;
      v13 = (v10 & 4) == 0;
    }
    else
    {
      v27 = -2;
      p_Object = &Object;
      i = (unsigned __int64)v23;
    }
    v15 = _InterlockedCompareExchange64(a1, i, v10);
    v14 = v10 == v15;
    v10 = v15;
    if ( !v14 )
      goto LABEL_28;
    if ( v13 )
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
        v17 = __rdtsc();
        v18 = v17 + (unsigned int)ExpSpinCycleCount;
        while ( 1 )
        {
          i = 0LL;
          __asm { monitorx rax, rcx, rdx }
          if ( (v28 & 2) == 0 )
            break;
          v19 = v17;
          v20 = __rdtsc();
          i = (unsigned __int64)HIDWORD(v20) << 32;
          v17 = v20;
          if ( v20 < v19 || v20 >= v18 )
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
      a3 = KeAbPreAcquire(a4, (__int64)a3);
  }
  v11 = (v10 | 1) + 16;
  if ( (v10 & 2) != 0 )
    v11 = v10 | 1;
  result = _InterlockedCompareExchange64(a1, v11, v10);
  if ( v10 != result )
  {
    if ( a3 )
      KeAbPreWait((__int64)a3, i, 1LL);
LABEL_28:
    RtlBackoff(&v30);
    v10 = *a1;
    _m_prefetchw(a1);
    goto LABEL_29;
  }
  return result;
}
