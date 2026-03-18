/*
 * XREFs of MmReplaceImportEntry @ 0x140660908
 * Callers:
 *     KsepPatchImportTableEntry @ 0x140733800 (KsepPatchImportTableEntry.c)
 *     ViThunkReplaceIatEntryForClassDriverThunk @ 0x140B87CAC (ViThunkReplaceIatEntryForClassDriverThunk.c)
 *     ViThunkReplaceIatEntryForWdmThunk @ 0x140B87D08 (ViThunkReplaceIatEntryForWdmThunk.c)
 *     ViThunkReplaceSharedExports @ 0x140B87D90 (ViThunkReplaceSharedExports.c)
 * Callees:
 *     MiReplaceImportEntry @ 0x1406605EC (MiReplaceImportEntry.c)
 */

char __fastcall MmReplaceImportEntry(ULONG_PTR a1, ULONG_PTR a2, ULONG_PTR a3)
{
  return MiReplaceImportEntry(a1, a2, a3);
}
