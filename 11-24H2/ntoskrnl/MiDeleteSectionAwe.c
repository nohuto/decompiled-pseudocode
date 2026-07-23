/*
 * XREFs of MiDeleteSectionAwe @ 0x140683148
 * Callers:
 *     MiDereferenceFailedControlArea @ 0x140989CB0 (MiDereferenceFailedControlArea.c)
 *     MiCreatePagingFileMap @ 0x14098CB78 (MiCreatePagingFileMap.c)
 *     MiDeletePageFileSectionNodes @ 0x140A0BAE4 (MiDeletePageFileSectionNodes.c)
 * Callees:
 *     MiDeleteAweInfo @ 0x1407F9E08 (MiDeleteAweInfo.c)
 *     MiDeleteAweInfoPages @ 0x1407F9E50 (MiDeleteAweInfoPages.c)
 */

__int64 __fastcall MiDeleteSectionAwe(__int64 a1)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)(a1 + 8);
  MiDeleteAweInfoPages(v1);
  return MiDeleteAweInfo(0LL, v1);
}
