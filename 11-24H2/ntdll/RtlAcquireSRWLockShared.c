/*
 * XREFs of RtlAcquireSRWLockShared @ 0x18003CC20
 * Callers:
 *     RtlpComputeDllPath @ 0x1800063D0 (RtlpComputeDllPath.c)
 *     RtlpComputeDllPathWithOptions @ 0x1800064C0 (RtlpComputeDllPathWithOptions.c)
 *     SbpUpdateCache @ 0x18000BBE0 (SbpUpdateCache.c)
 *     RtlSizeHeap @ 0x180021000 (RtlSizeHeap.c)
 *     RtlpFlsFree @ 0x180026B34 (RtlpFlsFree.c)
 *     RtlQueryProcessLockInformation @ 0x18002AFA0 (RtlQueryProcessLockInformation.c)
 *     RtlpCreateSerializationGroup @ 0x18002C7C0 (RtlpCreateSerializationGroup.c)
 *     RtlpCreateWnfNameSubscription @ 0x18002E89C (RtlpCreateWnfNameSubscription.c)
 *     LdrGetProcedureAddressForCaller @ 0x1800319F0 (LdrGetProcedureAddressForCaller.c)
 *     RtlpAddVectoredHandler @ 0x180032D08 (RtlpAddVectoredHandler.c)
 *     RtlGuardRestoreContext @ 0x1800358A0 (RtlGuardRestoreContext.c)
 *     RtlGuardCheckLongJumpTarget @ 0x180035CB0 (RtlGuardCheckLongJumpTarget.c)
 *     LdrpLoadDependentModuleInternal @ 0x180039CE0 (LdrpLoadDependentModuleInternal.c)
 *     LdrpFindOrPrepareLoadingModule @ 0x18003C480 (LdrpFindOrPrepareLoadingModule.c)
 *     TppBarrierAdjust @ 0x18003E750 (TppBarrierAdjust.c)
 *     LdrpAllocateTls @ 0x18003EF80 (LdrpAllocateTls.c)
 *     RtlUnwindEx @ 0x180041E80 (RtlUnwindEx.c)
 *     LdrGetDllFullName @ 0x180046EC0 (LdrGetDllFullName.c)
 *     TppPoolpReferenceGlobalPool @ 0x180047E60 (TppPoolpReferenceGlobalPool.c)
 *     LdrUnloadDll @ 0x1800480B0 (LdrUnloadDll.c)
 *     EtwpProviderArrivalCallback @ 0x1800483D0 (EtwpProviderArrivalCallback.c)
 *     LdrResolveDelayLoadedAPI @ 0x1800498A0 (LdrResolveDelayLoadedAPI.c)
 *     EtwpCheckForPrivatePreEnable @ 0x18004A3C0 (EtwpCheckForPrivatePreEnable.c)
 *     RtlpWnfProcessCurrentDescriptor @ 0x18004D6B0 (RtlpWnfProcessCurrentDescriptor.c)
 *     TppWorkerThread @ 0x1800502D0 (TppWorkerThread.c)
 *     TppAlpcpExecuteCallback @ 0x1800522C0 (TppAlpcpExecuteCallback.c)
 *     RtlpHpTagFreeHeap @ 0x180053EC0 (RtlpHpTagFreeHeap.c)
 *     RtlpHpExtrasGet @ 0x180059480 (RtlpHpExtrasGet.c)
 *     RtlpHpSizeHeapInternal @ 0x180059880 (RtlpHpSizeHeapInternal.c)
 *     RtlpHpSizeHeap @ 0x180059C60 (RtlpHpSizeHeap.c)
 *     RtlpHpTagReAllocateHeap @ 0x18005ADE0 (RtlpHpTagReAllocateHeap.c)
 *     RtlpHpLargeAllocSize @ 0x18005DF20 (RtlpHpLargeAllocSize.c)
 *     TpTrimPools @ 0x18005E2D0 (TpTrimPools.c)
 *     RtlSleepConditionVariableSRW @ 0x18005FA90 (RtlSleepConditionVariableSRW.c)
 *     RtlpFlsDataCleanup @ 0x180064800 (RtlpFlsDataCleanup.c)
 *     RtlpHpLfhOwnerCompact @ 0x180066280 (RtlpHpLfhOwnerCompact.c)
 *     TpAllocPoolInternal @ 0x180085914 (TpAllocPoolInternal.c)
 *     LdrAddRefDll @ 0x18008BAB0 (LdrAddRefDll.c)
 *     RtlpTpWorkCallback @ 0x18008C070 (RtlpTpWorkCallback.c)
 *     RtlpCSparseBitmapPageCommit @ 0x18009C064 (RtlpCSparseBitmapPageCommit.c)
 *     RtlpHpVaMgrCtxAlloc @ 0x18009D554 (RtlpHpVaMgrCtxAlloc.c)
 *     RtlpHpExtrasSetPresent @ 0x18009EA20 (RtlpHpExtrasSetPresent.c)
 *     RtlpHpExtrasAppend @ 0x18009EC10 (RtlpHpExtrasAppend.c)
 *     RtlpHpTagQueryTags @ 0x1800A1A5C (RtlpHpTagQueryTags.c)
 *     LdrpFreeTls @ 0x1800AB4A0 (LdrpFreeTls.c)
 *     _LdrpInitialize @ 0x1800AEAE4 (_LdrpInitialize.c)
 *     LdrpFindLoadedDllByMapping @ 0x1800C77DC (LdrpFindLoadedDllByMapping.c)
 *     RtlpFcCallChangeCallbacks @ 0x1800D1ED0 (RtlpFcCallChangeCallbacks.c)
 *     RtlpHpLfhSubsegmentReformatCheck @ 0x1800DB1E0 (RtlpHpLfhSubsegmentReformatCheck.c)
 *     RtlpLookupDynamicFunctionEntry @ 0x1800E00D0 (RtlpLookupDynamicFunctionEntry.c)
 *     TpPoolReferenceExistingGlobalPool @ 0x1800E92A8 (TpPoolReferenceExistingGlobalPool.c)
 *     LdrGetDllHandleByMapping @ 0x1800EA420 (LdrGetDllHandleByMapping.c)
 *     LdrpAcquireSchedulerSharedDataSlot @ 0x1800EBDA4 (LdrpAcquireSchedulerSharedDataSlot.c)
 *     RtlCheckHeldCriticalSections @ 0x1800EDA90 (RtlCheckHeldCriticalSections.c)
 *     RtlQueryProtectedPolicy @ 0x1800EF520 (RtlQueryProtectedPolicy.c)
 *     RtlpCSparseBitmapLock @ 0x1800F0770 (RtlpCSparseBitmapLock.c)
 *     RtlpComputeSearchPath @ 0x180105DB0 (RtlpComputeSearchPath.c)
 *     RtlpComputeExePath @ 0x180108200 (RtlpComputeExePath.c)
 *     LdrpGetAlternateResourceModuleHandleEx @ 0x18010DF10 (LdrpGetAlternateResourceModuleHandleEx.c)
 *     RtlpWnfCalculateAndSetNextTimer @ 0x18010EDC4 (RtlpWnfCalculateAndSetNextTimer.c)
 *     RtlpWnfRetryTimerCallback @ 0x18010EEB0 (RtlpWnfRetryTimerCallback.c)
 *     RtlStackDbStackAdd @ 0x18011BFB8 (RtlStackDbStackAdd.c)
 *     RtlpHpStackTraceSerialize @ 0x18011D388 (RtlpHpStackTraceSerialize.c)
 *     RtlPosixBarrier @ 0x18013C118 (RtlPosixBarrier.c)
 *     RtlQueryPointerMapping @ 0x180141600 (RtlQueryPointerMapping.c)
 *     RtlQueryPropertyStore @ 0x1801416C0 (RtlQueryPropertyStore.c)
 *     RtlGetFeatureToggleConfiguration @ 0x180144060 (RtlGetFeatureToggleConfiguration.c)
 *     RtlRcuReadLock @ 0x180146060 (RtlRcuReadLock.c)
 *     RtlpHpStackTraceHeapSerialize @ 0x18014A380 (RtlpHpStackTraceHeapSerialize.c)
 *     RtlpStackDbSegmentFindOrCreate @ 0x18015BF7C (RtlpStackDbSegmentFindOrCreate.c)
 *     RtlCloneUserProcess @ 0x18015D630 (RtlCloneUserProcess.c)
 *     RtlPrepareForProcessCloning @ 0x18015DAF0 (RtlPrepareForProcessCloning.c)
 * Callees:
 *     RtlpAcquireSRWLockSharedContended @ 0x180044840 (RtlpAcquireSRWLockSharedContended.c)
 */

void __cdecl RtlAcquireSRWLockShared(PRTL_SRWLOCK SRWLock)
{
  char *SchedulerSharedDataSlot; // r8
  __int64 i; // rdx
  PRTL_SRWLOCK *v3; // rax

  SchedulerSharedDataSlot = (char *)NtCurrentTeb()->SchedulerSharedDataSlot;
  if ( SchedulerSharedDataSlot )
  {
    for ( i = 0LL; (unsigned int)i < 8; i = (unsigned int)(i + 1) )
    {
      v3 = (PRTL_SRWLOCK *)&SchedulerSharedDataSlot[8 * i];
      if ( !*v3 )
      {
        if ( v3 )
          *v3 = SRWLock;
        break;
      }
    }
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)SRWLock, 17LL, 0LL) )
    RtlpAcquireSRWLockSharedContended(SRWLock);
}
