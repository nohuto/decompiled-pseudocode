/*
 * XREFs of ExDeleteDpcEvent @ 0x14064B790
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall ExDeleteDpcEvent(PVOID *P)
{
  ObfDereferenceObjectWithTag(P[7], 0x65447845u);
  ExFreePoolWithTag(P, 0);
}
