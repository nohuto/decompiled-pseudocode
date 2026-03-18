/*
 * XREFs of MmReplaceImportEntry @ 0x14066C448
 * Callers:
 *     KsepPatchImportTableEntry @ 0x14073F820 (KsepPatchImportTableEntry.c)
 *     ViThunkReplaceIatEntryForClassDriverThunk @ 0x140B97C8C (ViThunkReplaceIatEntryForClassDriverThunk.c)
 *     ViThunkReplaceIatEntryForWdmThunk @ 0x140B97CE8 (ViThunkReplaceIatEntryForWdmThunk.c)
 *     ViThunkReplaceSharedExports @ 0x140B97D70 (ViThunkReplaceSharedExports.c)
 * Callees:
 *     MiReplaceImportEntry @ 0x14066C12C (MiReplaceImportEntry.c)
 */

char __fastcall MmReplaceImportEntry(ULONG_PTR a1, ULONG_PTR a2, ULONG_PTR a3)
{
  return MiReplaceImportEntry(a1, a2, a3);
}
