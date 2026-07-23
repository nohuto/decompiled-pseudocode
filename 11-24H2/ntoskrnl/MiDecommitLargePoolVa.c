/*
 * XREFs of MiDecommitLargePoolVa @ 0x14021BCD4
 * Callers:
 *     MiDeleteNonPagedPoolPte @ 0x14020E950 (MiDeleteNonPagedPoolPte.c)
 * Callees:
 *     MiFreeLargePageMemory @ 0x14021B56C (MiFreeLargePageMemory.c)
 *     MiDecreaseUsedPtes @ 0x14021C060 (MiDecreaseUsedPtes.c)
 *     MiInsertLargeTbFlushEntry @ 0x14021C25C (MiInsertLargeTbFlushEntry.c)
 *     MiLockAndDecrementShareCount @ 0x14021D444 (MiLockAndDecrementShareCount.c)
 *     MiFlushTbList @ 0x1402A1330 (MiFlushTbList.c)
 *     MiRewritePteWithLockBit @ 0x140335F2C (MiRewritePteWithLockBit.c)
 *     MiGetContainingPageTable @ 0x14034E470 (MiGetContainingPageTable.c)
 *     MiLogPerfMemoryRangeEvent @ 0x1404C9744 (MiLogPerfMemoryRangeEvent.c)
 */

__int64 __fastcall MiDecommitLargePoolVa(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
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
  v7 = (*(_QWORD *)a2 >> 12) & 0xFFFFFFFFFFLL;
  v8 = 0;
  *(_QWORD *)(48 * v7 - 0x220000000000LL) = 0LL;
  ContainingPageTable = MiGetContainingPageTable(a2);
  MiLockAndDecrementShareCount(v10 + 48 * ContainingPageTable);
  MiRewritePteWithLockBit(&unk_140E384C0, 0LL, a2, CLFS_LSN_NULL_EXT);
  MiDecreaseUsedPtes(v11, ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, 1LL);
  MiInsertLargeTbFlushEntry(a4, 1LL, a2);
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
  result = MiFreeLargePageMemory(v7, v8, 20LL);
  _InterlockedAdd64(&qword_140E37708, -a3);
  return result;
}
