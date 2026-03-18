/*
 * XREFs of AlpcSectionDeleteProcedure @ 0x140893220
 * Callers:
 *     AlpcpDeleteBlob @ 0x140893140 (AlpcpDeleteBlob.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x140890590 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpUnlockBlob @ 0x140890620 (AlpcpUnlockBlob.c)
 *     AlpcDeleteBlobByHandle @ 0x1409E6514 (AlpcDeleteBlobByHandle.c)
 *     AlpcpRemoveResourcePort @ 0x1409E65DC (AlpcpRemoveResourcePort.c)
 */

LONG_PTR __fastcall AlpcSectionDeleteProcedure(_QWORD *BugCheckParameter2)
{
  __int64 v2; // rcx
  LONG_PTR result; // rax
  void *v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9

  v2 = BugCheckParameter2[2];
  if ( v2 )
  {
    result = AlpcDeleteBlobByHandle(v2, BugCheckParameter2[3], BugCheckParameter2);
    BugCheckParameter2[2] = 0LL;
  }
  v4 = (void *)BugCheckParameter2[5];
  if ( v4 )
  {
    AlpcpLockForCachedReferenceBlob((ULONG_PTR)BugCheckParameter2);
    AlpcpRemoveResourcePort(v4, BugCheckParameter2);
    BugCheckParameter2[5] = 0LL;
    AlpcpUnlockBlob((ULONG_PTR)BugCheckParameter2, v5, v6, v7);
    return ObfDereferenceObject(v4);
  }
  return result;
}
