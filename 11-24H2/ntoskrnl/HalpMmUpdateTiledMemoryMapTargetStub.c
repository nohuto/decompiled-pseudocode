/*
 * XREFs of HalpMmUpdateTiledMemoryMapTargetStub @ 0x1405592F4
 * Callers:
 *     HalpInterruptStartProcessor @ 0x140B4BED0 (HalpInterruptStartProcessor.c)
 *     HalpBuildResumeStructures @ 0x140B4CE28 (HalpBuildResumeStructures.c)
 * Callees:
 *     MiUnmapContiguousMemory @ 0x140263178 (MiUnmapContiguousMemory.c)
 *     MmGetPhysicalAddress @ 0x140263A60 (MmGetPhysicalAddress.c)
 *     MmMapIoSpaceEx @ 0x1402E9A50 (MmMapIoSpaceEx.c)
 */

__int64 HalpMmUpdateTiledMemoryMapTargetStub()
{
  unsigned int v0; // ebx
  _QWORD *v1; // rdi
  PHYSICAL_ADDRESS PhysicalAddress; // rax

  v0 = 0;
  if ( HalpTargetStubPtePa )
  {
    v1 = (_QWORD *)MmMapIoSpaceEx(HalpTargetStubPtePa, 8LL, 4u);
    if ( v1 )
    {
      PhysicalAddress = MmGetPhysicalAddress(HalpLMStub);
      if ( PhysicalAddress.QuadPart )
        *v1 = PhysicalAddress.QuadPart ^ (*v1 ^ PhysicalAddress.QuadPart) & 0xFFF0000000000FFFuLL;
      else
        v0 = -1073741823;
      MiUnmapContiguousMemory((unsigned __int64)v1, 8uLL, 1);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v0;
}
