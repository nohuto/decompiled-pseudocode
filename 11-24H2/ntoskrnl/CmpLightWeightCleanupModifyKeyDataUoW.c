/*
 * XREFs of CmpLightWeightCleanupModifyKeyDataUoW @ 0x140A14BD8
 * Callers:
 *     CmpCleanupLightWeightUoWData @ 0x1407DE864 (CmpCleanupLightWeightUoWData.c)
 *     CmpLightWeightPrepareDeleteKeyUoW @ 0x140A13D80 (CmpLightWeightPrepareDeleteKeyUoW.c)
 *     CmpLightWeightCommitDeleteKeyUoW @ 0x140A14304 (CmpLightWeightCommitDeleteKeyUoW.c)
 *     CmpLightWeightPrepareAddKeyUoW @ 0x140A144F0 (CmpLightWeightPrepareAddKeyUoW.c)
 *     CmpLightWeightCreateModificationData @ 0x140A147DC (CmpLightWeightCreateModificationData.c)
 *     CmpLightWeightCommitAddKeyUoW @ 0x140A1499C (CmpLightWeightCommitAddKeyUoW.c)
 * Callees:
 *     CmpFreeTransientPoolWithTag @ 0x140438B90 (CmpFreeTransientPoolWithTag.c)
 *     CmpFreeIndexByCell @ 0x140A8BF64 (CmpFreeIndexByCell.c)
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
