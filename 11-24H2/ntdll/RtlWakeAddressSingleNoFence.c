/*
 * XREFs of RtlWakeAddressSingleNoFence @ 0x180146D30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall RtlWakeAddressSingleNoFence(unsigned __int64 a1)
{
  return RtlpWakeByAddress(a1, 0, 0LL);
}
