/*
 * XREFs of PipFreeDeviceObjectList @ 0x14082F11C
 * Callers:
 *     IopFreeRelationList @ 0x14082F144 (IopFreeRelationList.c)
 *     PipGrowDeviceObjectList @ 0x140AB8844 (PipGrowDeviceObjectList.c)
 * Callees:
 *     PiClearDeviceObjectList @ 0x140A868C0 (PiClearDeviceObjectList.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall PipFreeDeviceObjectList(PVOID P)
{
  PiClearDeviceObjectList();
  ExFreePoolWithTag(P, 0);
}
