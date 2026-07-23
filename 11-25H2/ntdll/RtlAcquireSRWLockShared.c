/*
 * XREFs of RtlAcquireSRWLockShared @ 0x18004F0C0
 * Callers:
 *     RtlpCreateSerializationGroup @ 0x180002FE0 (RtlpCreateSerializationGroup.c)
 *     RtlpCreateWnfNameSubscription @ 0x1800050BC (RtlpCreateWnfNameSubscription.c)
 *     LdrGetProcedureAddressForCaller @ 0x180007BE0 (LdrGetProcedureAddressForCaller.c)
 *     LdrpFreeTls @ 0x180009480 (LdrpFreeTls.c)
 *     RtlpHpLfhSubsegmentReformatCheck @ 0x180009C40 (RtlpHpLfhSubsegmentReformatCheck.c)
 *     RtlpFlsDataCleanup @ 0x18000A8B0 (RtlpFlsDataCleanup.c)
 *     RtlpHpLfhOwnerCompact @ 0x18000C2E0 (RtlpHpLfhOwnerCompact.c)
 *     LdrpAllocateTls @ 0x180020710 (LdrpAllocateTls.c)
 *     LdrResolveDelayLoadedAPI @ 0x180021000 (LdrResolveDelayLoadedAPI.c)
 *     RtlGuardRestoreContext @ 0x1800226C0 (RtlGuardRestoreContext.c)
 *     RtlGuardCheckLongJumpTarget @ 0x180022AD0 (RtlGuardCheckLongJumpTarget.c)
 *     RtlpAddVectoredHandler @ 0x180024C88 (RtlpAddVectoredHandler.c)
 *     RtlpHpTagReAllocateHeap @ 0x180029EC0 (RtlpHpTagReAllocateHeap.c)
 *     RtlpHpLargeAllocSize @ 0x18002DC40 (RtlpHpLargeAllocSize.c)
 *     SbpUpdateCache @ 0x180039890 (SbpUpdateCache.c)
 *     TpAllocPoolInternal @ 0x18003A970 (TpAllocPoolInternal.c)
 *     LdrAddRefDll @ 0x18003D580 (LdrAddRefDll.c)
 *     RtlpTpWorkCallback @ 0x18003D6C0 (RtlpTpWorkCallback.c)
 *     TpPoolReferenceExistingGlobalPool @ 0x18003E034 (TpPoolReferenceExistingGlobalPool.c)
 *     RtlpWnfCalculateAndSetNextTimer @ 0x18003F9AC (RtlpWnfCalculateAndSetNextTimer.c)
 *     TppBarrierAdjust @ 0x180041550 (TppBarrierAdjust.c)
 *     RtlpWnfProcessCurrentDescriptor @ 0x180042680 (RtlpWnfProcessCurrentDescriptor.c)
 *     EtwpCheckForPrivatePreEnable @ 0x180045BB0 (EtwpCheckForPrivatePreEnable.c)
 *     EtwpProviderArrivalCallback @ 0x1800470F0 (EtwpProviderArrivalCallback.c)
 *     LdrUnloadDll @ 0x1800475F0 (LdrUnloadDll.c)
 *     LdrGetDllFullName @ 0x180047DE0 (LdrGetDllFullName.c)
 *     TppPoolpReferenceGlobalPool @ 0x180048D80 (TppPoolpReferenceGlobalPool.c)
 *     LdrpLoadDependentModuleInternal @ 0x18004C180 (LdrpLoadDependentModuleInternal.c)
 *     LdrpFindOrPrepareLoadingModule @ 0x18004E920 (LdrpFindOrPrepareLoadingModule.c)
 *     RtlpHpExtrasGet @ 0x180055550 (RtlpHpExtrasGet.c)
 *     RtlpHpSizeHeapInternal @ 0x180055950 (RtlpHpSizeHeapInternal.c)
 *     RtlpHpSizeHeap @ 0x180055D30 (RtlpHpSizeHeap.c)
 *     LdrGetDllHandleByMapping @ 0x18006CD70 (LdrGetDllHandleByMapping.c)
 *     LdrpFindLoadedDllByMapping @ 0x18006CE70 (LdrpFindLoadedDllByMapping.c)
 *     RtlUnwindEx @ 0x180077090 (RtlUnwindEx.c)
 *     TppWorkerThread @ 0x18007DCB0 (TppWorkerThread.c)
 *     TppAlpcpExecuteCallback @ 0x18007FCA0 (TppAlpcpExecuteCallback.c)
 *     RtlpHpTagFreeHeap @ 0x1800818A0 (RtlpHpTagFreeHeap.c)
 *     RtlSizeHeap @ 0x1800940C0 (RtlSizeHeap.c)
 *     RtlQueryProcessLockInformation @ 0x18009AC80 (RtlQueryProcessLockInformation.c)
 *     RtlSleepConditionVariableSRW @ 0x18009DB90 (RtlSleepConditionVariableSRW.c)
 *     RtlpFcCallChangeCallbacks @ 0x1800A0254 (RtlpFcCallChangeCallbacks.c)
 *     RtlpComputeSearchPath @ 0x1800AAB60 (RtlpComputeSearchPath.c)
 *     RtlpComputeDllPath @ 0x1800AC8B0 (RtlpComputeDllPath.c)
 *     RtlpComputeDllPathWithOptions @ 0x1800AC9A0 (RtlpComputeDllPathWithOptions.c)
 *     RtlpFlsFree @ 0x1800B84E4 (RtlpFlsFree.c)
 *     RtlpCSparseBitmapPageCommit @ 0x1800BA858 (RtlpCSparseBitmapPageCommit.c)
 *     RtlpHpVaMgrCtxAlloc @ 0x1800BBD44 (RtlpHpVaMgrCtxAlloc.c)
 *     RtlpHpExtrasSetPresent @ 0x1800C6F40 (RtlpHpExtrasSetPresent.c)
 *     _LdrpInitialize @ 0x1800D2584 (_LdrpInitialize.c)
 *     RtlpHpTagQueryTags @ 0x1800E0980 (RtlpHpTagQueryTags.c)
 *     RtlpLookupDynamicFunctionEntry @ 0x1800E3BF0 (RtlpLookupDynamicFunctionEntry.c)
 *     LdrpAcquireSchedulerSharedDataSlot @ 0x1800F2C94 (LdrpAcquireSchedulerSharedDataSlot.c)
 *     RtlCheckHeldCriticalSections @ 0x1800F4D10 (RtlCheckHeldCriticalSections.c)
 *     RtlpHpLargeLockAcquireShared @ 0x1800F5B3C (RtlpHpLargeLockAcquireShared.c)
 *     RtlQueryProtectedPolicy @ 0x1800F64E0 (RtlQueryProtectedPolicy.c)
 *     TpTrimPools @ 0x1800F7360 (TpTrimPools.c)
 *     RtlpCSparseBitmapLock @ 0x1800F7D90 (RtlpCSparseBitmapLock.c)
 *     RtlpComputeExePath @ 0x18010FCA0 (RtlpComputeExePath.c)
 *     LdrpGetAlternateResourceModuleHandleEx @ 0x180115990 (LdrpGetAlternateResourceModuleHandleEx.c)
 *     RtlpWnfRetryTimerCallback @ 0x180116B70 (RtlpWnfRetryTimerCallback.c)
 *     RtlStackDbStackAdd @ 0x18011F658 (RtlStackDbStackAdd.c)
 *     RtlpHpStackTraceSerialize @ 0x180120A28 (RtlpHpStackTraceSerialize.c)
 *     RtlPosixBarrier @ 0x18013F658 (RtlPosixBarrier.c)
 *     RtlQueryPointerMapping @ 0x180144940 (RtlQueryPointerMapping.c)
 *     RtlQueryPropertyStore @ 0x180144A00 (RtlQueryPropertyStore.c)
 *     RtlGetFeatureToggleConfiguration @ 0x180147260 (RtlGetFeatureToggleConfiguration.c)
 *     RtlRcuReadLock @ 0x180149260 (RtlRcuReadLock.c)
 *     RtlpHpStackTraceHeapSerialize @ 0x18014D580 (RtlpHpStackTraceHeapSerialize.c)
 *     RtlpStackDbSegmentFindOrCreate @ 0x18015F080 (RtlpStackDbSegmentFindOrCreate.c)
 *     RtlCloneUserProcess @ 0x180160780 (RtlCloneUserProcess.c)
 *     RtlPrepareForProcessCloning @ 0x180160C40 (RtlPrepareForProcessCloning.c)
 * Callees:
 *     RtlpAcquireSRWLockSharedContended @ 0x18007A040 (RtlpAcquireSRWLockSharedContended.c)
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
