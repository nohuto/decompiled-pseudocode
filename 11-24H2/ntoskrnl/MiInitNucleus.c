/*
 * XREFs of MiInitNucleus @ 0x140C4F298
 * Callers:
 *     MmInitSystem @ 0x140BDE2E8 (MmInitSystem.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140280B30 (RtlRaiseStatus.c)
 *     ExAllocatePoolMm @ 0x1402ACBC0 (ExAllocatePoolMm.c)
 *     KeQueryPerformanceCounter @ 0x14034FA10 (KeQueryPerformanceCounter.c)
 *     MiGetAnyMultiplexedVm @ 0x140442630 (MiGetAnyMultiplexedVm.c)
 *     ExInitializeNPagedLookasideListInternal @ 0x14045FB10 (ExInitializeNPagedLookasideListInternal.c)
 *     MiEnumerateSlabAllocatorsEx @ 0x14046A884 (MiEnumerateSlabAllocatorsEx.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     ExInitializePoolHeapManagement @ 0x140659E80 (ExInitializePoolHeapManagement.c)
 *     MxInstallMoreMemory @ 0x14066C6F0 (MxInstallMoreMemory.c)
 *     MiFreeUnusedPfnPages @ 0x14066CDB0 (MiFreeUnusedPfnPages.c)
 *     MiInitializePageFaultResources @ 0x1406785C8 (MiInitializePageFaultResources.c)
 *     MiInitializeDebuggerSupport @ 0x14067FAEC (MiInitializeDebuggerSupport.c)
 *     MiInitializeCommitment @ 0x140686338 (MiInitializeCommitment.c)
 *     MiInitializeSystemWorkingSetList @ 0x1407EA844 (MiInitializeSystemWorkingSetList.c)
 *     MiInitializeSections @ 0x1407EB7A8 (MiInitializeSections.c)
 *     MiInitializeWsSwapping @ 0x1407FB20C (MiInitializeWsSwapping.c)
 *     MmInitializeProcessor @ 0x140B62038 (MmInitializeProcessor.c)
 *     MiInitializeNumaRangesPermanent @ 0x140C4D9E8 (MiInitializeNumaRangesPermanent.c)
 *     MiInitializeNumaRangesTemporary @ 0x140C4DA58 (MiInitializeNumaRangesTemporary.c)
 *     MiInitializeBootDefaults @ 0x140C4E26C (MiInitializeBootDefaults.c)
 *     MiClearLoaderDescriptorFlags @ 0x140C4ED58 (MiClearLoaderDescriptorFlags.c)
 *     MiConstructLoaderMemoryTree @ 0x140C4EDC8 (MiConstructLoaderMemoryTree.c)
 *     MiCreatePfnDatabase @ 0x140C4EE90 (MiCreatePfnDatabase.c)
 *     MiExamineHalVa @ 0x140C4F004 (MiExamineHalVa.c)
 *     MiInitializeDummyPages @ 0x140C4F7E0 (MiInitializeDummyPages.c)
 *     MiInitializeFunctionOverrides @ 0x140C4F99C (MiInitializeFunctionOverrides.c)
 *     MiInitializeKasan @ 0x140C4FA24 (MiInitializeKasan.c)
 *     MiInitializePhysicalMemoryBlocks @ 0x140C4FB34 (MiInitializePhysicalMemoryBlocks.c)
 *     MiMapDummyPages @ 0x140C4FC6C (MiMapDummyPages.c)
 *     MiProtectSharedUserPage @ 0x140C50154 (MiProtectSharedUserPage.c)
 *     MiZeroBootMappings @ 0x140C503D0 (MiZeroBootMappings.c)
 *     MxMarkValidMappings @ 0x140C50440 (MxMarkValidMappings.c)
 *     MiInitializeLoaderDescriptors @ 0x140C51834 (MiInitializeLoaderDescriptors.c)
 *     MiInitializePfnsForValidMappings @ 0x140C518FC (MiInitializePfnsForValidMappings.c)
 *     MiRemoveLargeFreeLoaderDescriptors @ 0x140C51ABC (MiRemoveLargeFreeLoaderDescriptors.c)
 *     MiSwitchToPfns @ 0x140C51F10 (MiSwitchToPfns.c)
 *     MiCreateHugeIoRanges @ 0x140C535FC (MiCreateHugeIoRanges.c)
 *     MiBuildPagedPool @ 0x140C53B98 (MiBuildPagedPool.c)
 *     MiInitializeNonPagedPool @ 0x140C53CA4 (MiInitializeNonPagedPool.c)
 *     MiBuildSystemDataViews @ 0x140C54094 (MiBuildSystemDataViews.c)
 *     MiFillGapAddresses @ 0x140C54D0C (MiFillGapAddresses.c)
 *     MiInitializeDynamicVa @ 0x140C54F1C (MiInitializeDynamicVa.c)
 *     MiCheckLargePageOk @ 0x140C55B84 (MiCheckLargePageOk.c)
 *     MiMemoryLicense @ 0x140C561FC (MiMemoryLicense.c)
 *     MiInitializeKernelStacks @ 0x140C57458 (MiInitializeKernelStacks.c)
 *     MiInitializeChannelRangesPermanent @ 0x140C577C4 (MiInitializeChannelRangesPermanent.c)
 *     MiInitializeChannelRangesTemporary @ 0x140C5782C (MiInitializeChannelRangesTemporary.c)
 *     MiCompensateForProcessorErrata @ 0x140C57D58 (MiCompensateForProcessorErrata.c)
 *     MiCreateResidentBasePfnTemplate @ 0x140C580B8 (MiCreateResidentBasePfnTemplate.c)
 *     MiCreateResidentPfnTemplate @ 0x140C58120 (MiCreateResidentPfnTemplate.c)
 *     MiInitializeZeroingAttributes @ 0x140C58B14 (MiInitializeZeroingAttributes.c)
 *     MiMeasureDemandCoalesceTimeBounds @ 0x140C59ADC (MiMeasureDemandCoalesceTimeBounds.c)
 *     MiInitializeNonCachedMappingRegion @ 0x140C59D18 (MiInitializeNonCachedMappingRegion.c)
 *     MiInitializeSystemPtes @ 0x140C59F78 (MiInitializeSystemPtes.c)
 *     MiInitMachineDependent @ 0x140C5C234 (MiInitMachineDependent.c)
 *     MiInitializeSystemPteTracker @ 0x140C5C288 (MiInitializeSystemPteTracker.c)
 *     MiInitializeDecayPfns @ 0x140C5C2D8 (MiInitializeDecayPfns.c)
 *     MiCreateTopLevelUltraMappings @ 0x140C5C384 (MiCreateTopLevelUltraMappings.c)
 */

