/*
 * XREFs of MiFreeRotateView @ 0x1407DDB9C
 * Callers:
 *     MiDeleteNewlyCreatedPartialVads @ 0x1407EF1B4 (MiDeleteNewlyCreatedPartialVads.c)
 *     MiInitializePartialVad @ 0x140902310 (MiInitializePartialVad.c)
 * Callees:
 *     MiGetVadWakeList @ 0x1402A3D60 (MiGetVadWakeList.c)
 *     MiFreeRotateVadEvent @ 0x140A7A77C (MiFreeRotateVadEvent.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
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
