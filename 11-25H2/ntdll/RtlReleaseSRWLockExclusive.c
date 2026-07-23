/*
 * XREFs of RtlReleaseSRWLockExclusive @ 0x1800123F0
 * Callers:
 *     RtlpCreateSerializationGroup @ 0x180002FE0 (RtlpCreateSerializationGroup.c)
 *     RtlpFcInsertChangeRegistration @ 0x180003314 (RtlpFcInsertChangeRegistration.c)
 *     RtlpRemoveUserSubFromNameSub @ 0x1800049F8 (RtlpRemoveUserSubFromNameSub.c)
 *     RtlpDecrementWnfSerializationGroup @ 0x180004CA4 (RtlpDecrementWnfSerializationGroup.c)
 *     RtlpDereferenceWnfNameSubscription @ 0x180004D50 (RtlpDereferenceWnfNameSubscription.c)
 *     RtlpCreateWnfNameSubscription @ 0x1800050BC (RtlpCreateWnfNameSubscription.c)
 *     RtlpAddWnfUserSubToNameSub @ 0x1800052E0 (RtlpAddWnfUserSubToNameSub.c)
 *     RtlpCSparseBitmapPageDecommit @ 0x180005620 (RtlpCSparseBitmapPageDecommit.c)
 *     RtlInitializeResource @ 0x1800059E0 (RtlInitializeResource.c)
 *     RtlpAddDebugInfoToCriticalSection @ 0x180006550 (RtlpAddDebugInfoToCriticalSection.c)
 *     LdrGetProcedureAddressForCaller @ 0x180007BE0 (LdrGetProcedureAddressForCaller.c)
 *     LdrpReleaseTlsEntry @ 0x180008C0C (LdrpReleaseTlsEntry.c)
 *     RtlpFlsAlloc @ 0x1800097F8 (RtlpFlsAlloc.c)
 *     RtlpHpLfhContextMetadataFree @ 0x180009A2C (RtlpHpLfhContextMetadataFree.c)
 *     RtlpHpLfhContextMetadataAllocate @ 0x180009AA4 (RtlpHpLfhContextMetadataAllocate.c)
 *     RtlpHpLargeFree @ 0x180009DDC (RtlpHpLargeFree.c)
 *     RtlFlsSetValue @ 0x18000A450 (RtlFlsSetValue.c)
 *     RtlpFlsSetValue @ 0x18000A5E0 (RtlpFlsSetValue.c)
 *     RtlpFlsDataCleanup @ 0x18000A8B0 (RtlpFlsDataCleanup.c)
 *     RtlpHpVsSubsegmentCommitPages @ 0x18000ADD8 (RtlpHpVsSubsegmentCommitPages.c)
 *     RtlpHpLfhOwnerCompact @ 0x18000C2E0 (RtlpHpLfhOwnerCompact.c)
 *     RtlpHpSegPageRangeAllocate @ 0x18000D260 (RtlpHpSegPageRangeAllocate.c)
 *     RtlpHpSegContextCompact @ 0x18000D570 (RtlpHpSegContextCompact.c)
 *     RtlpHpVsChunkSplit @ 0x18000E810 (RtlpHpVsChunkSplit.c)
 *     RtlpHpVsChunkFree @ 0x18000F800 (RtlpHpVsChunkFree.c)
 *     RtlpHpSegPageRangeCoalesce @ 0x180010710 (RtlpHpSegPageRangeCoalesce.c)
 *     TppWorkPost @ 0x180011780 (TppWorkPost.c)
 *     RtlpHpLfhSubsegmentIncBlockCounts @ 0x180011CC0 (RtlpHpLfhSubsegmentIncBlockCounts.c)
 *     RtlpHpLfhSubsegmentCommitBlock @ 0x180011FD0 (RtlpHpLfhSubsegmentCommitBlock.c)
 *     LdrpResolveProcedureAddress @ 0x180013B70 (LdrpResolveProcedureAddress.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x18001AD80 (LdrpSetAlternateResourceModuleHandle.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x18001D460 (LdrUnloadAlternateResourceModuleEx.c)
 *     LdrpQueueDeferredTlsData @ 0x18002064C (LdrpQueueDeferredTlsData.c)
 *     LdrProtectMrdata @ 0x180020A50 (LdrProtectMrdata.c)
 *     RtlInsertInvertedFunctionTable @ 0x180020C04 (RtlInsertInvertedFunctionTable.c)
 *     LdrpHandleTlsData @ 0x180021A20 (LdrpHandleTlsData.c)
 *     LdrpWriteBackProtectedDelayLoad @ 0x180023540 (LdrpWriteBackProtectedDelayLoad.c)
 *     LdrEnsureMrdataHeapExists @ 0x1800240BC (LdrEnsureMrdataHeapExists.c)
 *     RtlAddGrowableFunctionTable @ 0x180024410 (RtlAddGrowableFunctionTable.c)
 *     RtlRemoveInvertedFunctionTable @ 0x180024A98 (RtlRemoveInvertedFunctionTable.c)
 *     RtlpAddVectoredHandler @ 0x180024C88 (RtlpAddVectoredHandler.c)
 *     RtlpStdLockRelease @ 0x180025A98 (RtlpStdLockRelease.c)
 *     RtlpHpVsContextGrowInPlace @ 0x18002D3B8 (RtlpHpVsContextGrowInPlace.c)
 *     RtlpHpVsContextAllocate @ 0x18002DD2C (RtlpHpVsContextAllocate.c)
 *     RtlpHpTagContextAllocateTag @ 0x18002DE84 (RtlpHpTagContextAllocateTag.c)
 *     RtlpHpLfhSlotAllocateSlow @ 0x180030120 (RtlpHpLfhSlotAllocateSlow.c)
 *     RtlpHpLfhSubsegmentDecommitPages @ 0x180031FA0 (RtlpHpLfhSubsegmentDecommitPages.c)
 *     RtlpHpLfhBucketGetSubsegment @ 0x180032EB0 (RtlpHpLfhBucketGetSubsegment.c)
 *     RtlpHpLfhBucketAddSubsegment @ 0x180033290 (RtlpHpLfhBucketAddSubsegment.c)
 *     RtlpHpLfhPrivateSlotShutdown @ 0x1800334C4 (RtlpHpLfhPrivateSlotShutdown.c)
 *     RtlpHpLfhPrivateSlotListCompact @ 0x180033990 (RtlpHpLfhPrivateSlotListCompact.c)
 *     RtlpHpHeapExtendContext @ 0x180033D4C (RtlpHpHeapExtendContext.c)
 *     RtlAcquireReleaseSRWLockExclusive @ 0x180033EB0 (RtlAcquireReleaseSRWLockExclusive.c)
 *     RtlpCreateHeap @ 0x180036390 (RtlpCreateHeap.c)
 *     TpAllocPoolInternal @ 0x18003A970 (TpAllocPoolInternal.c)
 *     TpSetPoolThreadCpuSets @ 0x18003B1A0 (TpSetPoolThreadCpuSets.c)
 *     RtlDeleteTimer @ 0x18003B680 (RtlDeleteTimer.c)
 *     TpTimerOutstandingCallbackCount @ 0x18003B860 (TpTimerOutstandingCallbackCount.c)
 *     RtlCreateTimer @ 0x18003B9A0 (RtlCreateTimer.c)
 *     TppDirectExecuteCallback @ 0x18003BD60 (TppDirectExecuteCallback.c)
 *     RtlRegisterWait @ 0x18003C400 (RtlRegisterWait.c)
 *     RtlDeregisterWaitEx @ 0x18003C7B0 (RtlDeregisterWaitEx.c)
 *     TpReleaseWait @ 0x18003C9C0 (TpReleaseWait.c)
 *     TpWaitOutstandingCallbackCount @ 0x18003CC0C (TpWaitOutstandingCallbackCount.c)
 *     TpAllocWait @ 0x18003CCE0 (TpAllocWait.c)
 *     TpWaitForWait @ 0x18003D030 (TpWaitForWait.c)
 *     TppGetCurrentThreadNumaNode @ 0x18003D250 (TppGetCurrentThreadNumaNode.c)
 *     TpPostTask @ 0x18003D360 (TpPostTask.c)
 *     TppPoolpDereferenceGlobalPool @ 0x18003DF80 (TppPoolpDereferenceGlobalPool.c)
 *     LdrpPinModule @ 0x18003E278 (LdrpPinModule.c)
 *     TpSetTimerEx @ 0x18003E670 (TpSetTimerEx.c)
 *     TppSetTimer @ 0x18003EB00 (TppSetTimer.c)
 *     TppTimerQueueExpiration @ 0x18003F290 (TppTimerQueueExpiration.c)
 *     TppSingleTimerExpiration @ 0x18003F720 (TppSingleTimerExpiration.c)
 *     TppCancelTimer @ 0x18003FCF0 (TppCancelTimer.c)
 *     TpWaitForTimer @ 0x18003FF90 (TpWaitForTimer.c)
 *     TpStartAsyncIoOperation @ 0x1800410C0 (TpStartAsyncIoOperation.c)
 *     TppWaitCompletion @ 0x180041270 (TppWaitCompletion.c)
 *     TpSetWaitEx @ 0x180041AF0 (TpSetWaitEx.c)
 *     RtlpWnfProcessCurrentDescriptor @ 0x180042680 (RtlpWnfProcessCurrentDescriptor.c)
 *     RtlpWnfWalkUserSubscriptionList @ 0x180042A00 (RtlpWnfWalkUserSubscriptionList.c)
 *     TppWorkCallbackPrologRelease @ 0x180043350 (TppWorkCallbackPrologRelease.c)
 *     TppCleanupGroupMemberDestroy @ 0x180043EC0 (TppCleanupGroupMemberDestroy.c)
 *     TppCleanupGroupRemoveMember @ 0x180044260 (TppCleanupGroupRemoveMember.c)
 *     EtwDeliverDataBlock @ 0x1800443B0 (EtwDeliverDataBlock.c)
 *     EtwpFindRegistration @ 0x1800448E0 (EtwpFindRegistration.c)
 *     EtwpUpdateEnableInfoAndCallback @ 0x180044BF0 (EtwpUpdateEnableInfoAndCallback.c)
 *     EtwpEventApiCallback @ 0x180044EB0 (EtwpEventApiCallback.c)
 *     EtwNotificationRegister @ 0x180045640 (EtwNotificationRegister.c)
 *     ProviderHandleInsert @ 0x180045860 (ProviderHandleInsert.c)
 *     EtwpInsertRegistration @ 0x180045AB0 (EtwpInsertRegistration.c)
 *     EtwpFindGuidEntry @ 0x180045DA0 (EtwpFindGuidEntry.c)
 *     EtwNotificationUnregister @ 0x180045F20 (EtwNotificationUnregister.c)
 *     ProviderHandleRemove @ 0x1800460B0 (ProviderHandleRemove.c)
 *     EtwpRemoveRegistrationFromTable @ 0x180046188 (EtwpRemoveRegistrationFromTable.c)
 *     LdrpDecrementModuleLoadCountEx @ 0x180046370 (LdrpDecrementModuleLoadCountEx.c)
 *     LdrpUnloadNode @ 0x1800465A0 (LdrpUnloadNode.c)
 *     TppCleanupGroupAddMember @ 0x1800469E0 (TppCleanupGroupAddMember.c)
 *     LdrUnloadDll @ 0x1800475F0 (LdrUnloadDll.c)
 *     LdrpFastpthReloadedDll @ 0x180047890 (LdrpFastpthReloadedDll.c)
 *     TppWorkInitialize @ 0x180047FD0 (TppWorkInitialize.c)
 *     TppCleanupGroupMemberInitialize @ 0x180048150 (TppCleanupGroupMemberInitialize.c)
 *     LdrpDereferenceModule @ 0x180048C70 (LdrpDereferenceModule.c)
 *     TppPoolpReferenceGlobalPool @ 0x180048D80 (TppPoolpReferenceGlobalPool.c)
 *     LdrpReleaseDllPath @ 0x180049A60 (LdrpReleaseDllPath.c)
 *     LdrpMapAndSnapDependency @ 0x18004B770 (LdrpMapAndSnapDependency.c)
 *     LdrpLoadDependentModuleInternal @ 0x18004C180 (LdrpLoadDependentModuleInternal.c)
 *     LdrpFindOrPrepareLoadingModule @ 0x18004E920 (LdrpFindOrPrepareLoadingModule.c)
 *     RtlLookupAtomInAtomTable @ 0x18005BC50 (RtlLookupAtomInAtomTable.c)
 *     RtlEmptyAtomTable @ 0x1800671D0 (RtlEmptyAtomTable.c)
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x18006727C (MicrosoftTelemetryAssertTriggeredWorker.c)
 *     RtlQueryAtomInAtomTable @ 0x180067B90 (RtlQueryAtomInAtomTable.c)
 *     RtlDeleteAtomFromAtomTable @ 0x180067DA0 (RtlDeleteAtomFromAtomTable.c)
 *     RtlAddAtomToAtomTableEx @ 0x180067E44 (RtlAddAtomToAtomTableEx.c)
 *     LdrpLoadKnownDll @ 0x18006CF10 (LdrpLoadKnownDll.c)
 *     LdrpMapDllWithSectionHandle @ 0x18006D3E0 (LdrpMapDllWithSectionHandle.c)
 *     LdrpProcessMappedModule @ 0x18006DF80 (LdrpProcessMappedModule.c)
 *     LdrpLoadContextReplaceModule @ 0x18006F2DC (LdrpLoadContextReplaceModule.c)
 *     LdrpMapDllSearchPath @ 0x18006FE50 (LdrpMapDllSearchPath.c)
 *     SbUpdateSwitchContextBasedOnDll @ 0x1800719D0 (SbUpdateSwitchContextBasedOnDll.c)
 *     RtlpCallVectoredHandlers @ 0x180075B30 (RtlpCallVectoredHandlers.c)
 *     RtlpEnterCriticalSectionContended @ 0x18007C690 (RtlpEnterCriticalSectionContended.c)
 *     TppWorkerFindTask @ 0x18007D4E0 (TppWorkerFindTask.c)
 *     TppWorkerThread @ 0x18007DCB0 (TppWorkerThread.c)
 *     TppCallbackEpilog @ 0x18007ECC0 (TppCallbackEpilog.c)
 *     TppPrepareDirectParams @ 0x18007F750 (TppPrepareDirectParams.c)
 *     TppAlpcpExecuteCallback @ 0x18007FCA0 (TppAlpcpExecuteCallback.c)
 *     RtlpHeapTrkTrackStack @ 0x18008FEF0 (RtlpHeapTrkTrackStack.c)
 *     RtlpHeapTrkTrackAdd @ 0x1800901E0 (RtlpHeapTrkTrackAdd.c)
 *     RtlpHeapTrkTrackRemove @ 0x1800902C0 (RtlpHeapTrkTrackRemove.c)
 *     RtlpHeapTrkInterceptor @ 0x180090400 (RtlpHeapTrkInterceptor.c)
 *     RtlpHeapTrkDereferenceStack @ 0x1800907E0 (RtlpHeapTrkDereferenceStack.c)
 *     RtlpHeapTrkFindStack @ 0x1800923B0 (RtlpHeapTrkFindStack.c)
 *     RtlpHeapTrkDumpOutstandingAllocs @ 0x180092DD0 (RtlpHeapTrkDumpOutstandingAllocs.c)
 *     RtlpReleaseDescriptorPseudoGlobalLock @ 0x180093A38 (RtlpReleaseDescriptorPseudoGlobalLock.c)
 *     RtlpHpUnlockHeapForProcessCloneOrTerminate @ 0x180095CA0 (RtlpHpUnlockHeapForProcessCloneOrTerminate.c)
 *     RtlpWalkLFHBlock @ 0x18009D1E0 (RtlpWalkLFHBlock.c)
 *     RtlpIsLFHZoneAllocation @ 0x18009DA90 (RtlpIsLFHZoneAllocation.c)
 *     AlpcGetMessageFromCompletionList @ 0x18009EBE0 (AlpcGetMessageFromCompletionList.c)
 *     TppQueueRemoveHead @ 0x18009ED70 (TppQueueRemoveHead.c)
 *     LdrpBuildForwarderLink @ 0x18009EEC0 (LdrpBuildForwarderLink.c)
 *     RtlpFcUpdateLocalConfiguration @ 0x18009F820 (RtlpFcUpdateLocalConfiguration.c)
 *     TppPoolUpdateTrimmedWorker @ 0x1800A00DC (TppPoolUpdateTrimmedWorker.c)
 *     TpReleasePool @ 0x1800A06E0 (TpReleasePool.c)
 *     TppPoolpFree @ 0x1800A09A4 (TppPoolpFree.c)
 *     LdrpComputeLazyDllPath @ 0x1800AC120 (LdrpComputeLazyDllPath.c)
 *     RtlpGetCachedPath @ 0x1800AC640 (RtlpGetCachedPath.c)
 *     EtwProcessPrivateLoggerRequest @ 0x1800B5320 (EtwProcessPrivateLoggerRequest.c)
 *     RtlpHpLfhContextSlotStandbyProcess @ 0x1800B8200 (RtlpHpLfhContextSlotStandbyProcess.c)
 *     RtlpFlsFree @ 0x1800B84E4 (RtlpFlsFree.c)
 *     RtlpCallSecureMemoryCallbacks @ 0x1800B8EAC (RtlpCallSecureMemoryCallbacks.c)
 *     RtlpHpStackTraceHeapDestroy @ 0x1800B90C8 (RtlpHpStackTraceHeapDestroy.c)
 *     RtlDeleteCriticalSection @ 0x1800B9240 (RtlDeleteCriticalSection.c)
 *     RtlpHpVaMgrCtxAllocatorDereference @ 0x1800B9A2C (RtlpHpVaMgrCtxAllocatorDereference.c)
 *     RtlpHpVaMgrCtxAllocatorReference @ 0x1800BA0E8 (RtlpHpVaMgrCtxAllocatorReference.c)
 *     RtlCSparseBitmapBitmaskWrite @ 0x1800BA6D0 (RtlCSparseBitmapBitmaskWrite.c)
 *     RtlSparseArrayElementAllocate @ 0x1800BA7B4 (RtlSparseArrayElementAllocate.c)
 *     RtlpHpSegMgrVaCtxAlloc @ 0x1800BAC1C (RtlpHpSegMgrVaCtxAlloc.c)
 *     RtlpHpVaMgrCtxFree @ 0x1800BBA80 (RtlpHpVaMgrCtxFree.c)
 *     RtlpCSparseBitmapUnlock @ 0x1800BBE80 (RtlpCSparseBitmapUnlock.c)
 *     RtlpHpVaMgrAlloc @ 0x1800BC0F8 (RtlpHpVaMgrAlloc.c)
 *     RtlpHpLargeReAlloc @ 0x1800BCCC4 (RtlpHpLargeReAlloc.c)
 *     RtlpHpLargeAlloc @ 0x1800BD0E4 (RtlpHpLargeAlloc.c)
 *     RtlpGetNormalization @ 0x1800C12A4 (RtlpGetNormalization.c)
 *     RtlSetIoCompletionCallback @ 0x1800C3CB0 (RtlSetIoCompletionCallback.c)
 *     RtlpTpIoLookup @ 0x1800C3DFC (RtlpTpIoLookup.c)
 *     RtlpTpIoDllLoaded @ 0x1800C3F68 (RtlpTpIoDllLoaded.c)
 *     LdrpInitializeProcess @ 0x1800D29F4 (LdrpInitializeProcess.c)
 *     TpReleaseCleanupGroupMembers @ 0x1800D6600 (TpReleaseCleanupGroupMembers.c)
 *     TppJobpRundownJob @ 0x1800D6F9C (TppJobpRundownJob.c)
 *     LdrGetDllDirectory @ 0x1800DB560 (LdrGetDllDirectory.c)
 *     RtlpHpStackTraceAllocAdd @ 0x1800DCF34 (RtlpHpStackTraceAllocAdd.c)
 *     RtlInstallFunctionTableCallback @ 0x1800DE0B0 (RtlInstallFunctionTableCallback.c)
 *     EtwpDisableTraceProviders @ 0x1800E6278 (EtwpDisableTraceProviders.c)
 *     EtwpGetNextRegistration @ 0x1800E63E0 (EtwpGetNextRegistration.c)
 *     RtlDeleteFunctionTable @ 0x1800E8C20 (RtlDeleteFunctionTable.c)
 *     RtlDeleteGrowableFunctionTable @ 0x1800E8E30 (RtlDeleteGrowableFunctionTable.c)
 *     EtwpSetProviderTraits @ 0x1800E9BD0 (EtwpSetProviderTraits.c)
 *     LdrpCondenseGraphRecurse @ 0x1800EB7D0 (LdrpCondenseGraphRecurse.c)
 *     RtlpLowFragHeapAllocateFromZone @ 0x1800EBE10 (RtlpLowFragHeapAllocateFromZone.c)
 *     RtlpTpWaitCheckReset @ 0x1800EC620 (RtlpTpWaitCheckReset.c)
 *     LdrpCleanupThreadTlsData @ 0x1800ECF14 (LdrpCleanupThreadTlsData.c)
 *     LdrpFindExistingModule @ 0x1800EDF7C (LdrpFindExistingModule.c)
 *     RtlReleasePath @ 0x1800EEB00 (RtlReleasePath.c)
 *     LdrUpdatePackageSearchPath @ 0x1800EEC60 (LdrUpdatePackageSearchPath.c)
 *     LdrpResetAppPackagesPath @ 0x1800EED5C (LdrpResetAppPackagesPath.c)
 *     RtlUnlockMemoryBlockLookaside @ 0x1800EFF60 (RtlUnlockMemoryBlockLookaside.c)
 *     RtlLockMemoryBlockLookaside @ 0x1800EFFC0 (RtlLockMemoryBlockLookaside.c)
 *     RtlLockMemoryZone @ 0x1800F0040 (RtlLockMemoryZone.c)
 *     RtlpRegisterLockedMemoryZone @ 0x1800F0158 (RtlpRegisterLockedMemoryZone.c)
 *     RtlpUnregisterLockedMemoryBlockLookaside @ 0x1800F01CC (RtlpUnregisterLockedMemoryBlockLookaside.c)
 *     RtlpRegisterLockedMemoryBlockLookaside @ 0x1800F0228 (RtlpRegisterLockedMemoryBlockLookaside.c)
 *     RtlUnlockModuleSection @ 0x1800F02C0 (RtlUnlockModuleSection.c)
 *     RtlLockModuleSection @ 0x1800F0370 (RtlLockModuleSection.c)
 *     RtlUnlockMemoryZone @ 0x1800F05F0 (RtlUnlockMemoryZone.c)
 *     RtlpUnregisterLockedMemoryZone @ 0x1800F068C (RtlpUnregisterLockedMemoryZone.c)
 *     RtlpRemoveVectoredHandler @ 0x1800F0A44 (RtlpRemoveVectoredHandler.c)
 *     TpSetDefaultPoolStackInformation @ 0x1800F0E10 (TpSetDefaultPoolStackInformation.c)
 *     TppPoolAddWorker @ 0x1800F2088 (TppPoolAddWorker.c)
 *     EtwpRegisterGuidsApiCallback @ 0x1800F3094 (EtwpRegisterGuidsApiCallback.c)
 *     RtlAddFunctionTable @ 0x1800F3AE0 (RtlAddFunctionTable.c)
 *     RtlpHpCustomVaCallbacksRegistrarRegister @ 0x1800F3F6C (RtlpHpCustomVaCallbacksRegistrarRegister.c)
 *     RtlSetSearchPathMode @ 0x1800F4950 (RtlSetSearchPathMode.c)
 *     TppPoolRemoveWorker @ 0x1800F4C80 (TppPoolRemoveWorker.c)
 *     RtlpHpLfhContextLockUnlock @ 0x1800F5658 (RtlpHpLfhContextLockUnlock.c)
 *     RtlpHpLfhOwnerLockUnlock @ 0x1800F571C (RtlpHpLfhOwnerLockUnlock.c)
 *     RtlpHpLfhOwnerListLockUnlock @ 0x1800F5810 (RtlpHpLfhOwnerListLockUnlock.c)
 *     LdrpInsertModuleToIndex @ 0x1800F67F0 (LdrpInsertModuleToIndex.c)
 *     TpTrimPools @ 0x1800F7360 (TpTrimPools.c)
 *     EtwpTrackProviderBinary @ 0x1800F8358 (EtwpTrackProviderBinary.c)
 *     RtlExtendMemoryZone @ 0x1800F9A70 (RtlExtendMemoryZone.c)
 *     RtlGrowFunctionTable @ 0x1800FB190 (RtlGrowFunctionTable.c)
 *     RtlpFcRemoveChangeRegistration @ 0x1800FB2C0 (RtlpFcRemoveChangeRegistration.c)
 *     LdrpAllocateSchedulerSharedData @ 0x1800FB7F0 (LdrpAllocateSchedulerSharedData.c)
 *     RtlUpdateTimer @ 0x1800FBA30 (RtlUpdateTimer.c)
 *     RtlSetProtectedPolicy @ 0x1800FBDC0 (RtlSetProtectedPolicy.c)
 *     RtlDeleteTimerQueueEx @ 0x1800FCFD0 (RtlDeleteTimerQueueEx.c)
 *     RtlpHeapTrkTrackRemoveHeap @ 0x1800FD438 (RtlpHeapTrkTrackRemoveHeap.c)
 *     RtlpHpStackTraceHeapEnable @ 0x180109880 (RtlpHpStackTraceHeapEnable.c)
 *     RtlpFcChangeRegistrationCallback @ 0x180109D40 (RtlpFcChangeRegistrationCallback.c)
 *     EtwpDereferenceUmGuidEntry @ 0x18010D324 (EtwpDereferenceUmGuidEntry.c)
 *     EtwpInsertGuidEntry @ 0x18010E48C (EtwpInsertGuidEntry.c)
 *     LdrAddDllDirectory @ 0x18010EA40 (LdrAddDllDirectory.c)
 *     RtlpTpIoDllUnloaded @ 0x18010F89C (RtlpTpIoDllUnloaded.c)
 *     RtlpHeapTrkDumpStacks @ 0x180110764 (RtlpHeapTrkDumpStacks.c)
 *     LdrFlushAlternateResourceModules @ 0x180110920 (LdrFlushAlternateResourceModules.c)
 *     TpDisablePoolCallbackChecks @ 0x1801114B0 (TpDisablePoolCallbackChecks.c)
 *     TpSetDefaultPoolMaxThreads @ 0x180111770 (TpSetDefaultPoolMaxThreads.c)
 *     TppStopWaitCallbackGeneration @ 0x180113310 (TppStopWaitCallbackGeneration.c)
 *     LdrRemoveDllDirectory @ 0x180113960 (LdrRemoveDllDirectory.c)
 *     RtlpHpLfhPrivateSlotCreate @ 0x180114104 (RtlpHpLfhPrivateSlotCreate.c)
 *     LdrpCheckComponentOnDemandEtwEvent @ 0x180114A34 (LdrpCheckComponentOnDemandEtwEvent.c)
 *     RtlpWnfRetryTimerCallback @ 0x180116B70 (RtlpWnfRetryTimerCallback.c)
 *     RtlDestroyAtomTable @ 0x1801174F0 (RtlDestroyAtomTable.c)
 *     RtlpHpSegMgrCommitInitiate @ 0x1801194D4 (RtlpHpSegMgrCommitInitiate.c)
 *     RtlpHpSegMgrCommitComplete @ 0x18011ADD8 (RtlpHpSegMgrCommitComplete.c)
 *     RtlpHpVsSlotAllocate @ 0x18011C9B8 (RtlpHpVsSlotAllocate.c)
 *     RtlpHpVsSlotFreeList @ 0x18011CCB0 (RtlpHpVsSlotFreeList.c)
 *     RtlpHpVsSlotCompactChunks @ 0x18011CF64 (RtlpHpVsSlotCompactChunks.c)
 *     RtlpHpVsContextLockUnlock @ 0x18011DC50 (RtlpHpVsContextLockUnlock.c)
 *     RtlStackDbStackAdd @ 0x18011F658 (RtlStackDbStackAdd.c)
 *     RtlStackDbStackRemove @ 0x18011FEA8 (RtlStackDbStackRemove.c)
 *     TpSetDefaultPoolCpuSets @ 0x18012085C (TpSetDefaultPoolCpuSets.c)
 *     RtlpHpStackTraceEnable @ 0x1801214B4 (RtlpHpStackTraceEnable.c)
 *     LdrForkMrdata @ 0x1801337EC (LdrForkMrdata.c)
 *     RtlPinAtomInAtomTable @ 0x18013D7F0 (RtlPinAtomInAtomTable.c)
 *     RtlResetMemoryBlockLookaside @ 0x18013D8D0 (RtlResetMemoryBlockLookaside.c)
 *     RtlResetMemoryZone @ 0x18013D930 (RtlResetMemoryZone.c)
 *     RtlDeleteBarrier @ 0x18013F600 (RtlDeleteBarrier.c)
 *     RtlpUnlockHeapForClone @ 0x1801442FC (RtlpUnlockHeapForClone.c)
 *     RtlCompareExchangePointerMapping @ 0x1801445C0 (RtlCompareExchangePointerMapping.c)
 *     RtlCompareExchangePropertyStore @ 0x180144710 (RtlCompareExchangePropertyStore.c)
 *     RtlRemovePointerMapping @ 0x180144A90 (RtlRemovePointerMapping.c)
 *     RtlRemovePropertyStore @ 0x180144B70 (RtlRemovePropertyStore.c)
 *     RtlDeregisterSecureMemoryCacheCallback @ 0x180145E20 (RtlDeregisterSecureMemoryCacheCallback.c)
 *     RtlRegisterSecureMemoryCacheCallback @ 0x180145EE0 (RtlRegisterSecureMemoryCacheCallback.c)
 *     RtlGetFeatureToggleConfiguration @ 0x180147260 (RtlGetFeatureToggleConfiguration.c)
 *     __ft_record_impression @ 0x180147AF4 (__ft_record_impression.c)
 *     RtlpFeatureConfigurationCloneComplete @ 0x180148A20 (RtlpFeatureConfigurationCloneComplete.c)
 *     RtlRcuAllocate @ 0x1801490E0 (RtlRcuAllocate.c)
 *     RtlRcuFree @ 0x1801491B0 (RtlRcuFree.c)
 *     RtlpFlsCloneComplete @ 0x18014CBC8 (RtlpFlsCloneComplete.c)
 *     RtlpFlsClonePrepare @ 0x18014CC5C (RtlpFlsClonePrepare.c)
 *     RtlpHpStackTraceAllocRemove @ 0x18014D194 (RtlpHpStackTraceAllocRemove.c)
 *     RtlpHpStackTraceDisable @ 0x18014D2F0 (RtlpHpStackTraceDisable.c)
 *     UcOnUnexpectedCodePath @ 0x180158AB0 (UcOnUnexpectedCodePath.c)
 *     RtlpHpCustomVaCallbacksRegistrarUnregister @ 0x180159214 (RtlpHpCustomVaCallbacksRegistrarUnregister.c)
 *     RtlpHpSegMgrVaCtxFree @ 0x1801597F0 (RtlpHpSegMgrVaCtxFree.c)
 *     RtlpHpSegMgrVaCtxInsert @ 0x180159940 (RtlpHpSegMgrVaCtxInsert.c)
 *     TppDirectUnposted @ 0x18015DAF0 (TppDirectUnposted.c)
 *     RtlStackDbContextSerialize @ 0x18015EA4C (RtlStackDbContextSerialize.c)
 *     RtlpStackDbSegmentFindOrCreate @ 0x18015F080 (RtlpStackDbSegmentFindOrCreate.c)
 *     RtlpStackDbSegmentRemoveRef @ 0x18015F668 (RtlpStackDbSegmentRemoveRef.c)
 *     RtlpSignalSystemDirsModification @ 0x18015FA74 (RtlpSignalSystemDirsModification.c)
 *     LdrQueryModuleServiceTags @ 0x18015FD70 (LdrQueryModuleServiceTags.c)
 *     RtlCloneUserProcess @ 0x180160780 (RtlCloneUserProcess.c)
 *     RtlCompleteProcessCloning @ 0x180160A90 (RtlCompleteProcessCloning.c)
 *     RtlPrepareForProcessCloning @ 0x180160C40 (RtlPrepareForProcessCloning.c)
 *     LdrpUnlockTlsDelayedReclaimTable @ 0x18016105C (LdrpUnlockTlsDelayedReclaimTable.c)
 * Callees:
 *     NtSetInformationThread @ 0x1801633C0 (NtSetInformationThread.c)
 *     ZwAlertThreadByThreadIdEx @ 0x180164050 (ZwAlertThreadByThreadIdEx.c)
 */

