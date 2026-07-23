/*
 * XREFs of CmpCreateSiloKeyLockEntry @ 0x1407DE344
 * Callers:
 *     CmLockKeyForWrite @ 0x1409DBB68 (CmLockKeyForWrite.c)
 * Callees:
 *     CmpAllocatePool @ 0x1403C9EA4 (CmpAllocatePool.c)
 *     CmpReferenceKeyControlBlockUnsafe @ 0x14087F300 (CmpReferenceKeyControlBlockUnsafe.c)
 *     CmpDereferenceKeyControlBlockUnsafe @ 0x140987400 (CmpDereferenceKeyControlBlockUnsafe.c)
 */

__int64 __fastcall CmpCreateSiloKeyLockEntry(ULONG_PTR a1)
{
  __int64 Pool; // rax
  __int64 v3; // rbx

  CmpReferenceKeyControlBlockUnsafe(a1);
  Pool = CmpAllocatePool(0x100uLL, 0x20uLL, 0x34374D43u);
  v3 = Pool;
  if ( Pool )
    *(_QWORD *)(Pool + 16) = a1;
  else
    CmpDereferenceKeyControlBlockUnsafe(a1);
  return v3;
}
