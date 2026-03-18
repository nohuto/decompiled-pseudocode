/*
 * XREFs of CmpCreateSiloKeyLockEntry @ 0x1407DDDF4
 * Callers:
 *     CmLockKeyForWrite @ 0x1409E1DB8 (CmLockKeyForWrite.c)
 * Callees:
 *     CmpAllocatePool @ 0x1403E1834 (CmpAllocatePool.c)
 *     CmpReferenceKeyControlBlockUnsafe @ 0x14087B450 (CmpReferenceKeyControlBlockUnsafe.c)
 *     CmpDereferenceKeyControlBlockUnsafe @ 0x14099E750 (CmpDereferenceKeyControlBlockUnsafe.c)
 */

__int64 __fastcall CmpCreateSiloKeyLockEntry(ULONG_PTR a1)
{
  __int64 Pool; // rax
  __int64 v3; // rbx

  CmpReferenceKeyControlBlockUnsafe(a1);
  Pool = CmpAllocatePool(0x100uLL);
  v3 = Pool;
  if ( Pool )
    *(_QWORD *)(Pool + 16) = a1;
  else
    CmpDereferenceKeyControlBlockUnsafe(a1);
  return v3;
}
