/*
 * XREFs of PoEndPartitionReplace @ 0x140751734
 * Callers:
 *     PnprWakeDevices @ 0x140B57224 (PnprWakeDevices.c)
 * Callees:
 *     PopDispatchStateCallout @ 0x1409A03B4 (PopDispatchStateCallout.c)
 */

__int64 __fastcall PoEndPartitionReplace(__int64 a1, int a2)
{
  int v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2;
  *(_DWORD *)(a1 + 32) = 11;
  return PopDispatchStateCallout(a1, &v3);
}