void __cdecl RtlReleaseSRWLockExclusive(PRTL_SRWLOCK SRWLock)
{
  signed __int64 v2; // rax
  char *SchedulerSharedDataSlot; // rdx
  unsigned int v4; // eax
  unsigned __int64 v5; // rdi
  char *v6; // rbx
  __int64 v7; // rdx
  signed __int64 v8; // rcx
  signed __int64 v9; // rdx
  signed __int64 v10; // rtt
  PRTL_SRWLOCK v11; // rsi
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
  _QWORD ThreadInformation[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = _InterlockedCompareExchange64((volatile signed __int64 *)SRWLock, 0LL, 1LL);
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
      v2 = _InterlockedCompareExchange64((volatile signed __int64 *)SRWLock, v9, v2);
    }
    while ( v10 != v2 );
    if ( v8 == 2 )
    {
      v11 = SRWLock;
      while ( 1 )
      {
        while ( (v9 & 1) != 0 )
        {
          v20 = _InterlockedCompareExchange64((volatile signed __int64 *)SRWLock, v9 - 4, v9);
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
        v17 = _InterlockedCompareExchange64((volatile signed __int64 *)SRWLock, 0LL, v9);
        v16 = v9 == v17;
        v9 = v17;
        if ( v16 )
          goto LABEL_21;
      }
      *(_QWORD *)((v9 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v15;
      *(_QWORD *)(v14 + 16) = 0LL;
      _InterlockedAnd64((volatile signed __int64 *)SRWLock, 0xFFFFFFFFFFFFFFFBuLL);
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
  SchedulerSharedDataSlot = (char *)NtCurrentTeb()->SchedulerSharedDataSlot;
  if ( SchedulerSharedDataSlot )
  {
    v4 = 0;
    v5 = (unsigned __int64)SRWLock & 0x7FFFFFFFFFFFFFFCLL;
    while ( v4 < 8 )
    {
      v6 = &SchedulerSharedDataSlot[8 * v4];
      if ( (*(_QWORD *)v6 & 0x7FFFFFFFFFFFFFFCLL) == v5 )
      {
        if ( v6 )
        {
          *v6 |= 2u;
          if ( v6[7] < 0 )
          {
            ThreadInformation[1] = 0LL;
            ThreadInformation[0] = (v6 - (char *)NtCurrentTeb()->SchedulerSharedDataSlot) >> 3;
            NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadUpdateLockOwnership, ThreadInformation, 0x10u);
          }
          *(_QWORD *)v6 = 0LL;
        }
        return;
      }
      ++v4;
    }
  }
}
