/*
 * XREFs of RtlReleaseSRWLockExclusive @ 0x1800567B0
 * Callers:
 *     RtlUnlockMemoryZone @ 0x1800018E0 (RtlUnlockMemoryZone.c)
 *     RtlpUnregisterLockedMemoryZone @ 0x18000197C (RtlpUnregisterLockedMemoryZone.c)
 *     RtlUnlockMemoryBlockLookaside @ 0x1800019C0 (RtlUnlockMemoryBlockLookaside.c)
 *     RtlLockMemoryBlockLookaside @ 0x180001A20 (RtlLockMemoryBlockLookaside.c)
 *     RtlLockMemoryZone @ 0x180001AA0 (RtlLockMemoryZone.c)
 *     RtlpRegisterLockedMemoryZone @ 0x180001BB8 (RtlpRegisterLockedMemoryZone.c)
 *     RtlpUnregisterLockedMemoryBlockLookaside @ 0x180001C2C (RtlpUnregisterLockedMemoryBlockLookaside.c)
 *     RtlpRegisterLockedMemoryBlockLookaside @ 0x180001C88 (RtlpRegisterLockedMemoryBlockLookaside.c)
 *     RtlUnlockModuleSection @ 0x180001D20 (RtlUnlockModuleSection.c)
 *     RtlLockModuleSection @ 0x180001DD0 (RtlLockModuleSection.c)
 *     LdrpReleaseTlsEntry @ 0x1800049CC (LdrpReleaseTlsEntry.c)
 *     LdrGetProcedureAddressForCaller @ 0x180004FF0 (LdrGetProcedureAddressForCaller.c)
 *     RtlpAddVectoredHandler @ 0x180006308 (RtlpAddVectoredHandler.c)
 *     RtlRemoveInvertedFunctionTable @ 0x180006734 (RtlRemoveInvertedFunctionTable.c)
 *     RtlAddGrowableFunctionTable @ 0x180006BA0 (RtlAddGrowableFunctionTable.c)
 *     LdrEnsureMrdataHeapExists @ 0x180006F10 (LdrEnsureMrdataHeapExists.c)
 *     LdrProtectMrdata @ 0x180007080 (LdrProtectMrdata.c)
 *     RtlInsertInvertedFunctionTable @ 0x180007234 (RtlInsertInvertedFunctionTable.c)
 *     LdrpWriteBackProtectedDelayLoad @ 0x180007900 (LdrpWriteBackProtectedDelayLoad.c)
 *     LdrpHandleTlsData @ 0x180008200 (LdrpHandleTlsData.c)
 *     LdrpReleaseDllPath @ 0x18000ABC0 (LdrpReleaseDllPath.c)
 *     LdrpMapAndSnapDependency @ 0x18000C8D0 (LdrpMapAndSnapDependency.c)
 *     LdrpLoadDependentModuleInternal @ 0x18000D2E0 (LdrpLoadDependentModuleInternal.c)
 *     LdrpFindOrPrepareLoadingModule @ 0x18000FA80 (LdrpFindOrPrepareLoadingModule.c)
 *     RtlpEnterCriticalSectionContended @ 0x180013580 (RtlpEnterCriticalSectionContended.c)
 *     LdrpFastpthReloadedDll @ 0x180019870 (LdrpFastpthReloadedDll.c)
 *     RtlpCallVectoredHandlers @ 0x180019DC0 (RtlpCallVectoredHandlers.c)
 *     TppWorkInitialize @ 0x18001A6B0 (TppWorkInitialize.c)
 *     TppCleanupGroupMemberInitialize @ 0x18001A830 (TppCleanupGroupMemberInitialize.c)
 *     LdrpDereferenceModule @ 0x18001B350 (LdrpDereferenceModule.c)
 *     TppPoolpReferenceGlobalPool @ 0x18001B460 (TppPoolpReferenceGlobalPool.c)
 *     LdrUnloadDll @ 0x18001B6B0 (LdrUnloadDll.c)
 *     TppCleanupGroupAddMember @ 0x18001C7C0 (TppCleanupGroupAddMember.c)
 *     LdrpDecrementModuleLoadCountEx @ 0x18001C830 (LdrpDecrementModuleLoadCountEx.c)
 *     LdrpUnloadNode @ 0x18001CA60 (LdrpUnloadNode.c)
 *     EtwNotificationUnregister @ 0x18001D140 (EtwNotificationUnregister.c)
 *     ProviderHandleRemove @ 0x18001D2D0 (ProviderHandleRemove.c)
 *     EtwpRemoveRegistrationFromTable @ 0x18001D3A8 (EtwpRemoveRegistrationFromTable.c)
 *     EtwNotificationRegister @ 0x18001D450 (EtwNotificationRegister.c)
 *     ProviderHandleInsert @ 0x18001D670 (ProviderHandleInsert.c)
 *     EtwpInsertRegistration @ 0x18001D8C0 (EtwpInsertRegistration.c)
 *     EtwpFindGuidEntry @ 0x18001DBB0 (EtwpFindGuidEntry.c)
 *     EtwDeliverDataBlock @ 0x18001E150 (EtwDeliverDataBlock.c)
 *     EtwpFindRegistration @ 0x18001E680 (EtwpFindRegistration.c)
 *     EtwpUpdateEnableInfoAndCallback @ 0x18001E990 (EtwpUpdateEnableInfoAndCallback.c)
 *     EtwpEventApiCallback @ 0x18001EC50 (EtwpEventApiCallback.c)
 *     TppWaitCompletion @ 0x18001FE00 (TppWaitCompletion.c)
 *     TpSetWaitEx @ 0x1800200E0 (TpSetWaitEx.c)
 *     RtlpWnfProcessCurrentDescriptor @ 0x180020CB0 (RtlpWnfProcessCurrentDescriptor.c)
 *     RtlpWnfWalkUserSubscriptionList @ 0x180021030 (RtlpWnfWalkUserSubscriptionList.c)
 *     TppCleanupGroupMemberDestroy @ 0x180021980 (TppCleanupGroupMemberDestroy.c)
 *     TppCleanupGroupRemoveMember @ 0x180021D20 (TppCleanupGroupRemoveMember.c)
 *     TppWorkCallbackPrologRelease @ 0x1800222C0 (TppWorkCallbackPrologRelease.c)
 *     TppWorkerFindTask @ 0x180023100 (TppWorkerFindTask.c)
 *     TppWorkerThread @ 0x1800238D0 (TppWorkerThread.c)
 *     TppCallbackEpilog @ 0x1800248E0 (TppCallbackEpilog.c)
 *     TppPrepareDirectParams @ 0x180025370 (TppPrepareDirectParams.c)
 *     TppAlpcpExecuteCallback @ 0x1800258C0 (TppAlpcpExecuteCallback.c)
 *     RtlLookupAtomInAtomTable @ 0x1800329C0 (RtlLookupAtomInAtomTable.c)
 *     RtlpHeapTrkTrackStack @ 0x18003C500 (RtlpHeapTrkTrackStack.c)
 *     RtlpHeapTrkTrackAdd @ 0x18003C7F0 (RtlpHeapTrkTrackAdd.c)
 *     RtlpHeapTrkTrackRemove @ 0x18003C8D0 (RtlpHeapTrkTrackRemove.c)
 *     RtlpHeapTrkInterceptor @ 0x18003CA10 (RtlpHeapTrkInterceptor.c)
 *     RtlpHeapTrkDereferenceStack @ 0x18003CDF0 (RtlpHeapTrkDereferenceStack.c)
 *     RtlpHeapTrkFindStack @ 0x18003E9C0 (RtlpHeapTrkFindStack.c)
 *     RtlpHeapTrkDumpOutstandingAllocs @ 0x18003F3E0 (RtlpHeapTrkDumpOutstandingAllocs.c)
 *     RtlpReleaseDescriptorPseudoGlobalLock @ 0x180040048 (RtlpReleaseDescriptorPseudoGlobalLock.c)
 *     RtlpHpUnlockHeapForProcessCloneOrTerminate @ 0x1800422B0 (RtlpHpUnlockHeapForProcessCloneOrTerminate.c)
 *     RtlpWalkLFHBlock @ 0x180049500 (RtlpWalkLFHBlock.c)
 *     RtlpIsLFHZoneAllocation @ 0x180049DB0 (RtlpIsLFHZoneAllocation.c)
 *     RtlpHpLfhPrivateSlotShutdown @ 0x18004AEFC (RtlpHpLfhPrivateSlotShutdown.c)
 *     RtlpHpLfhContextSlotStandbyProcess @ 0x18004B3D8 (RtlpHpLfhContextSlotStandbyProcess.c)
 *     RtlpHpLfhBucketGetSubsegment @ 0x18004B540 (RtlpHpLfhBucketGetSubsegment.c)
 *     RtlpHpLfhSlotAllocateSlow @ 0x18004B690 (RtlpHpLfhSlotAllocateSlow.c)
 *     RtlpHpLfhSubsegmentDecommitPages @ 0x18004D510 (RtlpHpLfhSubsegmentDecommitPages.c)
 *     RtlpHpLfhBucketAddSubsegment @ 0x18004E6E0 (RtlpHpLfhBucketAddSubsegment.c)
 *     RtlpFlsDataCleanup @ 0x18004EC20 (RtlpFlsDataCleanup.c)
 *     RtlpHpVsSubsegmentCommitPages @ 0x18004F198 (RtlpHpVsSubsegmentCommitPages.c)
 *     RtlpHpLfhOwnerCompact @ 0x1800506A0 (RtlpHpLfhOwnerCompact.c)
 *     RtlpHpSegPageRangeAllocate @ 0x180051620 (RtlpHpSegPageRangeAllocate.c)
 *     RtlpHpSegContextCompact @ 0x180051930 (RtlpHpSegContextCompact.c)
 *     RtlpHpVsChunkSplit @ 0x180052BD0 (RtlpHpVsChunkSplit.c)
 *     RtlpHpVsChunkFree @ 0x180053BC0 (RtlpHpVsChunkFree.c)
 *     RtlpHpSegPageRangeCoalesce @ 0x180054AD0 (RtlpHpSegPageRangeCoalesce.c)
 *     TppWorkPost @ 0x180055B40 (TppWorkPost.c)
 *     RtlpHpLfhSubsegmentIncBlockCounts @ 0x180056080 (RtlpHpLfhSubsegmentIncBlockCounts.c)
 *     RtlpHpLfhSubsegmentCommitBlock @ 0x180056390 (RtlpHpLfhSubsegmentCommitBlock.c)
 *     LdrpResolveProcedureAddress @ 0x180057F30 (LdrpResolveProcedureAddress.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x18005F120 (LdrpSetAlternateResourceModuleHandle.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x180061800 (LdrUnloadAlternateResourceModuleEx.c)
 *     LdrpInitializeProcess @ 0x180066D74 (LdrpInitializeProcess.c)
 *     RtlDeleteTimerQueueEx @ 0x180068CA0 (RtlDeleteTimerQueueEx.c)
 *     TpReleaseCleanupGroupMembers @ 0x180069760 (TpReleaseCleanupGroupMembers.c)
 *     TppJobpRundownJob @ 0x180069A78 (TppJobpRundownJob.c)
 *     RtlUpdateTimer @ 0x18006A310 (RtlUpdateTimer.c)
 *     RtlDeleteTimer @ 0x18006AB60 (RtlDeleteTimer.c)
 *     TpTimerOutstandingCallbackCount @ 0x18006AD40 (TpTimerOutstandingCallbackCount.c)
 *     TpSetTimerEx @ 0x18006AF80 (TpSetTimerEx.c)
 *     TppSetTimer @ 0x18006B410 (TppSetTimer.c)
 *     TppTimerQueueExpiration @ 0x18006B9F0 (TppTimerQueueExpiration.c)
 *     TppSingleTimerExpiration @ 0x18006BE80 (TppSingleTimerExpiration.c)
 *     TpWaitForTimer @ 0x18006C110 (TpWaitForTimer.c)
 *     TppCancelTimer @ 0x18006C3B0 (TppCancelTimer.c)
 *     RtlCreateTimer @ 0x18006D040 (RtlCreateTimer.c)
 *     LdrpPinModule @ 0x18006D2E8 (LdrpPinModule.c)
 *     TppDirectExecuteCallback @ 0x18006D650 (TppDirectExecuteCallback.c)
 *     TppPoolpDereferenceGlobalPool @ 0x18006D7D0 (TppPoolpDereferenceGlobalPool.c)
 *     RtlRegisterWait @ 0x18006DF00 (RtlRegisterWait.c)
 *     RtlDeregisterWaitEx @ 0x18006E2B0 (RtlDeregisterWaitEx.c)
 *     TpReleaseWait @ 0x18006E4C0 (TpReleaseWait.c)
 *     TpWaitOutstandingCallbackCount @ 0x18006E70C (TpWaitOutstandingCallbackCount.c)
 *     TpAllocWait @ 0x18006E7E0 (TpAllocWait.c)
 *     TpWaitForWait @ 0x18006EB30 (TpWaitForWait.c)
 *     TppGetCurrentThreadNumaNode @ 0x18006EE30 (TppGetCurrentThreadNumaNode.c)
 *     TpPostTask @ 0x18006EFB0 (TpPostTask.c)
 *     SbUpdateSwitchContextBasedOnDll @ 0x180070DD0 (SbUpdateSwitchContextBasedOnDll.c)
 *     LdrpMapDllWithSectionHandle @ 0x180072B70 (LdrpMapDllWithSectionHandle.c)
 *     LdrpProcessMappedModule @ 0x180073700 (LdrpProcessMappedModule.c)
 *     LdrpLoadKnownDll @ 0x180074A60 (LdrpLoadKnownDll.c)
 *     LdrpMapDllSearchPath @ 0x180074F30 (LdrpMapDllSearchPath.c)
 *     LdrpFindExistingModule @ 0x180076630 (LdrpFindExistingModule.c)
 *     LdrpComputeLazyDllPath @ 0x180083D90 (LdrpComputeLazyDllPath.c)
 *     RtlpGetCachedPath @ 0x1800842B0 (RtlpGetCachedPath.c)
 *     EtwpDisableTraceProviders @ 0x18008BE84 (EtwpDisableTraceProviders.c)
 *     EtwpGetNextRegistration @ 0x18008BFF0 (EtwpGetNextRegistration.c)
 *     EtwProcessPrivateLoggerRequest @ 0x18008C670 (EtwProcessPrivateLoggerRequest.c)
 *     RtlpFlsFree @ 0x18008F164 (RtlpFlsFree.c)
 *     RtlpCallSecureMemoryCallbacks @ 0x18008FB2C (RtlpCallSecureMemoryCallbacks.c)
 *     RtlpHpStackTraceHeapDestroy @ 0x18008FD48 (RtlpHpStackTraceHeapDestroy.c)
 *     RtlDeleteCriticalSection @ 0x18008FEC0 (RtlDeleteCriticalSection.c)
 *     RtlpHpVaMgrCtxAllocatorDereference @ 0x1800906AC (RtlpHpVaMgrCtxAllocatorDereference.c)
 *     RtlpHpVaMgrCtxAllocatorReference @ 0x180090D68 (RtlpHpVaMgrCtxAllocatorReference.c)
 *     RtlCSparseBitmapBitmaskWrite @ 0x180091350 (RtlCSparseBitmapBitmaskWrite.c)
 *     RtlSparseArrayElementAllocate @ 0x180091434 (RtlSparseArrayElementAllocate.c)
 *     RtlpHpSegMgrVaCtxAlloc @ 0x18009189C (RtlpHpSegMgrVaCtxAlloc.c)
 *     RtlpHpVaMgrCtxFree @ 0x180092700 (RtlpHpVaMgrCtxFree.c)
 *     RtlpCSparseBitmapUnlock @ 0x180092B00 (RtlpCSparseBitmapUnlock.c)
 *     RtlpHpVaMgrAlloc @ 0x180092D78 (RtlpHpVaMgrAlloc.c)
 *     RtlpHpLargeFree @ 0x1800938E4 (RtlpHpLargeFree.c)
 *     RtlpHpLargeReAlloc @ 0x180093AA4 (RtlpHpLargeReAlloc.c)
 *     RtlpHpLargeAlloc @ 0x180093F08 (RtlpHpLargeAlloc.c)
 *     RtlpCreateSerializationGroup @ 0x180097970 (RtlpCreateSerializationGroup.c)
 *     RtlpFcInsertChangeRegistration @ 0x180097CA4 (RtlpFcInsertChangeRegistration.c)
 *     RtlpRemoveUserSubFromNameSub @ 0x180099388 (RtlpRemoveUserSubFromNameSub.c)
 *     RtlpDecrementWnfSerializationGroup @ 0x180099634 (RtlpDecrementWnfSerializationGroup.c)
 *     RtlpDereferenceWnfNameSubscription @ 0x1800996E0 (RtlpDereferenceWnfNameSubscription.c)
 *     RtlpCreateWnfNameSubscription @ 0x180099A4C (RtlpCreateWnfNameSubscription.c)
 *     RtlpAddWnfUserSubToNameSub @ 0x180099C70 (RtlpAddWnfUserSubToNameSub.c)
 *     RtlpCSparseBitmapPageDecommit @ 0x180099FB0 (RtlpCSparseBitmapPageDecommit.c)
 *     RtlInitializeResource @ 0x18009A370 (RtlInitializeResource.c)
 *     RtlpAddDebugInfoToCriticalSection @ 0x18009AEE0 (RtlpAddDebugInfoToCriticalSection.c)
 *     RtlpStdLockRelease @ 0x18009CAE8 (RtlpStdLockRelease.c)
 *     RtlpHpHeapExtendContext @ 0x1800A44D0 (RtlpHpHeapExtendContext.c)
 *     RtlAcquireReleaseSRWLockExclusive @ 0x1800A4630 (RtlAcquireReleaseSRWLockExclusive.c)
 *     RtlpHpLfhPrivateSlotCreate @ 0x1800A4664 (RtlpHpLfhPrivateSlotCreate.c)
 *     RtlpHpLfhContextLockUnlock @ 0x1800A4A18 (RtlpHpLfhContextLockUnlock.c)
 *     RtlpHpLfhOwnerLockUnlock @ 0x1800A4ADC (RtlpHpLfhOwnerLockUnlock.c)
 *     RtlpHpLfhOwnerListLockUnlock @ 0x1800A4BD0 (RtlpHpLfhOwnerListLockUnlock.c)
 *     RtlpHpLfhContextMetadataFree @ 0x1800A4C98 (RtlpHpLfhContextMetadataFree.c)
 *     RtlpHpLfhContextMetadataAllocate @ 0x1800A4DB4 (RtlpHpLfhContextMetadataAllocate.c)
 *     RtlpCreateHeap @ 0x1800A7550 (RtlpCreateHeap.c)
 *     TpAllocPoolInternal @ 0x1800AB494 (TpAllocPoolInternal.c)
 *     TpSetPoolThreadCpuSets @ 0x1800ABCC0 (TpSetPoolThreadCpuSets.c)
 *     RtlEmptyAtomTable @ 0x1800ADAF0 (RtlEmptyAtomTable.c)
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x1800ADB9C (MicrosoftTelemetryAssertTriggeredWorker.c)
 *     RtlDeleteAtomFromAtomTable @ 0x1800AE4B0 (RtlDeleteAtomFromAtomTable.c)
 *     RtlAddAtomToAtomTableEx @ 0x1800AE554 (RtlAddAtomToAtomTableEx.c)
 *     RtlpHpTagContextAllocateTag @ 0x1800B79F0 (RtlpHpTagContextAllocateTag.c)
 *     RtlpFlsAlloc @ 0x1800B90E8 (RtlpFlsAlloc.c)
 *     RtlFlsSetValue @ 0x1800B9320 (RtlFlsSetValue.c)
 *     RtlpFlsSetValue @ 0x1800B94B0 (RtlpFlsSetValue.c)
 *     RtlpGetNormalization @ 0x1800BC244 (RtlpGetNormalization.c)
 *     RtlSetIoCompletionCallback @ 0x1800BEDD0 (RtlSetIoCompletionCallback.c)
 *     RtlpTpIoLookup @ 0x1800BEF1C (RtlpTpIoLookup.c)
 *     RtlpTpIoDllLoaded @ 0x1800BF9D8 (RtlpTpIoDllLoaded.c)
 *     RtlpFcUpdateLocalConfiguration @ 0x1800D6550 (RtlpFcUpdateLocalConfiguration.c)
 *     LdrpLoadContextReplaceModule @ 0x1800D6BB8 (LdrpLoadContextReplaceModule.c)
 *     AlpcGetMessageFromCompletionList @ 0x1800DBC70 (AlpcGetMessageFromCompletionList.c)
 *     LdrGetDllDirectory @ 0x1800DBFF0 (LdrGetDllDirectory.c)
 *     TpReleasePool @ 0x1800DEB80 (TpReleasePool.c)
 *     TppPoolpFree @ 0x1800DEE44 (TppPoolpFree.c)
 *     TppQueueRemoveHead @ 0x1800DEFA0 (TppQueueRemoveHead.c)
 *     RtlpHpStackTraceAllocAdd @ 0x1800DF434 (RtlpHpStackTraceAllocAdd.c)
 *     LdrpBuildForwarderLink @ 0x1800DF720 (LdrpBuildForwarderLink.c)
 *     RtlpHpVsContextGrowInPlace @ 0x1800DF8F4 (RtlpHpVsContextGrowInPlace.c)
 *     RtlInstallFunctionTableCallback @ 0x1800E0D10 (RtlInstallFunctionTableCallback.c)
 *     TpStartAsyncIoOperation @ 0x1800E67A0 (TpStartAsyncIoOperation.c)
 *     RtlDeleteFunctionTable @ 0x1800E74E0 (RtlDeleteFunctionTable.c)
 *     RtlDeleteGrowableFunctionTable @ 0x1800E76F0 (RtlDeleteGrowableFunctionTable.c)
 *     EtwpSetProviderTraits @ 0x1800E8690 (EtwpSetProviderTraits.c)
 *     RtlpHpLfhPrivateSlotListCompact @ 0x1800E8930 (RtlpHpLfhPrivateSlotListCompact.c)
 *     LdrpCondenseGraphRecurse @ 0x1800EA410 (LdrpCondenseGraphRecurse.c)
 *     RtlpLowFragHeapAllocateFromZone @ 0x1800EA9C0 (RtlpLowFragHeapAllocateFromZone.c)
 *     RtlpTpWaitCheckReset @ 0x1800EB900 (RtlpTpWaitCheckReset.c)
 *     LdrpCleanupThreadTlsData @ 0x1800EC734 (LdrpCleanupThreadTlsData.c)
 *     RtlpHpVsContextAllocate @ 0x1800ED0DC (RtlpHpVsContextAllocate.c)
 *     RtlReleasePath @ 0x1800EDC80 (RtlReleasePath.c)
 *     TpSetDefaultPoolMaxThreads @ 0x1800EDE60 (TpSetDefaultPoolMaxThreads.c)
 *     TpSetDefaultPoolStackInformation @ 0x1800EDFB0 (TpSetDefaultPoolStackInformation.c)
 *     LdrUpdatePackageSearchPath @ 0x1800EE180 (LdrUpdatePackageSearchPath.c)
 *     LdrpResetAppPackagesPath @ 0x1800EE27C (LdrpResetAppPackagesPath.c)
 *     RtlpRemoveVectoredHandler @ 0x1800EF340 (RtlpRemoveVectoredHandler.c)
 *     TppPoolAddWorker @ 0x1800F07D8 (TppPoolAddWorker.c)
 *     EtwpRegisterGuidsApiCallback @ 0x1800F1524 (EtwpRegisterGuidsApiCallback.c)
 *     RtlAddFunctionTable @ 0x1800F1F70 (RtlAddFunctionTable.c)
 *     RtlpHpCustomVaCallbacksRegistrarRegister @ 0x1800F23FC (RtlpHpCustomVaCallbacksRegistrarRegister.c)
 *     RtlSetSearchPathMode @ 0x1800F2DE0 (RtlSetSearchPathMode.c)
 *     TppPoolRemoveWorker @ 0x1800F3110 (TppPoolRemoveWorker.c)
 *     TppPoolUpdateTrimmedWorker @ 0x1800F3DB4 (TppPoolUpdateTrimmedWorker.c)
 *     LdrpInsertModuleToIndex @ 0x1800F4C10 (LdrpInsertModuleToIndex.c)
 *     LdrpQueueDeferredTlsData @ 0x1800F5160 (LdrpQueueDeferredTlsData.c)
 *     TpTrimPools @ 0x1800F57E0 (TpTrimPools.c)
 *     RtlpFcRemoveChangeRegistration @ 0x1800F7AF0 (RtlpFcRemoveChangeRegistration.c)
 *     RtlExtendMemoryZone @ 0x1800F7EE0 (RtlExtendMemoryZone.c)
 *     RtlGrowFunctionTable @ 0x1800F9570 (RtlGrowFunctionTable.c)
 *     LdrpAllocateSchedulerSharedData @ 0x1800F9A50 (LdrpAllocateSchedulerSharedData.c)
 *     RtlSetProtectedPolicy @ 0x1800F9EC0 (RtlSetProtectedPolicy.c)
 *     RtlpHeapTrkTrackRemoveHeap @ 0x1800FB208 (RtlpHeapTrkTrackRemoveHeap.c)
 *     RtlpHpStackTraceHeapEnable @ 0x180106F70 (RtlpHpStackTraceHeapEnable.c)
 *     RtlpFcChangeRegistrationCallback @ 0x180107430 (RtlpFcChangeRegistrationCallback.c)
 *     EtwpDereferenceUmGuidEntry @ 0x18010ABC0 (EtwpDereferenceUmGuidEntry.c)
 *     EtwpInsertGuidEntry @ 0x18010C374 (EtwpInsertGuidEntry.c)
 *     LdrAddDllDirectory @ 0x18010C9F0 (LdrAddDllDirectory.c)
 *     RtlpTpIoDllUnloaded @ 0x18010CEAC (RtlpTpIoDllUnloaded.c)
 *     RtlpHeapTrkDumpStacks @ 0x18010DCB4 (RtlpHeapTrkDumpStacks.c)
 *     LdrFlushAlternateResourceModules @ 0x18010DE50 (LdrFlushAlternateResourceModules.c)
 *     TpDisablePoolCallbackChecks @ 0x18010E9E0 (TpDisablePoolCallbackChecks.c)
 *     TppStopWaitCallbackGeneration @ 0x180110540 (TppStopWaitCallbackGeneration.c)
 *     LdrRemoveDllDirectory @ 0x180110AF0 (LdrRemoveDllDirectory.c)
 *     LdrpCheckComponentOnDemandEtwEvent @ 0x180111934 (LdrpCheckComponentOnDemandEtwEvent.c)
 *     RtlpWnfRetryTimerCallback @ 0x180113BB0 (RtlpWnfRetryTimerCallback.c)
 *     RtlDestroyAtomTable @ 0x180114540 (RtlDestroyAtomTable.c)
 *     RtlpHpSegMgrCommitInitiate @ 0x1801162E4 (RtlpHpSegMgrCommitInitiate.c)
 *     RtlpHpSegMgrCommitComplete @ 0x180117B98 (RtlpHpSegMgrCommitComplete.c)
 *     RtlQueryAtomInAtomTable @ 0x1801191C0 (RtlQueryAtomInAtomTable.c)
 *     EtwpTrackProviderBinary @ 0x18011A13C (EtwpTrackProviderBinary.c)
 *     RtlpHpVsSlotAllocate @ 0x18011B120 (RtlpHpVsSlotAllocate.c)
 *     RtlpHpVsSlotFreeList @ 0x18011B418 (RtlpHpVsSlotFreeList.c)
 *     RtlpHpVsSlotCompactChunks @ 0x18011B6CC (RtlpHpVsSlotCompactChunks.c)
 *     RtlpHpVsContextLockUnlock @ 0x18011C3B8 (RtlpHpVsContextLockUnlock.c)
 *     RtlStackDbStackAdd @ 0x18011DD88 (RtlStackDbStackAdd.c)
 *     RtlStackDbStackRemove @ 0x18011E5D8 (RtlStackDbStackRemove.c)
 *     TpSetDefaultPoolCpuSets @ 0x18011EF8C (TpSetDefaultPoolCpuSets.c)
 *     RtlpHpStackTraceEnable @ 0x18011FBE4 (RtlpHpStackTraceEnable.c)
 *     LdrForkMrdata @ 0x180131D0C (LdrForkMrdata.c)
 *     RtlPinAtomInAtomTable @ 0x18013C0C0 (RtlPinAtomInAtomTable.c)
 *     RtlResetMemoryBlockLookaside @ 0x18013C1A0 (RtlResetMemoryBlockLookaside.c)
 *     RtlResetMemoryZone @ 0x18013C200 (RtlResetMemoryZone.c)
 *     RtlDeleteBarrier @ 0x18013DED0 (RtlDeleteBarrier.c)
 *     RtlpUnlockHeapForClone @ 0x180142C0C (RtlpUnlockHeapForClone.c)
 *     RtlCompareExchangePointerMapping @ 0x180142ED0 (RtlCompareExchangePointerMapping.c)
 *     RtlCompareExchangePropertyStore @ 0x180143020 (RtlCompareExchangePropertyStore.c)
 *     RtlRemovePointerMapping @ 0x1801433A0 (RtlRemovePointerMapping.c)
 *     RtlRemovePropertyStore @ 0x180143480 (RtlRemovePropertyStore.c)
 *     RtlDeregisterSecureMemoryCacheCallback @ 0x1801448B0 (RtlDeregisterSecureMemoryCacheCallback.c)
 *     RtlRegisterSecureMemoryCacheCallback @ 0x180144970 (RtlRegisterSecureMemoryCacheCallback.c)
 *     RtlGetFeatureToggleConfiguration @ 0x180145CB0 (RtlGetFeatureToggleConfiguration.c)
 *     __ft_record_impression @ 0x180146544 (__ft_record_impression.c)
 *     RtlpFeatureConfigurationCloneComplete @ 0x180147470 (RtlpFeatureConfigurationCloneComplete.c)
 *     RtlRcuAllocate @ 0x180147B30 (RtlRcuAllocate.c)
 *     RtlRcuFree @ 0x180147C00 (RtlRcuFree.c)
 *     RtlpFlsCloneComplete @ 0x18014B618 (RtlpFlsCloneComplete.c)
 *     RtlpFlsClonePrepare @ 0x18014B6AC (RtlpFlsClonePrepare.c)
 *     RtlpHpStackTraceAllocRemove @ 0x18014BBE4 (RtlpHpStackTraceAllocRemove.c)
 *     RtlpHpStackTraceDisable @ 0x18014BD40 (RtlpHpStackTraceDisable.c)
 *     UcOnUnexpectedCodePath @ 0x180157500 (UcOnUnexpectedCodePath.c)
 *     RtlpHpCustomVaCallbacksRegistrarUnregister @ 0x180157C64 (RtlpHpCustomVaCallbacksRegistrarUnregister.c)
 *     RtlpHpSegMgrVaCtxFree @ 0x180158240 (RtlpHpSegMgrVaCtxFree.c)
 *     RtlpHpSegMgrVaCtxInsert @ 0x180158390 (RtlpHpSegMgrVaCtxInsert.c)
 *     TppDirectUnposted @ 0x18015C590 (TppDirectUnposted.c)
 *     RtlStackDbContextSerialize @ 0x18015D588 (RtlStackDbContextSerialize.c)
 *     RtlpStackDbSegmentFindOrCreate @ 0x18015DBBC (RtlpStackDbSegmentFindOrCreate.c)
 *     RtlpStackDbSegmentRemoveRef @ 0x18015E1A4 (RtlpStackDbSegmentRemoveRef.c)
 *     RtlpSignalSystemDirsModification @ 0x18015E5B4 (RtlpSignalSystemDirsModification.c)
 *     LdrQueryModuleServiceTags @ 0x18015E8B0 (LdrQueryModuleServiceTags.c)
 *     RtlCloneUserProcess @ 0x18015F270 (RtlCloneUserProcess.c)
 *     RtlCompleteProcessCloning @ 0x18015F580 (RtlCompleteProcessCloning.c)
 *     RtlPrepareForProcessCloning @ 0x18015F730 (RtlPrepareForProcessCloning.c)
 *     LdrpUnlockTlsDelayedReclaimTable @ 0x18015FB08 (LdrpUnlockTlsDelayedReclaimTable.c)
 * Callees:
 *     NtSetInformationThread @ 0x180161E30 (NtSetInformationThread.c)
 *     ZwAlertThreadByThreadIdEx @ 0x180162AC0 (ZwAlertThreadByThreadIdEx.c)
 */

