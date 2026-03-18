/*
 * XREFs of PiSwInterfaceFree @ 0x1409A3F4C
 * Callers:
 *     PiSwIrpInterfaceRegister @ 0x14095D5E8 (PiSwIrpInterfaceRegister.c)
 *     PiSwInterfaceCreate @ 0x14095E95C (PiSwInterfaceCreate.c)
 *     PiSwFreeInterfaceList @ 0x1409A3A3C (PiSwFreeInterfaceList.c)
 *     PiSwCompleteCreate @ 0x1409A3A80 (PiSwCompleteCreate.c)
 * Callees:
 *     PnpFreeDevPropertyArray @ 0x1408392C0 (PnpFreeDevPropertyArray.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall PiSwInterfaceFree(PVOID P)
{
  void *v2; // rcx
  PVOID *v3; // rdx

  v2 = (void *)*((_QWORD *)P + 2);
  if ( v2 )
    ExFreePoolWithTag(v2, 0x57706E50u);
  v3 = (PVOID *)*((_QWORD *)P + 3);
  if ( v3 )
    PnpFreeDevPropertyArray(*((_DWORD *)P + 8), v3, 0x57706E50u);
  ExFreePoolWithTag(P, 0x57706E50u);
}
