/*
 * XREFs of RtlReleaseSRWLockShared @ 0x18004F120
 * Callers:
 *     RtlpCreateSerializationGroup @ 0x180002FE0 (RtlpCreateSerializationGroup.c)
 *     RtlpCreateWnfNameSubscription @ 0x1800050BC (RtlpCreateWnfNameSubscription.c)
 *     LdrGetProcedureAddressForCaller @ 0x180007BE0 (LdrGetProcedureAddressForCaller.c)
 *     LdrpFreeTls @ 0x180009480 (LdrpFreeTls.c)
 *     RtlpHpLfhSubsegmentReformatCheck @ 0x180009C40 (RtlpHpLfhSubsegmentReformatCheck.c)
 *     RtlpFlsDataCleanup @ 0x18000A8B0 (RtlpFlsDataCleanup.c)
 *     RtlpHpLfhOwnerCompact @ 0x18000C2E0 (RtlpHpLfhOwnerCompact.c)
 *     LdrpGetFromMUIMemCache @ 0x18001D230 (LdrpGetFromMUIMemCache.c)
 *     LdrpAllocateTls @ 0x180020710 (LdrpAllocateTls.c)
 *     LdrResolveDelayLoadedAPI @ 0x180021000 (LdrResolveDelayLoadedAPI.c)
 *     RtlGuardRestoreContext @ 0x1800226C0 (RtlGuardRestoreContext.c)
 *     RtlGuardCheckLongJumpTarget @ 0x180022AD0 (RtlGuardCheckLongJumpTarget.c)
 *     RtlpAddVectoredHandler @ 0x180024C88 (RtlpAddVectoredHandler.c)
 *     RtlpHpTagReAllocateHeap @ 0x180029EC0 (RtlpHpTagReAllocateHeap.c)
 *     RtlpHpLargeAllocSize @ 0x18002DC40 (RtlpHpLargeAllocSize.c)
 *     RtlpHpLfhSlotAllocateSlow @ 0x180030120 (RtlpHpLfhSlotAllocateSlow.c)
 *     RtlpHpLfhSubsegmentDecommitPages @ 0x180031FA0 (RtlpHpLfhSubsegmentDecommitPages.c)
 *     SbpUpdateCache @ 0x180039890 (SbpUpdateCache.c)
 *     TpAllocPoolInternal @ 0x18003A970 (TpAllocPoolInternal.c)
 *     LdrAddRefDll @ 0x18003D580 (LdrAddRefDll.c)
 *     TpPoolReferenceExistingGlobalPool @ 0x18003E034 (TpPoolReferenceExistingGlobalPool.c)
 *     RtlpWnfCalculateAndSetNextTimer @ 0x18003F9AC (RtlpWnfCalculateAndSetNextTimer.c)
 *     TppBarrierAdjust @ 0x180041550 (TppBarrierAdjust.c)
 *     RtlpWnfProcessCurrentDescriptor @ 0x180042680 (RtlpWnfProcessCurrentDescriptor.c)
 *     EtwDeliverDataBlock @ 0x1800443B0 (EtwDeliverDataBlock.c)
 *     EtwpCheckForPrivatePreEnable @ 0x180045BB0 (EtwpCheckForPrivatePreEnable.c)
 *     EtwpProviderArrivalCallback @ 0x1800470F0 (EtwpProviderArrivalCallback.c)
 *     LdrUnloadDll @ 0x1800475F0 (LdrUnloadDll.c)
 *     LdrGetDllFullName @ 0x180047DE0 (LdrGetDllFullName.c)
 *     TppPoolpReferenceGlobalPool @ 0x180048D80 (TppPoolpReferenceGlobalPool.c)
 *     LdrpLoadDependentModuleInternal @ 0x18004C180 (LdrpLoadDependentModuleInternal.c)
 *     LdrpFindLoadedDllByHandle @ 0x18004E780 (LdrpFindLoadedDllByHandle.c)
 *     LdrpFindOrPrepareLoadingModule @ 0x18004E920 (LdrpFindOrPrepareLoadingModule.c)
 *     LdrpFindLoadedDllByAddress @ 0x18004F390 (LdrpFindLoadedDllByAddress.c)
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
 *     RtlQueryCriticalSectionOwner @ 0x180099E40 (RtlQueryCriticalSectionOwner.c)
 *     RtlQueryProcessLockInformation @ 0x18009AC80 (RtlQueryProcessLockInformation.c)
 *     RtlSleepConditionVariableSRW @ 0x18009DB90 (RtlSleepConditionVariableSRW.c)
 *     RtlpFcCallChangeCallbacks @ 0x1800A0254 (RtlpFcCallChangeCallbacks.c)
 *     RtlpComputeSearchPath @ 0x1800AAB60 (RtlpComputeSearchPath.c)
 *     RtlpComputeDllPath @ 0x1800AC8B0 (RtlpComputeDllPath.c)
 *     RtlpComputeDllPathWithOptions @ 0x1800AC9A0 (RtlpComputeDllPathWithOptions.c)
 *     RtlpFlsFree @ 0x1800B84E4 (RtlpFlsFree.c)
 *     RtlCSparseBitmapBitmaskWrite @ 0x1800BA6D0 (RtlCSparseBitmapBitmaskWrite.c)
 *     RtlSparseArrayElementAllocate @ 0x1800BA7B4 (RtlSparseArrayElementAllocate.c)
 *     RtlpHpVaMgrCtxAlloc @ 0x1800BBD44 (RtlpHpVaMgrCtxAlloc.c)
 *     RtlpCSparseBitmapUnlock @ 0x1800BBE80 (RtlpCSparseBitmapUnlock.c)
 *     RtlpHpExtrasSetPresent @ 0x1800C6F40 (RtlpHpExtrasSetPresent.c)
 *     _LdrpInitialize @ 0x1800D2584 (_LdrpInitialize.c)
 *     RtlpHpStackTraceAddStack @ 0x1800DCD90 (RtlpHpStackTraceAddStack.c)
 *     RtlpHpStackTraceRemoveStack @ 0x1800DF5A0 (RtlpHpStackTraceRemoveStack.c)
 *     RtlpHpTagQueryTags @ 0x1800E0980 (RtlpHpTagQueryTags.c)
 *     RtlpLookupDynamicFunctionEntry @ 0x1800E3BF0 (RtlpLookupDynamicFunctionEntry.c)
 *     EtwpGetNextRegistration @ 0x1800E63E0 (EtwpGetNextRegistration.c)
 *     LdrpAcquireSchedulerSharedDataSlot @ 0x1800F2C94 (LdrpAcquireSchedulerSharedDataSlot.c)
 *     RtlCheckHeldCriticalSections @ 0x1800F4D10 (RtlCheckHeldCriticalSections.c)
 *     RtlpHpLargeAllocSetExtraPresent @ 0x1800F5AF8 (RtlpHpLargeAllocSetExtraPresent.c)
 *     RtlQueryProtectedPolicy @ 0x1800F64E0 (RtlQueryProtectedPolicy.c)
 *     TpTrimPools @ 0x1800F7360 (TpTrimPools.c)
 *     RtlpComputeExePath @ 0x18010FCA0 (RtlpComputeExePath.c)
 *     LdrpGetAlternateResourceModuleHandleEx @ 0x180115990 (LdrpGetAlternateResourceModuleHandleEx.c)
 *     RtlpWnfRetryTimerCallback @ 0x180116B70 (RtlpWnfRetryTimerCallback.c)
 *     RtlStackDbStackAdd @ 0x18011F658 (RtlStackDbStackAdd.c)
 *     RtlpHpStackTraceSerialize @ 0x180120A28 (RtlpHpStackTraceSerialize.c)
 *     RtlPosixBarrier @ 0x18013F658 (RtlPosixBarrier.c)
 *     RtlQueryPointerMapping @ 0x180144940 (RtlQueryPointerMapping.c)
 *     RtlQueryPropertyStore @ 0x180144A00 (RtlQueryPropertyStore.c)
 *     RtlGetFeatureToggleConfiguration @ 0x180147260 (RtlGetFeatureToggleConfiguration.c)
 *     RtlRcuReadUnlock @ 0x1801492D0 (RtlRcuReadUnlock.c)
 *     RtlpHpStackTraceHeapSerialize @ 0x18014D580 (RtlpHpStackTraceHeapSerialize.c)
 *     EtwEnumerateProcessRegGuids @ 0x18015D300 (EtwEnumerateProcessRegGuids.c)
 *     RtlpStackDbSegmentFindOrCreate @ 0x18015F080 (RtlpStackDbSegmentFindOrCreate.c)
 *     LdrpUnlockTlsDelayedReclaimTable @ 0x18016105C (LdrpUnlockTlsDelayedReclaimTable.c)
 * Callees:
 *     RtlRaiseStatus @ 0x18007C3F0 (RtlRaiseStatus.c)
 *     NtSetInformationThread @ 0x1801633C0 (NtSetInformationThread.c)
 *     ZwAlertThreadByThreadIdEx @ 0x180164050 (ZwAlertThreadByThreadIdEx.c)
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