__int64 __fastcall RtlReleaseSRWLockExclusive(volatile signed __int64 *a1)
{
  signed __int64 v2; // rax
  __int64 result; // rax
  __int64 v4; // rdx
  __int64 v5; // rdi
  _BYTE *v6; // rbx
  __int64 v7; // rdx
  signed __int64 v8; // rcx
  signed __int64 v9; // rdx
  signed __int64 v10; // rtt
  volatile signed __int64 *v11; // rsi
  unsigned __int64 v12; // r9
  _QWORD *v13; // r8
  __int64 v14; // rcx
  __int64 v15; // rax
  bool v16; // zf
  signed __int64 v17; // rax
  __int64 v18; // rbx
  __int64 v19; // rax
  signed __int64 v20; // rax
  _QWORD *v21; // rax
  _QWORD v22[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = _InterlockedCompareExchange64(a1, 0LL, 1LL);
  if ( v2 != 1 )
  {
    do
    {
      v7 = 3LL;
      v8 = v2 & 6;
      if ( v8 != 2 )
        v7 = -1LL;
      v9 = v2 + v7;
      v10 = v2;
      v2 = _InterlockedCompareExchange64(a1, v9, v2);
    }
    while ( v10 != v2 );
    if ( v8 == 2 )
    {
      v11 = a1;
      while ( 1 )
      {
        while ( (v9 & 1) != 0 )
        {
          v20 = _InterlockedCompareExchange64(a1, v9 - 4, v9);
          v16 = v9 == v20;
          v9 = v20;
          if ( v16 )
            goto LABEL_2;
        }
        v12 = v9 & 0xFFFFFFFFFFFFFFF0uLL;
        v13 = (_QWORD *)(v9 & 0xFFFFFFFFFFFFFFF0uLL);
        v14 = *(_QWORD *)((v9 & 0xFFFFFFFFFFFFFFF0uLL) + 8);
        if ( !v14 )
        {
          do
          {
            v21 = v13;
            v13 = (_QWORD *)*v13;
            v13[2] = v21;
            v14 = v13[1];
          }
          while ( !v14 );
          if ( v13 != (_QWORD *)v12 )
            *(_QWORD *)((v9 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v14;
        }
        if ( (*(_DWORD *)(v14 + 36) & 1) != 0 )
        {
          v15 = *(_QWORD *)(v14 + 16);
          if ( v15 )
            break;
        }
        v11 = 0LL;
        v17 = _InterlockedCompareExchange64(a1, 0LL, v9);
        v16 = v9 == v17;
        v9 = v17;
        if ( v16 )
          goto LABEL_21;
      }
      *(_QWORD *)((v9 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v15;
      *(_QWORD *)(v14 + 16) = 0LL;
      _InterlockedAnd64(a1, 0xFFFFFFFFFFFFFFFBuLL);
      do
      {
LABEL_21:
        v18 = *(_QWORD *)(v14 + 16);
        v19 = *(_QWORD *)(v14 + 24);
        _interlockedbittestandset((volatile signed __int32 *)(v14 + 36), 2u);
        if ( !_interlockedbittestandreset((volatile signed __int32 *)(v14 + 36), 1u) )
          ZwAlertThreadByThreadIdEx(v19, v11, v13, v12);
        v14 = v18;
      }
      while ( v18 );
    }
  }
LABEL_2:
  result = (__int64)NtCurrentTeb();
  v4 = *(_QWORD *)(result + 6224);
  if ( v4 )
  {
    result = 0LL;
    v5 = (unsigned __int64)a1 & 0x7FFFFFFFFFFFFFFCLL;
    while ( (unsigned int)result < 8 )
    {
      v6 = (_BYTE *)(v4 + 8LL * (unsigned int)result);
      if ( (*(_QWORD *)v6 & 0x7FFFFFFFFFFFFFFCLL) == v5 )
      {
        if ( v6 )
        {
          *v6 |= 2u;
          if ( (char)v6[7] < 0 )
          {
            v22[1] = 0LL;
            v22[0] = (v6 - (char *)NtCurrentTeb()->SchedulerSharedDataSlot) >> 3;
            result = NtSetInformationThread(-2LL, 56LL, v22);
          }
          *(_QWORD *)v6 = 0LL;
        }
        return result;
      }
      result = (unsigned int)(result + 1);
    }
  }
  return result;
}
