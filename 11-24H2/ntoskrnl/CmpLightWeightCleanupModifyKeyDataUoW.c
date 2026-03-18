/*
 * XREFs of CmpLightWeightCleanupModifyKeyDataUoW @ 0x140A1FAD8
 * Callers:
 *     CmpCleanupLightWeightUoWData @ 0x1407DE314 (CmpCleanupLightWeightUoWData.c)
 *     CmpLightWeightPrepareDeleteKeyUoW @ 0x140A1EC80 (CmpLightWeightPrepareDeleteKeyUoW.c)
 *     CmpLightWeightCommitDeleteKeyUoW @ 0x140A1F204 (CmpLightWeightCommitDeleteKeyUoW.c)
 *     CmpLightWeightPrepareAddKeyUoW @ 0x140A1F3F0 (CmpLightWeightPrepareAddKeyUoW.c)
 *     CmpLightWeightCreateModificationData @ 0x140A1F6DC (CmpLightWeightCreateModificationData.c)
 *     CmpLightWeightCommitAddKeyUoW @ 0x140A1F89C (CmpLightWeightCommitAddKeyUoW.c)
 * Callees:
 *     CmpFreeTransientPoolWithTag @ 0x140441FC0 (CmpFreeTransientPoolWithTag.c)
 *     CmpFreeIndexByCell @ 0x140A8F924 (CmpFreeIndexByCell.c)
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
