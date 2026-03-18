/*
 * XREFs of MiFreeRotateView @ 0x1407EDA3C
 * Callers:
 *     MiDeleteNewlyCreatedPartialVads @ 0x1407FF044 (MiDeleteNewlyCreatedPartialVads.c)
 *     MiInitializePartialVad @ 0x140A246FC (MiInitializePartialVad.c)
 * Callees:
 *     MiGetVadWakeList @ 0x14044CC20 (MiGetVadWakeList.c)
 *     MiFreeRotateVadEvent @ 0x140A7DA28 (MiFreeRotateVadEvent.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall MiFreeRotateView(__int64 a1)
{
  unsigned __int64 VadWakeList; // rax
  void *v2; // rbx

  VadWakeList = MiGetVadWakeList(a1, 8);
  v2 = (void *)VadWakeList;
  if ( VadWakeList )
  {
    MiFreeRotateVadEvent(VadWakeList);
    ExFreePoolWithTag(v2, 0);
  }
}
