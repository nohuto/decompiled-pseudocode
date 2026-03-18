/*
 * XREFs of ExfAcquirePushLockSharedEx @ 0x14029B5A0
 * Callers:
 *     PopAcquireRwLockShared @ 0x140204514 (PopAcquireRwLockShared.c)
 *     PoFxSystemLatencyNotify @ 0x1402057A8 (PoFxSystemLatencyNotify.c)
 *     FsRtlAcquireAutoExpandPushLockShared @ 0x140205AD0 (FsRtlAcquireAutoExpandPushLockShared.c)
 *     SmpKeyedStoreReference @ 0x140205F90 (SmpKeyedStoreReference.c)
 *     PfLockSharedAcquire @ 0x14020739C (PfLockSharedAcquire.c)
 *     ?SmStUnmapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z @ 0x14020BC20 (-SmStUnmapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z.c)
 *     ?StLockAcquireShared@@YAKPEAUVLOCK@@@Z @ 0x14020C858 (-StLockAcquireShared@@YAKPEAUVLOCK@@@Z.c)
 *     RtlpLookupDynamicUserFunctionTable @ 0x14025BA28 (RtlpLookupDynamicUserFunctionTable.c)
 *     ExAcquireCacheAwarePushLockSharedEx @ 0x14029A910 (ExAcquireCacheAwarePushLockSharedEx.c)
 *     ExAcquireAutoExpandPushLockShared @ 0x14029A9C0 (ExAcquireAutoExpandPushLockShared.c)
 *     PsReferencePrimaryTokenWithTag @ 0x14029AE50 (PsReferencePrimaryTokenWithTag.c)
 *     ExAcquirePushLockSharedEx @ 0x14029B510 (ExAcquirePushLockSharedEx.c)
 *     MiLockVadShared @ 0x1402A7C94 (MiLockVadShared.c)
 *     CcFlushCacheOneRange @ 0x1402C13D0 (CcFlushCacheOneRange.c)
 *     CcGetVirtualAddress @ 0x1402D8300 (CcGetVirtualAddress.c)
 *     ExpSaAllocatorFree @ 0x14031FD84 (ExpSaAllocatorFree.c)
 *     MiTrimSection @ 0x140320A50 (MiTrimSection.c)
 *     MiTrimSharedPageFromViews @ 0x140321850 (MiTrimSharedPageFromViews.c)
 *     SmpKeyedStoreEntryGet @ 0x1403243B0 (SmpKeyedStoreEntryGet.c)
 *     MiWalkEntireImage @ 0x14033BD50 (MiWalkEntireImage.c)
 *     PopPepWork @ 0x14034D020 (PopPepWork.c)
 *     PopFxResumeDeviceAccounting @ 0x140355A94 (PopFxResumeDeviceAccounting.c)
 *     PopFxPauseDeviceAccounting @ 0x1403561B8 (PopFxPauseDeviceAccounting.c)
 *     RtlpCSparseBitmapPageCommit @ 0x14035E0AC (RtlpCSparseBitmapPageCommit.c)
 *     MiLockLoaderEntry @ 0x14036E4C0 (MiLockLoaderEntry.c)
 *     MiLockDynamicMemoryShared @ 0x140393098 (MiLockDynamicMemoryShared.c)
 *     SmHwAcceleratorPartitionMgrGetDescriptor @ 0x1403A2DC4 (SmHwAcceleratorPartitionMgrGetDescriptor.c)
 *     PopFxResidentTimeoutRoutine @ 0x1403A5C00 (PopFxResidentTimeoutRoutine.c)
 *     PopPepIdleTimeoutRoutine @ 0x1403A5D50 (PopPepIdleTimeoutRoutine.c)
 *     PoGetIdleTimes @ 0x1403B2600 (PoGetIdleTimes.c)
 *     InsertEventEntryInLookUpTable @ 0x1403BB444 (InsertEventEntryInLookUpTable.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x1403D887C (LOCK_ADDRESS_SPACE_SHARED.c)
 *     PspLockProcessThreadListShared @ 0x1403E6BB0 (PspLockProcessThreadListShared.c)
 *     PspLockProcessShared @ 0x1403F8E70 (PspLockProcessShared.c)
 *     MI_LOCK_RELOCATIONS_SHARED @ 0x1403FFBAC (MI_LOCK_RELOCATIONS_SHARED.c)
 *     PspLockProcessListShared @ 0x14041D480 (PspLockProcessListShared.c)
 *     PopFxStopDeviceAccounting @ 0x1404266B8 (PopFxStopDeviceAccounting.c)
 *     PspLockThreadSecurityShared @ 0x140429710 (PspLockThreadSecurityShared.c)
 *     ExfAcquirePushLockShared @ 0x140441EC0 (ExfAcquirePushLockShared.c)
 *     RtlpHpAcquireLockShared @ 0x1404505D0 (RtlpHpAcquireLockShared.c)
 *     CcSlowReferenceSharedCacheMapFileObject @ 0x140450944 (CcSlowReferenceSharedCacheMapFileObject.c)
 *     SepRmReferenceCapTable @ 0x1404548A4 (SepRmReferenceCapTable.c)
 *     MiGetSpecialPurposeMemoryPartitionForCaching @ 0x14045A7AC (MiGetSpecialPurposeMemoryPartitionForCaching.c)
 *     MiFinishResume @ 0x1404743C0 (MiFinishResume.c)
 *     MiSendParkedCoreUpdateToAllChildPartitions @ 0x140474500 (MiSendParkedCoreUpdateToAllChildPartitions.c)
 *     ExpSaAllocatorAllocate @ 0x14047B158 (ExpSaAllocatorAllocate.c)
 *     PopFxActivateDevicesForSx @ 0x14047D428 (PopFxActivateDevicesForSx.c)
 *     PopDiagTraceFxRundown @ 0x140485F3C (PopDiagTraceFxRundown.c)
 *     MmCheckProcessShadow @ 0x1404877A0 (MmCheckProcessShadow.c)
 *     PoFxPrepareDevice @ 0x14048EBF4 (PoFxPrepareDevice.c)
 *     ExpAcquirePoolListLockShared @ 0x140493144 (ExpAcquirePoolListLockShared.c)
 *     PspLockQuotaListShared @ 0x1404952E4 (PspLockQuotaListShared.c)
 *     PopFxStartDeviceAccounting @ 0x14049884C (PopFxStartDeviceAccounting.c)
 *     ExpLockCallbackListShared @ 0x1404A6BCC (ExpLockCallbackListShared.c)
 *     PopFxIdleDevicesFromSx @ 0x1404A8340 (PopFxIdleDevicesFromSx.c)
 *     PoFxStartDevicePowerManagement @ 0x1404AA2A0 (PoFxStartDevicePowerManagement.c)
 *     sub_1404AEFE0 @ 0x1404AEFE0 (sub_1404AEFE0.c)
 *     PopFxFindAcpiDeviceByUniqueId @ 0x1404BB084 (PopFxFindAcpiDeviceByUniqueId.c)
 *     PopFxFindAndReferenceAcpiDevice @ 0x1404BD72C (PopFxFindAndReferenceAcpiDevice.c)
 *     PopFxLowPowerEpochCallback @ 0x1404C18C0 (PopFxLowPowerEpochCallback.c)
 *     CcGetNumberOfMappedPages @ 0x1404C28D0 (CcGetNumberOfMappedPages.c)
 *     PopFxRegisterDeviceWithPep @ 0x1404C5020 (PopFxRegisterDeviceWithPep.c)
 *     SmHwAcceleratorPartitionMgrFreeDescriptor @ 0x1404CDE68 (SmHwAcceleratorPartitionMgrFreeDescriptor.c)
 *     PspAcquirePushLockShared @ 0x1404F2B18 (PspAcquirePushLockShared.c)
 *     IommuProcessPageRequestQueue @ 0x140561CE0 (IommuProcessPageRequestQueue.c)
 *     KeQueryDpcWatchdogConfiguration @ 0x1405B0DB8 (KeQueryDpcWatchdogConfiguration.c)
 *     KiAvailableCpusPartitionWorkItemCallback @ 0x1405B4650 (KiAvailableCpusPartitionWorkItemCallback.c)
 *     PopFxDisableBasicAccountingWorker @ 0x1405CC980 (PopFxDisableBasicAccountingWorker.c)
 *     PopPepIterateDeviceList @ 0x1405D6A04 (PopPepIterateDeviceList.c)
 *     PopPepPlatformStateRegistered @ 0x1405D6B38 (PopPepPlatformStateRegistered.c)
 *     PopFxAcpiPrepareDevice @ 0x1405D7374 (PopFxAcpiPrepareDevice.c)
 *     PspLookupSyscallProviderById @ 0x1405D8A90 (PspLookupSyscallProviderById.c)
 *     PspSetProcessTimerDelayForWin32 @ 0x1405D9C88 (PspSetProcessTimerDelayForWin32.c)
 *     SmKmVirtualLockCtxLockMemory @ 0x140601FCC (SmKmVirtualLockCtxLockMemory.c)
 *     SmGetStoreOwnerProcessId @ 0x140602E7C (SmGetStoreOwnerProcessId.c)
 *     DifExfAcquirePushLockSharedWrapper @ 0x140615B00 (DifExfAcquirePushLockSharedWrapper.c)
 *     EtwpGetCompressionSettings @ 0x1406454B0 (EtwpGetCompressionSettings.c)
 *     MiMarkHugePfnBad @ 0x140665444 (MiMarkHugePfnBad.c)
 *     CmpLockGlobalKeyLockTrackerShared @ 0x1406E97C4 (CmpLockGlobalKeyLockTrackerShared.c)
 *     ExpWatchProductTypeWork @ 0x1406EB400 (ExpWatchProductTypeWork.c)
 *     KiAvailableCpusProcessWorkItemCallback @ 0x14072FC60 (KiAvailableCpusProcessWorkItemCallback.c)
 *     AlpcpPortQueryServerInfo @ 0x140735E84 (AlpcpPortQueryServerInfo.c)
 *     ObIsDosDeviceLocallyMapped @ 0x1407381B0 (ObIsDosDeviceLocallyMapped.c)
 *     PspGetNextSyscallProviderProcess @ 0x140761978 (PspGetNextSyscallProviderProcess.c)
 *     PspSetProcessAffinityUpdateMode @ 0x1407658B8 (PspSetProcessAffinityUpdateMode.c)
 *     PspUpdateSingleProcessAffinity @ 0x140765AE0 (PspUpdateSingleProcessAffinity.c)
 *     PsTerminateVsmEnclave @ 0x14076BA94 (PsTerminateVsmEnclave.c)
 *     SepIsValidProcUniqueLuid @ 0x140785130 (SepIsValidProcUniqueLuid.c)
 *     SepIsParentOfChildAppContainer @ 0x140785BC0 (SepIsParentOfChildAppContainer.c)
 *     SmKmKeyGenGenerate @ 0x14078AA38 (SmKmKeyGenGenerate.c)
 *     SmEtwEnableCallback @ 0x14078C4F0 (SmEtwEnableCallback.c)
 *     SmcGetCacheStats @ 0x14078E27C (SmcGetCacheStats.c)
 *     EtwCleanupSiloState @ 0x140796EEC (EtwCleanupSiloState.c)
 *     ExpGetSystemPlatformBinary @ 0x1407A4EF0 (ExpGetSystemPlatformBinary.c)
 *     ExFetchLicenseData @ 0x1407A88D0 (ExFetchLicenseData.c)
 *     ExGetLicenseTamperState @ 0x1407A8B80 (ExGetLicenseTamperState.c)
 *     sub_1407A9100 @ 0x1407A9100 (sub_1407A9100.c)
 *     sub_1407A98F4 @ 0x1407A98F4 (sub_1407A98F4.c)
 *     sub_1407A9EAC @ 0x1407A9EAC (sub_1407A9EAC.c)
 *     SLGetSubscriptionPfn @ 0x1407AA258 (SLGetSubscriptionPfn.c)
 *     SLQueryLicenseValueInternal @ 0x1407AA53C (SLQueryLicenseValueInternal.c)
 *     SLUpdateLicenseDataInternal @ 0x1407AAD54 (SLUpdateLicenseDataInternal.c)
 *     ExRegisterExtension @ 0x1407B0CA0 (ExRegisterExtension.c)
 *     ExpKdPullRemoteFileForUser @ 0x1407B2BE4 (ExpKdPullRemoteFileForUser.c)
 *     MmEnumerateBadPages @ 0x1407DD2F8 (MmEnumerateBadPages.c)
 *     MiIsExtentDangling @ 0x1407E0570 (MiIsExtentDangling.c)
 *     MiGetAllRegisteredPatches @ 0x1407E296C (MiGetAllRegisteredPatches.c)
 *     MiLogHotPatchRundown @ 0x1407E463C (MiLogHotPatchRundown.c)
 *     MiOpenSpecialPurposeMemory @ 0x1407EE868 (MiOpenSpecialPurposeMemory.c)
 *     MiQuerySpecialPurposeMemoryInformation @ 0x1407EEA08 (MiQuerySpecialPurposeMemoryInformation.c)
 *     CmpVolumeManagerLockContextListShared @ 0x14082310C (CmpVolumeManagerLockContextListShared.c)
 *     EtwpCoverageSamplerQuery @ 0x1408232B0 (EtwpCoverageSamplerQuery.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x140840E80 (CmKeyBodyRemapToVirtualForEnum.c)
 *     SeCaptureSubjectContextEx @ 0x1408436C0 (SeCaptureSubjectContextEx.c)
 *     CmpFindSubkeyInHashByChildCell @ 0x1408471B0 (CmpFindSubkeyInHashByChildCell.c)
 *     CmpLockHashEntrySharedByKcb @ 0x1408483D4 (CmpLockHashEntrySharedByKcb.c)
 *     CmpLockHiveListShared @ 0x140848578 (CmpLockHiveListShared.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x140848B80 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpCallCallBacksEx @ 0x14084C050 (CmpCallCallBacksEx.c)
 *     CmpCallbackFillObjectContext @ 0x14084CB10 (CmpCallbackFillObjectContext.c)
 *     ObpCreateHandle @ 0x1408518D0 (ObpCreateHandle.c)
 *     PsOpenProcess @ 0x1408572E0 (PsOpenProcess.c)
 *     ObOpenObjectByPointer @ 0x140857EB0 (ObOpenObjectByPointer.c)
 *     SeCaptureSubjectContext @ 0x140858670 (SeCaptureSubjectContext.c)
 *     NtAlpcImpersonateClientOfPort @ 0x140859580 (NtAlpcImpersonateClientOfPort.c)
 *     ObOpenObjectByNameEx @ 0x14085B430 (ObOpenObjectByNameEx.c)
 *     ObCreateObjectEx @ 0x14085BE20 (ObCreateObjectEx.c)
 *     ObpLookupObjectName @ 0x14085CB70 (ObpLookupObjectName.c)
 *     ObpReferenceSecurityDescriptorSlow @ 0x140862984 (ObpReferenceSecurityDescriptorSlow.c)
 *     CmpCreateKeyControlBlock @ 0x140875390 (CmpCreateKeyControlBlock.c)
 *     CmpWalkOneLevel @ 0x140876200 (CmpWalkOneLevel.c)
 *     CmpGetKeyNodeForKcb @ 0x140879920 (CmpGetKeyNodeForKcb.c)
 *     HvLockHiveFlusherShared @ 0x14087DA14 (HvLockHiveFlusherShared.c)
 *     EtwpReferenceLoggerSecurityDescriptor @ 0x140897194 (EtwpReferenceLoggerSecurityDescriptor.c)
 *     RtlFindDynamicEnforcedAddressInRanges @ 0x140898234 (RtlFindDynamicEnforcedAddressInRanges.c)
 *     ObLogSecurityDescriptor @ 0x140899A00 (ObLogSecurityDescriptor.c)
 *     EtwpAddRegEntryToGroup @ 0x140899D60 (EtwpAddRegEntryToGroup.c)
 *     EtwpIsGuidAllowed @ 0x14089AB9C (EtwpIsGuidAllowed.c)
 *     EtwpFindOrCreateGuidEntry @ 0x14089B79C (EtwpFindOrCreateGuidEntry.c)
 *     EtwpFindGuidEntryByGuid @ 0x14089B9B0 (EtwpFindGuidEntryByGuid.c)
 *     EtwpRegisterUMProvider @ 0x14089D2F0 (EtwpRegisterUMProvider.c)
 *     EtwpGetGuidList @ 0x14089DF60 (EtwpGetGuidList.c)
 *     EtwpGetNextGuidEntry @ 0x14089E1C0 (EtwpGetNextGuidEntry.c)
 *     ObInsertObjectEx @ 0x1408A05E0 (ObInsertObjectEx.c)
 *     SeDefaultObjectMethod @ 0x1408A1150 (SeDefaultObjectMethod.c)
 *     NtOpenThreadTokenEx @ 0x1408A17B0 (NtOpenThreadTokenEx.c)
 *     AlpcpReferenceConnectedPort @ 0x1408A6120 (AlpcpReferenceConnectedPort.c)
 *     SeCreateClientSecurity @ 0x1408A6230 (SeCreateClientSecurity.c)
 *     SeCreateClientSecurityEx @ 0x1408A64C0 (SeCreateClientSecurityEx.c)
 *     AlpcpGetEffectiveTokenMessage @ 0x1408A6770 (AlpcpGetEffectiveTokenMessage.c)
 *     AlpcpReceiveMessagePort @ 0x1408A6F40 (AlpcpReceiveMessagePort.c)
 *     AlpcpExposeTokenAttribute @ 0x1408A82D0 (AlpcpExposeTokenAttribute.c)
 *     AlpcpDispatchNewMessage @ 0x1408A8F50 (AlpcpDispatchNewMessage.c)
 *     AlpcpReceiveSynchronousReply @ 0x1408AB350 (AlpcpReceiveSynchronousReply.c)
 *     NtAlpcOpenSenderProcess @ 0x1408AB690 (NtAlpcOpenSenderProcess.c)
 *     AlpcpReceiveDirectMessagePort @ 0x1408ABB08 (AlpcpReceiveDirectMessagePort.c)
 *     AlpcpReceiveLegacyMessage @ 0x1408AC320 (AlpcpReceiveLegacyMessage.c)
 *     AlpcpCancelMessage @ 0x1408AC700 (AlpcpCancelMessage.c)
 *     AlpcpDispatchReplyToPort @ 0x1408ACCE0 (AlpcpDispatchReplyToPort.c)
 *     AlpcpLockBlobShared @ 0x1408AD220 (AlpcpLockBlobShared.c)
 *     AlpcpCreateSection @ 0x1408AE108 (AlpcpCreateSection.c)
 *     AlpcpCreateReserve @ 0x1408AEE08 (AlpcpCreateReserve.c)
 *     AlpcReferenceBlobByHandle @ 0x1408AF5B0 (AlpcReferenceBlobByHandle.c)
 *     AlpcpLocateSectionView @ 0x1408AF88C (AlpcpLocateSectionView.c)
 *     AlpcpCaptureSecurityAttributeInternal @ 0x1408AFA20 (AlpcpCaptureSecurityAttributeInternal.c)
 *     AlpcpCreateSecurityContext @ 0x1408AFF04 (AlpcpCreateSecurityContext.c)
 *     AlpcpCaptureSecurityAttribute @ 0x1408B0460 (AlpcpCaptureSecurityAttribute.c)
 *     AlpcpSendMessage @ 0x1408B0BA0 (AlpcpSendMessage.c)
 *     PspChargeProcessWakeCounter @ 0x1408B2120 (PspChargeProcessWakeCounter.c)
 *     AlpcpDispatchReplyToWaitingThread @ 0x1408B2D00 (AlpcpDispatchReplyToWaitingThread.c)
 *     AlpcpEnumerateResourcesPort @ 0x1408B4CD4 (AlpcpEnumerateResourcesPort.c)
 *     AlpcpCreateSectionView @ 0x1408B5A38 (AlpcpCreateSectionView.c)
 *     NtAlpcDeleteSectionView @ 0x1408B5B70 (NtAlpcDeleteSectionView.c)
 *     DbgkpSendErrorMessage @ 0x1408B6DA4 (DbgkpSendErrorMessage.c)
 *     NtSetInformationProcess @ 0x1408BA860 (NtSetInformationProcess.c)
 *     PsGetNextProcessThread @ 0x1408BD940 (PsGetNextProcessThread.c)
 *     NtQueryObject @ 0x1408BFD10 (NtQueryObject.c)
 *     ObQueryNameStringMode @ 0x1408C0E20 (ObQueryNameStringMode.c)
 *     PiDmObjectAcquireSharedLock @ 0x1408CCF68 (PiDmObjectAcquireSharedLock.c)
 *     PiControlGetDeviceInterfaceEnabled @ 0x1408CD7B0 (PiControlGetDeviceInterfaceEnabled.c)
 *     PiDmObjectGetCachedObjectProperty @ 0x1408CDEA0 (PiDmObjectGetCachedObjectProperty.c)
 *     NtAreMappedFilesTheSame @ 0x1408D8E90 (NtAreMappedFilesTheSame.c)
 *     PspGetNextJob @ 0x1408DC790 (PspGetNextJob.c)
 *     PsQueryStatisticsProcess @ 0x1408DD540 (PsQueryStatisticsProcess.c)
 *     PspLockJobMemoryLimitsShared @ 0x1408DE168 (PspLockJobMemoryLimitsShared.c)
 *     PsQueryProcessEnergyValues @ 0x1408DE290 (PsQueryProcessEnergyValues.c)
 *     PfpPrivSourceEnum @ 0x1408DED60 (PfpPrivSourceEnum.c)
 *     PsGetNextProcess @ 0x1408DF760 (PsGetNextProcess.c)
 *     ExGetNextProcess @ 0x1408DF930 (ExGetNextProcess.c)
 *     sub_1408E0EF8 @ 0x1408E0EF8 (sub_1408E0EF8.c)
 *     ExpWnfAcquireSubscriptionByName @ 0x1408E23F0 (ExpWnfAcquireSubscriptionByName.c)
 *     ExpWnfDeliverThreadNotifications @ 0x1408E2CA0 (ExpWnfDeliverThreadNotifications.c)
 *     ExpWnfCompleteThreadSubscriptions @ 0x1408E3088 (ExpWnfCompleteThreadSubscriptions.c)
 *     ExpWnfReadStateData @ 0x1408E32C8 (ExpWnfReadStateData.c)
 *     ExpWnfLookupNameInstance @ 0x1408E33E0 (ExpWnfLookupNameInstance.c)
 *     ExpWnfDispatchKernelSubscription @ 0x1408E3DC0 (ExpWnfDispatchKernelSubscription.c)
 *     ExpNtUpdateWnfStateData @ 0x1408E4380 (ExpNtUpdateWnfStateData.c)
 *     ExpWnfResolveScopeInstance @ 0x1408E4E70 (ExpWnfResolveScopeInstance.c)
 *     ExpWnfNotifyNameSubscribers @ 0x1408E5D40 (ExpWnfNotifyNameSubscribers.c)
 *     SeCreateAccessStateEx @ 0x1408F3A90 (SeCreateAccessStateEx.c)
 *     MiIsRangeFullyCommitted @ 0x1408F8634 (MiIsRangeFullyCommitted.c)
 *     sub_140907850 @ 0x140907850 (sub_140907850.c)
 *     sub_14090835C @ 0x14090835C (sub_14090835C.c)
 *     sub_140908B00 @ 0x140908B00 (sub_140908B00.c)
 *     sub_140908DF4 @ 0x140908DF4 (sub_140908DF4.c)
 *     PspReferenceSystemDll @ 0x14090BA68 (PspReferenceSystemDll.c)
 *     EtwpCovSampStackHashCheck @ 0x14090C9AC (EtwpCovSampStackHashCheck.c)
 *     EtwpCovSampContextGetModule @ 0x14090D0F0 (EtwpCovSampContextGetModule.c)
 *     PsReferenceImpersonationTokenEx @ 0x140910D20 (PsReferenceImpersonationTokenEx.c)
 *     SeCreateAccessState @ 0x1409154F0 (SeCreateAccessState.c)
 *     AlpcpCreateClientPort @ 0x140916890 (AlpcpCreateClientPort.c)
 *     ObSetSecurityDescriptorInfo @ 0x140919920 (ObSetSecurityDescriptorInfo.c)
 *     DbgkFlushErrorPort @ 0x14091D610 (DbgkFlushErrorPort.c)
 *     PsGetProcessDeepFreezeStats @ 0x14091FE1C (PsGetProcessDeepFreezeStats.c)
 *     ExpSnapShotHandleTables @ 0x140921A40 (ExpSnapShotHandleTables.c)
 *     EtwpGetSidExtendedHeaderItem @ 0x140925E00 (EtwpGetSidExtendedHeaderItem.c)
 *     MiRelocateImagePfn @ 0x140945ED0 (MiRelocateImagePfn.c)
 *     VrpTranslatePath @ 0x140947B60 (VrpTranslatePath.c)
 *     VrpLockJobContextShared @ 0x140949488 (VrpLockJobContextShared.c)
 *     CmSetCallbackObjectContext @ 0x140949880 (CmSetCallbackObjectContext.c)
 *     VrpLockDiffHiveTableShared @ 0x14094B61C (VrpLockDiffHiveTableShared.c)
 *     PsReferenceImpersonationToken @ 0x14094BF60 (PsReferenceImpersonationToken.c)
 *     PiDmObjectGetCachedObjectPropertyData @ 0x14095A5C0 (PiDmObjectGetCachedObjectPropertyData.c)
 *     PsReferenceEffectiveToken @ 0x140969860 (PsReferenceEffectiveToken.c)
 *     CmpGetCallbackObjectContext @ 0x140978280 (CmpGetCallbackObjectContext.c)
 *     ExpGetNextProcessThread @ 0x140978A00 (ExpGetNextProcessThread.c)
 *     ntoskrnl_21 @ 0x140979240 (ntoskrnl_21.c)
 *     ObQueryDeviceMapInformation @ 0x14097E7F0 (ObQueryDeviceMapInformation.c)
 *     ObpReferenceCurrentDeviceMap @ 0x14097EE00 (ObpReferenceCurrentDeviceMap.c)
 *     ObpReferenceDeviceMapFastRef @ 0x14097F690 (ObpReferenceDeviceMapFastRef.c)
 *     CmpLockHashEntryShared @ 0x14098ACC0 (CmpLockHashEntryShared.c)
 *     AlpcpDisconnectPort @ 0x14098B448 (AlpcpDisconnectPort.c)
 *     AlpcpFlushMessagesPort @ 0x14098BF34 (AlpcpFlushMessagesPort.c)
 *     AlpcpReferenceAndLockTargetPortsAndCommunicationInfo @ 0x14098CE00 (AlpcpReferenceAndLockTargetPortsAndCommunicationInfo.c)
 *     AlpcpDispatchConnectionRequest @ 0x14098D0EC (AlpcpDispatchConnectionRequest.c)
 *     AlpcpSendLegacySynchronousRequest @ 0x14098D31C (AlpcpSendLegacySynchronousRequest.c)
 *     AlpcpQueryRemoteView @ 0x14098EA38 (AlpcpQueryRemoteView.c)
 *     ObpCallPreOperationCallbacks @ 0x14099B9C0 (ObpCallPreOperationCallbacks.c)
 *     CmpLockContextListShared @ 0x14099BE90 (CmpLockContextListShared.c)
 *     CmpLockCallbackListShared @ 0x14099C280 (CmpLockCallbackListShared.c)
 *     ObAssignObjectSecurityDescriptor @ 0x1409A52A0 (ObAssignObjectSecurityDescriptor.c)
 *     SepTokenDeleteMethod @ 0x1409A7370 (SepTokenDeleteMethod.c)
 *     AlpcpPortQueryConnectedSidInfo @ 0x1409C2254 (AlpcpPortQueryConnectedSidInfo.c)
 *     AlpcpPortQueryServerSessionInfo @ 0x1409C255C (AlpcpPortQueryServerSessionInfo.c)
 *     ObpLockDirectoryShared @ 0x1409C2CD0 (ObpLockDirectoryShared.c)
 *     AlpcpReturnMessageOnInsufficientBuffer @ 0x1409CD560 (AlpcpReturnMessageOnInsufficientBuffer.c)
 *     ObpLockChildDirectory @ 0x1409CD9D0 (ObpLockChildDirectory.c)
 *     AlpcpProcessSynchronousRequest @ 0x1409CE020 (AlpcpProcessSynchronousRequest.c)
 *     PsQueryRuntimeProcess @ 0x1409CE740 (PsQueryRuntimeProcess.c)
 *     ExpWnfSubscribeNameInstance @ 0x1409CFDD4 (ExpWnfSubscribeNameInstance.c)
 *     sub_1409E0F38 @ 0x1409E0F38 (sub_1409E0F38.c)
 *     sub_1409E1544 @ 0x1409E1544 (sub_1409E1544.c)
 *     sub_1409E239C @ 0x1409E239C (sub_1409E239C.c)
 *     CmLockKeyForWrite @ 0x1409E3164 (CmLockKeyForWrite.c)
 *     PspWow64ReadOrWriteThreadCpuArea @ 0x1409EBC24 (PspWow64ReadOrWriteThreadCpuArea.c)
 *     PspLockJobListShared @ 0x1409EDF30 (PspLockJobListShared.c)
 *     AlpcpReplyLegacySynchronousRequest @ 0x1409F1EF0 (AlpcpReplyLegacySynchronousRequest.c)
 *     PspStorageGetObject @ 0x1409F3ECC (PspStorageGetObject.c)
 *     ExpWnfNotifySubscription @ 0x1409F4E98 (ExpWnfNotifySubscription.c)
 *     AlpcpAcceptConnectPort @ 0x1409F5B30 (AlpcpAcceptConnectPort.c)
 *     PspSelectVsmEnclaveByNumber @ 0x140A070EC (PspSelectVsmEnclaveByNumber.c)
 *     NtAlpcSetInformation @ 0x140A073C0 (NtAlpcSetInformation.c)
 *     RtlpFlsDataCleanup @ 0x140A08404 (RtlpFlsDataCleanup.c)
 *     ExAcquireTimeRefreshLockShared @ 0x140A09550 (ExAcquireTimeRefreshLockShared.c)
 *     NtDeleteKey @ 0x140A0A070 (NtDeleteKey.c)
 *     SepSetTokenLowboxNumber @ 0x140A0DB74 (SepSetTokenLowboxNumber.c)
 *     SepDereferenceLowBoxNumberEntry @ 0x140A0E024 (SepDereferenceLowBoxNumberEntry.c)
 *     CmFcManagerQueryFeatureConfigurationSectionInformation @ 0x140A1AE34 (CmFcManagerQueryFeatureConfigurationSectionInformation.c)
 *     MiFindProcessImageHotPatchRecord @ 0x140A1DD10 (MiFindProcessImageHotPatchRecord.c)
 *     RtlpFindDynamicEHContinuationTarget @ 0x140A2A35C (RtlpFindDynamicEHContinuationTarget.c)
 *     CmFcpManagerPublishChangeNotifications @ 0x140A3050C (CmFcpManagerPublishChangeNotifications.c)
 *     AlpcpReferenceMessageByWaitingThreadPort @ 0x140A353EC (AlpcpReferenceMessageByWaitingThreadPort.c)
 *     ExpWnfAcquireSubscriptionNameInstance @ 0x140A36EFC (ExpWnfAcquireSubscriptionNameInstance.c)
 *     CmpVolumeContextLockShared @ 0x140A41E3C (CmpVolumeContextLockShared.c)
 *     WdipTimeoutCheckRoutine @ 0x140A42BB0 (WdipTimeoutCheckRoutine.c)
 *     WdipSemDisableScenario @ 0x140A42EA0 (WdipSemDisableScenario.c)
 *     WdipSemEnableScenario @ 0x140A4370C (WdipSemEnableScenario.c)
 *     PopAcquireUmpoPushLock @ 0x140A4C844 (PopAcquireUmpoPushLock.c)
 *     PsReferencePartitionSystemProcess @ 0x140A4E3C0 (PsReferencePartitionSystemProcess.c)
 *     MiFindHotPatchRecord @ 0x140A5618C (MiFindHotPatchRecord.c)
 *     ExpWnfAcquirePermanentDataStoreHandle @ 0x140A61150 (ExpWnfAcquirePermanentDataStoreHandle.c)
 *     EtwpGetDisallowList @ 0x140A64BF8 (EtwpGetDisallowList.c)
 *     ExpWnfEnumerateScopeInstances @ 0x140A64E60 (ExpWnfEnumerateScopeInstances.c)
 *     AlpcpMapLegacyPortRemoteView @ 0x140A82DE8 (AlpcpMapLegacyPortRemoteView.c)
 *     CmFcpManagerProcessUsageDataProviders @ 0x140A8D7AC (CmFcpManagerProcessUsageDataProviders.c)
 *     ExpWnfInvalidateDataStores @ 0x140A9A1F8 (ExpWnfInvalidateDataStores.c)
 *     MiQueryLoadedPatches @ 0x140AA1218 (MiQueryLoadedPatches.c)
 *     AlpcpInvokeLogCallbacks @ 0x140AA4914 (AlpcpInvokeLogCallbacks.c)
 *     MiQueryProcessActivePatches @ 0x140AA8E54 (MiQueryProcessActivePatches.c)
 *     PopQueryPowerButtonBugcheckEnabled @ 0x140AAD190 (PopQueryPowerButtonBugcheckEnabled.c)
 *     NtQueryDirectoryObject @ 0x140AC1020 (NtQueryDirectoryObject.c)
 *     EtwpCovSampContextPruneModules @ 0x140ACF5C8 (EtwpCovSampContextPruneModules.c)
 *     WheaConfigureErrorSource @ 0x140B51AB0 (WheaConfigureErrorSource.c)
 *     WheaUnconfigureErrorSource @ 0x140B51C70 (WheaUnconfigureErrorSource.c)
 *     MmDuplicateMemory @ 0x140B52868 (MmDuplicateMemory.c)
 *     CmpLockKcbShared @ 0x140BA9340 (CmpLockKcbShared.c)
 *     CmLockHiveSecurityShared @ 0x140BA9A5C (CmLockHiveSecurityShared.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     KiAbEntryRemoveFromTree @ 0x14029D4A0 (KiAbEntryRemoveFromTree.c)
 *     ExpWakePushLock @ 0x140406240 (ExpWakePushLock.c)
 */

