/*
 * XREFs of RtlAcquireSRWLockShared @ 0x180010220
 * Callers:
 *     LdrpFindLoadedDllByMapping @ 0x180003ABC (LdrpFindLoadedDllByMapping.c)
 *     LdrpFreeTls @ 0x180004110 (LdrpFreeTls.c)
 *     LdrGetProcedureAddressForCaller @ 0x180004FF0 (LdrGetProcedureAddressForCaller.c)
 *     RtlpAddVectoredHandler @ 0x180006308 (RtlpAddVectoredHandler.c)
 *     RtlGuardRestoreContext @ 0x180008EA0 (RtlGuardRestoreContext.c)
 *     RtlGuardCheckLongJumpTarget @ 0x1800092B0 (RtlGuardCheckLongJumpTarget.c)
 *     LdrpLoadDependentModuleInternal @ 0x18000D2E0 (LdrpLoadDependentModuleInternal.c)
 *     LdrpFindOrPrepareLoadingModule @ 0x18000FA80 (LdrpFindOrPrepareLoadingModule.c)
 *     TppBarrierAdjust @ 0x180011D50 (TppBarrierAdjust.c)
 *     LdrpAllocateTls @ 0x180012580 (LdrpAllocateTls.c)
 *     RtlUnwindEx @ 0x180015480 (RtlUnwindEx.c)
 *     LdrGetDllFullName @ 0x18001A4C0 (LdrGetDllFullName.c)
 *     TppPoolpReferenceGlobalPool @ 0x18001B460 (TppPoolpReferenceGlobalPool.c)
 *     LdrUnloadDll @ 0x18001B6B0 (LdrUnloadDll.c)
 *     EtwpProviderArrivalCallback @ 0x18001B9D0 (EtwpProviderArrivalCallback.c)
 *     LdrResolveDelayLoadedAPI @ 0x18001CEA0 (LdrResolveDelayLoadedAPI.c)
 *     EtwpCheckForPrivatePreEnable @ 0x18001D9C0 (EtwpCheckForPrivatePreEnable.c)
 *     RtlpWnfProcessCurrentDescriptor @ 0x180020CB0 (RtlpWnfProcessCurrentDescriptor.c)
 *     TppWorkerThread @ 0x1800238D0 (TppWorkerThread.c)
 *     TppAlpcpExecuteCallback @ 0x1800258C0 (TppAlpcpExecuteCallback.c)
 *     RtlpHpTagFreeHeap @ 0x1800274C0 (RtlpHpTagFreeHeap.c)
 *     RtlpHpExtrasGet @ 0x18002CA80 (RtlpHpExtrasGet.c)
 *     RtlpHpSizeHeapInternal @ 0x18002CE80 (RtlpHpSizeHeapInternal.c)
 *     RtlpHpSizeHeap @ 0x18002D260 (RtlpHpSizeHeap.c)
 *     RtlSizeHeap @ 0x1800406D0 (RtlSizeHeap.c)
 *     RtlQueryProcessLockInformation @ 0x180046FA0 (RtlQueryProcessLockInformation.c)
 *     RtlSleepConditionVariableSRW @ 0x180049EB0 (RtlSleepConditionVariableSRW.c)
 *     RtlpFlsDataCleanup @ 0x18004EC20 (RtlpFlsDataCleanup.c)
 *     RtlpHpLfhOwnerCompact @ 0x1800506A0 (RtlpHpLfhOwnerCompact.c)
 *     _LdrpInitialize @ 0x180066904 (_LdrpInitialize.c)
 *     LdrAddRefDll @ 0x18006F1D0 (LdrAddRefDll.c)
 *     RtlpTpWorkCallback @ 0x18006F790 (RtlpTpWorkCallback.c)
 *     RtlpComputeDllPath @ 0x180084520 (RtlpComputeDllPath.c)
 *     RtlpComputeDllPathWithOptions @ 0x180084610 (RtlpComputeDllPathWithOptions.c)
 *     RtlpFlsFree @ 0x18008F164 (RtlpFlsFree.c)
 *     RtlpCSparseBitmapPageCommit @ 0x1800914D8 (RtlpCSparseBitmapPageCommit.c)
 *     RtlpHpVaMgrCtxAlloc @ 0x1800929C4 (RtlpHpVaMgrCtxAlloc.c)
 *     RtlpCreateSerializationGroup @ 0x180097970 (RtlpCreateSerializationGroup.c)
 *     RtlpCreateWnfNameSubscription @ 0x180099A4C (RtlpCreateWnfNameSubscription.c)
 *     RtlpHpTagReAllocateHeap @ 0x1800A0F10 (RtlpHpTagReAllocateHeap.c)
 *     RtlpHpLargeAllocSize @ 0x1800A4170 (RtlpHpLargeAllocSize.c)
 *     SbpUpdateCache @ 0x1800AAA50 (SbpUpdateCache.c)
 *     TpAllocPoolInternal @ 0x1800AB494 (TpAllocPoolInternal.c)
 *     RtlpHpTagQueryTags @ 0x1800B7714 (RtlpHpTagQueryTags.c)
 *     RtlpHpExtrasAppend @ 0x1800B7EC0 (RtlpHpExtrasAppend.c)
 *     RtlpHpExtrasSetPresent @ 0x1800C2830 (RtlpHpExtrasSetPresent.c)
 *     RtlpFcCallChangeCallbacks @ 0x1800D6B60 (RtlpFcCallChangeCallbacks.c)
 *     RtlpHpLfhSubsegmentReformatCheck @ 0x1800E00E0 (RtlpHpLfhSubsegmentReformatCheck.c)
 *     RtlpLookupDynamicFunctionEntry @ 0x1800E4C20 (RtlpLookupDynamicFunctionEntry.c)
 *     TpPoolReferenceExistingGlobalPool @ 0x1800EE0C8 (TpPoolReferenceExistingGlobalPool.c)
 *     LdrGetDllHandleByMapping @ 0x1800EF240 (LdrGetDllHandleByMapping.c)
 *     LdrpAcquireSchedulerSharedDataSlot @ 0x1800F1124 (LdrpAcquireSchedulerSharedDataSlot.c)
 *     RtlCheckHeldCriticalSections @ 0x1800F31A0 (RtlCheckHeldCriticalSections.c)
 *     RtlQueryProtectedPolicy @ 0x1800F4900 (RtlQueryProtectedPolicy.c)
 *     TpTrimPools @ 0x1800F57E0 (TpTrimPools.c)
 *     RtlpCSparseBitmapLock @ 0x1800F6210 (RtlpCSparseBitmapLock.c)
 *     RtlpComputeSearchPath @ 0x18010B010 (RtlpComputeSearchPath.c)
 *     RtlpComputeExePath @ 0x18010D270 (RtlpComputeExePath.c)
 *     LdrpGetAlternateResourceModuleHandleEx @ 0x180112C50 (LdrpGetAlternateResourceModuleHandleEx.c)
 *     RtlpWnfCalculateAndSetNextTimer @ 0x180113AC4 (RtlpWnfCalculateAndSetNextTimer.c)
 *     RtlpWnfRetryTimerCallback @ 0x180113BB0 (RtlpWnfRetryTimerCallback.c)
 *     RtlStackDbStackAdd @ 0x18011DD88 (RtlStackDbStackAdd.c)
 *     RtlpHpStackTraceSerialize @ 0x18011F158 (RtlpHpStackTraceSerialize.c)
 *     RtlPosixBarrier @ 0x18013DF28 (RtlPosixBarrier.c)
 *     RtlQueryPointerMapping @ 0x180143250 (RtlQueryPointerMapping.c)
 *     RtlQueryPropertyStore @ 0x180143310 (RtlQueryPropertyStore.c)
 *     RtlGetFeatureToggleConfiguration @ 0x180145CB0 (RtlGetFeatureToggleConfiguration.c)
 *     RtlRcuReadLock @ 0x180147CB0 (RtlRcuReadLock.c)
 *     RtlpHpStackTraceHeapSerialize @ 0x18014BFD0 (RtlpHpStackTraceHeapSerialize.c)
 *     RtlpStackDbSegmentFindOrCreate @ 0x18015DBBC (RtlpStackDbSegmentFindOrCreate.c)
 *     RtlCloneUserProcess @ 0x18015F270 (RtlCloneUserProcess.c)
 *     RtlPrepareForProcessCloning @ 0x18015F730 (RtlPrepareForProcessCloning.c)
 * Callees:
 *     RtlpAcquireSRWLockSharedContended @ 0x180017E40 (RtlpAcquireSRWLockSharedContended.c)
 */

__int64 __fastcall RtlAcquireSRWLockShared(volatile signed __int64 *a1)
{
  char *SchedulerSharedDataSlot; // r8
  __int64 i; // rdx
  volatile signed __int64 **v3; // rax
  __int64 result; // rax

  SchedulerSharedDataSlot = (char *)NtCurrentTeb()->SchedulerSharedDataSlot;
  if ( SchedulerSharedDataSlot )
  {
    for ( i = 0LL; (unsigned int)i < 8; i = (unsigned int)(i + 1) )
    {
      v3 = (volatile signed __int64 **)&SchedulerSharedDataSlot[8 * i];
      if ( !*v3 )
      {
        if ( v3 )
          *v3 = a1;
        break;
      }
    }
  }
  result = _InterlockedCompareExchange64(a1, 17LL, 0LL);
  if ( result )
    return RtlpAcquireSRWLockSharedContended(a1, 17LL, result);
  return result;
}
