/*
 * XREFs of MiDecommitLargePoolVa @ 0x14038BEF0
 * Callers:
 *     MiDeleteNonPagedPoolPte @ 0x1402FAF80 (MiDeleteNonPagedPoolPte.c)
 * Callees:
 *     MiRewritePteWithLockBit @ 0x1402110AC (MiRewritePteWithLockBit.c)
 *     MiLockAndDecrementShareCount @ 0x140227554 (MiLockAndDecrementShareCount.c)
 *     MiGetContainingPageTable @ 0x1402C3750 (MiGetContainingPageTable.c)
 *     MiFlushTbList @ 0x14032BCA0 (MiFlushTbList.c)
 *     MiInsertLargeTbFlushEntry @ 0x14038BC74 (MiInsertLargeTbFlushEntry.c)
 *     MiDecreaseUsedPtes @ 0x14038BCF0 (MiDecreaseUsedPtes.c)
 *     MiFreeLargePageMemory @ 0x14038C050 (MiFreeLargePageMemory.c)
 *     MiLogPerfMemoryRangeEvent @ 0x1404D05B4 (MiLogPerfMemoryRangeEvent.c)
 */

__int64 __fastcall MiDecommitLargePoolVa(__int64 a1, volatile __int64 *a2, __int64 a3, __int64 a4)
{
  ULONG_PTR v7; // rsi
  unsigned int v8; // edi
  __int64 ContainingPageTable; // rax
  __int64 v10; // r10
  __int64 v11; // rcx
  __int64 *v12; // rax
  __int64 result; // rax

  if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
    MiLogPerfMemoryRangeEvent(a1, 0LL, 10LL, a3);
  v7 = ((unsigned __int64)*a2 >> 12) & 0xFFFFFFFFFFLL;
  v8 = 0;
  *(_QWORD *)(48 * v7 - 0x220000000000LL) = 0LL;
  ContainingPageTable = MiGetContainingPageTable((unsigned __int64)a2);
  MiLockAndDecrementShareCount(v10 + 48 * ContainingPageTable, 2);
  MiRewritePteWithLockBit((__int64)&unk_140E38140, 0, a2, CLFS_LSN_NULL_EXT);
  MiDecreaseUsedPtes(v11, (((unsigned __int64)a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, 1u);
  MiInsertLargeTbFlushEntry(a4, 1, (unsigned __int64)a2);
  MiFlushTbList(a4);
  v12 = MiPageSizes;
  do
  {
    if ( *v12 == a3 )
      break;
    ++v8;
    ++v12;
  }
  while ( v8 < 3 );
  result = MiFreeLargePageMemory(v7);
  _InterlockedAdd64(&qword_140E37388, -a3);
  return result;
}
