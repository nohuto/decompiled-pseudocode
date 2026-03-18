/*
 * XREFs of MmGrowKernelStack @ 0x140669B50
 * Callers:
 *     <none>
 * Callees:
 *     MmGrowKernelStackEx @ 0x140477F70 (MmGrowKernelStackEx.c)
 */

__int64 __fastcall MmGrowKernelStack(__int64 a1)
{
  return MmGrowKernelStackEx(a1, (unsigned int)KeKernelLargeStackCommit);
}
