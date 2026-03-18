/*
 * XREFs of AlpcpReleaseViewAttribute @ 0x140A4B79C
 * Callers:
 *     AlpcpReleaseMessageAttributesOnCancel @ 0x1408AD2C8 (AlpcpReleaseMessageAttributesOnCancel.c)
 * Callees:
 *     AlpcpDeleteView @ 0x1408AF704 (AlpcpDeleteView.c)
 *     AlpcpDereferenceBlobEx @ 0x1408B27D0 (AlpcpDereferenceBlobEx.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x1408B2940 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpUnlockBlob @ 0x1408B29D0 (AlpcpUnlockBlob.c)
 */

void __fastcall AlpcpReleaseViewAttribute(ULONG_PTR BugCheckParameter2, int a2)
{
  ULONG_PTR v4; // rcx

  AlpcpLockForCachedReferenceBlob(*(_QWORD *)(BugCheckParameter2 + 16));
  v4 = *(_QWORD *)(BugCheckParameter2 + 16);
  --*(_DWORD *)(BugCheckParameter2 + 76);
  AlpcpUnlockBlob(v4);
  if ( a2 )
    AlpcpDeleteView(BugCheckParameter2);
  AlpcpDereferenceBlobEx(BugCheckParameter2, 1);
}
