/*
 * XREFs of PipFreeDeviceObjectList @ 0x140A0CAD8
 * Callers:
 *     PipGrowDeviceObjectList @ 0x140A0C3C8 (PipGrowDeviceObjectList.c)
 *     IopFreeRelationList @ 0x140A0CB00 (IopFreeRelationList.c)
 * Callees:
 *     PiClearDeviceObjectList @ 0x140A0C464 (PiClearDeviceObjectList.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall PipFreeDeviceObjectList(_DWORD *P)
{
  PiClearDeviceObjectList(P);
  ExFreePoolWithTag(P, 0);
}
