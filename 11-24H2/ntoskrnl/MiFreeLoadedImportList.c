/*
 * XREFs of MiFreeLoadedImportList @ 0x140A9A0D8
 * Callers:
 *     MiApplyDriverHotPatch @ 0x1407F122C (MiApplyDriverHotPatch.c)
 *     MiUnloadSystemImage @ 0x140A870C4 (MiUnloadSystemImage.c)
 *     MiShutdownSystem @ 0x140B64244 (MiShutdownSystem.c)
 *     MiUpdateBootDriverHotPatchImports @ 0x140C589F0 (MiUpdateBootDriverHotPatchImports.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall MiFreeLoadedImportList(void *a1)
{
  if ( a1 != (void *)1 && a1 != (void *)-2LL && ((unsigned __int8)a1 & 1) == 0 )
    ExFreePoolWithTag(a1, 0);
}
