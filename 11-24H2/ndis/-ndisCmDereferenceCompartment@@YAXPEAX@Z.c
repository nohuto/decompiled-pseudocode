/*
 * XREFs of ?ndisCmDereferenceCompartment@@YAXPEAX@Z @ 0x1400CCF84
 * Callers:
 *     ?NdisSetJobObjectCompartmentId@@YAJPEAU_EJOB@@I@Z @ 0x140147490 (-NdisSetJobObjectCompartmentId@@YAJPEAU_EJOB@@I@Z.c)
 * Callees:
 *     ?ndisIfDereferenceCompartmentForUser@@YAJPEAX@Z @ 0x1400CAF20 (-ndisIfDereferenceCompartmentForUser@@YAJPEAX@Z.c)
 */

void __fastcall ndisCmDereferenceCompartment(_DWORD *a1)
{
  ndisIfDereferenceCompartmentForUser(a1);
}
