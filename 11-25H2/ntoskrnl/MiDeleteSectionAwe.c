/*
 * XREFs of MiDeleteSectionAwe @ 0x140676738
 * Callers:
 *     MiCreatePagingFileMap @ 0x14093E008 (MiCreatePagingFileMap.c)
 *     MiDeletePageFileSectionNodes @ 0x140A09798 (MiDeletePageFileSectionNodes.c)
 *     MiDereferenceFailedControlArea @ 0x140A7EC78 (MiDereferenceFailedControlArea.c)
 * Callees:
 *     MiDeleteAweInfo @ 0x1407E9808 (MiDeleteAweInfo.c)
 *     MiDeleteAweInfoPages @ 0x1407E9850 (MiDeleteAweInfoPages.c)
 */

__int64 __fastcall MiDeleteSectionAwe(__int64 a1)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)(a1 + 8);
  MiDeleteAweInfoPages(v1);
  return MiDeleteAweInfo(0LL, v1);
}
