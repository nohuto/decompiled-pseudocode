/*
 * XREFs of MiInitializePhysicalMemoryBlocks @ 0x140C51CC4
 * Callers:
 *     MiInitNucleus @ 0x140C51428 (MiInitNucleus.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14036DEF0 (KeQueryPerformanceCounter.c)
 *     MxInstallMoreMemory @ 0x14066D8C0 (MxInstallMoreMemory.c)
 *     MiComputeNodeMemory @ 0x14066D960 (MiComputeNodeMemory.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     MiConvertInitialMemoryBlock @ 0x1407E974C (MiConvertInitialMemoryBlock.c)
 *     MiCreateNodeLists @ 0x1407E9860 (MiCreateNodeLists.c)
 *     MiCreatePfnBitMaps @ 0x1407FAF3C (MiCreatePfnBitMaps.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 *     MiMarkLargePageRanges @ 0x140C5209C (MiMarkLargePageRanges.c)
 *     MmInitializeMemoryLimits @ 0x140C58680 (MmInitializeMemoryLimits.c)
 */

LARGE_INTEGER __fastcall MiInitializePhysicalMemoryBlocks(__int64 a1)
{
  signed __int64 i; // rax
  __int64 v3; // rcx
  bool v4; // cl
  __int64 v5; // rax
  void *v6; // rbx
  void *v7; // rsi
  LARGE_INTEGER result; // rax
  _BYTE v9[48]; // [rsp+20h] [rbp-48h] BYREF

  for ( i = 0LL; i < 47; ++i )
  {
    v4 = 1;
    if ( (unsigned __int64)i <= 0x2C )
    {
      v3 = 0x15C5C0C00048LL;
      if ( _bittest64(&v3, i) )
        v4 = 0;
    }
    v9[i] = v4;
  }
  v5 = MmInitializeMemoryLimits(a1, v9);
  v6 = (void *)v5;
  if ( !v5 )
    MxInstallMoreMemory(17);
  v7 = (void *)MiConvertInitialMemoryBlock((__int64)&MiSystemPartition, v5);
  ExFreePoolWithTag(v6, 0);
  qword_140E38D60 = MiCreateNodeLists((__int64)&MiSystemPartition, (__int64)v7);
  if ( !qword_140E38D60 )
    MxInstallMoreMemory(19);
  MiComputeNodeMemory(&MiSystemPartition, 1);
  qword_141008858 = KeQueryPerformanceCounter(0LL).QuadPart;
  MmPhysicalMemoryBlock = v7;
  if ( !(unsigned int)MiCreatePfnBitMaps((__int64)&MiSystemPartition, (unsigned int *)v7) )
    MxInstallMoreMemory(22);
  qword_141008860 = KeQueryPerformanceCounter(0LL).QuadPart;
  MiMarkLargePageRanges(a1);
  result = KeQueryPerformanceCounter(0LL);
  qword_141008868 = result.QuadPart;
  return result;
}
