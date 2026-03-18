/*
 * XREFs of MiDecommitLargePoolVa @ 0x1403A3F50
 * Callers:
 *     MiDeleteNonPagedPoolPte @ 0x1402349C0 (MiDeleteNonPagedPoolPte.c)
 * Callees:
 *     MiRewritePteWithLockBit @ 0x14020CBCC (MiRewritePteWithLockBit.c)
 *     MiFlushTbList @ 0x140291730 (MiFlushTbList.c)
 *     MiGetContainingPageTable @ 0x1402ECE30 (MiGetContainingPageTable.c)
 *     MiLockAndDecrementShareCount @ 0x14039EFA4 (MiLockAndDecrementShareCount.c)
 *     MiFreeLargePageMemory @ 0x1403A3588 (MiFreeLargePageMemory.c)
 *     MiDecreaseUsedPtes @ 0x1403A4830 (MiDecreaseUsedPtes.c)
 *     MiInsertLargeTbFlushEntry @ 0x1403A4A2C (MiInsertLargeTbFlushEntry.c)
 *     MiLogPerfMemoryRangeEvent @ 0x1404D0550 (MiLogPerfMemoryRangeEvent.c)
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
  MiRewritePteWithLockBit((__int64)&unk_140E38380, 0, a2, CLFS_LSN_NULL_EXT);
  MiDecreaseUsedPtes(v11, (((unsigned __int64)a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, 1LL);
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
  result = MiFreeLargePageMemory(v7, v8, 0x14u);
  _InterlockedAdd64(&qword_140E375C8, -a3);
  return result;
}
