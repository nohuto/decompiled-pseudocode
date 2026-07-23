/*
 * XREFs of MiFreeVadEventBitmap @ 0x140ABD7CC
 * Callers:
 *     MiDeletePartialCloneVads @ 0x140800B24 (MiDeletePartialCloneVads.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x1408DD544 (MiAllocateNewSubAllocatedRegion.c)
 *     MiAllocateChildVads @ 0x140A47718 (MiAllocateChildVads.c)
 * Callees:
 *     MiGetVadWakeList @ 0x140443B20 (MiGetVadWakeList.c)
 *     MiFreeVadEventBitmapCharges @ 0x14099A3EC (MiFreeVadEventBitmapCharges.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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
