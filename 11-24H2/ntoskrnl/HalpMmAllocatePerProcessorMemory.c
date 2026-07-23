/*
 * XREFs of HalpMmAllocatePerProcessorMemory @ 0x140540738
 * Callers:
 *     HalpTimerInitializeProfiling @ 0x14054768C (HalpTimerInitializeProfiling.c)
 *     HalpInitializePmcCounterSetInfo @ 0x140C107E4 (HalpInitializePmcCounterSetInfo.c)
 * Callees:
 *     HalQueryMaximumProcessorCount @ 0x140375540 (HalQueryMaximumProcessorCount.c)
 *     HalpMmAllocateMemoryInternal @ 0x140540620 (HalpMmAllocateMemoryInternal.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

void *__fastcall HalpMmAllocatePerProcessorMemory(int a1)
{
  unsigned int v1; // edi
  void *MemoryInternal; // rax
  void *v3; // rbx

  v1 = HalQueryMaximumProcessorCount() * a1;
  MemoryInternal = (void *)HalpMmAllocateMemoryInternal(v1, 1u);
  v3 = MemoryInternal;
  if ( MemoryInternal )
    memset_0(MemoryInternal, 0, v1);
  return v3;
}
