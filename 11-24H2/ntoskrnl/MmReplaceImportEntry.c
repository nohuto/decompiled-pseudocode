/*
 * XREFs of MmReplaceImportEntry @ 0x14066D618
 * Callers:
 *     KsepPatchImportTableEntry @ 0x14073D750 (KsepPatchImportTableEntry.c)
 *     ViThunkReplaceIatEntryForClassDriverThunk @ 0x140B99C8C (ViThunkReplaceIatEntryForClassDriverThunk.c)
 *     ViThunkReplaceIatEntryForWdmThunk @ 0x140B99CE8 (ViThunkReplaceIatEntryForWdmThunk.c)
 *     ViThunkReplaceSharedExports @ 0x140B99D70 (ViThunkReplaceSharedExports.c)
 * Callees:
 *     MiReplaceImportEntry @ 0x14066D2FC (MiReplaceImportEntry.c)
 */

char __fastcall MmReplaceImportEntry(ULONG_PTR a1, ULONG_PTR a2, ULONG_PTR a3)
{
  return MiReplaceImportEntry(a1, a2, a3);
}
