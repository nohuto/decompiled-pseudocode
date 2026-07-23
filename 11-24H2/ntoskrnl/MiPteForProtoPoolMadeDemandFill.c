/*
 * XREFs of MiPteForProtoPoolMadeDemandFill @ 0x140200488
 * Callers:
 *     MiWsleFlush @ 0x140201004 (MiWsleFlush.c)
 * Callees:
 *     MiMapPageInHyperSpaceWorker @ 0x14024BEF0 (MiMapPageInHyperSpaceWorker.c)
 */

__int64 __fastcall MiPteForProtoPoolMadeDemandFill(__int64 a1)
{
  unsigned __int64 v1; // rax
  __int64 v2; // r8
  __int64 v3; // rax
  __int64 result; // rax

  v1 = MiMapPageInHyperSpaceWorker(0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4), 0LL, 0x80000000LL);
  v2 = (v1 >> 9) & 0x7FFFFFFFF8LL;
  v3 = *(_QWORD *)v1;
  *(_QWORD *)KeGetCurrentPrcb()->MmInternal = 0LL;
  result = v3 | 2;
  *(_QWORD *)(v2 - 0x98000000000LL) = CLFS_LSN_NULL_EXT;
  return result;
}
