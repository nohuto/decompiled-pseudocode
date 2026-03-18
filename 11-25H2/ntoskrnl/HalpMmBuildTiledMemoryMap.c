/*
 * XREFs of HalpMmBuildTiledMemoryMap @ 0x140B3E7C0
 * Callers:
 *     HalpInterruptBuildGlobalStartupStub @ 0x14053EFEC (HalpInterruptBuildGlobalStartupStub.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x1402AB2E0 (MmGetPhysicalAddress.c)
 *     HalpAllocateCR3Root @ 0x140556994 (HalpAllocateCR3Root.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     HalpCommitCR3Worker @ 0x140B3E648 (HalpCommitCR3Worker.c)
 *     HalpMapCR3Ex @ 0x140B3E6CC (HalpMapCR3Ex.c)
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
      dword_140FC0534 = MmGetPhysicalAddress(v0).LowPart;
    }
  }
  return (unsigned int)v2;
}
