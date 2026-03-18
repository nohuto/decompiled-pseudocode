/*
 * XREFs of CmpRemoveKeyHashFromDeletedKcbTable @ 0x1409EC2E4
 * Callers:
 *     CmpDereferenceKeyControlBlock @ 0x140849FE0 (CmpDereferenceKeyControlBlock.c)
 *     CmpCleanUpKcbCacheWithLock @ 0x1408743F0 (CmpCleanUpKcbCacheWithLock.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x14087B820 (CmpDereferenceKeyControlBlockWithLock.c)
 * Callees:
 *     CmpRemoveKeyHashFromTableEntry @ 0x1409EC340 (CmpRemoveKeyHashFromTableEntry.c)
 */

__int64 __fastcall CmpRemoveKeyHashFromDeletedKcbTable(__int64 a1, _DWORD *a2)
{
  return CmpRemoveKeyHashFromTableEntry(
           a2,
           *(_QWORD *)(a1 + 1664)
         + 24
         * ((unsigned int)(*(_DWORD *)(a1 + 1672) - 1) & ((unsigned int)(101027 * (*a2 ^ (*a2 >> 9))) ^ ((unsigned __int64)(unsigned int)(101027 * (*a2 ^ (*a2 >> 9))) >> 9))));
}
