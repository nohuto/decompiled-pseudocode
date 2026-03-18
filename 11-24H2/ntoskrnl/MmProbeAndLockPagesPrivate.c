/*
 * XREFs of MmProbeAndLockPagesPrivate @ 0x1404200FC
 * Callers:
 *     WbCreateHeapExecutedBlock @ 0x1408FDAD8 (WbCreateHeapExecutedBlock.c)
 *     WbMakeUserExecutablePagesKernelWritable @ 0x1409E0F80 (WbMakeUserExecutablePagesKernelWritable.c)
 * Callees:
 *     MiProbeAndLockPages @ 0x140420120 (MiProbeAndLockPages.c)
 */

__int64 __fastcall MmProbeAndLockPagesPrivate(__int64 a1, __int64 a2)
{
  LOBYTE(a2) = 1;
  return MiProbeAndLockPages(a1, a2, 3LL);
}
