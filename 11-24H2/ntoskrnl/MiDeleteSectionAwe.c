/*
 * XREFs of MiDeleteSectionAwe @ 0x140681F58
 * Callers:
 *     MiCreatePagingFileMap @ 0x140942908 (MiCreatePagingFileMap.c)
 *     MiDeletePageFileSectionNodes @ 0x140A13384 (MiDeletePageFileSectionNodes.c)
 *     MiDereferenceFailedControlArea @ 0x140A822F8 (MiDereferenceFailedControlArea.c)
 * Callees:
 *     MiDeleteAweInfo @ 0x1407F9698 (MiDeleteAweInfo.c)
 *     MiDeleteAweInfoPages @ 0x1407F96E0 (MiDeleteAweInfoPages.c)
 */

__int64 __fastcall MiDeleteSectionAwe(__int64 a1)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)(a1 + 8);
  MiDeleteAweInfoPages(v1);
  return MiDeleteAweInfo(0LL, v1);
}
