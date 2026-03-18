/*
 * XREFs of MiIsPfnFromChargedSlabAllocation @ 0x14039F0B8
 * Callers:
 *     MiDeleteShadowStackPtes @ 0x140269284 (MiDeleteShadowStackPtes.c)
 *     MmFreeIndependentPages @ 0x14039EC60 (MmFreeIndependentPages.c)
 *     MiAllocateKernelStackPages @ 0x14039F96C (MiAllocateKernelStackPages.c)
 *     MmAllocateNonChargedSecurePages @ 0x14049D980 (MmAllocateNonChargedSecurePages.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x140674B50 (MmMarkPhysicalMemoryAsBad.c)
 *     MmAllocateSecureKernelPages @ 0x140688AC4 (MmAllocateSecureKernelPages.c)
 *     MmAllocateIndependentPagesEx @ 0x140A88F6C (MmAllocateIndependentPagesEx.c)
 *     MiUpdateBootHpatPagesInUse @ 0x140C568E8 (MiUpdateBootHpatPagesInUse.c)
 *     MiInitializeBootShadowStackPage @ 0x140C5712C (MiInitializeBootShadowStackPage.c)
 * Callees:
 *     MiGetPfnSlabType @ 0x14022D610 (MiGetPfnSlabType.c)
 */

__int64 __fastcall MiIsPfnFromChargedSlabAllocation(__int64 a1)
{
  __int64 v1; // r8

  if ( (unsigned int)MiGetPfnSlabType(a1) == 9 )
    return 0LL;
  else
    return *(unsigned __int8 *)(qword_140E3D140 + 2 * ((0xAAAAAAAAAAAAAAABuLL * ((v1 + 0x220000000000LL) >> 4)) >> 9) + 1) >> 7;
}
