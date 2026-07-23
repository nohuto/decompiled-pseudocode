/*
 * XREFs of RtlReleaseSRWLockShared @ 0x18003CC80
 * Callers:
 *     RtlpComputeDllPath @ 0x1800063D0 (RtlpComputeDllPath.c)
 *     RtlpComputeDllPathWithOptions @ 0x1800064C0 (RtlpComputeDllPathWithOptions.c)
 *     SbpUpdateCache @ 0x18000BBE0 (SbpUpdateCache.c)
 *     RtlSizeHeap @ 0x180021000 (RtlSizeHeap.c)
 *     RtlpFlsFree @ 0x180026B34 (RtlpFlsFree.c)
 *     RtlQueryCriticalSectionOwner @ 0x18002A0F0 (RtlQueryCriticalSectionOwner.c)
 *     RtlQueryProcessLockInformation @ 0x18002AFA0 (RtlQueryProcessLockInformation.c)
 *     RtlpCreateSerializationGroup @ 0x18002C7C0 (RtlpCreateSerializationGroup.c)
 *     RtlpCreateWnfNameSubscription @ 0x18002E89C (RtlpCreateWnfNameSubscription.c)
 *     LdrGetProcedureAddressForCaller @ 0x1800319F0 (LdrGetProcedureAddressForCaller.c)
 *     RtlpAddVectoredHandler @ 0x180032D08 (RtlpAddVectoredHandler.c)
 *     RtlGuardRestoreContext @ 0x1800358A0 (RtlGuardRestoreContext.c)
 *     RtlGuardCheckLongJumpTarget @ 0x180035CB0 (RtlGuardCheckLongJumpTarget.c)
 *     LdrpLoadDependentModuleInternal @ 0x180039CE0 (LdrpLoadDependentModuleInternal.c)
 *     LdrpFindLoadedDllByHandle @ 0x18003C2E0 (LdrpFindLoadedDllByHandle.c)
 *     LdrpFindOrPrepareLoadingModule @ 0x18003C480 (LdrpFindOrPrepareLoadingModule.c)
 *     LdrpFindLoadedDllByAddress @ 0x18003CEF0 (LdrpFindLoadedDllByAddress.c)
 *     TppBarrierAdjust @ 0x18003E750 (TppBarrierAdjust.c)
 *     LdrpAllocateTls @ 0x18003EF80 (LdrpAllocateTls.c)
 *     RtlUnwindEx @ 0x180041E80 (RtlUnwindEx.c)
 *     LdrGetDllFullName @ 0x180046EC0 (LdrGetDllFullName.c)
 *     TppPoolpReferenceGlobalPool @ 0x180047E60 (TppPoolpReferenceGlobalPool.c)
 *     LdrUnloadDll @ 0x1800480B0 (LdrUnloadDll.c)
 *     EtwpProviderArrivalCallback @ 0x1800483D0 (EtwpProviderArrivalCallback.c)
 *     LdrResolveDelayLoadedAPI @ 0x1800498A0 (LdrResolveDelayLoadedAPI.c)
 *     EtwpCheckForPrivatePreEnable @ 0x18004A3C0 (EtwpCheckForPrivatePreEnable.c)
 *     EtwDeliverDataBlock @ 0x18004AB50 (EtwDeliverDataBlock.c)
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
 *     RtlpHpLfhSlotAllocateSlow @ 0x180061270 (RtlpHpLfhSlotAllocateSlow.c)
 *     RtlpHpLfhSubsegmentDecommitPages @ 0x1800630F0 (RtlpHpLfhSubsegmentDecommitPages.c)
 *     RtlpFlsDataCleanup @ 0x180064800 (RtlpFlsDataCleanup.c)
 *     RtlpHpLfhOwnerCompact @ 0x180066280 (RtlpHpLfhOwnerCompact.c)
 *     LdrpGetFromMUIMemCache @ 0x1800771B0 (LdrpGetFromMUIMemCache.c)
 *     TpAllocPoolInternal @ 0x180085914 (TpAllocPoolInternal.c)
 *     LdrAddRefDll @ 0x18008BAB0 (LdrAddRefDll.c)
 *     RtlCSparseBitmapBitmaskWrite @ 0x18009BEDC (RtlCSparseBitmapBitmaskWrite.c)
 *     RtlSparseArrayElementAllocate @ 0x18009BFC0 (RtlSparseArrayElementAllocate.c)
 *     RtlpHpVaMgrCtxAlloc @ 0x18009D554 (RtlpHpVaMgrCtxAlloc.c)
 *     RtlpCSparseBitmapUnlock @ 0x18009D690 (RtlpCSparseBitmapUnlock.c)
 *     RtlpHpExtrasSetPresent @ 0x18009EA20 (RtlpHpExtrasSetPresent.c)
 *     RtlpHpExtrasAppend @ 0x18009EC10 (RtlpHpExtrasAppend.c)
 *     RtlpHpTagQueryTags @ 0x1800A1A5C (RtlpHpTagQueryTags.c)
 *     EtwpGetNextRegistration @ 0x1800A7AB0 (EtwpGetNextRegistration.c)
 *     LdrpFreeTls @ 0x1800AB4A0 (LdrpFreeTls.c)
 *     _LdrpInitialize @ 0x1800AEAE4 (_LdrpInitialize.c)
 *     LdrpFindLoadedDllByMapping @ 0x1800C77DC (LdrpFindLoadedDllByMapping.c)
 *     RtlpFcCallChangeCallbacks @ 0x1800D1ED0 (RtlpFcCallChangeCallbacks.c)
 *     RtlpHpStackTraceAddStack @ 0x1800DA400 (RtlpHpStackTraceAddStack.c)
 *     RtlpHpLfhSubsegmentReformatCheck @ 0x1800DB1E0 (RtlpHpLfhSubsegmentReformatCheck.c)
 *     RtlpHpStackTraceRemoveStack @ 0x1800DDEC0 (RtlpHpStackTraceRemoveStack.c)
 *     RtlpLookupDynamicFunctionEntry @ 0x1800E00D0 (RtlpLookupDynamicFunctionEntry.c)
 *     TpPoolReferenceExistingGlobalPool @ 0x1800E92A8 (TpPoolReferenceExistingGlobalPool.c)
 *     LdrGetDllHandleByMapping @ 0x1800EA420 (LdrGetDllHandleByMapping.c)
 *     LdrpAcquireSchedulerSharedDataSlot @ 0x1800EBDA4 (LdrpAcquireSchedulerSharedDataSlot.c)
 *     RtlCheckHeldCriticalSections @ 0x1800EDA90 (RtlCheckHeldCriticalSections.c)
 *     RtlQueryProtectedPolicy @ 0x1800EF520 (RtlQueryProtectedPolicy.c)
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
 *     RtlRcuReadUnlock @ 0x1801460D0 (RtlRcuReadUnlock.c)
 *     RtlpHpStackTraceHeapSerialize @ 0x18014A380 (RtlpHpStackTraceHeapSerialize.c)
 *     EtwEnumerateProcessRegGuids @ 0x18015A110 (EtwEnumerateProcessRegGuids.c)
 *     RtlpStackDbSegmentFindOrCreate @ 0x18015BF7C (RtlpStackDbSegmentFindOrCreate.c)
 *     LdrpUnlockTlsDelayedReclaimTable @ 0x18015DEC8 (LdrpUnlockTlsDelayedReclaimTable.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1800417E0 (RtlRaiseStatus.c)
 *     NtSetInformationThread @ 0x1801601F0 (NtSetInformationThread.c)
 *     ZwAlertThreadByThreadIdEx @ 0x180160E80 (ZwAlertThreadByThreadIdEx.c)
 */

