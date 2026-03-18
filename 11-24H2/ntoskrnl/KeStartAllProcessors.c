/*
 * XREFs of KeStartAllProcessors @ 0x140C26D58
 * Callers:
 *     Phase1InitializationDiscard @ 0x140C0C048 (Phase1InitializationDiscard.c)
 * Callees:
 *     KeEnumerateNextSchedulerSubNodeInNode @ 0x1402088E0 (KeEnumerateNextSchedulerSubNodeInNode.c)
 *     KeQueryActiveProcessorCountEx @ 0x1402105E0 (KeQueryActiveProcessorCountEx.c)
 *     KeWakeAddressAll @ 0x140321AA0 (KeWakeAddressAll.c)
 *     KeYieldProcessorEx @ 0x1403F9C60 (KeYieldProcessorEx.c)
 *     KeInitializeSchedulerSubNodeEnumerationContext @ 0x14041DF40 (KeInitializeSchedulerSubNodeEnumerationContext.c)
 *     KiRcuProcessorInitialize @ 0x1404D5904 (KiRcuProcessorInitialize.c)
 *     KeBugCheck @ 0x1404FB970 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     HalStartNextProcessor @ 0x140546280 (HalStartNextProcessor.c)
 *     HvlStartBootLogicalProcessors @ 0x140583AD8 (HvlStartBootLogicalProcessors.c)
 *     KiAllocateIdleSearchStructures @ 0x1405B5990 (KiAllocateIdleSearchStructures.c)
 *     KiAllocateLocalSharedReadyQueue @ 0x1405B5B3C (KiAllocateLocalSharedReadyQueue.c)
 *     KiAllocatePrcbThreads @ 0x1405B5BB8 (KiAllocatePrcbThreads.c)
 *     KiAllocateProcessorLookupStructures @ 0x1405B5C18 (KiAllocateProcessorLookupStructures.c)
 *     KiAllocateProcessorStateInitializationParameters @ 0x1405B5EB0 (KiAllocateProcessorStateInitializationParameters.c)
 *     KiAllocateStaticRescheduleContext @ 0x1405B5F24 (KiAllocateStaticRescheduleContext.c)
 *     KiCompleteBootProcessorContextInitialization @ 0x1405B65C0 (KiCompleteBootProcessorContextInitialization.c)
 *     KiComputeEstimatedMaximumProcessors @ 0x1405B6790 (KiComputeEstimatedMaximumProcessors.c)
 *     KiFreeIdleSearchStructures @ 0x1405B6E18 (KiFreeIdleSearchStructures.c)
 *     KiFreeLocalSharedReadyQueue @ 0x1405B6E9C (KiFreeLocalSharedReadyQueue.c)
 *     KiFreePrcbThreads @ 0x1405B6ED0 (KiFreePrcbThreads.c)
 *     KiFreeProcessorStateInitializationParameters @ 0x1405B7038 (KiFreeProcessorStateInitializationParameters.c)
 *     KiFreeStaticRescheduleContext @ 0x1405B70B0 (KiFreeStaticRescheduleContext.c)
 *     KiQueryProcessorNode @ 0x1405BB8C0 (KiQueryProcessorNode.c)
 *     KiAllocateForceParkingData @ 0x1405C8218 (KiAllocateForceParkingData.c)
 *     KiFreeForceParkingData @ 0x1405C8508 (KiFreeForceParkingData.c)
 *     ExDeletePoolTagTable @ 0x140653F80 (ExDeletePoolTagTable.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     HvlDeleteProcessor @ 0x14070ED24 (HvlDeleteProcessor.c)
 *     HvlInitializeProcessor @ 0x14070EDCC (HvlInitializeProcessor.c)
 *     KiInitializeProcessorState @ 0x14073CAB0 (KiInitializeProcessorState.c)
 *     EtwDeleteProcessor @ 0x1407A63E0 (EtwDeleteProcessor.c)
 *     EtwInitializeProcessor @ 0x1407A65DC (EtwInitializeProcessor.c)
 *     ExCreatePoolTagTable @ 0x1407B7CFC (ExCreatePoolTagTable.c)
 *     MmDeleteProcessor @ 0x1407E8154 (MmDeleteProcessor.c)
 *     KeInitializeTimerTable @ 0x140A7BB0C (KeInitializeTimerTable.c)
 *     MmAllocateIndependentPagesEx @ 0x140A88F6C (MmAllocateIndependentPagesEx.c)
 *     KiUpdateProcessorCount @ 0x140B558D8 (KiUpdateProcessorCount.c)
 *     KiConfigureProcessorBlock @ 0x140B55FA8 (KiConfigureProcessorBlock.c)
 *     KiInitializeThreadCycleTable @ 0x140B566D0 (KiInitializeThreadCycleTable.c)
 *     KiInitializePrcbContext @ 0x140B56930 (KiInitializePrcbContext.c)
 *     KiCreateCpuSetForProcessor @ 0x140B57D30 (KiCreateCpuSetForProcessor.c)
 *     KiUnshadowProcessorAllocation @ 0x140B5ACA4 (KiUnshadowProcessorAllocation.c)
 *     KiComputeProcessorDataSize @ 0x140B5AD64 (KiComputeProcessorDataSize.c)
 *     MmInitializeProcessor @ 0x140B62038 (MmInitializeProcessor.c)
 *     VmInitializeProcessor @ 0x140B6E698 (VmInitializeProcessor.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     KiConfigureAllSchedulingInformation @ 0x140C27EA8 (KiConfigureAllSchedulingInformation.c)
 *     PoInitHeteroDetection @ 0x140C2D09C (PoInitHeteroDetection.c)
 */

