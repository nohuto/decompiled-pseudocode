/*
 * XREFs of HalpMmBuildTiledMemoryMap @ 0x140B4E7C0
 * Callers:
 *     HalpInterruptBuildGlobalStartupStub @ 0x14054181C (HalpInterruptBuildGlobalStartupStub.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x140263A60 (MmGetPhysicalAddress.c)
 *     HalpAllocateCR3Root @ 0x140559294 (HalpAllocateCR3Root.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     HalpCommitCR3Worker @ 0x140B4E648 (HalpCommitCR3Worker.c)
 *     HalpMapCR3Ex @ 0x140B4E6CC (HalpMapCR3Ex.c)
 */

__int64 HalpMmBuildTiledMemoryMap()
{
  PVOID v0; // rdi
  int v2; // ebx

  HalpAllocateCR3Root();
  v0 = HalpCR3Root;
  if ( !HalpCR3Root )
    return 3221225495LL;
  memset_0(HalpCR3Root, 0, 0x1000uLL);
  v2 = HalpMapCR3Ex((unsigned __int64)HalpLowStubPhysicalAddress, (PHYSICAL_ADDRESS)HalpLowStubPhysicalAddress, 0LL);
  if ( v2 >= 0 )
  {
    v2 = HalpMapCR3Ex((unsigned __int64)HalpLMStub, 0LL, (PHYSICAL_ADDRESS *)&HalpTargetStubPtePa);
    if ( v2 >= 0 )
    {
      v2 = 0;
      HalpCommitCR3Worker((PVOID *)HalpCR3Root, 3u);
      dword_140FC0CD4 = MmGetPhysicalAddress(v0).LowPart;
    }
  }
  return (unsigned int)v2;
}
