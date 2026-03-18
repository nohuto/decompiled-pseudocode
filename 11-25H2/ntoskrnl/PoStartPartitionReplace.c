/*
 * XREFs of PoStartPartitionReplace @ 0x140747448
 * Callers:
 *     PnprQuiesceDevices @ 0x140B445A4 (PnprQuiesceDevices.c)
 * Callees:
 *     PopDispatchStateCallout @ 0x140A2C7C0 (PopDispatchStateCallout.c)
 */

__int64 __fastcall PoStartPartitionReplace(__int64 a1, int a2)
{
  int v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = a2;
  *(_DWORD *)(a1 + 32) = 10;
  PopDispatchStateCallout(a1, &v4);
  *(_DWORD *)(a1 + 32) = 9;
  return PopDispatchStateCallout(a1, 0LL);
}
