/*
 * XREFs of MiDeletePageFileSectionNodes @ 0x140A09798
 * Callers:
 *     MiSegmentDelete @ 0x140A095FC (MiSegmentDelete.c)
 * Callees:
 *     MiUpdateSystemProtoPtesTree @ 0x1402A87DC (MiUpdateSystemProtoPtesTree.c)
 *     MiAweControlArea @ 0x140440EC0 (MiAweControlArea.c)
 *     MiFreeProtoPool @ 0x140472BA0 (MiFreeProtoPool.c)
 *     MiDeleteSectionAwe @ 0x140676738 (MiDeleteSectionAwe.c)
 */

__int64 __fastcall MiDeletePageFileSectionNodes(__int64 a1)
{
  __int64 v2; // rbx
  void *v3; // rsi
  __int64 v4; // rcx
  __int64 result; // rax
  __int64 v6; // rcx

  v2 = a1 + 128;
  do
  {
    v3 = *(void **)(v2 + 8);
    if ( v3 )
    {
      MiUpdateSystemProtoPtesTree(v2 + 56, 0);
      MiFreeProtoPool(v4, v3);
    }
    v2 = *(_QWORD *)(v2 + 16);
  }
  while ( v2 );
  result = MiAweControlArea(a1);
  if ( (_DWORD)result )
    return MiDeleteSectionAwe(v6);
  return result;
}