void __cdecl RtlReleaseSRWLockShared(PRTL_SRWLOCK SRWLock)
{
  signed __int64 v2; // rax
  signed __int64 v3; // rcx
  char *SchedulerSharedDataSlot; // rdx
  unsigned int v5; // eax
  unsigned __int64 v6; // rdi
  char *v7; // rbx
  signed __int64 v8; // r8
  bool v9; // zf
  signed __int64 v10; // rax
  _QWORD *v11; // rax
  __int64 i; // rdx
  __int64 v13; // r8
  __int64 v14; // rax
  signed __int64 v15; // rdx
  signed __int64 v16; // rax
  PRTL_SRWLOCK v17; // rsi
  _QWORD *v18; // r9
  __int64 v19; // r8
  __int64 v20; // rax
  signed __int64 v21; // rax
  __int64 v22; // rbx
  __int64 v23; // rcx
  signed __int64 v24; // rax
  _QWORD *v25; // rax
  _QWORD ThreadInformation[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = _InterlockedCompareExchange64((volatile signed __int64 *)SRWLock, 0LL, 17LL);
  v3 = v2;
  if ( v2 == 17 )
    goto LABEL_2;
  if ( (v2 & 1) == 0 )
    RtlRaiseStatus(-1073741212);
  while ( (v3 & 2) == 0 )
  {
    v8 = 0LL;
    if ( (v3 & 0xFFFFFFFFFFFFFFF0uLL) != 0x10 )
      v8 = v3 - 16;
    v10 = _InterlockedCompareExchange64((volatile signed __int64 *)SRWLock, v8, v3);
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
    v16 = _InterlockedCompareExchange64((volatile signed __int64 *)SRWLock, v14 + v3, v3);
    if ( v3 == v16 )
      break;
    v3 = v16;
  }
  if ( (v3 & 6) == 2 )
  {
    v17 = SRWLock;
    while ( 1 )
    {
      while ( (v15 & 1) != 0 )
      {
        v24 = _InterlockedCompareExchange64((volatile signed __int64 *)SRWLock, v15 - 4, v15);
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
      v21 = _InterlockedCompareExchange64((volatile signed __int64 *)SRWLock, 0LL, v15);
      v9 = v15 == v21;
      v15 = v21;
      if ( v9 )
        goto LABEL_35;
    }
    *(_QWORD *)((v15 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v20;
    *(_QWORD *)(v19 + 16) = 0LL;
    _InterlockedAnd64((volatile signed __int64 *)SRWLock, 0xFFFFFFFFFFFFFFFBuLL);
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
  SchedulerSharedDataSlot = (char *)NtCurrentTeb()->SchedulerSharedDataSlot;
  if ( SchedulerSharedDataSlot )
  {
    v5 = 0;
    v6 = (unsigned __int64)SRWLock & 0x7FFFFFFFFFFFFFFCLL;
    while ( v5 < 8 )
    {
      v7 = &SchedulerSharedDataSlot[8 * v5];
      if ( (*(_QWORD *)v7 & 0x7FFFFFFFFFFFFFFCLL) == v6 )
      {
        if ( v7 )
        {
          *v7 |= 2u;
          if ( v7[7] < 0 )
          {
            ThreadInformation[1] = 0LL;
            ThreadInformation[0] = (v7 - (char *)NtCurrentTeb()->SchedulerSharedDataSlot) >> 3;
            NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadUpdateLockOwnership, ThreadInformation, 0x10u);
          }
          *(_QWORD *)v7 = 0LL;
        }
        return;
      }
      ++v5;
    }
  }
}
