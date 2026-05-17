/*
 * XREFs of RtlReleaseSRWLockShared @ 0x180010280
 * Callers:
 *     LdrpFindLoadedDllByMapping @ 0x180003ABC (LdrpFindLoadedDllByMapping.c)
 *     LdrpFreeTls @ 0x180004110 (LdrpFreeTls.c)
 *     LdrGetProcedureAddressForCaller @ 0x180004FF0 (LdrGetProcedureAddressForCaller.c)
 *     RtlpAddVectoredHandler @ 0x180006308 (RtlpAddVectoredHandler.c)
 *     RtlGuardRestoreContext @ 0x180008EA0 (RtlGuardRestoreContext.c)
 *     RtlGuardCheckLongJumpTarget @ 0x1800092B0 (RtlGuardCheckLongJumpTarget.c)
 *     LdrpLoadDependentModuleInternal @ 0x18000D2E0 (LdrpLoadDependentModuleInternal.c)
 *     LdrpFindLoadedDllByHandle @ 0x18000F8E0 (LdrpFindLoadedDllByHandle.c)
 *     LdrpFindOrPrepareLoadingModule @ 0x18000FA80 (LdrpFindOrPrepareLoadingModule.c)
 *     LdrpFindLoadedDllByAddress @ 0x1800104F0 (LdrpFindLoadedDllByAddress.c)
 *     TppBarrierAdjust @ 0x180011D50 (TppBarrierAdjust.c)
 *     LdrpAllocateTls @ 0x180012580 (LdrpAllocateTls.c)
 *     RtlUnwindEx @ 0x180015480 (RtlUnwindEx.c)
 *     LdrGetDllFullName @ 0x18001A4C0 (LdrGetDllFullName.c)
 *     TppPoolpReferenceGlobalPool @ 0x18001B460 (TppPoolpReferenceGlobalPool.c)
 *     LdrUnloadDll @ 0x18001B6B0 (LdrUnloadDll.c)
 *     EtwpProviderArrivalCallback @ 0x18001B9D0 (EtwpProviderArrivalCallback.c)
 *     LdrResolveDelayLoadedAPI @ 0x18001CEA0 (LdrResolveDelayLoadedAPI.c)
 *     EtwpCheckForPrivatePreEnable @ 0x18001D9C0 (EtwpCheckForPrivatePreEnable.c)
 *     EtwDeliverDataBlock @ 0x18001E150 (EtwDeliverDataBlock.c)
 *     RtlpWnfProcessCurrentDescriptor @ 0x180020CB0 (RtlpWnfProcessCurrentDescriptor.c)
 *     TppWorkerThread @ 0x1800238D0 (TppWorkerThread.c)
 *     TppAlpcpExecuteCallback @ 0x1800258C0 (TppAlpcpExecuteCallback.c)
 *     RtlpHpTagFreeHeap @ 0x1800274C0 (RtlpHpTagFreeHeap.c)
 *     RtlpHpExtrasGet @ 0x18002CA80 (RtlpHpExtrasGet.c)
 *     RtlpHpSizeHeapInternal @ 0x18002CE80 (RtlpHpSizeHeapInternal.c)
 *     RtlpHpSizeHeap @ 0x18002D260 (RtlpHpSizeHeap.c)
 *     RtlSizeHeap @ 0x1800406D0 (RtlSizeHeap.c)
 *     RtlQueryCriticalSectionOwner @ 0x180046160 (RtlQueryCriticalSectionOwner.c)
 *     RtlQueryProcessLockInformation @ 0x180046FA0 (RtlQueryProcessLockInformation.c)
 *     RtlSleepConditionVariableSRW @ 0x180049EB0 (RtlSleepConditionVariableSRW.c)
 *     RtlpHpLfhSlotAllocateSlow @ 0x18004B690 (RtlpHpLfhSlotAllocateSlow.c)
 *     RtlpHpLfhSubsegmentDecommitPages @ 0x18004D510 (RtlpHpLfhSubsegmentDecommitPages.c)
 *     RtlpFlsDataCleanup @ 0x18004EC20 (RtlpFlsDataCleanup.c)
 *     RtlpHpLfhOwnerCompact @ 0x1800506A0 (RtlpHpLfhOwnerCompact.c)
 *     LdrpGetFromMUIMemCache @ 0x1800615D0 (LdrpGetFromMUIMemCache.c)
 *     _LdrpInitialize @ 0x180066904 (_LdrpInitialize.c)
 *     LdrAddRefDll @ 0x18006F1D0 (LdrAddRefDll.c)
 *     RtlpComputeDllPath @ 0x180084520 (RtlpComputeDllPath.c)
 *     RtlpComputeDllPathWithOptions @ 0x180084610 (RtlpComputeDllPathWithOptions.c)
 *     EtwpGetNextRegistration @ 0x18008BFF0 (EtwpGetNextRegistration.c)
 *     RtlpFlsFree @ 0x18008F164 (RtlpFlsFree.c)
 *     RtlCSparseBitmapBitmaskWrite @ 0x180091350 (RtlCSparseBitmapBitmaskWrite.c)
 *     RtlSparseArrayElementAllocate @ 0x180091434 (RtlSparseArrayElementAllocate.c)
 *     RtlpHpVaMgrCtxAlloc @ 0x1800929C4 (RtlpHpVaMgrCtxAlloc.c)
 *     RtlpCSparseBitmapUnlock @ 0x180092B00 (RtlpCSparseBitmapUnlock.c)
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
 *     RtlpHpStackTraceAddStack @ 0x1800DF290 (RtlpHpStackTraceAddStack.c)
 *     RtlpHpLfhSubsegmentReformatCheck @ 0x1800E00E0 (RtlpHpLfhSubsegmentReformatCheck.c)
 *     RtlpHpStackTraceRemoveStack @ 0x1800E28F0 (RtlpHpStackTraceRemoveStack.c)
 *     RtlpLookupDynamicFunctionEntry @ 0x1800E4C20 (RtlpLookupDynamicFunctionEntry.c)
 *     TpPoolReferenceExistingGlobalPool @ 0x1800EE0C8 (TpPoolReferenceExistingGlobalPool.c)
 *     LdrGetDllHandleByMapping @ 0x1800EF240 (LdrGetDllHandleByMapping.c)
 *     LdrpAcquireSchedulerSharedDataSlot @ 0x1800F1124 (LdrpAcquireSchedulerSharedDataSlot.c)
 *     RtlCheckHeldCriticalSections @ 0x1800F31A0 (RtlCheckHeldCriticalSections.c)
 *     RtlQueryProtectedPolicy @ 0x1800F4900 (RtlQueryProtectedPolicy.c)
 *     TpTrimPools @ 0x1800F57E0 (TpTrimPools.c)
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
 *     RtlRcuReadUnlock @ 0x180147D20 (RtlRcuReadUnlock.c)
 *     RtlpHpStackTraceHeapSerialize @ 0x18014BFD0 (RtlpHpStackTraceHeapSerialize.c)
 *     EtwEnumerateProcessRegGuids @ 0x18015BD50 (EtwEnumerateProcessRegGuids.c)
 *     RtlpStackDbSegmentFindOrCreate @ 0x18015DBBC (RtlpStackDbSegmentFindOrCreate.c)
 *     LdrpUnlockTlsDelayedReclaimTable @ 0x18015FB08 (LdrpUnlockTlsDelayedReclaimTable.c)
 * Callees:
 *     RtlRaiseStatus @ 0x180014DE0 (RtlRaiseStatus.c)
 *     NtSetInformationThread @ 0x180161E30 (NtSetInformationThread.c)
 *     ZwAlertThreadByThreadIdEx @ 0x180162AC0 (ZwAlertThreadByThreadIdEx.c)
 */

