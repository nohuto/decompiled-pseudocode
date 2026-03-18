/*
 * XREFs of LpcExitProcess @ 0x1408A9738
 * Callers:
 *     PspProcessDelete @ 0x1408A99B0 (PspProcessDelete.c)
 *     PspExitLastThread @ 0x1409374F0 (PspExitLastThread.c)
 * Callees:
 *     PsReturnProcessPagedPoolQuota @ 0x1404066F0 (PsReturnProcessPagedPoolQuota.c)
 *     AlpcpCleanupProcessViews @ 0x1408A977C (AlpcpCleanupProcessViews.c)
 */

__int64 __fastcall LpcExitProcess(ULONG_PTR a1)
{
  if ( *(_QWORD *)(a1 + 1432) )
  {
    PsReturnProcessPagedPoolQuota(a1, *(_QWORD *)(a1 + 1432));
    *(_QWORD *)(a1 + 1432) = 0LL;
  }
  return AlpcpCleanupProcessViews(a1);
}
