/*
 * XREFs of PiSwInterfaceFree @ 0x1409F1384
 * Callers:
 *     PiSwIrpInterfaceRegister @ 0x1408AFE78 (PiSwIrpInterfaceRegister.c)
 *     PiSwInterfaceCreate @ 0x1409F0C54 (PiSwInterfaceCreate.c)
 *     PiSwFreeInterfaceList @ 0x1409F0E64 (PiSwFreeInterfaceList.c)
 *     PiSwCompleteCreate @ 0x1409F0EA8 (PiSwCompleteCreate.c)
 * Callees:
 *     PnpFreeDevPropertyArray @ 0x1408D192C (PnpFreeDevPropertyArray.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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