__int64 __fastcall RtlReleaseSRWLockShared(volatile signed __int64 *a1)
{
  signed __int64 v2; // rax
  signed __int64 v3; // rcx
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // rdi
  _BYTE *v7; // rbx
  signed __int64 v8; // r8
  bool v9; // zf
  signed __int64 v10; // rax
  _QWORD *v11; // rax
  __int64 i; // rdx
  __int64 v13; // r8
  __int64 v14; // rax
  signed __int64 v15; // rdx
  signed __int64 v16; // rax
  volatile signed __int64 *v17; // rsi
  _QWORD *v18; // r9
  __int64 v19; // r8
  __int64 v20; // rax
  signed __int64 v21; // rax
  __int64 v22; // rbx
  __int64 v23; // rcx
  signed __int64 v24; // rax
  _QWORD *v25; // rax
  _QWORD v26[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = _InterlockedCompareExchange64(a1, 0LL, 17LL);
  v3 = v2;
  if ( v2 == 17 )
    goto LABEL_2;
  if ( (v2 & 1) == 0 )
    RtlRaiseStatus(3221226084LL);
  while ( (v3 & 2) == 0 )
  {
    v8 = 0LL;
    if ( (v3 & 0xFFFFFFFFFFFFFFF0uLL) != 0x10 )
      v8 = v3 - 16;
    v10 = _InterlockedCompareExchange64(a1, v8, v3);
    v9 = v3 == v10;
    v3 = v10;
    if ( v9 )
      goto LABEL_2;
  }
  if ( (v3 & 8) != 0 )
  {
    v11 = (_QWORD *)(v3 & 0xFFFFFFFFFFFFFFF0uLL);
    for ( i = *(_QWORD *)((v3 & 0xFFFFFFFFFFFFFFF0uLL) + 8); !i; i = v11[1] )
      v11 = (_QWORD *)*v11;
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(i + 32), 0xFFFFFFFF) > 1 )
      goto LABEL_2;
    v13 = -9LL;
  }
  else
  {
    v13 = -1LL;
  }
  while ( 1 )
  {
    if ( (v3 & 4) != 0 || (v14 = v13 + 4, (v3 & 2) == 0) )
      v14 = v13;
    v15 = v14 + v3;
    v16 = _InterlockedCompareExchange64(a1, v14 + v3, v3);
    if ( v3 == v16 )
      break;
    v3 = v16;
  }
  if ( (v3 & 6) == 2 )
  {
    v17 = a1;
    while ( 1 )
    {
      while ( (v15 & 1) != 0 )
      {
        v24 = _InterlockedCompareExchange64(a1, v15 - 4, v15);
        v9 = v15 == v24;
        v15 = v24;
        if ( v9 )
          goto LABEL_2;
      }
      v18 = (_QWORD *)(v15 & 0xFFFFFFFFFFFFFFF0uLL);
      v19 = *(_QWORD *)((v15 & 0xFFFFFFFFFFFFFFF0uLL) + 8);
      if ( !v19 )
      {
        do
        {
          v25 = v18;
          v18 = (_QWORD *)*v18;
          v18[2] = v25;
          v19 = v18[1];
        }
        while ( !v19 );
        if ( v18 != (_QWORD *)(v15 & 0xFFFFFFFFFFFFFFF0uLL) )
          *(_QWORD *)((v15 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v19;
      }
      if ( (*(_DWORD *)(v19 + 36) & 1) != 0 )
      {
        v20 = *(_QWORD *)(v19 + 16);
        if ( v20 )
          break;
      }
      v17 = 0LL;
      v21 = _InterlockedCompareExchange64(a1, 0LL, v15);
      v9 = v15 == v21;
      v15 = v21;
      if ( v9 )
        goto LABEL_35;
    }
    *(_QWORD *)((v15 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v20;
    *(_QWORD *)(v19 + 16) = 0LL;
    _InterlockedAnd64(a1, 0xFFFFFFFFFFFFFFFBuLL);
    do
    {
LABEL_35:
      v22 = *(_QWORD *)(v19 + 16);
      v23 = *(_QWORD *)(v19 + 24);
      _interlockedbittestandset((volatile signed __int32 *)(v19 + 36), 2u);
      if ( !_interlockedbittestandreset((volatile signed __int32 *)(v19 + 36), 1u) )
        ZwAlertThreadByThreadIdEx(v23, v17, v19, v18);
      v19 = v22;
    }
    while ( v22 );
  }
LABEL_2:
  result = (__int64)NtCurrentTeb();
  v5 = *(_QWORD *)(result + 6224);
  if ( v5 )
  {
    result = 0LL;
    v6 = (unsigned __int64)a1 & 0x7FFFFFFFFFFFFFFCLL;
    while ( (unsigned int)result < 8 )
    {
      v7 = (_BYTE *)(v5 + 8LL * (unsigned int)result);
      if ( (*(_QWORD *)v7 & 0x7FFFFFFFFFFFFFFCLL) == v6 )
      {
        if ( v7 )
        {
          *v7 |= 2u;
          if ( (char)v7[7] < 0 )
          {
            v26[1] = 0LL;
            v26[0] = (v7 - (char *)NtCurrentTeb()->SchedulerSharedDataSlot) >> 3;
            result = NtSetInformationThread(-2LL, 56LL, v26);
          }
          *(_QWORD *)v7 = 0LL;
        }
        return result;
      }
      result = (unsigned int)(result + 1);
    }
  }
  return result;
}
