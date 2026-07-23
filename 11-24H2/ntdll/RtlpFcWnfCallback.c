/*
 * XREFs of RtlpFcWnfCallback @ 0x1800D1470
 * Callers:
 *     RtlpWnfWalkUserSubscriptionList @ 0x18004DA30 (RtlpWnfWalkUserSubscriptionList.c)
 * Callees:
 *     RtlpFcUpdateLocalConfiguration @ 0x1800D18C0 (RtlpFcUpdateLocalConfiguration.c)
 *     RtlpFcCallChangeCallbacks @ 0x1800D1ED0 (RtlpFcCallChangeCallbacks.c)
 */

__int64 __fastcall RtlpFcWnfCallback(__int64 a1, __int64 a2, __int64 a3, _RTL_SRWLOCK *a4)
{
  RtlpFcUpdateLocalConfiguration(a4);
  RtlpFcCallChangeCallbacks(a4);
  return 0LL;
}
