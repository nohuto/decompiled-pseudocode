/*
 * XREFs of MiCaptureSparsePages @ 0x1407FAE6C
 * Callers:
 *     MiDeleteSparseRange @ 0x1407FB544 (MiDeleteSparseRange.c)
 * Callees:
 *     MiMakeValidPte @ 0x140212550 (MiMakeValidPte.c)
 *     MiInsertPageChainHead @ 0x14021CD10 (MiInsertPageChainHead.c)
 *     MiLockAndDecrementShareCount @ 0x14021D444 (MiLockAndDecrementShareCount.c)
 *     MiGetContainingPageTable @ 0x14034E470 (MiGetContainingPageTable.c)
 *     MiInitializePageChainHead @ 0x140411530 (MiInitializePageChainHead.c)
 */

unsigned __int64 __fastcall MiCaptureSparsePages(unsigned __int64 a1, __int64 a2, __int64 *a3)
{
  unsigned __int64 result; // rax
  unsigned __int64 i; // rbx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned __int64 v10; // r10
  __int64 ContainingPageTable; // r11

  MiInitializePageChainHead((__int64)a3);
  result = MiMakeValidPte(a1, (__int64)qword_140E37480[0], 1);
  for ( i = result; a2; --a2 )
  {
    ContainingPageTable = MiGetContainingPageTable(a1);
    if ( v10 != i )
      MiInsertPageChainHead(a3, (__int64 *)(48 * ((v10 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL));
    result = MiLockAndDecrementShareCount(48 * ContainingPageTable - 0x220000000000LL, 4LL, v8, v9);
    a1 += 8LL;
  }
  return result;
}
