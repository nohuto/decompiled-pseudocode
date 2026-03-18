/*
 * XREFs of PoDeleteThermalRequest @ 0x14073FDE0
 * Callers:
 *     <none>
 * Callees:
 *     PoDestroyReasonContext @ 0x1404E90C0 (PoDestroyReasonContext.c)
 *     PopDeactiveThermalRequest @ 0x140AB450C (PopDeactiveThermalRequest.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall PoDeleteThermalRequest(_QWORD **P)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9

  PopDeactiveThermalRequest();
  PoDestroyReasonContext(P[3], v2, v3, v4);
  ExFreePoolWithTag(P, 0x6C6F4350u);
}
