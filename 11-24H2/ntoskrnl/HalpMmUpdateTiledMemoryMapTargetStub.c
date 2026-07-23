/*
 * XREFs of HalpMmUpdateTiledMemoryMapTargetStub @ 0x140556F24
 * Callers:
 *     HalpInterruptStartProcessor @ 0x140B4DF10 (HalpInterruptStartProcessor.c)
 *     HalpBuildResumeStructures @ 0x140B4EE68 (HalpBuildResumeStructures.c)
 * Callees:
 *     MiUnmapContiguousMemory @ 0x1402929E8 (MiUnmapContiguousMemory.c)
 *     MmGetPhysicalAddress @ 0x1402932D0 (MmGetPhysicalAddress.c)
 *     MmMapIoSpaceEx @ 0x14034B090 (MmMapIoSpaceEx.c)
 */

__int64 HalpMmUpdateTiledMemoryMapTargetStub()
{
  unsigned int v0; // ebx
  _QWORD *v1; // rdi
  PHYSICAL_ADDRESS PhysicalAddress; // rax

  v0 = 0;
  if ( HalpTargetStubPtePa )
  {
    v1 = (_QWORD *)MmMapIoSpaceEx(HalpTargetStubPtePa, 8LL, 4LL);
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
