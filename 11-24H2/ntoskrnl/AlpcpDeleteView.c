/*
 * XREFs of AlpcpDeleteView @ 0x14089CE2C
 * Callers:
 *     NtAlpcCreateSectionView @ 0x1408951F0 (NtAlpcCreateSectionView.c)
 *     AlpcpCaptureViewAttribute @ 0x140895F40 (AlpcpCaptureViewAttribute.c)
 *     AlpcpCaptureViewAttributeInternal @ 0x1408969A0 (AlpcpCaptureViewAttributeInternal.c)
 *     AlpcpExposeViewAttributeInSenderContext @ 0x14089BCC0 (AlpcpExposeViewAttributeInSenderContext.c)
 *     NtAlpcDeleteSectionView @ 0x140A19B40 (NtAlpcDeleteSectionView.c)
 *     AlpcpReleaseViewAttribute @ 0x140A44954 (AlpcpReleaseViewAttribute.c)
 * Callees:
 *     AlpcpDeleteBlob @ 0x14089CCE0 (AlpcpDeleteBlob.c)
 *     AlpcpDereferenceBlobEx @ 0x14089EBC0 (AlpcpDereferenceBlobEx.c)
 */

char __fastcall AlpcpDeleteView(ULONG_PTR BugCheckParameter2)
{
  if ( !AlpcpDeleteBlob(BugCheckParameter2) )
    return 0;
  AlpcpDereferenceBlobEx(BugCheckParameter2);
  return 1;
}
