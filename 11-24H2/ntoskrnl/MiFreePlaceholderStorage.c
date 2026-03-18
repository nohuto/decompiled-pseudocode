/*
 * XREFs of MiFreePlaceholderStorage @ 0x140A94A68
 * Callers:
 *     MiDeleteNewlyCreatedPartialVads @ 0x1407FF044 (MiDeleteNewlyCreatedPartialVads.c)
 *     MiDeletePartialCloneVads @ 0x1408003E4 (MiDeletePartialCloneVads.c)
 *     MiMapViewOfDataSection @ 0x1408E0820 (MiMapViewOfDataSection.c)
 *     MiAllocateChildVads @ 0x1409C2580 (MiAllocateChildVads.c)
 *     MiInitializePartialVad @ 0x140A246FC (MiInitializePartialVad.c)
 * Callees:
 *     MiGetVadWakeList @ 0x14044CC20 (MiGetVadWakeList.c)
 *     MiFreePlaceholderVadEvent @ 0x1409B073C (MiFreePlaceholderVadEvent.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall MiFreePlaceholderStorage(__int64 a1)
{
  unsigned __int64 VadWakeList; // rax
  void *v2; // rbx

  VadWakeList = MiGetVadWakeList(a1, 128);
  v2 = (void *)VadWakeList;
  if ( VadWakeList )
  {
    MiFreePlaceholderVadEvent(VadWakeList);
    ExFreePoolWithTag(v2, 0);
  }
}
