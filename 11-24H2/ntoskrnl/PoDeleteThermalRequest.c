/*
 * XREFs of PoDeleteThermalRequest @ 0x14074A1E0
 * Callers:
 *     <none>
 * Callees:
 *     PoDestroyReasonContext @ 0x1402BC528 (PoDestroyReasonContext.c)
 *     PopDeactiveThermalRequest @ 0x140AB2D98 (PopDeactiveThermalRequest.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall PoDeleteThermalRequest(_QWORD **P)
{
  PopDeactiveThermalRequest();
  PoDestroyReasonContext(P[3]);
  ExFreePoolWithTag(P, 0x6C6F4350u);
}
