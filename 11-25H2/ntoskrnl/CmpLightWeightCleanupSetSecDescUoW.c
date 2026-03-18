/*
 * XREFs of CmpLightWeightCleanupSetSecDescUoW @ 0x1409DA09C
 * Callers:
 *     CmpLightWeightCommitSetSecDescUoW @ 0x1409D8A60 (CmpLightWeightCommitSetSecDescUoW.c)
 *     CmpCleanupLightWeightUoWData @ 0x1409D92CC (CmpCleanupLightWeightUoWData.c)
 *     CmpLightWeightPrepareSetSecDescUoW @ 0x1409D9BA8 (CmpLightWeightPrepareSetSecDescUoW.c)
 * Callees:
 *     CmpDereferenceSecurityNode @ 0x1404A3C08 (CmpDereferenceSecurityNode.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall CmpLightWeightCleanupSetSecDescUoW(_QWORD *P)
{
  if ( *(_DWORD *)P != -1 )
    CmpDereferenceSecurityNode(P[1], *(_DWORD *)P);
  ExFreePoolWithTag(P, 0x77554D43u);
}
