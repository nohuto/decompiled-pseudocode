/*
 * XREFs of MiSnapUnresolvedImport @ 0x140A184E8
 * Callers:
 *     MiResolveImageReferences @ 0x140A17C94 (MiResolveImageReferences.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x14042CAF0 (RtlImageDirectoryEntryToData.c)
 */

__int64 __fastcall MiSnapUnresolvedImport(__int64 a1, __int64 *a2, unsigned __int64 a3)
{
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // rax
  int v8; // [rsp+48h] [rbp+20h] BYREF

  result = RtlImageDirectoryEntryToData(a3, 1, 0, &v8);
  v6 = result;
  if ( result )
  {
    v7 = *a2;
    if ( *a2 >= 0 )
      return a1 + v7 + 2;
    else
      return (unsigned __int16)(v7 - *(_WORD *)(v6 + 16));
  }
  return result;
}
