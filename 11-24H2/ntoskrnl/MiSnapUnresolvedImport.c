/*
 * XREFs of MiSnapUnresolvedImport @ 0x140A11658
 * Callers:
 *     MiResolveImageReferences @ 0x140A10E04 (MiResolveImageReferences.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x1402EEB70 (RtlImageDirectoryEntryToData.c)
 */

_WORD *__fastcall MiSnapUnresolvedImport(__int64 a1, __int64 *a2, void *a3)
{
  _WORD *result; // rax
  _WORD *v6; // rdx
  __int64 v7; // rax
  ULONG Size; // [rsp+48h] [rbp+20h] BYREF

  result = RtlImageDirectoryEntryToData(a3, 1u, 0, &Size);
  v6 = result;
  if ( result )
  {
    v7 = *a2;
    if ( *a2 >= 0 )
      return (_WORD *)(a1 + v7 + 2);
    else
      return (_WORD *)(unsigned __int16)(v7 - v6[8]);
  }
  return result;
}
