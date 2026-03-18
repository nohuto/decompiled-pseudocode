/*
 * XREFs of CmpLightWeightCleanupModifyKeyDataUoW @ 0x1409DA9B4
 * Callers:
 *     CmpCleanupLightWeightUoWData @ 0x1409D92CC (CmpCleanupLightWeightUoWData.c)
 *     CmpLightWeightPrepareDeleteKeyUoW @ 0x1409D9E84 (CmpLightWeightPrepareDeleteKeyUoW.c)
 *     CmpLightWeightCommitDeleteKeyUoW @ 0x1409DA0D4 (CmpLightWeightCommitDeleteKeyUoW.c)
 *     CmpLightWeightPrepareAddKeyUoW @ 0x1409DA2CC (CmpLightWeightPrepareAddKeyUoW.c)
 *     CmpLightWeightCreateModificationData @ 0x1409DA5B8 (CmpLightWeightCreateModificationData.c)
 *     CmpLightWeightCommitAddKeyUoW @ 0x1409DA778 (CmpLightWeightCommitAddKeyUoW.c)
 * Callees:
 *     CmpFreeTransientPoolWithTag @ 0x140442030 (CmpFreeTransientPoolWithTag.c)
 *     CmpFreeIndexByCell @ 0x140A8A904 (CmpFreeIndexByCell.c)
 */

void __fastcall CmpLightWeightCleanupModifyKeyDataUoW(ULONG_PTR BugCheckParameter3, unsigned int *a2)
{
  ULONG_PTR v5; // rdx
  ULONG_PTR v6; // rdx

  if ( (*a2)-- == 1 )
  {
    v5 = a2[3];
    if ( (_DWORD)v5 != -1 )
      CmpFreeIndexByCell(BugCheckParameter3, v5);
    v6 = a2[4];
    if ( (_DWORD)v6 != -1 )
      CmpFreeIndexByCell(BugCheckParameter3, v6);
    CmpFreeTransientPoolWithTag(a2, 0x77554D43u);
  }
}
