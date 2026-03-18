/*
 * XREFs of MiFreeLoadedImportList @ 0x140A99C18
 * Callers:
 *     MiApplyDriverHotPatch @ 0x1407E0DBC (MiApplyDriverHotPatch.c)
 *     MiUnloadSystemImage @ 0x140A862D4 (MiUnloadSystemImage.c)
 *     MiShutdownSystem @ 0x140B52044 (MiShutdownSystem.c)
 *     MiUpdateBootDriverHotPatchImports @ 0x140C45580 (MiUpdateBootDriverHotPatchImports.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall MiFreeLoadedImportList(void *a1)
{
  if ( a1 != (void *)1 && a1 != (void *)-2LL && ((unsigned __int8)a1 & 1) == 0 )
    ExFreePoolWithTag(a1, 0);
}
