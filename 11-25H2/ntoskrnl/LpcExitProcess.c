/*
 * XREFs of LpcExitProcess @ 0x1408E109C
 * Callers:
 *     PspProcessDelete @ 0x1408E1310 (PspProcessDelete.c)
 *     PspExitLastThread @ 0x14091ECC8 (PspExitLastThread.c)
 * Callees:
 *     PsReturnProcessPagedPoolQuota @ 0x1403C5AE0 (PsReturnProcessPagedPoolQuota.c)
 *     AlpcpCleanupProcessViews @ 0x1408E10E0 (AlpcpCleanupProcessViews.c)
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
