/*
 * XREFs of MiFreeVadEventBitmap @ 0x140ABE6F4
 * Callers:
 *     MiDeletePartialCloneVads @ 0x1407F052C (MiDeletePartialCloneVads.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x1408F9D30 (MiAllocateNewSubAllocatedRegion.c)
 *     MiAllocateChildVads @ 0x140A40978 (MiAllocateChildVads.c)
 * Callees:
 *     MiGetVadWakeList @ 0x1402A3D60 (MiGetVadWakeList.c)
 *     MiFreeVadEventBitmapCharges @ 0x140A67D64 (MiFreeVadEventBitmapCharges.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall MiFreeVadEventBitmap(ULONG_PTR a1, __int64 a2, int a3)
{
  unsigned __int64 VadWakeList; // rax
  void *v5; // rbx

  VadWakeList = MiGetVadWakeList(a2, a3);
  v5 = (void *)VadWakeList;
  if ( VadWakeList )
  {
    MiFreeVadEventBitmapCharges(a1, VadWakeList);
    ExFreePoolWithTag(v5, 0);
  }
}
