/*
 * XREFs of MiDeletePageFileSectionNodes @ 0x140A0BAE4
 * Callers:
 *     MiSegmentDelete @ 0x140A0B944 (MiSegmentDelete.c)
 * Callees:
 *     MiUpdateSystemProtoPtesTree @ 0x140290A8C (MiUpdateSystemProtoPtesTree.c)
 *     MiAweControlArea @ 0x140437570 (MiAweControlArea.c)
 *     PnpFreeGenericTableEntryNonPaged @ 0x14046B940 (PnpFreeGenericTableEntryNonPaged.c)
 *     MiDeleteSectionAwe @ 0x140683148 (MiDeleteSectionAwe.c)
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
      PnpFreeGenericTableEntryNonPaged(v4, v3);
    }
    v2 = *(_QWORD *)(v2 + 16);
  }
  while ( v2 );
  result = MiAweControlArea(a1);
  if ( (_DWORD)result )
    return MiDeleteSectionAwe(v6);
  return result;
}
