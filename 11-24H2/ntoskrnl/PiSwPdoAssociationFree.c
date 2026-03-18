/*
 * XREFs of PiSwPdoAssociationFree @ 0x140A9DA4C
 * Callers:
 *     PiSwFreePdoAssociationsList @ 0x1409F8118 (PiSwFreePdoAssociationsList.c)
 *     PiSwRemovePdoAssociation @ 0x1409FB530 (PiSwRemovePdoAssociation.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall PiSwPdoAssociationFree(PVOID *P)
{
  ObfDereferenceObject(P[4]);
  ObfDereferenceObject(P[5]);
  ExFreePoolWithTag(P, 0x57706E50u);
}
