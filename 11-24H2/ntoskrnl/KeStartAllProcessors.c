/*
 * XREFs of KeStartAllProcessors @ 0x140C28DA8
 * Callers:
 *     Phase1InitializationDiscard @ 0x140C0E048 (Phase1InitializationDiscard.c)
 * Callees:
 *     KeWakeAddressAll @ 0x1402CA630 (KeWakeAddressAll.c)
 *     KeQueryActiveProcessorCountEx @ 0x140339940 (KeQueryActiveProcessorCountEx.c)
 *     KeYieldProcessorEx @ 0x1403EFB70 (KeYieldProcessorEx.c)
 *     KiRcuProcessorInitialize @ 0x1404CED4C (KiRcuProcessorInitialize.c)
 *     KeBugCheck @ 0x1404F9230 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     HalStartNextProcessor @ 0x140543B40 (HalStartNextProcessor.c)
 *     HvlStartBootLogicalProcessors @ 0x140580E58 (HvlStartBootLogicalProcessors.c)
 *     KiAllocateIdleSearchStructures @ 0x1405B2C58 (KiAllocateIdleSearchStructures.c)
 *     KiAllocateLocalSharedReadyQueue @ 0x1405B2E04 (KiAllocateLocalSharedReadyQueue.c)
 *     KiAllocatePrcbThreads @ 0x1405B2E80 (KiAllocatePrcbThreads.c)
 *     KiAllocateProcessorLookupStructures @ 0x1405B2EE0 (KiAllocateProcessorLookupStructures.c)
 *     KiAllocateProcessorStateInitializationParameters @ 0x1405B3178 (KiAllocateProcessorStateInitializationParameters.c)
 *     KiAllocateStaticRescheduleContext @ 0x1405B31EC (KiAllocateStaticRescheduleContext.c)
 *     KiCompleteBootProcessorContextInitialization @ 0x1405B3888 (KiCompleteBootProcessorContextInitialization.c)
 *     KiComputeEstimatedMaximumProcessors @ 0x1405B3A50 (KiComputeEstimatedMaximumProcessors.c)
 *     KiFreeIdleSearchStructures @ 0x1405B40D8 (KiFreeIdleSearchStructures.c)
 *     KiFreeLocalSharedReadyQueue @ 0x1405B415C (KiFreeLocalSharedReadyQueue.c)
 *     KiFreePrcbThreads @ 0x1405B4190 (KiFreePrcbThreads.c)
 *     KiFreeProcessorStateInitializationParameters @ 0x1405B42F8 (KiFreeProcessorStateInitializationParameters.c)
 *     KiFreeStaticRescheduleContext @ 0x1405B4370 (KiFreeStaticRescheduleContext.c)
 *     KiQueryProcessorNode @ 0x1405B8EF0 (KiQueryProcessorNode.c)
 *     KiAllocateForceParkingData @ 0x1405C5948 (KiAllocateForceParkingData.c)
 *     KiFreeForceParkingData @ 0x1405C5C38 (KiFreeForceParkingData.c)
 *     ExDeletePoolTagTable @ 0x1406526E8 (ExDeletePoolTagTable.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     HvlDeleteProcessor @ 0x14070C8B4 (HvlDeleteProcessor.c)
 *     HvlInitializeProcessor @ 0x14070C95C (HvlInitializeProcessor.c)
 *     KiInitializeProcessorState @ 0x14073A9E0 (KiInitializeProcessorState.c)
 *     EtwDeleteProcessor @ 0x1407A6520 (EtwDeleteProcessor.c)
 *     EtwInitializeProcessor @ 0x1407A671C (EtwInitializeProcessor.c)
 *     ExCreatePoolTagTable @ 0x1407B814C (ExCreatePoolTagTable.c)
 *     MmDeleteProcessor @ 0x1407E8724 (MmDeleteProcessor.c)
 *     KeInitializeTimerTable @ 0x140A75E0C (KeInitializeTimerTable.c)
 *     MmAllocateIndependentPagesEx @ 0x140A8536C (MmAllocateIndependentPagesEx.c)
 *     KiUpdateProcessorCount @ 0x140B57928 (KiUpdateProcessorCount.c)
 *     KiConfigureProcessorBlock @ 0x140B57FF8 (KiConfigureProcessorBlock.c)
 *     KiInitializeThreadCycleTable @ 0x140B58720 (KiInitializeThreadCycleTable.c)
 *     KiInitializePrcbContext @ 0x140B58980 (KiInitializePrcbContext.c)
 *     KiUnshadowProcessorAllocation @ 0x140B5CD14 (KiUnshadowProcessorAllocation.c)
 *     KiComputeProcessorDataSize @ 0x140B5CDD4 (KiComputeProcessorDataSize.c)
 *     MmInitializeProcessor @ 0x140B64108 (MmInitializeProcessor.c)
 *     VmInitializeProcessor @ 0x140B7054C (VmInitializeProcessor.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     KiConfigureAllSchedulingInformation @ 0x140C29E84 (KiConfigureAllSchedulingInformation.c)
 *     KiCountNodeZeroSetBitsGroupAffinity @ 0x140C29F90 (KiCountNodeZeroSetBitsGroupAffinity.c)
 *     KiAllocateCpuSetData @ 0x140C2BC7C (KiAllocateCpuSetData.c)
 *     PoInitHeteroDetection @ 0x140C2F1BC (PoInitHeteroDetection.c)
 */

