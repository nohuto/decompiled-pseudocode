/*
 * XREFs of CmpCreateGlobalKeyLockEntry @ 0x1407DDD98
 * Callers:
 *     CmpGlobalLockKeyForWrite @ 0x140A66C2C (CmpGlobalLockKeyForWrite.c)
 * Callees:
 *     CmpAllocatePool @ 0x1403E1834 (CmpAllocatePool.c)
 *     CmpReferenceKeyControlBlockUnsafe @ 0x14087B450 (CmpReferenceKeyControlBlockUnsafe.c)
 *     CmpDereferenceKeyControlBlockUnsafe @ 0x14099E750 (CmpDereferenceKeyControlBlockUnsafe.c)
 */

__int64 __fastcall CmpCreateGlobalKeyLockEntry(ULONG_PTR a1)
{
  __int64 Pool; // rax
  __int64 v3; // rbx

  CmpReferenceKeyControlBlockUnsafe(a1);
  Pool = CmpAllocatePool(0x100uLL);
  v3 = Pool;
  if ( Pool )
  {
    *(_QWORD *)(Pool + 16) = 1LL;
    *(_QWORD *)(Pool + 24) = a1;
  }
  else
  {
    CmpDereferenceKeyControlBlockUnsafe(a1);
  }
  return v3;
}