__int64 __fastcall MiInitNucleus(ULONG_PTR BugCheckParameter2)
{
  __int64 *v2; // rax
  __int64 v3; // rcx
  LARGE_INTEGER PerformanceCounter; // rax
  unsigned int v5; // ebx
  ULONG_PTR v6; // r9
  __int64 PoolMm; // rax
  _QWORD *v8; // rdx
  _QWORD *v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rcx
  char *AnyMultiplexedVm; // rax
  _QWORD *v14; // rcx

  if ( dword_140E30148 )
    KeBugCheckEx(0x1Au, 0x300uLL, dword_140E30148, 0LL, 0LL);
  MiConstructLoaderMemoryTree(BugCheckParameter2);
  qword_141007808 = KeQueryPerformanceCounter(0LL).QuadPart;
  byte_140E375F4 = 4;
  byte_140E2DB41 = KeGetCurrentPrcb()->CpuVendor == 1;
  MiCompensateForProcessorErrata(BugCheckParameter2);
  MiInitMachineDependent();
  MiLowHalVa = MiExamineHalVa();
  MiInitializeBootDefaults(BugCheckParameter2);
  MiInitializeSystemPteTracker();
  v2 = qword_140E37180;
  v3 = 2LL;
  do
  {
    *v2 = 0LL;
    v2 += 8;
    --v3;
  }
  while ( v3 );
  xmmword_140E37200 = 0LL;
  MiInitializeDynamicVa();
  MiInitializeNumaRangesTemporary();
  MiInitializeChannelRangesTemporary();
  MiMemoryLicense(BugCheckParameter2);
  qword_141007810 = KeQueryPerformanceCounter(0LL).QuadPart;
  MiRemoveLargeFreeLoaderDescriptors(BugCheckParameter2);
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  qword_140E2DBD0 = -1LL;
  qword_141007818 = PerformanceCounter.QuadPart;
  MiInitializeLoaderDescriptors(BugCheckParameter2);
  MiCheckLargePageOk(BugCheckParameter2);
  MiCreateResidentPfnTemplate(&unk_140E2FE40);
  MiCreateResidentBasePfnTemplate(&unk_140E2FE70);
  MxMarkValidMappings(0xFFFFF6FB7DBED800uLL, 0xFFFFF6FB7DBEDFF8uLL, 3LL, BugCheckParameter2);
  qword_141007820 = KeQueryPerformanceCounter(0LL).QuadPart;
  MiCreatePfnDatabase(BugCheckParameter2);
  qword_141007828 = KeQueryPerformanceCounter(0LL).QuadPart;
  MiInitializePfnsForValidMappings(BugCheckParameter2);
  qword_141007830 = KeQueryPerformanceCounter(0LL).QuadPart;
  MiSwitchToPfns(BugCheckParameter2);
  qword_141007838 = KeQueryPerformanceCounter(0LL).QuadPart;
  MiInitializeZeroingAttributes();
  MiInitializeSections((__int64)&MiSystemPartition);
  MiInitializeCommitment((__int64)&MiSystemPartition);
  MiInitializeDummyPages();
  if ( !(unsigned int)MiInitializeSystemPtes() )
    MxInstallMoreMemory(1);
  MiInitializeDebuggerSupport();
  MiProtectSharedUserPage();
  if ( !(unsigned int)MiInitializeNonPagedPool() )
    MxInstallMoreMemory(5);
  MiMapDummyPages();
  MiInitializeKasan(BugCheckParameter2);
  qword_141007840 = KeQueryPerformanceCounter(0LL).QuadPart;
  if ( (int)ExInitializePoolHeapManagement(((unsigned __int64)MiFlags >> 5) & 0x400) < 0 )
    MxInstallMoreMemory(11);
  MiInitializePhysicalMemoryBlocks(BugCheckParameter2);
  MiZeroBootMappings();
  MiInitializeFunctionOverrides(BugCheckParameter2);
  MiInitializeDecayPfns();
  if ( ((unsigned __int8)&stru_140E35C40 & 0xF) != 0 )
    RtlRaiseStatus(-2147483646);
  stru_140E35C40 = 0LL;
  v5 = 0;
  if ( KeNumberNodes )
  {
    do
    {
      v6 = v5;
      LODWORD(v6) = v5 | 0x80000000;
      PoolMm = ExAllocatePoolMm(0x40uLL, 0x340uLL, 1867082061, v6);
      v8 = (_QWORD *)PoolMm;
      if ( !PoolMm )
        MxInstallMoreMemory(12);
      v9 = (_QWORD *)(PoolMm + 648);
      v10 = 4LL;
      do
      {
        v9[2] = 0LL;
        v9[1] = v9;
        *v9 = v9;
        v9 += 4;
        --v10;
      }
      while ( v10 );
      v8[99] = 0LL;
      v8[98] = v8 + 97;
      v8[97] = v8 + 97;
      v11 = v5++;
      v12 = 3 * v11;
      LODWORD(v11) = (unsigned __int16)KeNumberNodes;
      *(_QWORD *)(qword_140E2DAF8 + (v12 << 7) + 376) = v8;
    }
    while ( v5 < (unsigned int)v11 );
  }
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  v14 = &unk_140E38740;
  if ( (*((_DWORD *)AnyMultiplexedVm + 46) & 0xF) != 1 )
    v14 = AnyMultiplexedVm + 192;
  *v14 = &unk_140E2D8C0;
  if ( (int)MiInitializeSystemWorkingSetList((__int64)&MiSystemPartition, (__int64)AnyMultiplexedVm, 3, 0LL) < 0 )
    MxInstallMoreMemory(16);
  MiInitializeSystemWorkingSetList((__int64)&MiSystemPartition, (__int64)&unk_140E38600, 9, 0LL);
  if ( !(unsigned int)MiInitializeKernelStacks() )
    MxInstallMoreMemory(13);
  if ( !(unsigned int)MiInitializeNonCachedMappingRegion() )
    MxInstallMoreMemory(48);
  if ( !(unsigned int)MiCreateTopLevelUltraMappings() )
    MxInstallMoreMemory(14);
  if ( !(unsigned int)MmInitializeProcessor((__int64)KeGetCurrentPrcb()) )
    MxInstallMoreMemory(15);
  if ( !(unsigned int)MiBuildSystemDataViews() )
    MxInstallMoreMemory(51);
  MiFillGapAddresses(0xFFFFDE0000000000uLL, 48 * qword_140E2DBE0 - 0x21FFFFFFFFD1LL);
  MiFlags |= 0x20000000uLL;
  qword_141007848 = KeQueryPerformanceCounter(0LL).QuadPart;
  MiFreeUnusedPfnPages(0LL);
  qword_141007850 = KeQueryPerformanceCounter(0LL).QuadPart;
  if ( !(unsigned int)MiInitializePageFaultResources() )
    MxInstallMoreMemory(20);
  if ( !(unsigned int)MiBuildPagedPool() )
    MxInstallMoreMemory(21);
  MiClearLoaderDescriptorFlags(BugCheckParameter2);
  MiCreateHugeIoRanges(BugCheckParameter2);
  MiInitializeWsSwapping(&MiSystemPartition);
  MiInitializeNumaRangesPermanent();
  MiInitializeChannelRangesPermanent();
  ExInitializeNPagedLookasideListInternal((__int64)&Lookaside, 0LL, 0LL, 512, 192, 1800170829, 0, 0);
  MiMeasureDemandCoalesceTimeBounds();
  MiFlags |= 0x400000000uLL;
  return MiEnumerateSlabAllocatorsEx((__int64)&MiSystemPartition, (__int64)MiInitialSlabPopulate, 0LL, 0xFFFFFFFFLL, 9u);
}