signed __int64 __fastcall ExfAcquirePushLockSharedEx(signed __int64 *a1, char a2, __int64 *a3, unsigned __int64 a4)
{
  unsigned int v4; // esi
  __int64 v5; // r13
  bool v8; // r12
  signed __int64 v9; // rdi
  signed __int64 v10; // rcx
  signed __int64 result; // rax
  int v12; // ebx
  unsigned __int64 v13; // rax
  unsigned int v14; // eax
  unsigned int k; // edx
  bool v16; // cl
  unsigned __int64 v17; // rdx
  bool v18; // zf
  signed __int64 v19; // rax
  _QWORD *v20; // rax
  _QWORD *v21; // rcx
  __int64 v22; // rcx
  signed __int64 v23; // rax
  unsigned __int64 v24; // r8
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rax
  int j; // edx
  int v29; // ebx
  unsigned __int64 v30; // rax
  unsigned int v31; // eax
  unsigned int i; // edx
  __int128 Object; // [rsp+40h] [rbp-40h] BYREF
  __int128 v34; // [rsp+50h] [rbp-30h]
  __int128 v35; // [rsp+60h] [rbp-20h]
  __int128 v36; // [rsp+70h] [rbp-10h] BYREF

  v4 = 0;
  v5 = a4;
  Object = 0LL;
  v34 = 0LL;
  v35 = 0LL;
  v36 = 0LL;
  v8 = ExpPushLockAllowImplicitUpgrade && (a2 & 4) == 0;
  _m_prefetchw(a1);
  v9 = *a1;
  while ( ((v9 & 2) != 0 || (v9 & 1) != 0 && (v9 & 0xFFFFFFFFFFFFFFF0uLL) == 0) && (!v8 || (v9 & 1) != 0) )
  {
    if ( a3 )
    {
      *(_BYTE *)a3 |= 2u;
      if ( *a3 < 0 )
        KiAbEntryRemoveFromTree(a3);
      *((_BYTE *)a3 + 9) = 1;
      *(_BYTE *)a3 &= ~2u;
    }
    v16 = 0;
    *((_QWORD *)&v36 + 1) = a3;
    DWORD1(v36) = 2;
    *((_QWORD *)&v35 + 1) = 0LL;
    if ( (v9 & 2) != 0 )
    {
      *(_QWORD *)&v35 = 0LL;
      LODWORD(v36) = -1;
      *((_QWORD *)&v34 + 1) = v9 & 0xFFFFFFFFFFFFFFF0uLL;
      v17 = (unsigned __int64)&Object | v9 & 9 | 6;
      v16 = (v9 & 4) == 0;
    }
    else
    {
      LODWORD(v36) = -2;
      *(_QWORD *)&v35 = &Object;
      v17 = (unsigned __int64)&Object + 3;
    }
    v19 = _InterlockedCompareExchange64(a1, v17, v9);
    v18 = v9 == v19;
    v9 = v19;
    if ( !v18 )
    {
      v29 = v4;
      if ( v4 )
      {
        if ( v4 < 0x1FFF )
          v29 = 2 * v4;
LABEL_61:
        v4 = v29;
        v30 = __rdtsc();
        v31 = 10 * (((v29 - 1) & (unsigned int)v30) + v29) / MEMORY[0xFFFFF780000002D6];
        for ( i = 0; i < v31; ++i )
          _mm_pause();
      }
      else if ( (_DWORD)KeNumberProcessors_0 != 1 )
      {
        v29 = 64;
        goto LABEL_61;
      }
LABEL_63:
      v9 = *a1;
      _m_prefetchw(a1);
      goto LABEL_64;
    }
    if ( v16 )
    {
      if ( (v17 & 1) != 0 )
      {
        while ( 1 )
        {
          v20 = (_QWORD *)(v17 & 0xFFFFFFFFFFFFFFF0uLL);
          if ( !*(_QWORD *)((v17 & 0xFFFFFFFFFFFFFFF0uLL) + 0x20) )
          {
            do
            {
              v21 = v20;
              v20 = (_QWORD *)v20[3];
              v20[5] = v21;
              v22 = v20[4];
            }
            while ( !v22 );
            if ( v20 != (_QWORD *)(v17 & 0xFFFFFFFFFFFFFFF0uLL) )
              *(_QWORD *)((v17 & 0xFFFFFFFFFFFFFFF0uLL) + 0x20) = v22;
          }
          v23 = _InterlockedCompareExchange64(a1, v17 - 4, v17);
          v18 = v17 == v23;
          v17 = v23;
          if ( v18 )
            break;
          if ( (v23 & 1) == 0 )
            goto LABEL_42;
        }
      }
      else
      {
LABEL_42:
        ExpWakePushLock(a1, v17, 0xFFFFF780000002D6uLL, a4);
      }
    }
    *(_QWORD *)&v34 = (char *)&Object + 8;
    *((_QWORD *)&Object + 1) = (char *)&Object + 8;
    LOWORD(Object) = 1;
    BYTE2(Object) = 6;
    DWORD1(Object) = 0;
    if ( MEMORY[0xFFFFF7800000036A] > 1u )
    {
      if ( MEMORY[0xFFFFF78000000297] )
      {
        v24 = __rdtsc();
        a4 = v24 + (unsigned int)ExpSpinCycleCount;
        while ( 1 )
        {
          __asm { monitorx rax, rcx, rdx }
          if ( (BYTE4(v36) & 2) == 0 )
            break;
          v25 = v24;
          v26 = __rdtsc();
          v24 = v26;
          if ( v26 < v25 || v26 >= a4 )
            break;
          __asm { mwaitx  rax, rcx, rbx }
        }
      }
      else
      {
        for ( j = 0; (BYTE4(v36) & 2) != 0 && j != ExpSpinCycleCount / (unsigned int)MEMORY[0xFFFFF780000002D6]; ++j )
          _mm_pause();
      }
    }
    if ( _interlockedbittestandreset((volatile signed __int32 *)&v36 + 1, 1u) )
      KeWaitForSingleObject(&Object, WrPushLock, 0, 0, 0LL);
LABEL_64:
    if ( a3 )
      a3 = KeAbPreAcquire(v5, (__int64)a3);
  }
  v10 = (v9 | 1) + 16;
  if ( (v9 & 2) != 0 )
    v10 = v9 | 1;
  result = _InterlockedCompareExchange64(a1, v10, v9);
  if ( v9 != result )
  {
    if ( a3 )
    {
      *(_BYTE *)a3 |= 2u;
      if ( *a3 < 0 )
        KiAbEntryRemoveFromTree(a3);
      *((_BYTE *)a3 + 9) = 1;
      *(_BYTE *)a3 &= ~2u;
    }
    v12 = v4;
    if ( v4 )
    {
      if ( v4 < 0x1FFF )
        v12 = 2 * v4;
    }
    else
    {
      if ( (_DWORD)KeNumberProcessors_0 == 1 )
        goto LABEL_63;
      v12 = 64;
    }
    v4 = v12;
    v13 = __rdtsc();
    v14 = 10 * (((v12 - 1) & (unsigned int)v13) + v12) / MEMORY[0xFFFFF780000002D6];
    for ( k = 0; k < v14; ++k )
      _mm_pause();
    goto LABEL_63;
  }
  return result;
}
