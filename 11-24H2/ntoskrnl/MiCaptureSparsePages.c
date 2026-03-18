/*
 * XREFs of MiCaptureSparsePages @ 0x1407FA6FC
 * Callers:
 *     MiDeleteSparseRange @ 0x1407FADD4 (MiDeleteSparseRange.c)
 * Callees:
 *     MiMakeValidPte @ 0x1402383C0 (MiMakeValidPte.c)
 *     MiGetContainingPageTable @ 0x1402ECE30 (MiGetContainingPageTable.c)
 *     MiInsertPageChainHead @ 0x14039EC34 (MiInsertPageChainHead.c)
 *     MiLockAndDecrementShareCount @ 0x14039EFA4 (MiLockAndDecrementShareCount.c)
 *     MiInitializePageChainHead @ 0x14041CF00 (MiInitializePageChainHead.c)
 */

unsigned __int64 __fastcall MiCaptureSparsePages(unsigned __int64 a1, __int64 a2, __int64 *a3)
{
  unsigned __int64 result; // rax
  unsigned __int64 i; // rbx
  unsigned __int64 v8; // r10
  __int64 ContainingPageTable; // r11

  MiInitializePageChainHead((__int64)a3);
  result = MiMakeValidPte(a1, (__int64)qword_140E37340[0], 1);
  for ( i = result; a2; --a2 )
  {
    ContainingPageTable = MiGetContainingPageTable(a1);
    if ( v8 != i )
      MiInsertPageChainHead(a3, (__int64 *)(48 * ((v8 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL));
    result = MiLockAndDecrementShareCount(48 * ContainingPageTable - 0x220000000000LL, 4);
    a1 += 8LL;
  }
  return result;
}
