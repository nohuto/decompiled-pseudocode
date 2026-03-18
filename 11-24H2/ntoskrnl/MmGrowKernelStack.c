/*
 * XREFs of MmGrowKernelStack @ 0x1406755B0
 * Callers:
 *     <none>
 * Callees:
 *     MmGrowKernelStackEx @ 0x140477D50 (MmGrowKernelStackEx.c)
 */

__int64 __fastcall MmGrowKernelStack(__int64 a1)
{
  return MmGrowKernelStackEx(a1, (unsigned int)KeKernelLargeStackCommit);
}
