/*
 * XREFs of KeStartAllProcessors @ 0x140C15CC8
 * Callers:
 *     Phase1InitializationDiscard @ 0x140BFB048 (Phase1InitializationDiscard.c)
 * Callees:
 *     KeWakeAddressAll @ 0x14028A700 (KeWakeAddressAll.c)
 *     KeEnumerateNextSchedulerSubNodeInNode @ 0x140304F78 (KeEnumerateNextSchedulerSubNodeInNode.c)
 *     KeQueryActiveProcessorCountEx @ 0x1403AE660 (KeQueryActiveProcessorCountEx.c)
 *     KeYieldProcessorEx @ 0x1403F49C0 (KeYieldProcessorEx.c)
 *     KeInitializeSchedulerSubNodeEnumerationContext @ 0x1404206E0 (KeInitializeSchedulerSubNodeEnumerationContext.c)
 *     KiRcuProcessorInitialize @ 0x1404D6218 (KiRcuProcessorInitialize.c)
 *     KeBugCheck @ 0x1404F9260 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     HalStartNextProcessor @ 0x140543990 (HalStartNextProcessor.c)
 *     HvlStartBootLogicalProcessors @ 0x140580328 (HvlStartBootLogicalProcessors.c)
 *     KiAllocateIdleSearchStructures @ 0x1405B1AC4 (KiAllocateIdleSearchStructures.c)
 *     KiAllocateLocalSharedReadyQueue @ 0x1405B1C70 (KiAllocateLocalSharedReadyQueue.c)
 *     KiAllocatePrcbThreads @ 0x1405B1CEC (KiAllocatePrcbThreads.c)
 *     KiAllocateProcessorLookupStructures @ 0x1405B1D4C (KiAllocateProcessorLookupStructures.c)
 *     KiAllocateProcessorStateInitializationParameters @ 0x1405B1FE4 (KiAllocateProcessorStateInitializationParameters.c)
 *     KiAllocateStaticRescheduleContext @ 0x1405B2058 (KiAllocateStaticRescheduleContext.c)
 *     KiCompleteBootProcessorContextInitialization @ 0x1405B26F4 (KiCompleteBootProcessorContextInitialization.c)
 *     KiComputeEstimatedMaximumProcessors @ 0x1405B28C0 (KiComputeEstimatedMaximumProcessors.c)
 *     KiFreeIdleSearchStructures @ 0x1405B2F48 (KiFreeIdleSearchStructures.c)
 *     KiFreeLocalSharedReadyQueue @ 0x1405B2FCC (KiFreeLocalSharedReadyQueue.c)
 *     KiFreePrcbThreads @ 0x1405B3000 (KiFreePrcbThreads.c)
 *     KiFreeProcessorStateInitializationParameters @ 0x1405B3168 (KiFreeProcessorStateInitializationParameters.c)
 *     KiFreeStaticRescheduleContext @ 0x1405B31E0 (KiFreeStaticRescheduleContext.c)
 *     KiQueryProcessorNode @ 0x1405B7A20 (KiQueryProcessorNode.c)
 *     KiAllocateForceParkingData @ 0x1405C3FF8 (KiAllocateForceParkingData.c)
 *     KiFreeForceParkingData @ 0x1405C42E8 (KiFreeForceParkingData.c)
 *     ExDeletePoolTagTable @ 0x140648080 (ExDeletePoolTagTable.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     HvlDeleteProcessor @ 0x140702E44 (HvlDeleteProcessor.c)
 *     HvlInitializeProcessor @ 0x140702EEC (HvlInitializeProcessor.c)
 *     KiInitializeProcessorState @ 0x140730A90 (KiInitializeProcessorState.c)
 *     EtwDeleteProcessor @ 0x140797010 (EtwDeleteProcessor.c)
 *     EtwInitializeProcessor @ 0x14079720C (EtwInitializeProcessor.c)
 *     ExCreatePoolTagTable @ 0x1407A884C (ExCreatePoolTagTable.c)
 *     MmDeleteProcessor @ 0x1407D8294 (MmDeleteProcessor.c)
 *     KeInitializeTimerTable @ 0x140A79D74 (KeInitializeTimerTable.c)
 *     MmAllocateIndependentPagesEx @ 0x140A8508C (MmAllocateIndependentPagesEx.c)
 *     KiUpdateProcessorCount @ 0x140B458D8 (KiUpdateProcessorCount.c)
 *     KiConfigureProcessorBlock @ 0x140B46004 (KiConfigureProcessorBlock.c)
 *     KiInitializeThreadCycleTable @ 0x140B4672C (KiInitializeThreadCycleTable.c)
 *     KiInitializePrcbContext @ 0x140B4698C (KiInitializePrcbContext.c)
 *     KiCreateCpuSetForProcessor @ 0x140B47D90 (KiCreateCpuSetForProcessor.c)
 *     KiUnshadowProcessorAllocation @ 0x140B4AD34 (KiUnshadowProcessorAllocation.c)
 *     KiComputeProcessorDataSize @ 0x140B4ADF4 (KiComputeProcessorDataSize.c)
 *     MmInitializeProcessor @ 0x140B51F08 (MmInitializeProcessor.c)
 *     VmInitializeProcessor @ 0x140B5F5EC (VmInitializeProcessor.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     KiConfigureAllSchedulingInformation @ 0x140C16E18 (KiConfigureAllSchedulingInformation.c)
 *     PoInitHeteroDetection @ 0x140C1BF98 (PoInitHeteroDetection.c)
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
  unsigned int v10; // r15d
  unsigned int v11; // esi
  __int64 IndependentPages; // rax
  _QWORD *v13; // rdx
  __int64 v14; // r13
  __int64 v15; // rax
  struct _KPRCB *v16; // rbx
  _OWORD *v17; // rdi
  __int64 v18; // rdx
  int v19; // r8d
  int v20; // r9d
  int started; // eax
  __int64 v22; // rax
  __int64 v23; // rax
  _OWORD *v24; // rcx
  __int128 v25; // xmm1
  SIZE_T v26; // rdx
  MEMORY_CACHING_TYPE v27; // r8d
  __int64 GroupIndex; // r8
  unsigned int Group; // edx
  _OWORD *v30; // rbx
  ULONG_PTR v31; // rax
  __int64 v32; // rdx
  _OWORD *v33; // rcx
  __int64 v34; // rax
  __int128 v35; // xmm1
  __int128 v36; // xmm0
  int v37; // ebx
  struct _KPRCB *CurrentPrcb; // rax
  unsigned int i; // ebx
  int v40; // eax
  __int64 v41; // rcx
  __int64 v42; // rdx
  int v44; // [rsp+38h] [rbp-D0h] BYREF
  ULONG_PTR v45; // [rsp+3Ch] [rbp-CCh] BYREF
  unsigned int v46; // [rsp+44h] [rbp-C4h] BYREF
  unsigned int v47; // [rsp+48h] [rbp-C0h] BYREF
  unsigned int v48; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 v49; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v50; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD v51[3]; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD v52[2]; // [rsp+78h] [rbp-90h] BYREF
  int v53; // [rsp+88h] [rbp-80h]
  int v54; // [rsp+8Ch] [rbp-7Ch]
  unsigned int v55; // [rsp+90h] [rbp-78h]
  int v56; // [rsp+94h] [rbp-74h]
  unsigned int v57; // [rsp+9Ch] [rbp-6Ch]
  unsigned int v58; // [rsp+A0h] [rbp-68h]
  __int128 v59; // [rsp+168h] [rbp+60h] BYREF
  __int64 v60; // [rsp+178h] [rbp+70h]
  ULONG_PTR BugCheckParameter1[184]; // [rsp+188h] [rbp+80h] BYREF

  v0 = 0;
  HIDWORD(v52[0]) = 0;
  memset_0(v52, 0, 0xE4uLL);
  v49 = 0LL;
  v46 = 0;
  LOWORD(v44) = 0;
  v45 = 0LL;
  v47 = 0;
  v48 = 0;
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
  KiComputeEstimatedMaximumProcessors((unsigned int *)&v49, (unsigned int *)&v45 + 1, &v46);
  v4 = v46;
  if ( (int)KiAllocateProcessorLookupStructures() < 0 )
    goto LABEL_70;
  KeMaximumProcessors = v4;
  v5 = KiMaximumGroups == 1 ? HIDWORD(v45) : (unsigned __int16)KiMaximumGroups << 6;
  v6 = (char *)ExAllocatePool2(0x40uLL, 32 * v5, 0x2020654BuLL);
  if ( !v6 )
    goto LABEL_70;
  KiCpuSetAffinities = v6;
  v7 = 8LL * v5;
  KiCpuSetAffinitiesShadow = &v6[v7];
  KiCpuSetData = (__int64)&v6[v7 + v7];
  LODWORD(KiCpuSetAffinitySize) = 8 * v5;
  KiCreateCpuSetForProcessor(KiProcessorBlock[0]);
  v8 = KiComputeProcessorDataSize(SHIDWORD(v45), &v47, &v48);
  v51[0] = v47;
  v51[1] = v48;
  v9 = v8;
  if ( (int)HvlStartBootLogicalProcessors() < 0 )
    goto LABEL_70;
  v10 = 0;
  v11 = 0;
  while ( v10 < 0x7FF && (unsigned int)KeNumberProcessors_0 < (unsigned int)v49 )
  {
    LODWORD(v45) = -1;
    LOWORD(v44) = -1;
    if ( !(unsigned int)KiQueryProcessorNode(++v10, (int *)&v45, (unsigned __int16 *)&v44) )
    {
      ++v11;
      memset_0(v52, 0, 0xE8uLL);
      if ( !ExCreatePoolTagTable(v11, v44) )
        goto LABEL_70;
      IndependentPages = MmAllocateIndependentPagesEx(v9, (unsigned __int16)v44, (__int64)v51, 2u);
      if ( !IndependentPages )
        goto LABEL_70;
      v52[1] = IndependentPages;
      v56 = HIDWORD(v45);
      v57 = v47;
      v58 = v48;
      v53 = v9;
      v54 = (unsigned __int16)v44;
      v55 = v11;
      if ( (int)KiAllocateProcessorStateInitializationParameters((__int64)v52, (unsigned __int16)v44) < 0 )
        goto LABEL_70;
      v13 = *(_QWORD **)&KeNumberProcessorsGroup0[1];
      v14 = KeNodeBlock[(unsigned __int16)v44];
      v15 = KiInitializeProcessorState(BugCheckParameter1, v13, (__int64)v52);
      v16 = (struct _KPRCB *)v15;
      if ( !v15 )
        goto LABEL_70;
      v17 = (_OWORD *)KeNodeBlock[(unsigned __int16)v44];
      KiRcuProcessorInitialize(v15, 1u);
      if ( (unsigned int)HvlInitializeProcessor((__int64)v16, v11, v45)
        || !(unsigned int)MmInitializeProcessor((__int64)v16)
        || (int)KiInitializePrcbContext((__int64)v16, (unsigned __int16)v44) < 0
        || (int)KeInitializeTimerTable((__int64)v16) < 0
        || (int)EtwInitializeProcessor((__int64)v16) < 0
        || (int)KiAllocatePrcbThreads((__int64)v16, v18, v19, v20) < 0
        || (int)KiAllocateLocalSharedReadyQueue((__int64)v16) < 0
        || (int)KiAllocateStaticRescheduleContext((__int64)v16) < 0
        || (int)KiAllocateIdleSearchStructures((__int64)v16) < 0
        || (int)KiAllocateForceParkingData((__int64)v16) < 0
        || (int)VmInitializeProcessor((__int64)v16) < 0 )
      {
        goto LABEL_70;
      }
      started = HalStartNextProcessor((__int64)BugCheckParameter1, v11, v45);
      if ( started == 3 )
        KeBugCheckEx(0x1DFu, (ULONG_PTR)BugCheckParameter1, 3uLL, v11, (unsigned int)v45);
      if ( started != 4 )
      {
        v23 = 6LL;
        v24 = (_OWORD *)v14;
        do
        {
          *v24 = *v17;
          v24[1] = v17[1];
          v24[2] = v17[2];
          v24[3] = v17[3];
          v24[4] = v17[4];
          v24[5] = v17[5];
          v24[6] = v17[6];
          v24 += 8;
          v25 = v17[7];
          v17 += 8;
          *(v24 - 1) = v25;
          --v23;
        }
        while ( v23 );
        *v24 = *v17;
        v24[1] = v17[1];
        v24[2] = v17[2];
        *((_QWORD *)v24 + 6) = *((_QWORD *)v17 + 6);
        KeNodeBlock[(unsigned __int16)v44] = v14;
        KiFreeForceParkingData((__int64)v16);
        KiFreeIdleSearchStructures((__int64)v16);
        KiFreeStaticRescheduleContext((__int64)v16);
        KiFreeLocalSharedReadyQueue((__int64)v16);
        KiFreePrcbThreads((__int64)v16);
        HvlDeleteProcessor(v16, v26, v27);
        MmDeleteProcessor((__int64)v16);
        EtwDeleteProcessor((__int64)v16);
        ExDeletePoolTagTable(v11);
        KiUnshadowProcessorAllocation((__int64)v16, (__int64)BugCheckParameter1, v52);
        v0 = 0;
        GroupIndex = v16->GroupIndex;
        Group = v16->Group;
        *((_DWORD *)KiGlobalState + v16->Number) = 0;
        *((_DWORD *)qword_140F216A8 + 64 * (unsigned __int64)Group + GroupIndex) = 0;
        v16->SchedulerSubNode = 0LL;
        KiFreeProcessorStateInitializationParameters((__int64)v52);
        break;
      }
      v0 = 0;
      HIDWORD(v49) = 0;
      while ( 1 )
      {
        v22 = *(_QWORD *)&KeNumberProcessorsGroup0[1];
        if ( !*(_QWORD *)(v22 + 136) )
          break;
        KeYieldProcessorEx((_DWORD *)&v49 + 1);
      }
      KiConfigureProcessorBlock((__int64)v16);
      KiUpdateProcessorCount(v11, v16->Group);
    }
  }
  if ( (unsigned __int16)KeNumberNodes <= 1u )
  {
    v50 = 0LL;
    v37 = 0;
    v59 = 0LL;
    v60 = 0LL;
    KeInitializeSchedulerSubNodeEnumerationContext(&v59, KeNodeBlock[0]);
    while ( !(unsigned int)KeEnumerateNextSchedulerSubNodeInNode(&v59, &v50) )
      v37 += __popcnt(*(_QWORD *)(v50 + 128));
    if ( v37 == (_DWORD)KeNumberProcessors_0 )
      goto LABEL_52;
LABEL_70:
    KeBugCheckEx(0x32u, 0LL, 0LL, 0x14uLL, 0LL);
  }
  while ( v0 < (unsigned __int16)KeNumberNodes )
  {
    v30 = (_OWORD *)(0x140000000LL + 824LL * v0 + 16621232);
    if ( (_OWORD *)KeNodeBlock[v0] == v30 )
    {
      v31 = ExAllocatePool2(0x40uLL, 0x380uLL, 0x2020654BuLL);
      v32 = v31;
      if ( !v31 )
        goto LABEL_70;
      v33 = (_OWORD *)v31;
      v34 = 6LL;
      do
      {
        *v33 = *v30;
        v33[1] = v30[1];
        v33[2] = v30[2];
        v33[3] = v30[3];
        v33[4] = v30[4];
        v33[5] = v30[5];
        v33[6] = v30[6];
        v33 += 8;
        v35 = v30[7];
        v30 += 8;
        *(v33 - 1) = v35;
        --v34;
      }
      while ( v34 );
      v36 = *v30;
      KeNodeBlock[v0] = v32;
      *v33 = v36;
      v33[1] = v30[1];
      v33[2] = v30[2];
      *((_QWORD *)v33 + 6) = *((_QWORD *)v30 + 6);
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
    KeMaximumProcessors = v46;
    CurrentPrcb = KeGetCurrentPrcb();
    if ( v46 > KeRegisteredProcessors * CurrentPrcb->CoresPerPhysicalProcessor * CurrentPrcb->LogicalProcessorsPerCore )
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
    v40 = KiInitializeThreadCycleTable(KiProcessorBlock[i]);
    if ( v40 < 0 )
      KeBugCheckEx(0x32u, v40, 0xCuLL, 0LL, 0LL);
  }
  KiConfigureAllSchedulingInformation();
  LOBYTE(v41) = 1;
  guard_dispatch_icall_no_overrides(v41);
  KiBootProcessorsStarted = 1;
  KiBootProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  KiBarrierWait = 0;
  return KeWakeAddressAll((unsigned __int64)&KiBarrierWait, v42);
}
