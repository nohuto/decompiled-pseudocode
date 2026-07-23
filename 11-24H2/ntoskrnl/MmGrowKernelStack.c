/*
 * XREFs of MmGrowKernelStack @ 0x140676780
 * Callers:
 *     <none>
 * Callees:
 *     MmGrowKernelStackEx @ 0x140474350 (MmGrowKernelStackEx.c)
 */

__int64 __fastcall MmGrowKernelStack(__int64 a1)
{
  return MmGrowKernelStackEx(a1, (unsigned int)KeKernelLargeStackCommit);
}
