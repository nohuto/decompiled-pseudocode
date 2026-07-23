/*
 * XREFs of CmpLightWeightCleanupSetSecDescUoW @ 0x140A7D300
 * Callers:
 *     CmpCleanupLightWeightUoWData @ 0x1407DE864 (CmpCleanupLightWeightUoWData.c)
 *     CmpLightWeightCommitSetSecDescUoW @ 0x140A7CED8 (CmpLightWeightCommitSetSecDescUoW.c)
 *     CmpLightWeightPrepareSetSecDescUoW @ 0x140A7D024 (CmpLightWeightPrepareSetSecDescUoW.c)
 * Callees:
 *     CmpDereferenceSecurityNode @ 0x140496BD8 (CmpDereferenceSecurityNode.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall CmpLightWeightCleanupSetSecDescUoW(_QWORD *P)
{
  if ( *(_DWORD *)P != -1 )
    CmpDereferenceSecurityNode(P[1], *(_DWORD *)P);
  ExFreePoolWithTag(P, 0x77554D43u);
}
