/*
 * XREFs of PipFreeDeviceObjectList @ 0x1409BAEDC
 * Callers:
 *     IopFreeRelationList @ 0x1409BAF04 (IopFreeRelationList.c)
 *     PipGrowDeviceObjectList @ 0x140A54CC8 (PipGrowDeviceObjectList.c)
 * Callees:
 *     PiClearDeviceObjectList @ 0x140A877FC (PiClearDeviceObjectList.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall PipFreeDeviceObjectList(PVOID P)
{
  PiClearDeviceObjectList();
  ExFreePoolWithTag(P, 0);
}
