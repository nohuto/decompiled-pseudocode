/*
 * XREFs of CmpLightWeightCleanupSetValueKeyUoW @ 0x140886480
 * Callers:
 *     CmpLightWeightCommitDeleteValueKeyUoW @ 0x1408861C0 (CmpLightWeightCommitDeleteValueKeyUoW.c)
 *     CmpLightWeightCommitSetValueKeyUoW @ 0x14088630C (CmpLightWeightCommitSetValueKeyUoW.c)
 *     CmpCleanupLightWeightUoWData @ 0x1409D92CC (CmpCleanupLightWeightUoWData.c)
 * Callees:
 *     CmpFreeTransientPoolWithTag @ 0x140442030 (CmpFreeTransientPoolWithTag.c)
 *     HvFreeCell @ 0x14087FCBC (HvFreeCell.c)
 */

void __fastcall CmpLightWeightCleanupSetValueKeyUoW(ULONG_PTR a1, _DWORD *a2)
{
  unsigned int v4; // edx

  if ( (*a2)-- == 1 )
  {
    v4 = a2[2];
    if ( v4 != -1 )
      HvFreeCell(a1, v4);
    CmpFreeTransientPoolWithTag(a2, 0x77554D43u);
  }
}
