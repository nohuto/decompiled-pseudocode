/*
 * XREFs of PoDeleteThermalRequest @ 0x14074BEB0
 * Callers:
 *     <none>
 * Callees:
 *     PoDestroyReasonContext @ 0x140331BA4 (PoDestroyReasonContext.c)
 *     PopDeactiveThermalRequest @ 0x140AB88D4 (PopDeactiveThermalRequest.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall PoDeleteThermalRequest(_QWORD **P)
{
  PopDeactiveThermalRequest();
  PoDestroyReasonContext(P[3]);
  ExFreePoolWithTag(P, 0x6C6F4350u);
}
