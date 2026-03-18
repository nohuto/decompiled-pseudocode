/*
 * XREFs of HalpMmAllocatePerProcessorMemory @ 0x1405405B8
 * Callers:
 *     HalpTimerInitializeProfiling @ 0x1405474DC (HalpTimerInitializeProfiling.c)
 *     HalpInitializePmcCounterSetInfo @ 0x140BFD7E4 (HalpInitializePmcCounterSetInfo.c)
 * Callees:
 *     HalQueryMaximumProcessorCount @ 0x1404477E0 (HalQueryMaximumProcessorCount.c)
 *     HalpMmAllocateMemoryInternal @ 0x1405404A0 (HalpMmAllocateMemoryInternal.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
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
