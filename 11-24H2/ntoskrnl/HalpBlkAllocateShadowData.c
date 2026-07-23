/*
 * XREFs of HalpBlkAllocateShadowData @ 0x140C14E98
 * Callers:
 *     HalpBlkInitializeVirtualAddressSpace @ 0x140C14FAC (HalpBlkInitializeVirtualAddressSpace.c)
 * Callees:
 *     HalpMmAllocateMemoryInternal @ 0x140540620 (HalpMmAllocateMemoryInternal.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     HalpBlkAllocateAndShadowMemory @ 0x140C14C34 (HalpBlkAllocateAndShadowMemory.c)
 */

__int64 HalpBlkAllocateShadowData()
{
  unsigned int v0; // ebx
  unsigned int v1; // edi
  void *MemoryInternal; // rax
  __int64 v3; // r8
  unsigned int i; // edi
  char *v5; // rdx
  __int64 v6; // rcx

  v0 = 0;
  v1 = 8 * HalpInterruptBlockedProcessors;
  MemoryInternal = (void *)HalpMmAllocateMemoryInternal(8 * HalpInterruptBlockedProcessors, 1u);
  HalpBlkPcr = (__int64)MemoryInternal;
  if ( MemoryInternal )
  {
    memset_0(MemoryInternal, 0, v1);
    for ( i = 0; i < HalpInterruptBlockedProcessors; ++i )
    {
      v5 = HalpBlkAllocateAndShadowMemory(0LL, 0xEu, v3, 4, 0LL);
      if ( !v5 )
        return (unsigned int)-1073741801;
      v6 = i;
      *(_QWORD *)(HalpBlkPcr + 8 * v6) = v5;
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v0;
}