__int64 KeStartAllProcessors()
{
  unsigned int v0; // edi
  KPCR *Pcr; // rax
  void *Base; // rbx
  void *Pool2; // rax
  int v4; // ebx
  unsigned int v5; // ebx
  char *v6; // rax
  __int64 v7; // rdx
  unsigned int v8; // eax
  unsigned __int64 v9; // r12
  __int64 v10; // r9
  unsigned int v11; // r15d
  unsigned int v12; // esi
  __int64 IndependentPages; // rax
  __int64 v14; // r13
  __int64 v15; // rax
  struct _KPRCB *v16; // rbx
  _OWORD *v17; // rdi
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  int v22; // r8d
  int v23; // r9d
  int started; // eax
  __int64 v25; // rax
  _OWORD *v26; // rcx
  __int128 v27; // xmm1
  SIZE_T v28; // rdx
  MEMORY_CACHING_TYPE v29; // r8d
  __int64 GroupIndex; // r8
  unsigned int Group; // edx
  _OWORD *v32; // rbx
  ULONG_PTR v33; // rax
  __int64 v34; // rdx
  _OWORD *v35; // rcx
  __int64 v36; // rax
  __int128 v37; // xmm1
  __int128 v38; // xmm0
  int v39; // ebx
  struct _KPRCB *CurrentPrcb; // rax
  unsigned int i; // ebx
  int v42; // eax
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rdx
  int v48; // [rsp+38h] [rbp-D0h] BYREF
  ULONG_PTR v49; // [rsp+3Ch] [rbp-CCh] BYREF
  unsigned int v50; // [rsp+44h] [rbp-C4h] BYREF
  unsigned int v51; // [rsp+48h] [rbp-C0h] BYREF
  unsigned int v52; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 v53; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v54; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD v55[3]; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD v56[2]; // [rsp+78h] [rbp-90h] BYREF
  int v57; // [rsp+88h] [rbp-80h]
  int v58; // [rsp+8Ch] [rbp-7Ch]
  unsigned int v59; // [rsp+90h] [rbp-78h]
  int v60; // [rsp+94h] [rbp-74h]
  unsigned int v61; // [rsp+9Ch] [rbp-6Ch]
  unsigned int v62; // [rsp+A0h] [rbp-68h]
  __int128 v63; // [rsp+168h] [rbp+60h] BYREF
  __int64 v64; // [rsp+178h] [rbp+70h]
  ULONG_PTR BugCheckParameter1[184]; // [rsp+188h] [rbp+80h] BYREF

  v0 = 0;
  HIDWORD(v56[0]) = 0;
  memset_0(v56, 0, 0xE4uLL);
  v53 = 0LL;
  v50 = 0;
  LOWORD(v48) = 0;
  v49 = 0LL;
  v51 = 0;
  v52 = 0;
  if ( (int)KiCompleteBootProcessorContextInitialization() < 0 )
    goto LABEL_70;
  Pcr = KeGetPcr();
  Base = Pcr->Prcb.ProcessorState.SpecialRegisters.Idtr.Base;
  LODWORD(KiBootProcessorIdtSize) = Pcr->Prcb.ProcessorState.SpecialRegisters.Idtr.Limit + 1;
  Pool2 = (void *)ExAllocatePool2(0x100uLL, (unsigned int)KiBootProcessorIdtSize, 0x2020654BuLL);
  KiBootProcessorIdt = Pool2;
  if ( !Pool2 )
    goto LABEL_70;
  memmove(Pool2, Base, (unsigned int)KiBootProcessorIdtSize);
  if ( (unsigned int)KeRegisteredProcessors > 0x800 )
    KeRegisteredProcessors = 2048;
  KiBarrierWait = 1;
  memset_0(BugCheckParameter1, 0, sizeof(BugCheckParameter1));
  KiComputeEstimatedMaximumProcessors((unsigned int *)&v53, (unsigned int *)&v49 + 1, &v50);
  v4 = v50;
  if ( (int)KiAllocateProcessorLookupStructures() < 0 )
    goto LABEL_70;
  KeMaximumProcessors = v4;
  v5 = KiMaximumGroups == 1 ? HIDWORD(v49) : (unsigned __int16)KiMaximumGroups << 6;
  v6 = (char *)ExAllocatePool2(0x40uLL, 32 * v5, 0x2020654BuLL);
  if ( !v6 )
    goto LABEL_70;
  KiCpuSetAffinities = v6;
  v7 = 8LL * v5;
  KiCpuSetAffinitiesShadow = &v6[v7];
  KiCpuSetData = (__int64)&v6[v7 + v7];
  LODWORD(KiCpuSetAffinitySize) = 8 * v5;
  KiCreateCpuSetForProcessor(KiProcessorBlock[0]);
  v8 = KiComputeProcessorDataSize(SHIDWORD(v49), &v51, &v52);
  v55[0] = v51;
  v55[1] = v52;
  v9 = v8;
  if ( (int)HvlStartBootLogicalProcessors(v52) < 0 )
    goto LABEL_70;
  v11 = 0;
  v12 = 0;
  while ( v11 < 0x7FF && (unsigned int)KeNumberProcessors_0 < (unsigned int)v53 )
  {
    LODWORD(v49) = -1;
    LOWORD(v48) = -1;
    if ( !(unsigned int)KiQueryProcessorNode(++v11, (int *)&v49, (unsigned __int16 *)&v48, v10) )
    {
      ++v12;
      memset_0(v56, 0, 0xE8uLL);
      if ( !ExCreatePoolTagTable(v12, v48) )
        goto LABEL_70;
      IndependentPages = MmAllocateIndependentPagesEx(v9, (unsigned __int16)v48, (__int64)v55, 2u);
      if ( !IndependentPages )
        goto LABEL_70;
      v56[1] = IndependentPages;
      v60 = HIDWORD(v49);
      v61 = v51;
      v62 = v52;
      v57 = v9;
      v58 = (unsigned __int16)v48;
      v59 = v12;
      if ( (int)KiAllocateProcessorStateInitializationParameters((__int64)v56, (unsigned __int16)v48) < 0 )
        goto LABEL_70;
      v14 = KeNodeBlock[(unsigned __int16)v48];
      v15 = KiInitializeProcessorState(BugCheckParameter1, (_QWORD *)KeLoaderBlock_0, (__int64)v56);
      v16 = (struct _KPRCB *)v15;
      if ( !v15 )
        goto LABEL_70;
      v17 = (_OWORD *)KeNodeBlock[(unsigned __int16)v48];
      KiRcuProcessorInitialize(v15, 1u);
      if ( (unsigned int)HvlInitializeProcessor((__int64)v16, v12, v49)
        || !(unsigned int)MmInitializeProcessor((__int64)v16)
        || (int)KiInitializePrcbContext((__int64)v16, (unsigned __int16)v48) < 0
        || (int)KeInitializeTimerTable((__int64)v16, v18, v19, v20) < 0
        || (int)EtwInitializeProcessor((__int64)v16) < 0
        || (int)KiAllocatePrcbThreads((__int64)v16, v21, v22, v23) < 0
        || (int)KiAllocateLocalSharedReadyQueue((__int64)v16) < 0
        || (int)KiAllocateStaticRescheduleContext((__int64)v16) < 0
        || (int)KiAllocateIdleSearchStructures((__int64)v16) < 0
        || (int)KiAllocateForceParkingData((__int64)v16) < 0
        || (int)VmInitializeProcessor((__int64)v16) < 0 )
      {
        goto LABEL_70;
      }
      started = HalStartNextProcessor((__int64)BugCheckParameter1, v12, v49);
      if ( started == 3 )
        KeBugCheckEx(0x1DFu, (ULONG_PTR)BugCheckParameter1, 3uLL, v12, (unsigned int)v49);
      if ( started != 4 )
      {
        v25 = 6LL;
        v26 = (_OWORD *)v14;
        do
        {
          *v26 = *v17;
          v26[1] = v17[1];
          v26[2] = v17[2];
          v26[3] = v17[3];
          v26[4] = v17[4];
          v26[5] = v17[5];
          v26[6] = v17[6];
          v26 += 8;
          v27 = v17[7];
          v17 += 8;
          *(v26 - 1) = v27;
          --v25;
        }
        while ( v25 );
        *v26 = *v17;
        v26[1] = v17[1];
        v26[2] = v17[2];
        *((_QWORD *)v26 + 6) = *((_QWORD *)v17 + 6);
        KeNodeBlock[(unsigned __int16)v48] = v14;
        KiFreeForceParkingData((__int64)v16);
        KiFreeIdleSearchStructures((__int64)v16);
        KiFreeStaticRescheduleContext((__int64)v16);
        KiFreeLocalSharedReadyQueue((__int64)v16);
        KiFreePrcbThreads((__int64)v16);
        HvlDeleteProcessor(v16, v28, v29);
        MmDeleteProcessor((__int64)v16);
        EtwDeleteProcessor((__int64)v16);
        ExDeletePoolTagTable(v12);
        KiUnshadowProcessorAllocation((__int64)v16, (__int64)BugCheckParameter1, v56);
        v0 = 0;
        GroupIndex = v16->GroupIndex;
        Group = v16->Group;
        *((_DWORD *)KiGlobalState + v16->Number) = 0;
        *((_DWORD *)qword_140F21E78 + 64 * (unsigned __int64)Group + GroupIndex) = 0;
        v16->SchedulerSubNode = 0LL;
        KiFreeProcessorStateInitializationParameters((__int64)v56);
        break;
      }
      v0 = 0;
      HIDWORD(v53) = 0;
      while ( *(_QWORD *)(KeLoaderBlock_0 + 136) )
        KeYieldProcessorEx((unsigned int *)&v53 + 1);
      KiConfigureProcessorBlock((__int64)v16);
      KiUpdateProcessorCount(v12, v16->Group);
    }
  }
  if ( (unsigned __int16)KeNumberNodes <= 1u )
  {
    v54 = 0LL;
    v39 = 0;
    v63 = 0LL;
    v64 = 0LL;
    KeInitializeSchedulerSubNodeEnumerationContext(&v63, KeNodeBlock[0]);
    while ( !(unsigned int)KeEnumerateNextSchedulerSubNodeInNode(&v63, &v54) )
      v39 += __popcnt(*(_QWORD *)(v54 + 128));
    if ( v39 == (_DWORD)KeNumberProcessors_0 )
      goto LABEL_52;
LABEL_70:
    KeBugCheckEx(0x32u, 0LL, 0LL, 0x14uLL, 0LL);
  }
  while ( v0 < (unsigned __int16)KeNumberNodes )
  {
    v32 = (_OWORD *)(0x140000000LL + 824LL * v0 + 16621184);
    if ( (_OWORD *)KeNodeBlock[v0] == v32 )
    {
      v33 = ExAllocatePool2(0x40uLL, 0x380uLL, 0x2020654BuLL);
      v34 = v33;
      if ( !v33 )
        goto LABEL_70;
      v35 = (_OWORD *)v33;
      v36 = 6LL;
      do
      {
        *v35 = *v32;
        v35[1] = v32[1];
        v35[2] = v32[2];
        v35[3] = v32[3];
        v35[4] = v32[4];
        v35[5] = v32[5];
        v35[6] = v32[6];
        v35 += 8;
        v37 = v32[7];
        v32 += 8;
        *(v35 - 1) = v37;
        --v36;
      }
      while ( v36 );
      v38 = *v32;
      KeNodeBlock[v0] = v34;
      *v35 = v38;
      v35[1] = v32[1];
      v35[2] = v32[2];
      *((_QWORD *)v35 + 6) = *((_QWORD *)v32 + 6);
    }
    ++v0;
  }
LABEL_52:
  if ( (unsigned __int16)KeNumberNodes < 0x40u )
    memset_0(
      (void *)(0x140000000LL + 8LL * (unsigned __int16)KeNumberNodes + 16574144),
      0,
      8LL * (64 - (unsigned int)(unsigned __int16)KeNumberNodes));
  if ( KeMaxprocSpecified )
  {
    KeMaximumProcessors = 2048;
  }
  else if ( KeDynamicPartitioningSupported )
  {
    KeMaximumProcessors = v50;
    CurrentPrcb = KeGetCurrentPrcb();
    if ( v50 > KeRegisteredProcessors * CurrentPrcb->CoresPerPhysicalProcessor * CurrentPrcb->LogicalProcessorsPerCore )
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
  if ( !(unsigned __int8)PoInitHeteroDetection() )
    KeBugCheck(0xA0u);
  for ( i = 0; i < (unsigned int)KeNumberProcessors_0; ++i )
  {
    v42 = KiInitializeThreadCycleTable(KiProcessorBlock[i]);
    if ( v42 < 0 )
      KeBugCheckEx(0x32u, v42, 0xCuLL, 0LL, 0LL);
  }
  KiConfigureAllSchedulingInformation();
  LOBYTE(v43) = 1;
  guard_dispatch_icall_no_overrides(v43, 0LL, v44, v45);
  KiBootProcessorsStarted = 1;
  KiBootProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  KiBarrierWait = 0;
  return KeWakeAddressAll((unsigned __int64)&KiBarrierWait, v46);
}
