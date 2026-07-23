/*
 * XREFs of RtlpFcWnfCallback @ 0x1800A0220
 * Callers:
 *     RtlpWnfWalkUserSubscriptionList @ 0x180042A00 (RtlpWnfWalkUserSubscriptionList.c)
 * Callees:
 *     RtlpFcUpdateLocalConfiguration @ 0x18009F820 (RtlpFcUpdateLocalConfiguration.c)
 *     RtlpFcCallChangeCallbacks @ 0x1800A0254 (RtlpFcCallChangeCallbacks.c)
 */

__int64 __fastcall RtlpFcWnfCallback(__int64 a1, __int64 a2, __int64 a3, _RTL_SRWLOCK *a4)
{
  RtlpFcUpdateLocalConfiguration(a4, MEMORY[0x7FFE0720], 1);
  RtlpFcCallChangeCallbacks(a4);
  return 0LL;
}
