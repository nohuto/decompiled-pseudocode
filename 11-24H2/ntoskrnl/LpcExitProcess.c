/*
 * XREFs of LpcExitProcess @ 0x1408FF998
 * Callers:
 *     PspExitLastThread @ 0x1408F27B8 (PspExitLastThread.c)
 *     PspProcessDelete @ 0x1408FFC10 (PspProcessDelete.c)
 * Callees:
 *     PsReturnProcessPagedPoolQuota @ 0x1403C8EA0 (PsReturnProcessPagedPoolQuota.c)
 *     AlpcpCleanupProcessViews @ 0x1408FF9DC (AlpcpCleanupProcessViews.c)
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
