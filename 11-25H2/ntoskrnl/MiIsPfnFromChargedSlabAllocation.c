/*
 * XREFs of MiIsPfnFromChargedSlabAllocation @ 0x140227668
 * Callers:
 *     MmFreeIndependentPages @ 0x140227210 (MmFreeIndependentPages.c)
 *     MiAllocateKernelStackPages @ 0x1402282B8 (MiAllocateKernelStackPages.c)
 *     MiDeleteShadowStackPtes @ 0x14049C92C (MiDeleteShadowStackPtes.c)
 *     MmAllocateNonChargedSecurePages @ 0x14049E89C (MmAllocateNonChargedSecurePages.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x1406690F0 (MmMarkPhysicalMemoryAsBad.c)
 *     MmAllocateSecureKernelPages @ 0x14067D234 (MmAllocateSecureKernelPages.c)
 *     MmAllocateIndependentPagesEx @ 0x140A8508C (MmAllocateIndependentPagesEx.c)
 *     MiUpdateBootHpatPagesInUse @ 0x140C45608 (MiUpdateBootHpatPagesInUse.c)
 *     MiInitializeBootShadowStackPage @ 0x140C45E4C (MiInitializeBootShadowStackPage.c)
 * Callees:
 *     MiGetPfnSlabType @ 0x1402170E0 (MiGetPfnSlabType.c)
 */

__int64 __fastcall MiIsPfnFromChargedSlabAllocation(__int64 a1)
{
  __int64 v1; // r8

  if ( (unsigned int)MiGetPfnSlabType(a1) == 9 )
    return 0LL;
  else
    return *(unsigned __int8 *)(qword_140E3CF00 + 2 * ((0xAAAAAAAAAAAAAAABuLL * ((v1 + 0x220000000000LL) >> 4)) >> 9) + 1) >> 7;
}
