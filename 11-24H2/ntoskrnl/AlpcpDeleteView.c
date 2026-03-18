/*
 * XREFs of AlpcpDeleteView @ 0x14089310C
 * Callers:
 *     AlpcpExposeViewAttributeInSenderContext @ 0x1408926D0 (AlpcpExposeViewAttributeInSenderContext.c)
 *     AlpcpCaptureViewAttributeInternal @ 0x140893A30 (AlpcpCaptureViewAttributeInternal.c)
 *     AlpcpCaptureViewAttribute @ 0x140894028 (AlpcpCaptureViewAttribute.c)
 *     NtAlpcCreateSectionView @ 0x14093DA50 (NtAlpcCreateSectionView.c)
 *     NtAlpcDeleteSectionView @ 0x140A25B50 (NtAlpcDeleteSectionView.c)
 *     AlpcpReleaseViewAttribute @ 0x140A4DDC4 (AlpcpReleaseViewAttribute.c)
 * Callees:
 *     AlpcpDereferenceBlobEx @ 0x140890420 (AlpcpDereferenceBlobEx.c)
 *     AlpcpDeleteBlob @ 0x140893140 (AlpcpDeleteBlob.c)
 */

char __fastcall AlpcpDeleteView(ULONG_PTR BugCheckParameter2)
{
  __int64 v2; // r8
  __int64 v3; // r9

  if ( !(unsigned __int8)AlpcpDeleteBlob(BugCheckParameter2) )
    return 0;
  AlpcpDereferenceBlobEx(BugCheckParameter2, 1, v2, v3);
  return 1;
}
