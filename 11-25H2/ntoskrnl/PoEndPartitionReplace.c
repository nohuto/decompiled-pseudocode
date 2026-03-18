/*
 * XREFs of PoEndPartitionReplace @ 0x140747324
 * Callers:
 *     PnprWakeDevices @ 0x140B451D4 (PnprWakeDevices.c)
 * Callees:
 *     PopDispatchStateCallout @ 0x140A2C7C0 (PopDispatchStateCallout.c)
 */

__int64 __fastcall PoEndPartitionReplace(__int64 a1, int a2)
{
  int v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2;
  *(_DWORD *)(a1 + 32) = 11;
  return PopDispatchStateCallout(a1, &v3);
}
