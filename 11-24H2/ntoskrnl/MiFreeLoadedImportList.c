/*
 * XREFs of MiFreeLoadedImportList @ 0x140A9ED10
 * Callers:
 *     MiApplyDriverHotPatch @ 0x1407F0C5C (MiApplyDriverHotPatch.c)
 *     MiUnloadSystemImage @ 0x140A8AD84 (MiUnloadSystemImage.c)
 *     MiShutdownSystem @ 0x140B62174 (MiShutdownSystem.c)
 *     MiUpdateBootDriverHotPatchImports @ 0x140C56860 (MiUpdateBootDriverHotPatchImports.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall MiFreeLoadedImportList(void *a1)
{
  if ( a1 != (void *)1 && a1 != (void *)-2LL && ((unsigned __int8)a1 & 1) == 0 )
    ExFreePoolWithTag(a1, 0);
}
