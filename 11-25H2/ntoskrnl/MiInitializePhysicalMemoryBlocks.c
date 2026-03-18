/*
 * XREFs of MiInitializePhysicalMemoryBlocks @ 0x140C3E904
 * Callers:
 *     MiInitNucleus @ 0x140C3E068 (MiInitNucleus.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14031B970 (KeQueryPerformanceCounter.c)
 *     MxInstallMoreMemory @ 0x140660BB0 (MxInstallMoreMemory.c)
 *     MiComputeNodeMemory @ 0x140660C50 (MiComputeNodeMemory.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     MiConvertInitialMemoryBlock @ 0x1407D92BC (MiConvertInitialMemoryBlock.c)
 *     MiCreateNodeLists @ 0x1407D93D0 (MiCreateNodeLists.c)
 *     MiCreatePfnBitMaps @ 0x1407EA93C (MiCreatePfnBitMaps.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 *     MiMarkLargePageRanges @ 0x140C3ECDC (MiMarkLargePageRanges.c)
 *     MmInitializeMemoryLimits @ 0x140C45210 (MmInitializeMemoryLimits.c)
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
  qword_140E389E0 = MiCreateNodeLists((__int64)&MiSystemPartition, (__int64)v7);
  if ( !qword_140E389E0 )
    MxInstallMoreMemory(19);
  MiComputeNodeMemory(&MiSystemPartition, 1);
  qword_141007858 = KeQueryPerformanceCounter(0LL).QuadPart;
  MmPhysicalMemoryBlock = v7;
  if ( !(unsigned int)MiCreatePfnBitMaps((__int64)&MiSystemPartition, (unsigned int *)v7) )
    MxInstallMoreMemory(22);
  qword_141007860 = KeQueryPerformanceCounter(0LL).QuadPart;
  MiMarkLargePageRanges(a1);
  result = KeQueryPerformanceCounter(0LL);
  qword_141007868 = result.QuadPart;
  return result;
}
