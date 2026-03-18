/*
 * XREFs of MiFreePlaceholderStorage @ 0x140A90928
 * Callers:
 *     MiDeleteNewlyCreatedPartialVads @ 0x1407EF1B4 (MiDeleteNewlyCreatedPartialVads.c)
 *     MiDeletePartialCloneVads @ 0x1407F052C (MiDeletePartialCloneVads.c)
 *     MiMapViewOfDataSection @ 0x1408FEC20 (MiMapViewOfDataSection.c)
 *     MiInitializePartialVad @ 0x140902310 (MiInitializePartialVad.c)
 *     MiAllocateChildVads @ 0x140A40978 (MiAllocateChildVads.c)
 * Callees:
 *     MiGetVadWakeList @ 0x1402A3D60 (MiGetVadWakeList.c)
 *     MiFreePlaceholderVadEvent @ 0x140902050 (MiFreePlaceholderVadEvent.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
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
