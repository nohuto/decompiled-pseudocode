/*
 * XREFs of RtlpFcWnfCallback @ 0x1800D6100
 * Callers:
 *     RtlpWnfWalkUserSubscriptionList @ 0x180021030 (RtlpWnfWalkUserSubscriptionList.c)
 * Callees:
 *     RtlpFcUpdateLocalConfiguration @ 0x1800D6550 (RtlpFcUpdateLocalConfiguration.c)
 *     RtlpFcCallChangeCallbacks @ 0x1800D6B60 (RtlpFcCallChangeCallbacks.c)
 */

__int64 __fastcall RtlpFcWnfCallback(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  LOBYTE(a3) = 1;
  RtlpFcUpdateLocalConfiguration(a4, MEMORY[0x7FFE0720], a3);
  RtlpFcCallChangeCallbacks(a4);
  return 0LL;
}
