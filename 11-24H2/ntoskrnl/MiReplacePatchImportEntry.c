/*
 * XREFs of MiReplacePatchImportEntry @ 0x14067EA20
 * Callers:
 *     <none>
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x1402EEB70 (RtlImageDirectoryEntryToData.c)
 *     MiReplaceImportEntry @ 0x14066D2FC (MiReplaceImportEntry.c)
 */

__int64 __fastcall MiReplacePatchImportEntry(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  ULONG v2; // ebx
  char *v5; // r8
  char *v6; // rcx
  ULONG v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  v8 = 0;
  v5 = (char *)RtlImageDirectoryEntryToData(*(PVOID *)(BugCheckParameter2 + 48), 1u, 0xCu, &v8);
  if ( v5 && v8 >= 8 )
  {
    while ( v2 < v8 >> 3 )
    {
      v6 = &v5[8 * v2];
      if ( *(_QWORD *)v6 == *(_QWORD *)(a2 + 16) )
      {
        MiReplaceImportEntry(BugCheckParameter2, (ULONG_PTR)v6, *(_QWORD *)(a2 + 8));
        return 1LL;
      }
      ++v2;
    }
  }
  return 1LL;
}