__int64 KeStartAllProcessors()
{
  KPCR *Pcr; // rax
  void *Base; // rbx
  void *Pool2; // rax
  int v3; // ebx
  unsigned int v4; // eax
  unsigned __int64 v5; // r15
  unsigned int v6; // r14d
  unsigned int v7; // esi
  __int64 v8; // rcx
  __int64 IndependentPages; // rax
  __int64 v10; // r12
  struct _KPRCB *v11; // rbx
  _OWORD *v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rdx
  int v15; // r8d
  int v16; // r9d
  int started; // eax
  unsigned int i; // esi
  _OWORD *v19; // rbx
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rax
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int64 v25; // rax
  _OWORD *v26; // rcx
  __int128 v27; // xmm1
  SIZE_T v28; // rdx
  __int64 v29; // r8
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 GroupIndex; // r8
  unsigned int Group; // edx
  int v34; // eax
  struct _KPRCB *CurrentPrcb; // rax
  unsigned int j; // ebx
  int v37; // eax
  __int64 v38; // rcx
  __int64 v39; // rdx
  int v41; // [rsp+38h] [rbp-D0h] BYREF
  ULONG_PTR v42; // [rsp+3Ch] [rbp-CCh] BYREF
  unsigned int v43; // [rsp+44h] [rbp-C4h] BYREF
  unsigned int v44; // [rsp+48h] [rbp-C0h] BYREF
  unsigned int v45; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 v46; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD v47[2]; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD v48[2]; // [rsp+68h] [rbp-A0h] BYREF
  int v49; // [rsp+78h] [rbp-90h]
  int v50; // [rsp+7Ch] [rbp-8Ch]
  unsigned int v51; // [rsp+80h] [rbp-88h]
  int v52; // [rsp+84h] [rbp-84h]
  unsigned int v53; // [rsp+8Ch] [rbp-7Ch]
  unsigned int v54; // [rsp+90h] [rbp-78h]
  ULONG_PTR BugCheckParameter1[184]; // [rsp+158h] [rbp+50h] BYREF

  HIDWORD(v48[0]) = 0;
  memset_0(v48, 0, 0xE4uLL);
  v46 = 0LL;
  v43 = 0;
  LOWORD(v41) = 0;
  v42 = 0LL;
  v44 = 0;
  v45 = 0;
  if ( (int)KiCompleteBootProcessorContextInitialization() < 0 )
    goto LABEL_61;
  Pcr = KeGetPcr();
  Base = Pcr->Prcb.ProcessorState.SpecialRegisters.Idtr.Base;
  LODWORD(KiBootProcessorIdtSize) = Pcr->Prcb.ProcessorState.SpecialRegisters.Idtr.Limit + 1;
  Pool2 = (void *)ExAllocatePool2(0x100uLL, (unsigned int)KiBootProcessorIdtSize, 0x2020654BuLL);
  KiBootProcessorIdt = Pool2;
  if ( !Pool2 )
    goto LABEL_61;
  memmove(Pool2, Base, (unsigned int)KiBootProcessorIdtSize);
  if ( (unsigned int)KeRegisteredProcessors > 0x800 )
    KeRegisteredProcessors = 2048;
  KiBarrierWait = 1;
  memset_0(BugCheckParameter1, 0, sizeof(BugCheckParameter1));
  KiComputeEstimatedMaximumProcessors((unsigned int *)&v46, (unsigned int *)&v42 + 1, &v43);
  v3 = v43;
  if ( (int)KiAllocateProcessorLookupStructures(v43) < 0 )
    goto LABEL_61;
  KeMaximumProcessors = v3;
  if ( !(unsigned int)KiAllocateCpuSetData(HIDWORD(v42)) )
    goto LABEL_61;
  v4 = KiComputeProcessorDataSize(SHIDWORD(v42), &v44, &v45);
  v47[0] = v44;
  v47[1] = v45;
  v5 = v4;
  if ( (int)HvlStartBootLogicalProcessors() < 0 )
    goto LABEL_61;
  v6 = 0;
  v7 = 0;
  do
  {
    v8 = 0xFFFFLL;
    if ( (unsigned int)KeNumberProcessors_0 >= (unsigned int)v46 )
      break;
    LODWORD(v42) = -1;
    LOWORD(v41) = -1;
    if ( !(unsigned int)KiQueryProcessorNode(++v6, (int *)&v42, (unsigned __int16 *)&v41) )
    {
      ++v7;
      memset_0(v48, 0, 0xE8uLL);
      if ( !ExCreatePoolTagTable(v7, v41) )
        goto LABEL_61;
      IndependentPages = MmAllocateIndependentPagesEx(v5, (unsigned __int16)v41, (__int64)v47, 2u);
      if ( !IndependentPages )
        goto LABEL_61;
      v48[1] = IndependentPages;
      v52 = HIDWORD(v42);
      v53 = v44;
      v54 = v45;
      v49 = v5;
      v50 = (unsigned __int16)v41;
      v51 = v7;
      if ( (int)KiAllocateProcessorStateInitializationParameters((__int64)v48, (unsigned __int16)v41) < 0 )
        goto LABEL_61;
      v10 = KeNodeBlock[(unsigned __int16)v41];
      v11 = (struct _KPRCB *)KiInitializeProcessorState(BugCheckParameter1, (_QWORD *)KeLoaderBlock_0, (__int64)v48);
      if ( !v11 )
        goto LABEL_61;
      v12 = (_OWORD *)KeNodeBlock[(unsigned __int16)v41];
      KiRcuProcessorInitialize((__int64)v11, 1u);
      if ( (unsigned int)HvlInitializeProcessor((__int64)v11, v7, v42)
        || !(unsigned int)MmInitializeProcessor((__int64)v11)
        || (int)KiInitializePrcbContext((__int64)v11, (unsigned __int16)v41) < 0
        || (int)KeInitializeTimerTable((__int64)v11, v13) < 0
        || (int)EtwInitializeProcessor((__int64)v11) < 0
        || (int)KiAllocatePrcbThreads((__int64)v11, v14, v15, v16) < 0
        || (int)KiAllocateLocalSharedReadyQueue((__int64)v11) < 0
        || (int)KiAllocateStaticRescheduleContext((__int64)v11) < 0
        || (int)KiAllocateIdleSearchStructures((__int64)v11) < 0
        || (int)KiAllocateForceParkingData((__int64)v11) < 0
        || (int)VmInitializeProcessor((__int64)v11) < 0 )
      {
        goto LABEL_61;
      }
      started = HalStartNextProcessor((__int64)BugCheckParameter1, v7, v42);
      if ( started == 3 )
        KeBugCheckEx(0x1DFu, (ULONG_PTR)BugCheckParameter1, 3uLL, v7, (unsigned int)v42);
      if ( started != 4 )
      {
        v25 = 6LL;
        v26 = (_OWORD *)v10;
        do
        {
          *v26 = *v12;
          v26[1] = v12[1];
          v26[2] = v12[2];
          v26[3] = v12[3];
          v26[4] = v12[4];
          v26[5] = v12[5];
          v26[6] = v12[6];
          v26 += 8;
          v27 = v12[7];
          v12 += 8;
          *(v26 - 1) = v27;
          --v25;
        }
        while ( v25 );
        *v26 = *v12;
        v26[1] = v12[1];
        v26[2] = v12[2];
        *((_QWORD *)v26 + 6) = *((_QWORD *)v12 + 6);
        KeNodeBlock[(unsigned __int16)v41] = v10;
        KiRcuProcessorInitialize((__int64)v11, 0);
        KiFreeForceParkingData((__int64)v11);
        KiFreeIdleSearchStructures((__int64)v11);
        KiFreeStaticRescheduleContext((__int64)v11);
        KiFreeLocalSharedReadyQueue((__int64)v11);
        KiFreePrcbThreads((__int64)v11);
        HvlDeleteProcessor(v11, v28, v29);
        MmDeleteProcessor((__int64)v11);
        EtwDeleteProcessor((__int64)v11);
        ExDeletePoolTagTable(v7, v30, v31);
        KiUnshadowProcessorAllocation((__int64)v11, (__int64)BugCheckParameter1, v48);
        GroupIndex = v11->GroupIndex;
        Group = v11->Group;
        *((_DWORD *)KiGlobalState + v11->Number) = 0;
        *((_DWORD *)qword_140F22998 + 64 * (unsigned __int64)Group + GroupIndex) = 0;
        v11->SchedulerSubNode = 0LL;
        KiFreeProcessorStateInitializationParameters((__int64)v48);
        break;
      }
      HIDWORD(v46) = 0;
      while ( *(_QWORD *)(KeLoaderBlock_0 + 136) )
        KeYieldProcessorEx((unsigned int *)&v46 + 1);
      KiConfigureProcessorBlock((__int64)v11);
      KiUpdateProcessorCount(v7, v11->Group);
    }
  }
  while ( v6 < 0x7FF );
  if ( (unsigned __int16)KeNumberNodes <= 1u )
  {
    v34 = KiCountNodeZeroSetBitsGroupAffinity(v8);
    v8 = (unsigned int)KeNumberProcessors_0;
    if ( v34 == (_DWORD)KeNumberProcessors_0 )
      goto LABEL_46;
LABEL_61:
    KeBugCheckEx(0x32u, 0LL, 0LL, 0x14uLL, 0LL);
  }
  for ( i = 0; i < (unsigned __int16)KeNumberNodes; ++i )
  {
    v19 = (_OWORD *)((char *)&KiNodeInit + 824 * i);
    if ( (_OWORD *)KeNodeBlock[i] == v19 )
    {
      v20 = ExAllocatePool2(0x40uLL, 0x380uLL, 0x2020654BuLL);
      v21 = v20;
      if ( !v20 )
        goto LABEL_61;
      v8 = v20;
      v22 = 6LL;
      do
      {
        *(_OWORD *)v8 = *v19;
        *(_OWORD *)(v8 + 16) = v19[1];
        *(_OWORD *)(v8 + 32) = v19[2];
        *(_OWORD *)(v8 + 48) = v19[3];
        *(_OWORD *)(v8 + 64) = v19[4];
        *(_OWORD *)(v8 + 80) = v19[5];
        *(_OWORD *)(v8 + 96) = v19[6];
        v8 += 128LL;
        v23 = v19[7];
        v19 += 8;
        *(_OWORD *)(v8 - 16) = v23;
        --v22;
      }
      while ( v22 );
      v24 = *v19;
      KeNodeBlock[i] = v21;
      *(_OWORD *)v8 = v24;
      *(_OWORD *)(v8 + 16) = v19[1];
      *(_OWORD *)(v8 + 32) = v19[2];
      *(_QWORD *)(v8 + 48) = *((_QWORD *)v19 + 6);
    }
  }
LABEL_46:
  if ( (unsigned __int16)KeNumberNodes < 0x40u )
    memset_0(
      (void *)(0x140000000LL + 8LL * (unsigned __int16)KeNumberNodes + 16578240),
      0,
      8LL * (64 - (unsigned int)(unsigned __int16)KeNumberNodes));
  if ( KeMaxprocSpecified )
  {
    KeMaximumProcessors = 2048;
  }
  else if ( KeDynamicPartitioningSupported )
  {
    KeMaximumProcessors = v43;
    CurrentPrcb = KeGetCurrentPrcb();
    v8 = KeRegisteredProcessors * CurrentPrcb->CoresPerPhysicalProcessor * CurrentPrcb->LogicalProcessorsPerCore;
    if ( v43 > (unsigned int)v8 )
      KeMaximumProcessors = KeRegisteredProcessors
                          * CurrentPrcb->CoresPerPhysicalProcessor
                          * CurrentPrcb->LogicalProcessorsPerCore;
  }
  else
  {
    KeMaximumProcessors = KeNumberProcessors_0;
  }
  if ( !KeDynamicPartitioningSupported )
    KiMaximumGroups = KiActiveGroups;
  if ( !(unsigned __int8)PoInitHeteroDetection(v8) )
    KeBugCheck(0xA0u);
  for ( j = 0; j < (unsigned int)KeNumberProcessors_0; ++j )
  {
    v37 = KiInitializeThreadCycleTable(KiProcessorBlock[j]);
    if ( v37 < 0 )
      KeBugCheckEx(0x32u, v37, 0xCuLL, 0LL, 0LL);
  }
  KiConfigureAllSchedulingInformation();
  LOBYTE(v38) = 1;
  guard_dispatch_icall_no_overrides(v38, 0LL);
  KiBootProcessorsStarted = 1;
  KiBootProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  KiBarrierWait = 0;
  return KeWakeAddressAll((unsigned __int64)&KiBarrierWait, v39);
}
