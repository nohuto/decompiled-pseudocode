/*
 * XREFs of KiStartDynamicProcessor @ 0x14073B478
 * Callers:
 *     KeStartDynamicProcessor @ 0x14073C4E0 (KeStartDynamicProcessor.c)
 * Callees:
 *     MmUnlockPagableImageSection @ 0x1402C7030 (MmUnlockPagableImageSection.c)
 *     KiRcuProcessorInitialize @ 0x1404D5904 (KiRcuProcessorInitialize.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     HalStartDynamicProcessor @ 0x1405416E0 (HalStartDynamicProcessor.c)
 *     HalRegisterDynamicProcessor @ 0x140544150 (HalRegisterDynamicProcessor.c)
 *     KiAllocateIdleSearchStructures @ 0x1405B5990 (KiAllocateIdleSearchStructures.c)
 *     KiAllocateLocalSharedReadyQueue @ 0x1405B5B3C (KiAllocateLocalSharedReadyQueue.c)
 *     KiAllocatePrcbThreads @ 0x1405B5BB8 (KiAllocatePrcbThreads.c)
 *     KiAllocateProcessorStateInitializationParameters @ 0x1405B5EB0 (KiAllocateProcessorStateInitializationParameters.c)
 *     KiAllocateStaticRescheduleContext @ 0x1405B5F24 (KiAllocateStaticRescheduleContext.c)
 *     KiDynamicProcessorInitialization @ 0x1405B6BFC (KiDynamicProcessorInitialization.c)
 *     KiFreeIdleSearchStructures @ 0x1405B6E18 (KiFreeIdleSearchStructures.c)
 *     KiFreeLocalSharedReadyQueue @ 0x1405B6E9C (KiFreeLocalSharedReadyQueue.c)
 *     KiFreePrcbThreads @ 0x1405B6ED0 (KiFreePrcbThreads.c)
 *     KiFreeProcessorStateInitializationParameters @ 0x1405B7038 (KiFreeProcessorStateInitializationParameters.c)
 *     KiFreeStaticRescheduleContext @ 0x1405B70B0 (KiFreeStaticRescheduleContext.c)
 *     KiInitializeProcessorStateInitializationParameters @ 0x1405B72DC (KiInitializeProcessorStateInitializationParameters.c)
 *     KiQueryProcessorNode @ 0x1405BB8C0 (KiQueryProcessorNode.c)
 *     KiUnassignProcessorNumberFromPrcb @ 0x1405BBB18 (KiUnassignProcessorNumberFromPrcb.c)
 *     KiAllocateProcessorHiberSwapShadowStacks @ 0x1405BC3A4 (KiAllocateProcessorHiberSwapShadowStacks.c)
 *     KiDynamicProcessorAddNotification @ 0x1405BC578 (KiDynamicProcessorAddNotification.c)
 *     KiAllocateForceParkingData @ 0x1405C8218 (KiAllocateForceParkingData.c)
 *     KiFreeForceParkingData @ 0x1405C8508 (KiFreeForceParkingData.c)
 *     ExInitializeProcessor @ 0x140653874 (ExInitializeProcessor.c)
 *     ExDeletePoolTagTable @ 0x140653F80 (ExDeletePoolTagTable.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     CcInitializeProcessor @ 0x140706B20 (CcInitializeProcessor.c)
 *     HvlDeleteProcessor @ 0x14070ED24 (HvlDeleteProcessor.c)
 *     HvlInitializeProcessor @ 0x14070EDCC (HvlInitializeProcessor.c)
 *     IoInitializeProcessor @ 0x1407115FC (IoInitializeProcessor.c)
 *     KiInitializeProcessorState @ 0x14073CAB0 (KiInitializeProcessorState.c)
 *     KiInitializeSingleDpcRuntimeHistoryHashTable @ 0x14073CF28 (KiInitializeSingleDpcRuntimeHistoryHashTable.c)
 *     ObInitializeProcessor @ 0x1407431B8 (ObInitializeProcessor.c)
 *     EtwDeleteProcessor @ 0x1407A63E0 (EtwDeleteProcessor.c)
 *     EtwInitializeProcessor @ 0x1407A65DC (EtwInitializeProcessor.c)
 *     EtwpInitializeActivityIdSeed @ 0x1407A80C4 (EtwpInitializeActivityIdSeed.c)
 *     ExCreatePoolTagTable @ 0x1407B7CFC (ExCreatePoolTagTable.c)
 *     CmInitializeProcessorCallbacks @ 0x1407D145C (CmInitializeProcessorCallbacks.c)
 *     CmInitializeProcessor @ 0x1407D4BCC (CmInitializeProcessor.c)
 *     MmDeleteProcessor @ 0x1407E8154 (MmDeleteProcessor.c)
 *     MmLockPagableSectionByHandle @ 0x140A3FE90 (MmLockPagableSectionByHandle.c)
 *     KeInitializeTimerTable @ 0x140A7BB0C (KeInitializeTimerTable.c)
 *     KiFreeThreadCycleTable @ 0x140B561D0 (KiFreeThreadCycleTable.c)
 *     KiInitializeThreadCycleTable @ 0x140B566D0 (KiInitializeThreadCycleTable.c)
 *     KiInitializePrcbContext @ 0x140B56930 (KiInitializePrcbContext.c)
 *     KiInitializeDynamicProcessor @ 0x140B57558 (KiInitializeDynamicProcessor.c)
 *     KiUnshadowProcessorAllocation @ 0x140B5ACA4 (KiUnshadowProcessorAllocation.c)
 *     KiComputeProcessorDataSize @ 0x140B5AD64 (KiComputeProcessorDataSize.c)
 *     KiAddProcessorToGroupSchedulingDatabase @ 0x140B5AD94 (KiAddProcessorToGroupSchedulingDatabase.c)
 *     WheaInitializeProcessor @ 0x140B61B24 (WheaInitializeProcessor.c)
 *     MmInitializeProcessor @ 0x140B62038 (MmInitializeProcessor.c)
 *     VmInitializeProcessor @ 0x140B6E698 (VmInitializeProcessor.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall KiStartDynamicProcessor(__int64 a1, int a2, unsigned __int16 a3, unsigned int a4)
{
  ULONG_PTR v5; // r14
  __int64 v6; // r12
  __int64 v7; // r13
  _OWORD *v8; // rsi
  struct _KPRCB *v9; // rdi
  int ProcessorStateInitializationParameters; // ebx
  __int64 v11; // r9
  int v12; // r9d
  __int64 v13; // rdx
  int v14; // r8d
  int v15; // r9d
  PVOID v16; // rcx
  __int64 v17; // r12
  int v18; // r15d
  int started; // eax
  __int64 v20; // rax
  _OWORD *v21; // rcx
  __int128 v22; // xmm1
  SIZE_T v23; // rdx
  MEMORY_CACHING_TYPE v24; // r8d
  void *VmInternal; // rcx
  unsigned __int16 v27; // [rsp+30h] [rbp-D0h] BYREF
  ULONG_PTR v28; // [rsp+38h] [rbp-C8h] BYREF
  int v29; // [rsp+40h] [rbp-C0h] BYREF
  int v30; // [rsp+44h] [rbp-BCh] BYREF
  __int64 PoolTagTable; // [rsp+48h] [rbp-B8h]
  _DWORD v32[60]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v33[16]; // [rsp+140h] [rbp+40h] BYREF
  __int128 v34; // [rsp+150h] [rbp+50h]
  __int64 v35; // [rsp+1C8h] [rbp+C8h]
  ULONG_PTR BugCheckParameter1[184]; // [rsp+2B0h] [rbp+1B0h] BYREF

  LODWORD(v28) = a2;
  v5 = a4;
  v29 = 0;
  v30 = 0;
  v32[1] = 0;
  memset_0(v32, 0, 0xE4uLL);
  memset_0(v33, 0, 0x170uLL);
  memset_0(BugCheckParameter1, 0, sizeof(BugCheckParameter1));
  v27 = 0;
  v6 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  KiInitializeProcessorStateInitializationParameters(v32);
  if ( (unsigned int)KeNumberProcessors_0 >= 0x800
    || KeNumprocSpecified && (unsigned int)KeNumberProcessors_0 >= KeNumprocSpecified )
  {
    ProcessorStateInitializationParameters = -1073741223;
    goto LABEL_48;
  }
  ProcessorStateInitializationParameters = HalRegisterDynamicProcessor();
  if ( ProcessorStateInitializationParameters < 0 )
    goto LABEL_48;
  v27 = a3;
  ProcessorStateInitializationParameters = KiQueryProcessorNode(v5, (int *)&v28, &v27, v11);
  if ( ProcessorStateInitializationParameters )
    goto LABEL_42;
  v32[0] = 1;
  v32[4] = KiComputeProcessorDataSize((unsigned int)KeMaximumProcessors, &v29, &v30);
  v32[9] = v29;
  v32[10] = v30;
  v32[5] = v27;
  v32[6] = v5;
  v32[7] = v12;
  ProcessorStateInitializationParameters = KiAllocateProcessorStateInitializationParameters((__int64)v32, v27);
  if ( ProcessorStateInitializationParameters < 0 )
  {
LABEL_48:
    KiBarrierWait = 0;
    if ( v7 )
    {
      v20 = 6LL;
      v21 = (_OWORD *)v7;
      do
      {
        *v21 = *v8;
        v21[1] = v8[1];
        v21[2] = v8[2];
        v21[3] = v8[3];
        v21[4] = v8[4];
        v21[5] = v8[5];
        v21[6] = v8[6];
        v21 += 8;
        v22 = v8[7];
        v8 += 8;
        *(v21 - 1) = v22;
        --v20;
      }
      while ( v20 );
      *v21 = *v8;
      v21[1] = v8[1];
      v21[2] = v8[2];
      *((_QWORD *)v21 + 6) = *((_QWORD *)v8 + 6);
      KeNodeBlock[v27] = v7;
    }
    if ( v9 )
    {
      KiRcuProcessorInitialize((__int64)v9, 0);
      KiFreeForceParkingData((__int64)v9);
      if ( KiHiberSwapStacksAllocated )
        KiAllocateProcessorHiberSwapShadowStacks((__int64)v9, 0);
      KiFreeIdleSearchStructures((__int64)v9);
      KiFreeStaticRescheduleContext((__int64)v9);
      KiFreeLocalSharedReadyQueue((__int64)v9);
      KiFreePrcbThreads((__int64)v9);
      KiFreeThreadCycleTable(v9);
      HvlDeleteProcessor(v9, v23, v24);
      MmDeleteProcessor(v9);
      EtwDeleteProcessor(v9);
      VmInternal = v9->VmInternal;
      if ( VmInternal )
      {
        ExFreePoolWithTag(VmInternal, 0);
        v9->VmInternal = 0LL;
      }
      KiUnassignProcessorNumberFromPrcb((__int64)v9);
    }
    if ( v6 )
      ExDeletePoolTagTable(v5);
    if ( v9 )
      KiUnshadowProcessorAllocation(v9, BugCheckParameter1, v32);
    goto LABEL_62;
  }
  PoolTagTable = ExCreatePoolTagTable((unsigned int)v5, v27);
  v6 = PoolTagTable;
  if ( !PoolTagTable )
  {
    ProcessorStateInitializationParameters = -1073741670;
    KiBarrierWait = 0;
LABEL_62:
    KiFreeProcessorStateInitializationParameters((__int64)v32);
    return (unsigned int)ProcessorStateInitializationParameters;
  }
  v7 = KeNodeBlock[v27];
  v34 = *(_OWORD *)&PsLoadedModuleList;
  v9 = (struct _KPRCB *)KiInitializeProcessorState(BugCheckParameter1);
  if ( !v9 )
  {
    ProcessorStateInitializationParameters = -1073741670;
    goto LABEL_48;
  }
  v8 = (_OWORD *)KeNodeBlock[v27];
  if ( !(unsigned int)MmInitializeProcessor(v9) )
  {
    ProcessorStateInitializationParameters = -1073741823;
    goto LABEL_48;
  }
  ProcessorStateInitializationParameters = KiInitializePrcbContext(v9, v27);
  if ( ProcessorStateInitializationParameters < 0 )
    goto LABEL_48;
  ProcessorStateInitializationParameters = KeInitializeTimerTable(v9);
  if ( ProcessorStateInitializationParameters < 0 )
    goto LABEL_48;
  ProcessorStateInitializationParameters = ExInitializeProcessor((__int64)v9, 1);
  if ( ProcessorStateInitializationParameters < 0 )
    goto LABEL_48;
  ProcessorStateInitializationParameters = ObInitializeProcessor(v9);
  if ( ProcessorStateInitializationParameters < 0 )
    goto LABEL_48;
  ProcessorStateInitializationParameters = IoInitializeProcessor((__int64)v9, 0LL);
  if ( ProcessorStateInitializationParameters < 0 )
    goto LABEL_48;
  ProcessorStateInitializationParameters = CcInitializeProcessor((__int64)v9);
  if ( ProcessorStateInitializationParameters < 0 )
    goto LABEL_48;
  ProcessorStateInitializationParameters = EtwInitializeProcessor(v9);
  if ( ProcessorStateInitializationParameters < 0 )
    goto LABEL_48;
  EtwpInitializeActivityIdSeed(v9->EtwSupport, v9->Number);
  ProcessorStateInitializationParameters = WheaInitializeProcessor(v9, 0LL);
  if ( ProcessorStateInitializationParameters < 0 )
    goto LABEL_48;
  ProcessorStateInitializationParameters = HvlInitializeProcessor((__int64)v9, v5, v28);
  if ( ProcessorStateInitializationParameters < 0 )
    goto LABEL_48;
  ProcessorStateInitializationParameters = KiAllocatePrcbThreads((__int64)v9, v13, v14, v15);
  if ( ProcessorStateInitializationParameters < 0 )
    goto LABEL_48;
  ProcessorStateInitializationParameters = KiAllocateLocalSharedReadyQueue((__int64)v9);
  if ( ProcessorStateInitializationParameters < 0 )
    goto LABEL_48;
  ProcessorStateInitializationParameters = KiAllocateStaticRescheduleContext((__int64)v9);
  if ( ProcessorStateInitializationParameters < 0 )
    goto LABEL_48;
  ProcessorStateInitializationParameters = KiAllocateIdleSearchStructures((__int64)v9);
  if ( ProcessorStateInitializationParameters < 0 )
    goto LABEL_48;
  ProcessorStateInitializationParameters = KiInitializeThreadCycleTable(v9);
  if ( ProcessorStateInitializationParameters < 0 )
    goto LABEL_48;
  ProcessorStateInitializationParameters = CmInitializeProcessorCallbacks(v9);
  if ( ProcessorStateInitializationParameters < 0 )
    goto LABEL_48;
  ProcessorStateInitializationParameters = KiAllocateForceParkingData((__int64)v9);
  if ( ProcessorStateInitializationParameters < 0 )
    goto LABEL_48;
  ProcessorStateInitializationParameters = VmInitializeProcessor(v9);
  if ( ProcessorStateInitializationParameters < 0 )
    goto LABEL_48;
  ProcessorStateInitializationParameters = KiInitializeSingleDpcRuntimeHistoryHashTable(v9);
  if ( ProcessorStateInitializationParameters < 0 )
    goto LABEL_48;
  if ( KiHiberSwapStacksAllocated )
  {
    ProcessorStateInitializationParameters = KiAllocateProcessorHiberSwapShadowStacks((__int64)v9, 1);
    if ( ProcessorStateInitializationParameters < 0 )
      goto LABEL_48;
  }
  v16 = ExPageLockHandle;
  v9->ProfileEventIndexAddress = &v9->ProfileEventIndexAddress;
  v9->ProcessorProfileControlArea = 0LL;
  MmLockPagableSectionByHandle(v16);
  KiAddProcessorToGroupSchedulingDatabase(v9);
  v17 = KeLoaderBlock_0;
  KiBarrierWait = 1;
  if ( !KeLoaderBlock_0 )
  {
    KeLoaderBlock_0 = (__int64)v33;
    v34 = *(_OWORD *)&PsLoadedModuleList;
  }
  ProcessorStateInitializationParameters = KiDynamicProcessorAddNotification(
                                             0,
                                             v9->Number,
                                             v9->Group,
                                             v9->GroupIndex,
                                             v28,
                                             0);
  v18 = 2;
  if ( ProcessorStateInitializationParameters >= 0 )
  {
    KiRcuProcessorInitialize((__int64)v9, 1u);
    started = HalStartDynamicProcessor((__int64)BugCheckParameter1, v5, v28, v27);
    if ( started == 3 )
      KeBugCheckEx(0x1DFu, (ULONG_PTR)BugCheckParameter1, 3uLL, v5, (unsigned int)v28);
    if ( started == 2 )
    {
      ProcessorStateInitializationParameters = -1073741823;
    }
    else
    {
      while ( v35 )
        _mm_pause();
      KiInitializeDynamicProcessor(v9);
      v18 = 1;
    }
  }
  KiDynamicProcessorAddNotification(
    v18,
    v9->Number,
    v9->Group,
    v9->GroupIndex,
    v28,
    ProcessorStateInitializationParameters);
  if ( ProcessorStateInitializationParameters >= 0 )
  {
    WheaInitializeProcessor(v9, 1LL);
    CmInitializeProcessor(v9);
    KiDynamicProcessorInitialization((__int64)v9);
  }
  KeLoaderBlock_0 = v17;
  MmUnlockPagableImageSection(ExPageLockHandle);
  v6 = PoolTagTable;
LABEL_42:
  if ( ProcessorStateInitializationParameters < 0 )
    goto LABEL_48;
  return (unsigned int)ProcessorStateInitializationParameters;
}
