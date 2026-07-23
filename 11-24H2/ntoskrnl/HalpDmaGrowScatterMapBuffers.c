/*
 * XREFs of HalpDmaGrowScatterMapBuffers @ 0x140A86DC0
 * Callers:
 *     HalpGrowMapBufferWorker @ 0x1404B13C0 (HalpGrowMapBufferWorker.c)
 *     HalpAllocateMapRegisters @ 0x1406FB8A0 (HalpAllocateMapRegisters.c)
 * Callees:
 *     MmUnmapLockedPages @ 0x14029D5C0 (MmUnmapLockedPages.c)
 *     HalpDmaCommitScatterMapBuffers @ 0x140489858 (HalpDmaCommitScatterMapBuffers.c)
 *     MmFreePagesFromMdl @ 0x14048E2C0 (MmFreePagesFromMdl.c)
 *     HalpDmaAllocateScatterMemory @ 0x140A86E40 (HalpDmaAllocateScatterMemory.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall HalpDmaGrowScatterMapBuffers(__int64 a1, __int64 a2)
{
  struct _MDL *v3; // rax
  struct _MDL *v4; // rbx
  PVOID BaseAddress; // [rsp+50h] [rbp+18h] BYREF

  BaseAddress = 0LL;
  v3 = (struct _MDL *)HalpDmaAllocateScatterMemory(a1, a2, &BaseAddress);
  v4 = v3;
  if ( v3 )
  {
    if ( !HalpDmaCommitScatterMapBuffers(a1, (__int64)BaseAddress, 0LL, 0, v3) )
    {
      if ( BaseAddress )
        MmUnmapLockedPages(BaseAddress, v4);
      MmFreePagesFromMdl(v4);
    }
    ExFreePoolWithTag(v4, 0);
  }
}
