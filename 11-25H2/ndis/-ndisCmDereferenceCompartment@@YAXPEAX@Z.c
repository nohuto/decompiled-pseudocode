/*
 * XREFs of ?ndisCmDereferenceCompartment@@YAXPEAX@Z @ 0x1400D45C4
 * Callers:
 *     ?NdisSetJobObjectCompartmentId@@YAJPEAU_EJOB@@I@Z @ 0x140152150 (-NdisSetJobObjectCompartmentId@@YAJPEAU_EJOB@@I@Z.c)
 * Callees:
 *     ?ndisIfDereferenceCompartmentForUser@@YAJPEAX@Z @ 0x1400D2368 (-ndisIfDereferenceCompartmentForUser@@YAJPEAX@Z.c)
 */

void __fastcall ndisCmDereferenceCompartment(_DWORD *a1)
{
  ndisIfDereferenceCompartmentForUser(a1);
}
