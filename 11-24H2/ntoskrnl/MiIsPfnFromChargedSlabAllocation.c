/*
 * XREFs of MiIsPfnFromChargedSlabAllocation @ 0x14021D558
 * Callers:
 *     MiAllocateKernelStackPages @ 0x14021639C (MiAllocateKernelStackPages.c)
 *     MmFreeIndependentPages @ 0x14021D100 (MmFreeIndependentPages.c)
 *     MiDeleteShadowStackPtes @ 0x14021EA48 (MiDeleteShadowStackPtes.c)
 *     MmAllocateNonChargedSecurePages @ 0x140498780 (MmAllocateNonChargedSecurePages.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x140675D20 (MmMarkPhysicalMemoryAsBad.c)
 *     MmAllocateSecureKernelPages @ 0x140689BF4 (MmAllocateSecureKernelPages.c)
 *     MmAllocateIndependentPagesEx @ 0x140A8536C (MmAllocateIndependentPagesEx.c)
 *     MiUpdateBootHpatPagesInUse @ 0x140C58A78 (MiUpdateBootHpatPagesInUse.c)
 *     MiInitializeBootShadowStackPage @ 0x140C592BC (MiInitializeBootShadowStackPage.c)
 * Callees:
 *     MiGetPfnSlabType @ 0x140300F20 (MiGetPfnSlabType.c)
 */

__int64 __fastcall MiIsPfnFromChargedSlabAllocation(__int64 a1)
{
  __int64 v1; // r8

  if ( (unsigned int)MiGetPfnSlabType(a1) == 9 )
    return 0LL;
  else
    return *(unsigned __int8 *)(qword_140E3D280 + 2 * ((0xAAAAAAAAAAAAAAABuLL * ((v1 + 0x220000000000LL) >> 4)) >> 9) + 1) >> 7;
}
