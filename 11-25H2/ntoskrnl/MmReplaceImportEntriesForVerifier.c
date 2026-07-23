/*
 * XREFs of MmReplaceImportEntriesForVerifier @ 0x1407DD510
 * Callers:
 *     MmApplyVerifierToRunningImage @ 0x140B947B0 (MmApplyVerifierToRunningImage.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x14040FE90 (RtlImageDirectoryEntryToData.c)
 *     MiReplaceImportEntry @ 0x1406605EC (MiReplaceImportEntry.c)
 *     MiEnumerateBasePatches @ 0x140B53228 (MiEnumerateBasePatches.c)
 */

__int64 __fastcall MmReplaceImportEntriesForVerifier(ULONG_PTR BugCheckParameter2, int *a2, unsigned int a3)
{
  __int64 v3; // rdi
  _QWORD *v6; // r14
  ULONG v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = 0;
  v3 = a3;
  v6 = RtlImageDirectoryEntryToData(*(PVOID *)(BugCheckParameter2 + 48), 1u, 0xCu, &v8);
  if ( !v6 || v8 < 8 )
    return 3221225659LL;
  if ( (_DWORD)v3 )
  {
    do
    {
      *((_QWORD *)a2 + 2) = v6[*a2];
      MiEnumerateBasePatches(BugCheckParameter2, MiReplacePatchImportEntry, a2);
      MiReplaceImportEntry(BugCheckParameter2, (ULONG_PTR)&v6[*a2], *((_QWORD *)a2 + 1));
      a2 += 6;
      --v3;
    }
    while ( v3 );
  }
  return 0LL;
}
