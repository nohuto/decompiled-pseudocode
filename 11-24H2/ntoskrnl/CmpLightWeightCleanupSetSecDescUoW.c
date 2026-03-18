/*
 * XREFs of CmpLightWeightCleanupSetSecDescUoW @ 0x140A8275C
 * Callers:
 *     CmpCleanupLightWeightUoWData @ 0x1407DE314 (CmpCleanupLightWeightUoWData.c)
 *     CmpLightWeightCommitSetSecDescUoW @ 0x140A82334 (CmpLightWeightCommitSetSecDescUoW.c)
 *     CmpLightWeightPrepareSetSecDescUoW @ 0x140A82480 (CmpLightWeightPrepareSetSecDescUoW.c)
 * Callees:
 *     CmpDereferenceSecurityNode @ 0x14049BFAC (CmpDereferenceSecurityNode.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall CmpLightWeightCleanupSetSecDescUoW(_QWORD *P)
{
  if ( *(_DWORD *)P != -1 )
    CmpDereferenceSecurityNode(P[1], *(_DWORD *)P);
  ExFreePoolWithTag(P, 0x77554D43u);
}
