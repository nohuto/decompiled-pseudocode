/*
 * XREFs of MiFreeRotateView @ 0x1407EE00C
 * Callers:
 *     MiDeleteNewlyCreatedPartialVads @ 0x1407FF7B4 (MiDeleteNewlyCreatedPartialVads.c)
 *     MiInitializePartialVad @ 0x14091A104 (MiInitializePartialVad.c)
 * Callees:
 *     MiGetVadWakeList @ 0x140443B20 (MiGetVadWakeList.c)
 *     MiFreeRotateVadEvent @ 0x140A77D28 (MiFreeRotateVadEvent.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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
