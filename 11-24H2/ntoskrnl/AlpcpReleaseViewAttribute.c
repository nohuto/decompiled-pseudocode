/*
 * XREFs of AlpcpReleaseViewAttribute @ 0x140A4DDC4
 * Callers:
 *     AlpcpReleaseMessageAttributesOnCancel @ 0x140A20580 (AlpcpReleaseMessageAttributesOnCancel.c)
 * Callees:
 *     AlpcpDereferenceBlobEx @ 0x140890420 (AlpcpDereferenceBlobEx.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x140890590 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpUnlockBlob @ 0x140890620 (AlpcpUnlockBlob.c)
 *     AlpcpDeleteView @ 0x14089310C (AlpcpDeleteView.c)
 */

void __fastcall AlpcpReleaseViewAttribute(ULONG_PTR BugCheckParameter2, int a2)
{
  ULONG_PTR v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // r8
  __int64 v9; // r9

  AlpcpLockForCachedReferenceBlob(*(_QWORD *)(BugCheckParameter2 + 16));
  v4 = *(_QWORD *)(BugCheckParameter2 + 16);
  --*(_DWORD *)(BugCheckParameter2 + 76);
  AlpcpUnlockBlob(v4, v5, v6, v7);
  if ( a2 )
    AlpcpDeleteView(BugCheckParameter2);
  AlpcpDereferenceBlobEx(BugCheckParameter2, 1, v8, v9);
}
