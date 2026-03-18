/*
 * XREFs of MiInitNucleus @ 0x140C3E068
 * Callers:
 *     MmInitSystem @ 0x140BCD2E8 (MmInitSystem.c)
 * Callees:
 *     RtlRaiseStatus @ 0x14025AB10 (RtlRaiseStatus.c)
 *     ExAllocatePoolMm @ 0x1402DA890 (ExAllocatePoolMm.c)
 *     KeQueryPerformanceCounter @ 0x14031B970 (KeQueryPerformanceCounter.c)
 *     MiGetAnyMultiplexedVm @ 0x1404423A0 (MiGetAnyMultiplexedVm.c)
 *     ExInitializeNPagedLookasideListInternal @ 0x140460B30 (ExInitializeNPagedLookasideListInternal.c)
 *     MiEnumerateSlabAllocatorsEx @ 0x14046BBB4 (MiEnumerateSlabAllocatorsEx.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     ExInitializePoolHeapManagement @ 0x14064DFE0 (ExInitializePoolHeapManagement.c)
 *     MxInstallMoreMemory @ 0x140660BB0 (MxInstallMoreMemory.c)
 *     MiFreeUnusedPfnPages @ 0x140661270 (MiFreeUnusedPfnPages.c)
 *     MiInitializePageFaultResources @ 0x14066CCBC (MiInitializePageFaultResources.c)
 *     MiInitializeDebuggerSupport @ 0x1406742CC (MiInitializeDebuggerSupport.c)
 *     MiInitializeCommitment @ 0x14067AAA8 (MiInitializeCommitment.c)
 *     MiInitializeSystemWorkingSetList @ 0x1407DA984 (MiInitializeSystemWorkingSetList.c)
 *     MiInitializeSections @ 0x1407DB908 (MiInitializeSections.c)
 *     MiInitializeWsSwapping @ 0x1407EB37C (MiInitializeWsSwapping.c)
 *     MmInitializeProcessor @ 0x140B51F08 (MmInitializeProcessor.c)
 *     MiInitializeNumaRangesPermanent @ 0x140C3C6E4 (MiInitializeNumaRangesPermanent.c)
 *     MiInitializeNumaRangesTemporary @ 0x140C3C754 (MiInitializeNumaRangesTemporary.c)
 *     MiInitializeBootDefaults @ 0x140C3CFC4 (MiInitializeBootDefaults.c)
 *     MiClearLoaderDescriptorFlags @ 0x140C3DB28 (MiClearLoaderDescriptorFlags.c)
 *     MiConstructLoaderMemoryTree @ 0x140C3DB98 (MiConstructLoaderMemoryTree.c)
 *     MiCreatePfnDatabase @ 0x140C3DC60 (MiCreatePfnDatabase.c)
 *     MiExamineHalVa @ 0x140C3DDD4 (MiExamineHalVa.c)
 *     MiInitializeDummyPages @ 0x140C3E5B0 (MiInitializeDummyPages.c)
 *     MiInitializeFunctionOverrides @ 0x140C3E76C (MiInitializeFunctionOverrides.c)
 *     MiInitializeKasan @ 0x140C3E7F4 (MiInitializeKasan.c)
 *     MiInitializePhysicalMemoryBlocks @ 0x140C3E904 (MiInitializePhysicalMemoryBlocks.c)
 *     MiMapDummyPages @ 0x140C3EA3C (MiMapDummyPages.c)
 *     MiProtectSharedUserPage @ 0x140C3EF24 (MiProtectSharedUserPage.c)
 *     MiZeroBootMappings @ 0x140C3F1A0 (MiZeroBootMappings.c)
 *     MxMarkValidMappings @ 0x140C3F210 (MxMarkValidMappings.c)
 *     MiInitializeLoaderDescriptors @ 0x140C40604 (MiInitializeLoaderDescriptors.c)
 *     MiInitializePfnsForValidMappings @ 0x140C406CC (MiInitializePfnsForValidMappings.c)
 *     MiRemoveLargeFreeLoaderDescriptors @ 0x140C4088C (MiRemoveLargeFreeLoaderDescriptors.c)
 *     MiSwitchToPfns @ 0x140C40CE0 (MiSwitchToPfns.c)
 *     MiCreateHugeIoRanges @ 0x140C423CC (MiCreateHugeIoRanges.c)
 *     MiBuildPagedPool @ 0x140C42968 (MiBuildPagedPool.c)
 *     MiInitializeNonPagedPool @ 0x140C42A74 (MiInitializeNonPagedPool.c)
 *     MiBuildSystemDataViews @ 0x140C42E1C (MiBuildSystemDataViews.c)
 *     MiFillGapAddresses @ 0x140C43A8C (MiFillGapAddresses.c)
 *     MiInitializeDynamicVa @ 0x140C43C9C (MiInitializeDynamicVa.c)
 *     MiCheckLargePageOk @ 0x140C448A4 (MiCheckLargePageOk.c)
 *     MiMemoryLicense @ 0x140C44F1C (MiMemoryLicense.c)
 *     MiInitializeKernelStacks @ 0x140C46178 (MiInitializeKernelStacks.c)
 *     MiInitializeChannelRangesPermanent @ 0x140C464E4 (MiInitializeChannelRangesPermanent.c)
 *     MiInitializeChannelRangesTemporary @ 0x140C4654C (MiInitializeChannelRangesTemporary.c)
 *     MiCompensateForProcessorErrata @ 0x140C46A78 (MiCompensateForProcessorErrata.c)
 *     MiCreateResidentBasePfnTemplate @ 0x140C46DD8 (MiCreateResidentBasePfnTemplate.c)
 *     MiCreateResidentPfnTemplate @ 0x140C46E40 (MiCreateResidentPfnTemplate.c)
 *     MiInitializeZeroingAttributes @ 0x140C47834 (MiInitializeZeroingAttributes.c)
 *     MiMeasureDemandCoalesceTimeBounds @ 0x140C487AC (MiMeasureDemandCoalesceTimeBounds.c)
 *     MiInitializeNonCachedMappingRegion @ 0x140C489E8 (MiInitializeNonCachedMappingRegion.c)
 *     MiInitializeSystemPtes @ 0x140C48C48 (MiInitializeSystemPtes.c)
 *     MiInitMachineDependent @ 0x140C4AEB4 (MiInitMachineDependent.c)
 *     MiInitializeSystemPteTracker @ 0x140C4AF08 (MiInitializeSystemPteTracker.c)
 *     MiInitializeDecayPfns @ 0x140C4AF58 (MiInitializeDecayPfns.c)
 *     MiCreateTopLevelUltraMappings @ 0x140C4B004 (MiCreateTopLevelUltraMappings.c)
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

  if ( dword_140E2FF00 )
    KeBugCheckEx(0x1Au, 0x300uLL, dword_140E2FF00, 0LL, 0LL);
  MiConstructLoaderMemoryTree(BugCheckParameter2);
  qword_141007808 = KeQueryPerformanceCounter(0LL).QuadPart;
  byte_140E373B4 = 4;
  byte_140E2D901 = KeGetCurrentPrcb()->CpuVendor == 1;
  MiCompensateForProcessorErrata(BugCheckParameter2);
  MiInitMachineDependent();
  MiLowHalVa = MiExamineHalVa();
  MiInitializeBootDefaults(BugCheckParameter2);
  MiInitializeSystemPteTracker();
  v2 = qword_140E36F40;
  v3 = 2LL;
  do
  {
    *v2 = 0LL;
    v2 += 8;
    --v3;
  }
  while ( v3 );
  xmmword_140E36FC0 = 0LL;
  MiInitializeDynamicVa();
  MiInitializeNumaRangesTemporary();
  MiInitializeChannelRangesTemporary();
  MiMemoryLicense(BugCheckParameter2);
  qword_141007810 = KeQueryPerformanceCounter(0LL).QuadPart;
  MiRemoveLargeFreeLoaderDescriptors(BugCheckParameter2);
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  qword_140E2D990 = -1LL;
  qword_141007818 = PerformanceCounter.QuadPart;
  MiInitializeLoaderDescriptors(BugCheckParameter2);
  MiCheckLargePageOk(BugCheckParameter2);
  MiCreateResidentPfnTemplate(&unk_140E2FC00);
  MiCreateResidentBasePfnTemplate(&unk_140E2FC30);
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
  if ( ((unsigned __int8)&stru_140E35A00 & 0xF) != 0 )
    RtlRaiseStatus(-2147483646);
  stru_140E35A00 = 0LL;
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
      *(_QWORD *)(qword_140E2D8B8 + (v12 << 7) + 376) = v8;
    }
    while ( v5 < (unsigned int)v11 );
  }
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  v14 = &unk_140E38500;
  if ( (*((_DWORD *)AnyMultiplexedVm + 46) & 0xF) != 1 )
    v14 = AnyMultiplexedVm + 192;
  *v14 = &unk_140E2D680;
  if ( (int)MiInitializeSystemWorkingSetList((__int64)&MiSystemPartition, (__int64)AnyMultiplexedVm, 3, 0LL) < 0 )
    MxInstallMoreMemory(16);
  MiInitializeSystemWorkingSetList((__int64)&MiSystemPartition, (__int64)&unk_140E383C0, 9, 0LL);
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
  MiFillGapAddresses(0xFFFFDE0000000000uLL, 48 * qword_140E2D9A0 - 0x21FFFFFFFFD1LL);
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
  return MiEnumerateSlabAllocatorsEx((__int64)&MiSystemPartition, (__int64)MiInitialSlabPopulate, 0LL, 0xFFFFFFFF, 9u);
}
