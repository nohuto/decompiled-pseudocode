/*
 * XREFs of MmProbeAndLockPagesPrivate @ 0x1404011A4
 * Callers:
 *     WbCreateHeapExecutedBlock @ 0x14090A030 (WbCreateHeapExecutedBlock.c)
 *     WbMakeUserExecutablePagesKernelWritable @ 0x1409E20A0 (WbMakeUserExecutablePagesKernelWritable.c)
 * Callees:
 *     MiProbeAndLockPages @ 0x1404011D0 (MiProbeAndLockPages.c)
 */

__int64 __fastcall MmProbeAndLockPagesPrivate(__int64 a1, __int64 a2)
{
  LOBYTE(a2) = 1;
  return MiProbeAndLockPages(a1, a2, 3LL);
}
