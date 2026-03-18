/*
 * XREFs of KiStartDynamicProcessor @ 0x14072F1E8
 * Callers:
 *     KeStartDynamicProcessor @ 0x140730250 (KeStartDynamicProcessor.c)
 * Callees:
 *     MmUnlockPagableImageSection @ 0x14036DFD0 (MmUnlockPagableImageSection.c)
 *     KiRcuProcessorInitialize @ 0x1404D6218 (KiRcuProcessorInitialize.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     HalStartDynamicProcessor @ 0x14053EEB0 (HalStartDynamicProcessor.c)
 *     HalRegisterDynamicProcessor @ 0x140541920 (HalRegisterDynamicProcessor.c)
 *     KiAllocateIdleSearchStructures @ 0x1405B1AC4 (KiAllocateIdleSearchStructures.c)
 *     KiAllocateLocalSharedReadyQueue @ 0x1405B1C70 (KiAllocateLocalSharedReadyQueue.c)
 *     KiAllocatePrcbThreads @ 0x1405B1CEC (KiAllocatePrcbThreads.c)
 *     KiAllocateProcessorStateInitializationParameters @ 0x1405B1FE4 (KiAllocateProcessorStateInitializationParameters.c)
 *     KiAllocateStaticRescheduleContext @ 0x1405B2058 (KiAllocateStaticRescheduleContext.c)
 *     KiDynamicProcessorInitialization @ 0x1405B2D2C (KiDynamicProcessorInitialization.c)
 *     KiFreeIdleSearchStructures @ 0x1405B2F48 (KiFreeIdleSearchStructures.c)
 *     KiFreeLocalSharedReadyQueue @ 0x1405B2FCC (KiFreeLocalSharedReadyQueue.c)
 *     KiFreePrcbThreads @ 0x1405B3000 (KiFreePrcbThreads.c)
 *     KiFreeProcessorStateInitializationParameters @ 0x1405B3168 (KiFreeProcessorStateInitializationParameters.c)
 *     KiFreeStaticRescheduleContext @ 0x1405B31E0 (KiFreeStaticRescheduleContext.c)
 *     KiInitializeProcessorStateInitializationParameters @ 0x1405B340C (KiInitializeProcessorStateInitializationParameters.c)
 *     KiQueryProcessorNode @ 0x1405B7A20 (KiQueryProcessorNode.c)
 *     KiUnassignProcessorNumberFromPrcb @ 0x1405B7C78 (KiUnassignProcessorNumberFromPrcb.c)
 *     KiAllocateProcessorHiberSwapShadowStacks @ 0x1405B8504 (KiAllocateProcessorHiberSwapShadowStacks.c)
 *     KiDynamicProcessorAddNotification @ 0x1405B86D8 (KiDynamicProcessorAddNotification.c)
 *     KiAllocateForceParkingData @ 0x1405C3FF8 (KiAllocateForceParkingData.c)
 *     KiFreeForceParkingData @ 0x1405C42E8 (KiFreeForceParkingData.c)
 *     ExInitializeProcessor @ 0x140647974 (ExInitializeProcessor.c)
 *     ExDeletePoolTagTable @ 0x140648080 (ExDeletePoolTagTable.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     CcInitializeProcessor @ 0x1406FAC40 (CcInitializeProcessor.c)
 *     HvlDeleteProcessor @ 0x140702E44 (HvlDeleteProcessor.c)
 *     HvlInitializeProcessor @ 0x140702EEC (HvlInitializeProcessor.c)
 *     IoInitializeProcessor @ 0x1407054FC (IoInitializeProcessor.c)
 *     KiInitializeProcessorState @ 0x140730A90 (KiInitializeProcessorState.c)
 *     KiInitializeSingleDpcRuntimeHistoryHashTable @ 0x140730F08 (KiInitializeSingleDpcRuntimeHistoryHashTable.c)
 *     ObInitializeProcessor @ 0x140737198 (ObInitializeProcessor.c)
 *     EtwDeleteProcessor @ 0x140797010 (EtwDeleteProcessor.c)
 *     EtwInitializeProcessor @ 0x14079720C (EtwInitializeProcessor.c)
 *     EtwpInitializeActivityIdSeed @ 0x140798CF4 (EtwpInitializeActivityIdSeed.c)
 *     ExCreatePoolTagTable @ 0x1407A884C (ExCreatePoolTagTable.c)
 *     CmInitializeProcessorCallbacks @ 0x1407C1D3C (CmInitializeProcessorCallbacks.c)
 *     CmInitializeProcessor @ 0x1407C5488 (CmInitializeProcessor.c)
 *     MmDeleteProcessor @ 0x1407D8294 (MmDeleteProcessor.c)
 *     MmLockPagableSectionByHandle @ 0x140A4B850 (MmLockPagableSectionByHandle.c)
 *     KeInitializeTimerTable @ 0x140A79D74 (KeInitializeTimerTable.c)
 *     KiFreeThreadCycleTable @ 0x140B4622C (KiFreeThreadCycleTable.c)
 *     KiInitializeThreadCycleTable @ 0x140B4672C (KiInitializeThreadCycleTable.c)
 *     KiInitializePrcbContext @ 0x140B4698C (KiInitializePrcbContext.c)
 *     KiInitializeDynamicProcessor @ 0x140B475B8 (KiInitializeDynamicProcessor.c)
 *     KiUnshadowProcessorAllocation @ 0x140B4AD34 (KiUnshadowProcessorAllocation.c)
 *     KiComputeProcessorDataSize @ 0x140B4ADF4 (KiComputeProcessorDataSize.c)
 *     KiAddProcessorToGroupSchedulingDatabase @ 0x140B4AE24 (KiAddProcessorToGroupSchedulingDatabase.c)
 *     WheaInitializeProcessor @ 0x140B519F4 (WheaInitializeProcessor.c)
 *     MmInitializeProcessor @ 0x140B51F08 (MmInitializeProcessor.c)
 *     VmInitializeProcessor @ 0x140B5F5EC (VmInitializeProcessor.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall KiStartDynamicProcessor(__int64 a1, int a2, unsigned __int16 a3, unsigned int a4)
{
  ULONG_PTR v5; // r14
  __int64 v6; // r12
  __int64 v7; // r13
  _OWORD *v8; // rsi
  struct _KPRCB *v9; // rdi
  int ProcessorStateInitializationParameters; // ebx
  int v11; // r9d
  __int64 v12; // rdx
  int v13; // r8d
  int v14; // r9d
  PVOID v15; // rcx
  __int64 v16; // r12
  int v17; // r15d
  int started; // eax
  __int64 v19; // rax
  _OWORD *v20; // rcx
  __int128 v21; // xmm1
  SIZE_T v22; // rdx
  MEMORY_CACHING_TYPE v23; // r8d
  void *VmInternal; // rcx
  unsigned __int16 v26; // [rsp+30h] [rbp-D0h] BYREF
  ULONG_PTR v27; // [rsp+38h] [rbp-C8h] BYREF
  int v28; // [rsp+40h] [rbp-C0h] BYREF
  int v29; // [rsp+44h] [rbp-BCh] BYREF
  __int64 PoolTagTable; // [rsp+48h] [rbp-B8h]
  _DWORD v31[60]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v32[16]; // [rsp+140h] [rbp+40h] BYREF
  __int128 v33; // [rsp+150h] [rbp+50h]
  __int64 v34; // [rsp+1C8h] [rbp+C8h]
  ULONG_PTR BugCheckParameter1[184]; // [rsp+2B0h] [rbp+1B0h] BYREF

  LODWORD(v27) = a2;
  v5 = a4;
  v28 = 0;
  v29 = 0;
  v31[1] = 0;
  memset_0(v31, 0, 0xE4uLL);
  memset_0(v32, 0, 0x170uLL);
  memset_0(BugCheckParameter1, 0, sizeof(BugCheckParameter1));
  v26 = 0;
  v6 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  KiInitializeProcessorStateInitializationParameters(v31);
  if ( (unsigned int)KeNumberProcessors_0 >= 0x800
    || KeNumprocSpecified && (unsigned int)KeNumberProcessors_0 >= KeNumprocSpecified )
  {
    ProcessorStateInitializationParameters = -1073741223;
    goto LABEL_48;
  }
  ProcessorStateInitializationParameters = HalRegisterDynamicProcessor();
  if ( ProcessorStateInitializationParameters < 0 )
    goto LABEL_48;
  v26 = a3;
  ProcessorStateInitializationParameters = KiQueryProcessorNode(v5, (int *)&v27, &v26);
  if ( ProcessorStateInitializationParameters )
    goto LABEL_42;
  v31[0] = 1;
  v31[4] = KiComputeProcessorDataSize((unsigned int)KeMaximumProcessors, &v28, &v29);
  v31[9] = v28;
  v31[10] = v29;
  v31[5] = v26;
  v31[6] = v5;
  v31[7] = v11;
  ProcessorStateInitializationParameters = KiAllocateProcessorStateInitializationParameters((__int64)v31, v26);
  if ( ProcessorStateInitializationParameters < 0 )
  {
LABEL_48:
    KiBarrierWait = 0;
    if ( v7 )
    {
      v19 = 6LL;
      v20 = (_OWORD *)v7;
      do
      {
        *v20 = *v8;
        v20[1] = v8[1];
        v20[2] = v8[2];
        v20[3] = v8[3];
        v20[4] = v8[4];
        v20[5] = v8[5];
        v20[6] = v8[6];
        v20 += 8;
        v21 = v8[7];
        v8 += 8;
        *(v20 - 1) = v21;
        --v19;
      }
      while ( v19 );
      *v20 = *v8;
      v20[1] = v8[1];
      v20[2] = v8[2];
      *((_QWORD *)v20 + 6) = *((_QWORD *)v8 + 6);
      KeNodeBlock[v26] = v7;
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
      HvlDeleteProcessor(v9, v22, v23);
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
      KiUnshadowProcessorAllocation(v9, BugCheckParameter1, v31);
    goto LABEL_62;
  }
  PoolTagTable = ExCreatePoolTagTable((unsigned int)v5, v26);
  v6 = PoolTagTable;
  if ( !PoolTagTable )
  {
    ProcessorStateInitializationParameters = -1073741670;
    KiBarrierWait = 0;
LABEL_62:
    KiFreeProcessorStateInitializationParameters((__int64)v31);
    return (unsigned int)ProcessorStateInitializationParameters;
  }
  v7 = KeNodeBlock[v26];
  v33 = *(_OWORD *)&PsLoadedModuleList;
  v9 = (struct _KPRCB *)KiInitializeProcessorState(BugCheckParameter1);
  if ( !v9 )
  {
    ProcessorStateInitializationParameters = -1073741670;
    goto LABEL_48;
  }
  v8 = (_OWORD *)KeNodeBlock[v26];
  if ( !(unsigned int)MmInitializeProcessor(v9) )
  {
    ProcessorStateInitializationParameters = -1073741823;
    goto LABEL_48;
  }
  ProcessorStateInitializationParameters = KiInitializePrcbContext(v9, v26);
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
  ProcessorStateInitializationParameters = HvlInitializeProcessor((__int64)v9, v5, v27);
  if ( ProcessorStateInitializationParameters < 0 )
    goto LABEL_48;
  ProcessorStateInitializationParameters = KiAllocatePrcbThreads((__int64)v9, v12, v13, v14);
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
  v15 = ExPageLockHandle;
  v9->ProfileEventIndexAddress = &v9->ProfileEventIndexAddress;
  v9->ProcessorProfileControlArea = 0LL;
  MmLockPagableSectionByHandle(v15);
  KiAddProcessorToGroupSchedulingDatabase(v9);
  v16 = *(_QWORD *)&KeNumberProcessorsGroup0[1];
  KiBarrierWait = 1;
  if ( !v16 )
  {
    *(_QWORD *)&KeNumberProcessorsGroup0[1] = v32;
    v33 = *(_OWORD *)&PsLoadedModuleList;
  }
  ProcessorStateInitializationParameters = KiDynamicProcessorAddNotification(
                                             0,
                                             v9->Number,
                                             v9->Group,
                                             v9->GroupIndex,
                                             v27,
                                             0);
  v17 = 2;
  if ( ProcessorStateInitializationParameters >= 0 )
  {
    KiRcuProcessorInitialize((__int64)v9, 1u);
    started = HalStartDynamicProcessor((__int64)BugCheckParameter1, v5, v27, v26);
    if ( started == 3 )
      KeBugCheckEx(0x1DFu, (ULONG_PTR)BugCheckParameter1, 3uLL, v5, (unsigned int)v27);
    if ( started == 2 )
    {
      ProcessorStateInitializationParameters = -1073741823;
    }
    else
    {
      while ( v34 )
        _mm_pause();
      KiInitializeDynamicProcessor(v9);
      v17 = 1;
    }
  }
  KiDynamicProcessorAddNotification(
    v17,
    v9->Number,
    v9->Group,
    v9->GroupIndex,
    v27,
    ProcessorStateInitializationParameters);
  if ( ProcessorStateInitializationParameters >= 0 )
  {
    WheaInitializeProcessor(v9, 1LL);
    CmInitializeProcessor(v9);
    KiDynamicProcessorInitialization((__int64)v9);
  }
  *(_QWORD *)&KeNumberProcessorsGroup0[1] = v16;
  MmUnlockPagableImageSection(ExPageLockHandle);
  v6 = PoolTagTable;
LABEL_42:
  if ( ProcessorStateInitializationParameters < 0 )
    goto LABEL_48;
  return (unsigned int)ProcessorStateInitializationParameters;
}
