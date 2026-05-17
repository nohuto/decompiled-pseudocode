/*
 * XREFs of RtlWakeAddressAllNoFence @ 0x180148970
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

signed __int64 __fastcall RtlWakeAddressAllNoFence(unsigned __int64 a1)
{
  return RtlpWakeByAddress(a1, 1, 0LL);
}
