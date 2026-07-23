/*
 * XREFs of MiInitNucleus @ 0x140C51428
 * Callers:
 *     MmInitSystem @ 0x140BE02E8 (MmInitSystem.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1402360C0 (RtlRaiseStatus.c)
 *     ExAllocatePoolMm @ 0x1402775A0 (ExAllocatePoolMm.c)
 *     KeQueryPerformanceCounter @ 0x14036DEF0 (KeQueryPerformanceCounter.c)
 *     MiGetAnyMultiplexedVm @ 0x140439200 (MiGetAnyMultiplexedVm.c)
 *     ExInitializeNPagedLookasideListInternal @ 0x1404549D0 (ExInitializeNPagedLookasideListInternal.c)
 *     MiEnumerateSlabAllocatorsEx @ 0x14046321C (MiEnumerateSlabAllocatorsEx.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     ExInitializePoolHeapManagement @ 0x140658520 (ExInitializePoolHeapManagement.c)
 *     MxInstallMoreMemory @ 0x14066D8C0 (MxInstallMoreMemory.c)
 *     MiFreeUnusedPfnPages @ 0x14066DF80 (MiFreeUnusedPfnPages.c)
 *     MiInitializePageFaultResources @ 0x140679754 (MiInitializePageFaultResources.c)
 *     MiInitializeDebuggerSupport @ 0x140680CEC (MiInitializeDebuggerSupport.c)
 *     MiInitializeCommitment @ 0x140687468 (MiInitializeCommitment.c)
 *     MiInitializeSystemWorkingSetList @ 0x1407EAE14 (MiInitializeSystemWorkingSetList.c)
 *     MiInitializeSections @ 0x1407EBD78 (MiInitializeSections.c)
 *     MiInitializeWsSwapping @ 0x1407FB97C (MiInitializeWsSwapping.c)
 *     MmInitializeProcessor @ 0x140B64108 (MmInitializeProcessor.c)
 *     MiInitializeNumaRangesPermanent @ 0x140C4FB84 (MiInitializeNumaRangesPermanent.c)
 *     MiInitializeNumaRangesTemporary @ 0x140C4FBF4 (MiInitializeNumaRangesTemporary.c)
 *     MiInitializeBootDefaults @ 0x140C503FC (MiInitializeBootDefaults.c)
 *     MiClearLoaderDescriptorFlags @ 0x140C50EE8 (MiClearLoaderDescriptorFlags.c)
 *     MiConstructLoaderMemoryTree @ 0x140C50F58 (MiConstructLoaderMemoryTree.c)
 *     MiCreatePfnDatabase @ 0x140C51020 (MiCreatePfnDatabase.c)
 *     MiExamineHalVa @ 0x140C51194 (MiExamineHalVa.c)
 *     MiInitializeDummyPages @ 0x140C51970 (MiInitializeDummyPages.c)
 *     MiInitializeFunctionOverrides @ 0x140C51B2C (MiInitializeFunctionOverrides.c)
 *     MiInitializeKasan @ 0x140C51BB4 (MiInitializeKasan.c)
 *     MiInitializePhysicalMemoryBlocks @ 0x140C51CC4 (MiInitializePhysicalMemoryBlocks.c)
 *     MiMapDummyPages @ 0x140C51DFC (MiMapDummyPages.c)
 *     MiProtectSharedUserPage @ 0x140C522E4 (MiProtectSharedUserPage.c)
 *     MiZeroBootMappings @ 0x140C52560 (MiZeroBootMappings.c)
 *     MxMarkValidMappings @ 0x140C525D0 (MxMarkValidMappings.c)
 *     MiInitializeLoaderDescriptors @ 0x140C539C4 (MiInitializeLoaderDescriptors.c)
 *     MiInitializePfnsForValidMappings @ 0x140C53A8C (MiInitializePfnsForValidMappings.c)
 *     MiRemoveLargeFreeLoaderDescriptors @ 0x140C53C4C (MiRemoveLargeFreeLoaderDescriptors.c)
 *     MiSwitchToPfns @ 0x140C540A0 (MiSwitchToPfns.c)
 *     MiCreateHugeIoRanges @ 0x140C5578C (MiCreateHugeIoRanges.c)
 *     MiBuildPagedPool @ 0x140C55D28 (MiBuildPagedPool.c)
 *     MiInitializeNonPagedPool @ 0x140C55E34 (MiInitializeNonPagedPool.c)
 *     MiBuildSystemDataViews @ 0x140C56224 (MiBuildSystemDataViews.c)
 *     MiFillGapAddresses @ 0x140C56E9C (MiFillGapAddresses.c)
 *     MiInitializeDynamicVa @ 0x140C570AC (MiInitializeDynamicVa.c)
 *     MiCheckLargePageOk @ 0x140C57D14 (MiCheckLargePageOk.c)
 *     MiMemoryLicense @ 0x140C5838C (MiMemoryLicense.c)
 *     MiInitializeKernelStacks @ 0x140C595E8 (MiInitializeKernelStacks.c)
 *     MiInitializeChannelRangesPermanent @ 0x140C59954 (MiInitializeChannelRangesPermanent.c)
 *     MiInitializeChannelRangesTemporary @ 0x140C599BC (MiInitializeChannelRangesTemporary.c)
 *     MiCompensateForProcessorErrata @ 0x140C59EE8 (MiCompensateForProcessorErrata.c)
 *     MiCreateResidentBasePfnTemplate @ 0x140C5A248 (MiCreateResidentBasePfnTemplate.c)
 *     MiCreateResidentPfnTemplate @ 0x140C5A2B0 (MiCreateResidentPfnTemplate.c)
 *     MiInitializeZeroingAttributes @ 0x140C5ACA4 (MiInitializeZeroingAttributes.c)
 *     MiMeasureDemandCoalesceTimeBounds @ 0x140C5BC6C (MiMeasureDemandCoalesceTimeBounds.c)
 *     MiInitializeNonCachedMappingRegion @ 0x140C5BEA8 (MiInitializeNonCachedMappingRegion.c)
 *     MiInitializeSystemPtes @ 0x140C5C108 (MiInitializeSystemPtes.c)
 *     MiInitMachineDependent @ 0x140C5E3C4 (MiInitMachineDependent.c)
 *     MiInitializeSystemPteTracker @ 0x140C5E418 (MiInitializeSystemPteTracker.c)
 *     MiInitializeDecayPfns @ 0x140C5E468 (MiInitializeDecayPfns.c)
 *     MiCreateTopLevelUltraMappings @ 0x140C5E514 (MiCreateTopLevelUltraMappings.c)
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

  if ( dword_140E30288 )
    KeBugCheckEx(0x1Au, 0x300uLL, dword_140E30288, 0LL, 0LL);
  MiConstructLoaderMemoryTree(BugCheckParameter2);
  qword_141008808 = KeQueryPerformanceCounter(0LL).QuadPart;
  byte_140E37734 = 4;
  byte_140E2DC81 = KeGetCurrentPrcb()->CpuVendor == 1;
  MiCompensateForProcessorErrata(BugCheckParameter2);
  MiInitMachineDependent();
  MiLowHalVa = MiExamineHalVa();
  MiInitializeBootDefaults(BugCheckParameter2);
  MiInitializeSystemPteTracker();
  v2 = qword_140E372C0;
  v3 = 2LL;
  do
  {
    *v2 = 0LL;
    v2 += 8;
    --v3;
  }
  while ( v3 );
  xmmword_140E37340 = 0LL;
  MiInitializeDynamicVa();
  MiInitializeNumaRangesTemporary();
  MiInitializeChannelRangesTemporary();
  MiMemoryLicense(BugCheckParameter2);
  qword_141008810 = KeQueryPerformanceCounter(0LL).QuadPart;
  MiRemoveLargeFreeLoaderDescriptors(BugCheckParameter2);
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  qword_140E2DD10 = -1LL;
  qword_141008818 = PerformanceCounter.QuadPart;
  MiInitializeLoaderDescriptors(BugCheckParameter2);
  MiCheckLargePageOk(BugCheckParameter2);
  MiCreateResidentPfnTemplate(&unk_140E2FF80);
  MiCreateResidentBasePfnTemplate(&unk_140E2FFB0);
  MxMarkValidMappings(0xFFFFF6FB7DBED800uLL, 0xFFFFF6FB7DBEDFF8uLL, 3LL, BugCheckParameter2);
  qword_141008820 = KeQueryPerformanceCounter(0LL).QuadPart;
  MiCreatePfnDatabase(BugCheckParameter2);
  qword_141008828 = KeQueryPerformanceCounter(0LL).QuadPart;
  MiInitializePfnsForValidMappings(BugCheckParameter2);
  qword_141008830 = KeQueryPerformanceCounter(0LL).QuadPart;
  MiSwitchToPfns(BugCheckParameter2);
  qword_141008838 = KeQueryPerformanceCounter(0LL).QuadPart;
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
  qword_141008840 = KeQueryPerformanceCounter(0LL).QuadPart;
  if ( (int)ExInitializePoolHeapManagement(((unsigned __int64)MiFlags >> 5) & 0x400) < 0 )
    MxInstallMoreMemory(11);
  MiInitializePhysicalMemoryBlocks(BugCheckParameter2);
  MiZeroBootMappings();
  MiInitializeFunctionOverrides(BugCheckParameter2);
  MiInitializeDecayPfns();
  if ( ((unsigned __int8)&stru_140E35D80 & 0xF) != 0 )
    RtlRaiseStatus(-2147483646);
  stru_140E35D80 = 0LL;
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
      *(_QWORD *)(qword_140E2DC38 + (v12 << 7) + 376) = v8;
    }
    while ( v5 < (unsigned int)v11 );
  }
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  v14 = &unk_140E38880;
  if ( (*((_DWORD *)AnyMultiplexedVm + 46) & 0xF) != 1 )
    v14 = AnyMultiplexedVm + 192;
  *v14 = &unk_140E2DA00;
  if ( (int)MiInitializeSystemWorkingSetList((__int64)&MiSystemPartition, (__int64)AnyMultiplexedVm, 3u, 0LL) < 0 )
    MxInstallMoreMemory(16);
  MiInitializeSystemWorkingSetList((__int64)&MiSystemPartition, (__int64)&unk_140E38740, 9u, 0LL);
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
  MiFillGapAddresses(0xFFFFDE0000000000uLL, 48 * qword_140E2DD20 - 0x21FFFFFFFFD1LL);
  MiFlags |= 0x20000000uLL;
  qword_141008848 = KeQueryPerformanceCounter(0LL).QuadPart;
  MiFreeUnusedPfnPages(0LL);
  qword_141008850 = KeQueryPerformanceCounter(0LL).QuadPart;
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
  return MiEnumerateSlabAllocatorsEx((__int64)&MiSystemPartition, (__int64)MiInitialSlabPopulate, 0LL, 0xFFFFFFFF, 9u);
}
