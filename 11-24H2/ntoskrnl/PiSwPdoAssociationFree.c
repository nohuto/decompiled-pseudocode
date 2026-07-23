/*
 * XREFs of PiSwPdoAssociationFree @ 0x140A98FBC
 * Callers:
 *     PiSwFreePdoAssociationsList @ 0x1409F0A88 (PiSwFreePdoAssociationsList.c)
 *     PiSwRemovePdoAssociation @ 0x1409F3EA0 (PiSwRemovePdoAssociation.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall PiSwPdoAssociationFree(PVOID *P)
{
  ObfDereferenceObject(P[4]);
  ObfDereferenceObject(P[5]);
  ExFreePoolWithTag(P, 0x57706E50u);
}
