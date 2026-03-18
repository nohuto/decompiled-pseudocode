/*
 * XREFs of MmReplaceImportEntriesForVerifier @ 0x1407ED3B0
 * Callers:
 *     MmApplyVerifierToRunningImage @ 0x140BA4790 (MmApplyVerifierToRunningImage.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x14042CAF0 (RtlImageDirectoryEntryToData.c)
 *     MiReplaceImportEntry @ 0x14066C12C (MiReplaceImportEntry.c)
 *     MiEnumerateBasePatches @ 0x140B63378 (MiEnumerateBasePatches.c)
 */

__int64 __fastcall MmReplaceImportEntriesForVerifier(ULONG_PTR BugCheckParameter2, int *a2, unsigned int a3)
{
  __int64 v3; // rdi
  __int64 v6; // r14
  unsigned int v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = 0;
  v3 = a3;
  v6 = RtlImageDirectoryEntryToData(*(_QWORD *)(BugCheckParameter2 + 48), 1, 0xCu, &v8);
  if ( !v6 || v8 < 8 )
    return 3221225659LL;
  if ( (_DWORD)v3 )
  {
    do
    {
      *((_QWORD *)a2 + 2) = *(_QWORD *)(v6 + 8LL * *a2);
      MiEnumerateBasePatches(BugCheckParameter2, MiReplacePatchImportEntry, a2);
      MiReplaceImportEntry(BugCheckParameter2, v6 + 8LL * *a2, *((_QWORD *)a2 + 1));
      a2 += 6;
      --v3;
    }
    while ( v3 );
  }
  return 0LL;
}
