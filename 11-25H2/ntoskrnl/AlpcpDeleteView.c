/*
 * XREFs of AlpcpDeleteView @ 0x1408AF704
 * Callers:
 *     AlpcpExposeViewAttributeInSenderContext @ 0x1408AA7F0 (AlpcpExposeViewAttributeInSenderContext.c)
 *     AlpcpCaptureViewAttributeInternal @ 0x1408AF320 (AlpcpCaptureViewAttributeInternal.c)
 *     AlpcpCaptureViewAttribute @ 0x1408B01AC (AlpcpCaptureViewAttribute.c)
 *     NtAlpcCreateSectionView @ 0x1408B5800 (NtAlpcCreateSectionView.c)
 *     NtAlpcDeleteSectionView @ 0x1408B5B70 (NtAlpcDeleteSectionView.c)
 *     AlpcpReleaseViewAttribute @ 0x140A4B79C (AlpcpReleaseViewAttribute.c)
 * Callees:
 *     AlpcpDeleteBlob @ 0x1408AF738 (AlpcpDeleteBlob.c)
 *     AlpcpDereferenceBlobEx @ 0x1408B27D0 (AlpcpDereferenceBlobEx.c)
 */

char __fastcall AlpcpDeleteView(ULONG_PTR BugCheckParameter2)
{
  if ( !(unsigned __int8)AlpcpDeleteBlob(BugCheckParameter2) )
    return 0;
  AlpcpDereferenceBlobEx(BugCheckParameter2);
  return 1;
}
