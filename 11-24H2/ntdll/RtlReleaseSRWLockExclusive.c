/*
 * XREFs of RtlReleaseSRWLockExclusive @ 0x18006C390
 * Callers:
 *     LdrpComputeLazyDllPath @ 0x180005C40 (LdrpComputeLazyDllPath.c)
 *     RtlpGetCachedPath @ 0x180006160 (RtlpGetCachedPath.c)
 *     RtlLookupAtomInAtomTable @ 0x180013A80 (RtlLookupAtomInAtomTable.c)
 *     RtlpHeapTrkTrackStack @ 0x18001C780 (RtlpHeapTrkTrackStack.c)
 *     RtlpHeapTrkTrackAdd @ 0x18001CA70 (RtlpHeapTrkTrackAdd.c)
 *     RtlpHeapTrkTrackRemove @ 0x18001CB50 (RtlpHeapTrkTrackRemove.c)
 *     RtlpHeapTrkInterceptor @ 0x18001CC90 (RtlpHeapTrkInterceptor.c)
 *     RtlpHeapTrkDereferenceStack @ 0x18001D070 (RtlpHeapTrkDereferenceStack.c)
 *     RtlpHeapTrkFindStack @ 0x18001EC40 (RtlpHeapTrkFindStack.c)
 *     RtlpHeapTrkDumpOutstandingAllocs @ 0x18001F660 (RtlpHeapTrkDumpOutstandingAllocs.c)
 *     RtlpReleaseDescriptorPseudoGlobalLock @ 0x180020978 (RtlpReleaseDescriptorPseudoGlobalLock.c)
 *     RtlpCreateHeap @ 0x1800248B0 (RtlpCreateHeap.c)
 *     RtlpFlsFree @ 0x180026B34 (RtlpFlsFree.c)
 *     RtlpRemoveVectoredHandler @ 0x180027330 (RtlpRemoveVectoredHandler.c)
 *     RtlDeleteCriticalSection @ 0x180027610 (RtlDeleteCriticalSection.c)
 *     RtlDeleteFunctionTable @ 0x1800277A0 (RtlDeleteFunctionTable.c)
 *     RtlDeleteGrowableFunctionTable @ 0x1800279B0 (RtlDeleteGrowableFunctionTable.c)
 *     RtlpHpStackTraceHeapDestroy @ 0x180027FC8 (RtlpHpStackTraceHeapDestroy.c)
 *     RtlpCallSecureMemoryCallbacks @ 0x18002866C (RtlpCallSecureMemoryCallbacks.c)
 *     RtlpCreateSerializationGroup @ 0x18002C7C0 (RtlpCreateSerializationGroup.c)
 *     RtlpFcInsertChangeRegistration @ 0x18002CAF4 (RtlpFcInsertChangeRegistration.c)
 *     RtlpRemoveUserSubFromNameSub @ 0x18002E1D8 (RtlpRemoveUserSubFromNameSub.c)
 *     RtlpDecrementWnfSerializationGroup @ 0x18002E484 (RtlpDecrementWnfSerializationGroup.c)
 *     RtlpDereferenceWnfNameSubscription @ 0x18002E530 (RtlpDereferenceWnfNameSubscription.c)
 *     RtlpCreateWnfNameSubscription @ 0x18002E89C (RtlpCreateWnfNameSubscription.c)
 *     RtlpAddWnfUserSubToNameSub @ 0x18002EAC0 (RtlpAddWnfUserSubToNameSub.c)
 *     RtlpCSparseBitmapPageDecommit @ 0x18002EE00 (RtlpCSparseBitmapPageDecommit.c)
 *     RtlInitializeResource @ 0x18002F1C0 (RtlInitializeResource.c)
 *     RtlpAddDebugInfoToCriticalSection @ 0x18002FD30 (RtlpAddDebugInfoToCriticalSection.c)
 *     RtlpStdLockRelease @ 0x1800310A8 (RtlpStdLockRelease.c)
 *     LdrGetProcedureAddressForCaller @ 0x1800319F0 (LdrGetProcedureAddressForCaller.c)
 *     RtlpAddVectoredHandler @ 0x180032D08 (RtlpAddVectoredHandler.c)
 *     RtlRemoveInvertedFunctionTable @ 0x180033134 (RtlRemoveInvertedFunctionTable.c)
 *     RtlAddGrowableFunctionTable @ 0x1800335A0 (RtlAddGrowableFunctionTable.c)
 *     LdrEnsureMrdataHeapExists @ 0x180033910 (LdrEnsureMrdataHeapExists.c)
 *     LdrProtectMrdata @ 0x180033A80 (LdrProtectMrdata.c)
 *     RtlInsertInvertedFunctionTable @ 0x180033C34 (RtlInsertInvertedFunctionTable.c)
 *     LdrpWriteBackProtectedDelayLoad @ 0x180034300 (LdrpWriteBackProtectedDelayLoad.c)
 *     LdrpHandleTlsData @ 0x180034C00 (LdrpHandleTlsData.c)
 *     LdrpReleaseDllPath @ 0x1800375C0 (LdrpReleaseDllPath.c)
 *     LdrpMapAndSnapDependency @ 0x1800392D0 (LdrpMapAndSnapDependency.c)
 *     LdrpLoadDependentModuleInternal @ 0x180039CE0 (LdrpLoadDependentModuleInternal.c)
 *     LdrpFindOrPrepareLoadingModule @ 0x18003C480 (LdrpFindOrPrepareLoadingModule.c)
 *     RtlpEnterCriticalSectionContended @ 0x18003FF80 (RtlpEnterCriticalSectionContended.c)
 *     LdrpFastpthReloadedDll @ 0x180046270 (LdrpFastpthReloadedDll.c)
 *     RtlpCallVectoredHandlers @ 0x1800467C0 (RtlpCallVectoredHandlers.c)
 *     TppWorkInitialize @ 0x1800470B0 (TppWorkInitialize.c)
 *     TppCleanupGroupMemberInitialize @ 0x180047230 (TppCleanupGroupMemberInitialize.c)
 *     LdrpDereferenceModule @ 0x180047D50 (LdrpDereferenceModule.c)
 *     TppPoolpReferenceGlobalPool @ 0x180047E60 (TppPoolpReferenceGlobalPool.c)
 *     LdrUnloadDll @ 0x1800480B0 (LdrUnloadDll.c)
 *     TppCleanupGroupAddMember @ 0x1800491C0 (TppCleanupGroupAddMember.c)
 *     LdrpDecrementModuleLoadCountEx @ 0x180049230 (LdrpDecrementModuleLoadCountEx.c)
 *     LdrpUnloadNode @ 0x180049460 (LdrpUnloadNode.c)
 *     EtwNotificationUnregister @ 0x180049B40 (EtwNotificationUnregister.c)
 *     ProviderHandleRemove @ 0x180049CD0 (ProviderHandleRemove.c)
 *     EtwpRemoveRegistrationFromTable @ 0x180049DA8 (EtwpRemoveRegistrationFromTable.c)
 *     EtwNotificationRegister @ 0x180049E50 (EtwNotificationRegister.c)
 *     ProviderHandleInsert @ 0x18004A070 (ProviderHandleInsert.c)
 *     EtwpInsertRegistration @ 0x18004A2C0 (EtwpInsertRegistration.c)
 *     EtwpFindGuidEntry @ 0x18004A5B0 (EtwpFindGuidEntry.c)
 *     EtwDeliverDataBlock @ 0x18004AB50 (EtwDeliverDataBlock.c)
 *     EtwpFindRegistration @ 0x18004B080 (EtwpFindRegistration.c)
 *     EtwpUpdateEnableInfoAndCallback @ 0x18004B390 (EtwpUpdateEnableInfoAndCallback.c)
 *     EtwpEventApiCallback @ 0x18004B650 (EtwpEventApiCallback.c)
 *     TppWaitCompletion @ 0x18004C800 (TppWaitCompletion.c)
 *     TpSetWaitEx @ 0x18004CAE0 (TpSetWaitEx.c)
 *     RtlpWnfProcessCurrentDescriptor @ 0x18004D6B0 (RtlpWnfProcessCurrentDescriptor.c)
 *     RtlpWnfWalkUserSubscriptionList @ 0x18004DA30 (RtlpWnfWalkUserSubscriptionList.c)
 *     TppCleanupGroupMemberDestroy @ 0x18004E380 (TppCleanupGroupMemberDestroy.c)
 *     TppCleanupGroupRemoveMember @ 0x18004E720 (TppCleanupGroupRemoveMember.c)
 *     TppWorkCallbackPrologRelease @ 0x18004ECC0 (TppWorkCallbackPrologRelease.c)
 *     TppWorkerFindTask @ 0x18004FB00 (TppWorkerFindTask.c)
 *     TppWorkerThread @ 0x1800502D0 (TppWorkerThread.c)
 *     TppCallbackEpilog @ 0x1800512E0 (TppCallbackEpilog.c)
 *     TppPrepareDirectParams @ 0x180051D70 (TppPrepareDirectParams.c)
 *     TppAlpcpExecuteCallback @ 0x1800522C0 (TppAlpcpExecuteCallback.c)
 *     RtlpFreeHeap @ 0x18005A020 (RtlpFreeHeap.c)
 *     TpTrimPools @ 0x18005E2D0 (TpTrimPools.c)
 *     RtlpWalkLFHBlock @ 0x18005F0E0 (RtlpWalkLFHBlock.c)
 *     RtlpIsLFHZoneAllocation @ 0x18005F990 (RtlpIsLFHZoneAllocation.c)
 *     RtlpHpLfhPrivateSlotShutdown @ 0x180060ADC (RtlpHpLfhPrivateSlotShutdown.c)
 *     RtlpHpLfhContextSlotStandbyProcess @ 0x180060FB8 (RtlpHpLfhContextSlotStandbyProcess.c)
 *     RtlpHpLfhBucketGetSubsegment @ 0x180061120 (RtlpHpLfhBucketGetSubsegment.c)
 *     RtlpHpLfhSlotAllocateSlow @ 0x180061270 (RtlpHpLfhSlotAllocateSlow.c)
 *     RtlpHpLfhSubsegmentDecommitPages @ 0x1800630F0 (RtlpHpLfhSubsegmentDecommitPages.c)
 *     RtlpHpLfhBucketAddSubsegment @ 0x1800642C0 (RtlpHpLfhBucketAddSubsegment.c)
 *     RtlpFlsDataCleanup @ 0x180064800 (RtlpFlsDataCleanup.c)
 *     RtlpHpVsSubsegmentCommitPages @ 0x180064D78 (RtlpHpVsSubsegmentCommitPages.c)
 *     RtlpHpLfhOwnerCompact @ 0x180066280 (RtlpHpLfhOwnerCompact.c)
 *     RtlpHpSegPageRangeAllocate @ 0x180067200 (RtlpHpSegPageRangeAllocate.c)
 *     RtlpHpSegContextCompact @ 0x180067510 (RtlpHpSegContextCompact.c)
 *     RtlpHpVsChunkSplit @ 0x1800687B0 (RtlpHpVsChunkSplit.c)
 *     RtlpHpVsChunkFree @ 0x1800697A0 (RtlpHpVsChunkFree.c)
 *     RtlpHpSegPageRangeCoalesce @ 0x18006A6B0 (RtlpHpSegPageRangeCoalesce.c)
 *     TppWorkPost @ 0x18006B720 (TppWorkPost.c)
 *     RtlpHpLfhSubsegmentIncBlockCounts @ 0x18006BC60 (RtlpHpLfhSubsegmentIncBlockCounts.c)
 *     RtlpHpLfhSubsegmentCommitBlock @ 0x18006BF70 (RtlpHpLfhSubsegmentCommitBlock.c)
 *     LdrpResolveProcedureAddress @ 0x18006DB10 (LdrpResolveProcedureAddress.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x180074D00 (LdrpSetAlternateResourceModuleHandle.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x1800773E0 (LdrUnloadAlternateResourceModuleEx.c)
 *     RtlQueryAtomInAtomTable @ 0x18007AA70 (RtlQueryAtomInAtomTable.c)
 *     RtlDeleteAtomFromAtomTable @ 0x18007AC90 (RtlDeleteAtomFromAtomTable.c)
 *     RtlAddAtomToAtomTableEx @ 0x18007AD34 (RtlAddAtomToAtomTableEx.c)
 *     TpReleaseCleanupGroupMembers @ 0x1800852F0 (TpReleaseCleanupGroupMembers.c)
 *     TppJobpRundownJob @ 0x180085608 (TppJobpRundownJob.c)
 *     TpAllocPoolInternal @ 0x180085914 (TpAllocPoolInternal.c)
 *     TpSetPoolThreadCpuSets @ 0x180086140 (TpSetPoolThreadCpuSets.c)
 *     RtlUpdateTimer @ 0x180086A00 (RtlUpdateTimer.c)
 *     RtlDeleteTimer @ 0x180087440 (RtlDeleteTimer.c)
 *     TpTimerOutstandingCallbackCount @ 0x180087620 (TpTimerOutstandingCallbackCount.c)
 *     TpSetTimerEx @ 0x180087860 (TpSetTimerEx.c)
 *     TppSetTimer @ 0x180087CF0 (TppSetTimer.c)
 *     TppTimerQueueExpiration @ 0x1800882D0 (TppTimerQueueExpiration.c)
 *     TppSingleTimerExpiration @ 0x180088760 (TppSingleTimerExpiration.c)
 *     TpWaitForTimer @ 0x1800889F0 (TpWaitForTimer.c)
 *     TppCancelTimer @ 0x180088C90 (TppCancelTimer.c)
 *     RtlCreateTimer @ 0x180089920 (RtlCreateTimer.c)
 *     LdrpPinModule @ 0x180089BC8 (LdrpPinModule.c)
 *     TppDirectExecuteCallback @ 0x180089F30 (TppDirectExecuteCallback.c)
 *     TppPoolpDereferenceGlobalPool @ 0x18008A0B0 (TppPoolpDereferenceGlobalPool.c)
 *     RtlRegisterWait @ 0x18008A7E0 (RtlRegisterWait.c)
 *     RtlDeregisterWaitEx @ 0x18008AB90 (RtlDeregisterWaitEx.c)
 *     TpReleaseWait @ 0x18008ADA0 (TpReleaseWait.c)
 *     TpWaitOutstandingCallbackCount @ 0x18008AFEC (TpWaitOutstandingCallbackCount.c)
 *     TpAllocWait @ 0x18008B0C0 (TpAllocWait.c)
 *     TpWaitForWait @ 0x18008B410 (TpWaitForWait.c)
 *     TppGetCurrentThreadNumaNode @ 0x18008B710 (TppGetCurrentThreadNumaNode.c)
 *     TpPostTask @ 0x18008B890 (TpPostTask.c)
 *     SbUpdateSwitchContextBasedOnDll @ 0x18008D6B0 (SbUpdateSwitchContextBasedOnDll.c)
 *     LdrpMapDllWithSectionHandle @ 0x18008F450 (LdrpMapDllWithSectionHandle.c)
 *     LdrpProcessMappedModule @ 0x18008FFE0 (LdrpProcessMappedModule.c)
 *     LdrpLoadKnownDll @ 0x180091340 (LdrpLoadKnownDll.c)
 *     LdrpMapDllSearchPath @ 0x180091810 (LdrpMapDllSearchPath.c)
 *     LdrpFindExistingModule @ 0x180092F10 (LdrpFindExistingModule.c)
 *     RtlpHpLargeAlloc @ 0x18009A714 (RtlpHpLargeAlloc.c)
 *     RtlpHpCustomVaCallbacksRegistrarRegister @ 0x18009AC38 (RtlpHpCustomVaCallbacksRegistrarRegister.c)
 *     RtlpHpVaMgrCtxAllocatorDereference @ 0x18009B238 (RtlpHpVaMgrCtxAllocatorDereference.c)
 *     RtlpHpVaMgrCtxAllocatorReference @ 0x18009B8F4 (RtlpHpVaMgrCtxAllocatorReference.c)
 *     RtlCSparseBitmapBitmaskWrite @ 0x18009BEDC (RtlCSparseBitmapBitmaskWrite.c)
 *     RtlSparseArrayElementAllocate @ 0x18009BFC0 (RtlSparseArrayElementAllocate.c)
 *     RtlpHpSegMgrVaCtxAlloc @ 0x18009C428 (RtlpHpSegMgrVaCtxAlloc.c)
 *     RtlpHpVaMgrCtxFree @ 0x18009D290 (RtlpHpVaMgrCtxFree.c)
 *     RtlpCSparseBitmapUnlock @ 0x18009D690 (RtlpCSparseBitmapUnlock.c)
 *     RtlpHpVaMgrAlloc @ 0x18009D908 (RtlpHpVaMgrAlloc.c)
 *     RtlpHpLargeReAlloc @ 0x18009E474 (RtlpHpLargeReAlloc.c)
 *     RtlpHpLargeFree @ 0x18009E878 (RtlpHpLargeFree.c)
 *     RtlpHpTagContextAllocateTag @ 0x1800A1D38 (RtlpHpTagContextAllocateTag.c)
 *     EtwpDisableTraceProviders @ 0x1800A7944 (EtwpDisableTraceProviders.c)
 *     EtwpGetNextRegistration @ 0x1800A7AB0 (EtwpGetNextRegistration.c)
 *     EtwProcessPrivateLoggerRequest @ 0x1800A8130 (EtwProcessPrivateLoggerRequest.c)
 *     RtlLockMemoryBlockLookaside @ 0x1800AA730 (RtlLockMemoryBlockLookaside.c)
 *     RtlLockMemoryZone @ 0x1800AA7B0 (RtlLockMemoryZone.c)
 *     RtlpRegisterLockedMemoryZone @ 0x1800AA8C8 (RtlpRegisterLockedMemoryZone.c)
 *     RtlpUnregisterLockedMemoryBlockLookaside @ 0x1800AA93C (RtlpUnregisterLockedMemoryBlockLookaside.c)
 *     RtlpRegisterLockedMemoryBlockLookaside @ 0x1800AA998 (RtlpRegisterLockedMemoryBlockLookaside.c)
 *     RtlUnlockModuleSection @ 0x1800AAA30 (RtlUnlockModuleSection.c)
 *     RtlLockModuleSection @ 0x1800AAAE0 (RtlLockModuleSection.c)
 *     LdrpInitializeProcess @ 0x1800AEF54 (LdrpInitializeProcess.c)
 *     RtlpFlsAlloc @ 0x1800B0E88 (RtlpFlsAlloc.c)
 *     RtlFlsSetValue @ 0x1800B10C0 (RtlFlsSetValue.c)
 *     RtlpFlsSetValue @ 0x1800B1250 (RtlpFlsSetValue.c)
 *     RtlpGetNormalization @ 0x1800B4004 (RtlpGetNormalization.c)
 *     RtlSetIoCompletionCallback @ 0x1800B6B90 (RtlSetIoCompletionCallback.c)
 *     RtlpTpIoLookup @ 0x1800B6CDC (RtlpTpIoLookup.c)
 *     RtlpTpIoDllLoaded @ 0x1800B7798 (RtlpTpIoDllLoaded.c)
 *     RtlpFcUpdateLocalConfiguration @ 0x1800D18C0 (RtlpFcUpdateLocalConfiguration.c)
 *     LdrpLoadContextReplaceModule @ 0x1800D1F28 (LdrpLoadContextReplaceModule.c)
 *     RtlpHpUnlockHeapForProcessCloneOrTerminate @ 0x1800D6080 (RtlpHpUnlockHeapForProcessCloneOrTerminate.c)
 *     RtlpHpLfhPrivateSlotCreate @ 0x1800D6160 (RtlpHpLfhPrivateSlotCreate.c)
 *     RtlpHpLfhContextLockUnlock @ 0x1800D638C (RtlpHpLfhContextLockUnlock.c)
 *     RtlpHpLfhOwnerLockUnlock @ 0x1800D6450 (RtlpHpLfhOwnerLockUnlock.c)
 *     RtlpHpLfhOwnerListLockUnlock @ 0x1800D6544 (RtlpHpLfhOwnerListLockUnlock.c)
 *     RtlpHpLfhContextMetadataFree @ 0x1800D660C (RtlpHpLfhContextMetadataFree.c)
 *     RtlpHpLfhContextMetadataAllocate @ 0x1800D6728 (RtlpHpLfhContextMetadataAllocate.c)
 *     AlpcGetMessageFromCompletionList @ 0x1800D6D50 (AlpcGetMessageFromCompletionList.c)
 *     LdrGetDllDirectory @ 0x1800D70D0 (LdrGetDllDirectory.c)
 *     LdrpReleaseTlsEntry @ 0x1800D73C8 (LdrpReleaseTlsEntry.c)
 *     TpReleasePool @ 0x1800D9CF0 (TpReleasePool.c)
 *     TppPoolpFree @ 0x1800D9FB4 (TppPoolpFree.c)
 *     TppQueueRemoveHead @ 0x1800DA110 (TppQueueRemoveHead.c)
 *     RtlpHpStackTraceAllocAdd @ 0x1800DA5A4 (RtlpHpStackTraceAllocAdd.c)
 *     LdrpBuildForwarderLink @ 0x1800DA890 (LdrpBuildForwarderLink.c)
 *     RtlpHpVsContextGrowInPlace @ 0x1800DAA64 (RtlpHpVsContextGrowInPlace.c)
 *     RtlInstallFunctionTableCallback @ 0x1800DC260 (RtlInstallFunctionTableCallback.c)
 *     TpStartAsyncIoOperation @ 0x1800E1C50 (TpStartAsyncIoOperation.c)
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x1800E3360 (MicrosoftTelemetryAssertTriggeredWorker.c)
 *     EtwpSetProviderTraits @ 0x1800E3D80 (EtwpSetProviderTraits.c)
 *     RtlpHpLfhPrivateSlotListCompact @ 0x1800E4020 (RtlpHpLfhPrivateSlotListCompact.c)
 *     LdrpCondenseGraphRecurse @ 0x1800E5BA0 (LdrpCondenseGraphRecurse.c)
 *     RtlpLowFragHeapAllocateFromZone @ 0x1800E6230 (RtlpLowFragHeapAllocateFromZone.c)
 *     RtlpTpWaitCheckReset @ 0x1800E6C10 (RtlpTpWaitCheckReset.c)
 *     LdrpCleanupThreadTlsData @ 0x1800E7D74 (LdrpCleanupThreadTlsData.c)
 *     RtlpHpVsContextAllocate @ 0x1800E80AC (RtlpHpVsContextAllocate.c)
 *     RtlReleasePath @ 0x1800E8E60 (RtlReleasePath.c)
 *     TpSetDefaultPoolMaxThreads @ 0x1800E9040 (TpSetDefaultPoolMaxThreads.c)
 *     TpSetDefaultPoolStackInformation @ 0x1800E9190 (TpSetDefaultPoolStackInformation.c)
 *     LdrUpdatePackageSearchPath @ 0x1800E9360 (LdrUpdatePackageSearchPath.c)
 *     LdrpResetAppPackagesPath @ 0x1800E945C (LdrpResetAppPackagesPath.c)
 *     TppPoolAddWorker @ 0x1800EB458 (TppPoolAddWorker.c)
 *     EtwpRegisterGuidsApiCallback @ 0x1800EC1A4 (EtwpRegisterGuidsApiCallback.c)
 *     RtlAddFunctionTable @ 0x1800ECBF0 (RtlAddFunctionTable.c)
 *     RtlSetSearchPathMode @ 0x1800ED6D0 (RtlSetSearchPathMode.c)
 *     TppPoolRemoveWorker @ 0x1800EDA00 (TppPoolRemoveWorker.c)
 *     TppPoolUpdateTrimmedWorker @ 0x1800EE2D4 (TppPoolUpdateTrimmedWorker.c)
 *     RtlpHpHeapExtendContext @ 0x1800EEEC0 (RtlpHpHeapExtendContext.c)
 *     RtlAcquireReleaseSRWLockExclusive @ 0x1800EF020 (RtlAcquireReleaseSRWLockExclusive.c)
 *     LdrpInsertModuleToIndex @ 0x1800EF830 (LdrpInsertModuleToIndex.c)
 *     LdrpQueueDeferredTlsData @ 0x1800EFC80 (LdrpQueueDeferredTlsData.c)
 *     RtlpFcRemoveChangeRegistration @ 0x1800F2660 (RtlpFcRemoveChangeRegistration.c)
 *     RtlExtendMemoryZone @ 0x1800F2A50 (RtlExtendMemoryZone.c)
 *     RtlGrowFunctionTable @ 0x1800F4140 (RtlGrowFunctionTable.c)
 *     LdrpAllocateSchedulerSharedData @ 0x1800F4700 (LdrpAllocateSchedulerSharedData.c)
 *     RtlSetProtectedPolicy @ 0x1800F4C20 (RtlSetProtectedPolicy.c)
 *     RtlDeleteTimerQueueEx @ 0x1800F5CD0 (RtlDeleteTimerQueueEx.c)
 *     RtlpHeapTrkTrackRemoveHeap @ 0x1800F6138 (RtlpHeapTrkTrackRemoveHeap.c)
 *     RtlpHpStackTraceHeapEnable @ 0x180101EA0 (RtlpHpStackTraceHeapEnable.c)
 *     RtlpFcChangeRegistrationCallback @ 0x180102360 (RtlpFcChangeRegistrationCallback.c)
 *     EtwpDereferenceUmGuidEntry @ 0x180105730 (EtwpDereferenceUmGuidEntry.c)
 *     RtlUnlockMemoryBlockLookaside @ 0x180105AA0 (RtlUnlockMemoryBlockLookaside.c)
 *     RtlUnlockMemoryZone @ 0x180105B00 (RtlUnlockMemoryZone.c)
 *     RtlpUnregisterLockedMemoryZone @ 0x180105B9C (RtlpUnregisterLockedMemoryZone.c)
 *     EtwpInsertGuidEntry @ 0x180106D44 (EtwpInsertGuidEntry.c)
 *     LdrAddDllDirectory @ 0x180107730 (LdrAddDllDirectory.c)
 *     RtlpTpIoDllUnloaded @ 0x180107CFC (RtlpTpIoDllUnloaded.c)
 *     RtlpHeapTrkDumpStacks @ 0x180108B94 (RtlpHeapTrkDumpStacks.c)
 *     LdrFlushAlternateResourceModules @ 0x180108D30 (LdrFlushAlternateResourceModules.c)
 *     TpDisablePoolCallbackChecks @ 0x180109930 (TpDisablePoolCallbackChecks.c)
 *     TppStopWaitCallbackGeneration @ 0x18010B800 (TppStopWaitCallbackGeneration.c)
 *     LdrRemoveDllDirectory @ 0x18010BDB0 (LdrRemoveDllDirectory.c)
 *     LdrpCheckComponentOnDemandEtwEvent @ 0x18010CD44 (LdrpCheckComponentOnDemandEtwEvent.c)
 *     RtlEmptyAtomTable @ 0x18010E600 (RtlEmptyAtomTable.c)
 *     RtlpWnfRetryTimerCallback @ 0x18010EEB0 (RtlpWnfRetryTimerCallback.c)
 *     RtlDestroyAtomTable @ 0x18010F790 (RtlDestroyAtomTable.c)
 *     RtlpHpSegMgrCommitInitiate @ 0x180111468 (RtlpHpSegMgrCommitInitiate.c)
 *     RtlpHpSegMgrCommitComplete @ 0x180112CC8 (RtlpHpSegMgrCommitComplete.c)
 *     RtlpAllocateHeap @ 0x1801159A0 (RtlpAllocateHeap.c)
 *     EtwpTrackProviderBinary @ 0x18011836C (EtwpTrackProviderBinary.c)
 *     RtlpHpVsSlotAllocate @ 0x180119350 (RtlpHpVsSlotAllocate.c)
 *     RtlpHpVsSlotFreeList @ 0x180119648 (RtlpHpVsSlotFreeList.c)
 *     RtlpHpVsSlotCompactChunks @ 0x1801198FC (RtlpHpVsSlotCompactChunks.c)
 *     RtlpHpVsContextLockUnlock @ 0x18011A5E8 (RtlpHpVsContextLockUnlock.c)
 *     RtlStackDbStackAdd @ 0x18011BFB8 (RtlStackDbStackAdd.c)
 *     RtlStackDbStackRemove @ 0x18011C808 (RtlStackDbStackRemove.c)
 *     TpSetDefaultPoolCpuSets @ 0x18011D1BC (TpSetDefaultPoolCpuSets.c)
 *     RtlpHpStackTraceEnable @ 0x18011DE14 (RtlpHpStackTraceEnable.c)
 *     LdrForkMrdata @ 0x18012FF3C (LdrForkMrdata.c)
 *     RtlPinAtomInAtomTable @ 0x18013A2B0 (RtlPinAtomInAtomTable.c)
 *     RtlResetMemoryBlockLookaside @ 0x18013A390 (RtlResetMemoryBlockLookaside.c)
 *     RtlResetMemoryZone @ 0x18013A3F0 (RtlResetMemoryZone.c)
 *     RtlDeleteBarrier @ 0x18013C0C0 (RtlDeleteBarrier.c)
 *     RtlpUnlockHeapForClone @ 0x180140FBC (RtlpUnlockHeapForClone.c)
 *     RtlCompareExchangePointerMapping @ 0x180141280 (RtlCompareExchangePointerMapping.c)
 *     RtlCompareExchangePropertyStore @ 0x1801413D0 (RtlCompareExchangePropertyStore.c)
 *     RtlRemovePointerMapping @ 0x180141750 (RtlRemovePointerMapping.c)
 *     RtlRemovePropertyStore @ 0x180141830 (RtlRemovePropertyStore.c)
 *     RtlDeregisterSecureMemoryCacheCallback @ 0x180142C60 (RtlDeregisterSecureMemoryCacheCallback.c)
 *     RtlRegisterSecureMemoryCacheCallback @ 0x180142D20 (RtlRegisterSecureMemoryCacheCallback.c)
 *     RtlGetFeatureToggleConfiguration @ 0x180144060 (RtlGetFeatureToggleConfiguration.c)
 *     __ft_record_impression @ 0x1801448F4 (__ft_record_impression.c)
 *     RtlpFeatureConfigurationCloneComplete @ 0x180145820 (RtlpFeatureConfigurationCloneComplete.c)
 *     RtlRcuAllocate @ 0x180145EE0 (RtlRcuAllocate.c)
 *     RtlRcuFree @ 0x180145FB0 (RtlRcuFree.c)
 *     RtlpFlsCloneComplete @ 0x1801499C8 (RtlpFlsCloneComplete.c)
 *     RtlpFlsClonePrepare @ 0x180149A5C (RtlpFlsClonePrepare.c)
 *     RtlpHpStackTraceAllocRemove @ 0x180149F94 (RtlpHpStackTraceAllocRemove.c)
 *     RtlpHpStackTraceDisable @ 0x18014A0F0 (RtlpHpStackTraceDisable.c)
 *     UcOnUnexpectedCodePath @ 0x1801558C0 (UcOnUnexpectedCodePath.c)
 *     RtlpHpCustomVaCallbacksRegistrarUnregister @ 0x180156024 (RtlpHpCustomVaCallbacksRegistrarUnregister.c)
 *     RtlpHpSegMgrVaCtxFree @ 0x180156600 (RtlpHpSegMgrVaCtxFree.c)
 *     RtlpHpSegMgrVaCtxInsert @ 0x180156750 (RtlpHpSegMgrVaCtxInsert.c)
 *     TppDirectUnposted @ 0x18015A950 (TppDirectUnposted.c)
 *     RtlStackDbContextSerialize @ 0x18015B948 (RtlStackDbContextSerialize.c)
 *     RtlpStackDbSegmentFindOrCreate @ 0x18015BF7C (RtlpStackDbSegmentFindOrCreate.c)
 *     RtlpStackDbSegmentRemoveRef @ 0x18015C564 (RtlpStackDbSegmentRemoveRef.c)
 *     RtlpSignalSystemDirsModification @ 0x18015C974 (RtlpSignalSystemDirsModification.c)
 *     LdrQueryModuleServiceTags @ 0x18015CC70 (LdrQueryModuleServiceTags.c)
 *     RtlCloneUserProcess @ 0x18015D630 (RtlCloneUserProcess.c)
 *     RtlCompleteProcessCloning @ 0x18015D940 (RtlCompleteProcessCloning.c)
 *     RtlPrepareForProcessCloning @ 0x18015DAF0 (RtlPrepareForProcessCloning.c)
 *     LdrpUnlockTlsDelayedReclaimTable @ 0x18015DEC8 (LdrpUnlockTlsDelayedReclaimTable.c)
 * Callees:
 *     NtSetInformationThread @ 0x1801601F0 (NtSetInformationThread.c)
 *     ZwAlertThreadByThreadIdEx @ 0x180160E80 (ZwAlertThreadByThreadIdEx.c)
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
