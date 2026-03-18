/*
 * XREFs of CmpCreateSiloKeyLockEntry @ 0x1407CE634
 * Callers:
 *     CmLockKeyForWrite @ 0x1409E3164 (CmLockKeyForWrite.c)
 * Callees:
 *     CmpAllocatePool @ 0x1403DCED4 (CmpAllocatePool.c)
 *     CmpReferenceKeyControlBlockUnsafe @ 0x14089F140 (CmpReferenceKeyControlBlockUnsafe.c)
 *     CmpDereferenceKeyControlBlockUnsafe @ 0x14099C700 (CmpDereferenceKeyControlBlockUnsafe.c)
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
