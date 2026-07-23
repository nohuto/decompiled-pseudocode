/*
 * XREFs of HalpMmBuildTiledMemoryMap @ 0x140B50810
 * Callers:
 *     HalpInterruptBuildGlobalStartupStub @ 0x14053F11C (HalpInterruptBuildGlobalStartupStub.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x1402932D0 (MmGetPhysicalAddress.c)
 *     HalpAllocateCR3Root @ 0x140556EC4 (HalpAllocateCR3Root.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     HalpCommitCR3Worker @ 0x140B50698 (HalpCommitCR3Worker.c)
 *     HalpMapCR3Ex @ 0x140B5071C (HalpMapCR3Ex.c)
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
      dword_140FC0F2C = MmGetPhysicalAddress(v0).LowPart;
    }
  }
  return (unsigned int)v2;
}
