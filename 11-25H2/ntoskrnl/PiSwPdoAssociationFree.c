/*
 * XREFs of PiSwPdoAssociationFree @ 0x140A97F1C
 * Callers:
 *     PiSwRemovePdoAssociation @ 0x1409A3560 (PiSwRemovePdoAssociation.c)
 *     PiSwFreePdoAssociationsList @ 0x1409A3F9C (PiSwFreePdoAssociationsList.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall PiSwPdoAssociationFree(PVOID *P)
{
  ObfDereferenceObject(P[4]);
  ObfDereferenceObject(P[5]);
  ExFreePoolWithTag(P, 0x57706E50u);
}
