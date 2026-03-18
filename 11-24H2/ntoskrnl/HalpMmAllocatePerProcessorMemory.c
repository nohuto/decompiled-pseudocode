/*
 * XREFs of HalpMmAllocatePerProcessorMemory @ 0x140542DE8
 * Callers:
 *     HalpTimerInitializeProfiling @ 0x140549DCC (HalpTimerInitializeProfiling.c)
 *     HalpInitializePmcCounterSetInfo @ 0x140C0E7E4 (HalpInitializePmcCounterSetInfo.c)
 * Callees:
 *     HalQueryMaximumProcessorCount @ 0x1403BC0C0 (HalQueryMaximumProcessorCount.c)
 *     HalpMmAllocateMemoryInternal @ 0x140542CD0 (HalpMmAllocateMemoryInternal.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
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
